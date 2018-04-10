
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_166.hpp"
#include "Cisco_IOS_XE_native_167.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::MapServer()
    :
    rloc(std::make_shared<Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc>())
	,site_registration(std::make_shared<Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::SiteRegistration>())
{
    rloc->parent = this;
    site_registration->parent = this;

    yang_name = "map-server"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::has_data() const
{
    return (rloc !=  nullptr && rloc->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data());
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (rloc !=  nullptr && rloc->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation());
}

std::string Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rloc")
    {
        if(rloc == nullptr)
        {
            rloc = std::make_shared<Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc>();
        }
        return rloc;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::SiteRegistration>();
        }
        return site_registration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rloc != nullptr)
    {
        children["rloc"] = rloc;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    return children;
}

void Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rloc" || name == "site-registration")
        return true;
    return false;
}

Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Rloc()
    :
    members(std::make_shared<Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members>())
{
    members->parent = this;

    yang_name = "rloc"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::~Rloc()
{
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::has_data() const
{
    return (members !=  nullptr && members->has_data());
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::has_operation() const
{
    return is_set(yfilter)
	|| (members !=  nullptr && members->has_operation());
}

std::string Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rloc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members>();
        }
        return members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(members != nullptr)
    {
        children["members"] = members;
    }

    return children;
}

void Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "members")
        return true;
    return false;
}

Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::Members()
    :
    distribute{YType::empty, "distribute"}
    	,
    modify_discovered(std::make_shared<Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered>())
{
    modify_discovered->parent = this;

    yang_name = "members"; yang_parent_name = "rloc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::~Members()
{
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::has_data() const
{
    return distribute.is_set
	|| (modify_discovered !=  nullptr && modify_discovered->has_data());
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distribute.yfilter)
	|| (modify_discovered !=  nullptr && modify_discovered->has_operation());
}

std::string Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distribute.is_set || is_set(distribute.yfilter)) leaf_name_data.push_back(distribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "modify-discovered")
    {
        if(modify_discovered == nullptr)
        {
            modify_discovered = std::make_shared<Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered>();
        }
        return modify_discovered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(modify_discovered != nullptr)
    {
        children["modify-discovered"] = modify_discovered;
    }

    return children;
}

void Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distribute")
    {
        distribute = value;
        distribute.value_namespace = name_space;
        distribute.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distribute")
    {
        distribute.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modify-discovered" || name == "distribute")
        return true;
    return false;
}

Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::ModifyDiscovered()
    :
    operator_{YType::enumeration, "operator"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "modify-discovered"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::~ModifyDiscovered()
{
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::has_data() const
{
    return operator_.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modify-discovered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Default::EidTable::InstanceList::OtherXtrProbe::OtherXtrProbe()
    :
    period{YType::uint16, "period"}
{

    yang_name = "other-xtr-probe"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::EidTable::InstanceList::OtherXtrProbe::~OtherXtrProbe()
{
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::OtherXtrProbe::has_data() const
{
    return period.is_set;
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::OtherXtrProbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Router::Lisp::Default::EidTable::InstanceList::OtherXtrProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "other-xtr-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::EidTable::InstanceList::OtherXtrProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::EidTable::InstanceList::OtherXtrProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::EidTable::InstanceList::OtherXtrProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::EidTable::InstanceList::OtherXtrProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::EidTable::InstanceList::OtherXtrProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::OtherXtrProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period")
        return true;
    return false;
}

Native::Router::Lisp::Default::EidTable::InstanceList::RemoteRlocProbe::RemoteRlocProbe()
    :
    on_membership_change{YType::empty, "on-membership-change"},
    on_route_change{YType::empty, "on-route-change"}
{

    yang_name = "remote-rloc-probe"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::EidTable::InstanceList::RemoteRlocProbe::~RemoteRlocProbe()
{
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::RemoteRlocProbe::has_data() const
{
    return on_membership_change.is_set
	|| on_route_change.is_set;
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::RemoteRlocProbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on_membership_change.yfilter)
	|| ydk::is_set(on_route_change.yfilter);
}

std::string Native::Router::Lisp::Default::EidTable::InstanceList::RemoteRlocProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-rloc-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::EidTable::InstanceList::RemoteRlocProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on_membership_change.is_set || is_set(on_membership_change.yfilter)) leaf_name_data.push_back(on_membership_change.get_name_leafdata());
    if (on_route_change.is_set || is_set(on_route_change.yfilter)) leaf_name_data.push_back(on_route_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::EidTable::InstanceList::RemoteRlocProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::EidTable::InstanceList::RemoteRlocProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::EidTable::InstanceList::RemoteRlocProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on-membership-change")
    {
        on_membership_change = value;
        on_membership_change.value_namespace = name_space;
        on_membership_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-route-change")
    {
        on_route_change = value;
        on_route_change.value_namespace = name_space;
        on_route_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::EidTable::InstanceList::RemoteRlocProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on-membership-change")
    {
        on_membership_change.yfilter = yfilter;
    }
    if(value_path == "on-route-change")
    {
        on_route_change.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::RemoteRlocProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-membership-change" || name == "on-route-change")
        return true;
    return false;
}

Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::MapCache()
    :
    eid_prefix{YType::str, "eid-prefix"},
    drop{YType::empty, "drop"},
    map_request{YType::empty, "map-request"},
    native_forward{YType::empty, "native-forward"}
    	,
    etr_interface_ip(std::make_shared<Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::EtrInterfaceIp>())
{
    etr_interface_ip->parent = this;

    yang_name = "map-cache"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::has_data() const
{
    return eid_prefix.is_set
	|| drop.is_set
	|| map_request.is_set
	|| native_forward.is_set
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_data());
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(map_request.yfilter)
	|| ydk::is_set(native_forward.yfilter)
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_operation());
}

std::string Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache" <<"[eid-prefix='" <<eid_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (map_request.is_set || is_set(map_request.yfilter)) leaf_name_data.push_back(map_request.get_name_leafdata());
    if (native_forward.is_set || is_set(native_forward.yfilter)) leaf_name_data.push_back(native_forward.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etr-interface-ip")
    {
        if(etr_interface_ip == nullptr)
        {
            etr_interface_ip = std::make_shared<Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::EtrInterfaceIp>();
        }
        return etr_interface_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(etr_interface_ip != nullptr)
    {
        children["etr-interface-ip"] = etr_interface_ip;
    }

    return children;
}

void Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
        eid_prefix.value_namespace = name_space;
        eid_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-request")
    {
        map_request = value;
        map_request.value_namespace = name_space;
        map_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native-forward")
    {
        native_forward = value;
        native_forward.value_namespace = name_space;
        native_forward.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "map-request")
    {
        map_request.yfilter = yfilter;
    }
    if(value_path == "native-forward")
    {
        native_forward.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip" || name == "eid-prefix" || name == "drop" || name == "map-request" || name == "native-forward")
        return true;
    return false;
}

Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::EtrInterfaceIp::EtrInterfaceIp()
    :
    etr_interface_ip_address{YType::str, "etr-interface-ip-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{

    yang_name = "etr-interface-ip"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::EtrInterfaceIp::~EtrInterfaceIp()
{
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::EtrInterfaceIp::has_data() const
{
    return etr_interface_ip_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::EtrInterfaceIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr_interface_ip_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::EtrInterfaceIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-interface-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::EtrInterfaceIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr_interface_ip_address.is_set || is_set(etr_interface_ip_address.yfilter)) leaf_name_data.push_back(etr_interface_ip_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::EtrInterfaceIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::EtrInterfaceIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::EtrInterfaceIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr-interface-ip-address")
    {
        etr_interface_ip_address = value;
        etr_interface_ip_address.value_namespace = name_space;
        etr_interface_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::EtrInterfaceIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr-interface-ip-address")
    {
        etr_interface_ip_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::EidTable::InstanceList::MapCache::EtrInterfaceIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip-address" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::Default::Security::Security()
    :
    strong{YType::empty, "strong"}
{

    yang_name = "security"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Default::Security::~Security()
{
}

bool Native::Router::Lisp::Default::Security::has_data() const
{
    return strong.is_set;
}

bool Native::Router::Lisp::Default::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(strong.yfilter);
}

std::string Native::Router::Lisp::Default::Security::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (strong.is_set || is_set(strong.yfilter)) leaf_name_data.push_back(strong.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "strong")
    {
        strong = value;
        strong.value_namespace = name_space;
        strong.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "strong")
    {
        strong.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "strong")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::Site()
    :
    sname{YType::str, "sname"},
    description{YType::str, "description"},
    site_id{YType::uint32, "site-id"}
    	,
    default_(std::make_shared<Native::Router::Lisp::Default::Site::Default_>())
	,authentication_key(std::make_shared<Native::Router::Lisp::Default::Site::AuthenticationKey>())
	,allowed_locator(std::make_shared<Native::Router::Lisp::Default::Site::AllowedLocator>())
	,eid_prefix(std::make_shared<Native::Router::Lisp::Default::Site::EidPrefix>())
	,eid_record(std::make_shared<Native::Router::Lisp::Default::Site::EidRecord>())
{
    default_->parent = this;
    authentication_key->parent = this;
    allowed_locator->parent = this;
    eid_prefix->parent = this;
    eid_record->parent = this;

    yang_name = "site"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Default::Site::~Site()
{
}

bool Native::Router::Lisp::Default::Site::has_data() const
{
    return sname.is_set
	|| description.is_set
	|| site_id.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (authentication_key !=  nullptr && authentication_key->has_data())
	|| (allowed_locator !=  nullptr && allowed_locator->has_data())
	|| (eid_prefix !=  nullptr && eid_prefix->has_data())
	|| (eid_record !=  nullptr && eid_record->has_data());
}

bool Native::Router::Lisp::Default::Site::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sname.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(site_id.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (authentication_key !=  nullptr && authentication_key->has_operation())
	|| (allowed_locator !=  nullptr && allowed_locator->has_operation())
	|| (eid_prefix !=  nullptr && eid_prefix->has_operation())
	|| (eid_record !=  nullptr && eid_record->has_operation());
}

std::string Native::Router::Lisp::Default::Site::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site" <<"[sname='" <<sname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sname.is_set || is_set(sname.yfilter)) leaf_name_data.push_back(sname.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (site_id.is_set || is_set(site_id.yfilter)) leaf_name_data.push_back(site_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Lisp::Default::Site::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::Lisp::Default::Site::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "allowed-locator")
    {
        if(allowed_locator == nullptr)
        {
            allowed_locator = std::make_shared<Native::Router::Lisp::Default::Site::AllowedLocator>();
        }
        return allowed_locator;
    }

    if(child_yang_name == "eid-prefix")
    {
        if(eid_prefix == nullptr)
        {
            eid_prefix = std::make_shared<Native::Router::Lisp::Default::Site::EidPrefix>();
        }
        return eid_prefix;
    }

    if(child_yang_name == "eid-record")
    {
        if(eid_record == nullptr)
        {
            eid_record = std::make_shared<Native::Router::Lisp::Default::Site::EidRecord>();
        }
        return eid_record;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    if(allowed_locator != nullptr)
    {
        children["allowed-locator"] = allowed_locator;
    }

    if(eid_prefix != nullptr)
    {
        children["eid-prefix"] = eid_prefix;
    }

    if(eid_record != nullptr)
    {
        children["eid-record"] = eid_record;
    }

    return children;
}

void Native::Router::Lisp::Default::Site::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sname")
    {
        sname = value;
        sname.value_namespace = name_space;
        sname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-id")
    {
        site_id = value;
        site_id.value_namespace = name_space;
        site_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sname")
    {
        sname.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "site-id")
    {
        site_id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "authentication-key" || name == "allowed-locator" || name == "eid-prefix" || name == "eid-record" || name == "sname" || name == "description" || name == "site-id")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::Default_::Default_()
    :
    description{YType::str, "description"},
    site_id{YType::uint32, "site-id"}
    	,
    authentication_key(std::make_shared<Native::Router::Lisp::Default::Site::Default_::AuthenticationKey>())
	,allowed_locator(std::make_shared<Native::Router::Lisp::Default::Site::Default_::AllowedLocator>())
	,eid_prefix(std::make_shared<Native::Router::Lisp::Default::Site::Default_::EidPrefix>())
	,eid_record(std::make_shared<Native::Router::Lisp::Default::Site::Default_::EidRecord>())
{
    authentication_key->parent = this;
    allowed_locator->parent = this;
    eid_prefix->parent = this;
    eid_record->parent = this;

    yang_name = "default"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::Default_::~Default_()
{
}

bool Native::Router::Lisp::Default::Site::Default_::has_data() const
{
    return description.is_set
	|| site_id.is_set
	|| (authentication_key !=  nullptr && authentication_key->has_data())
	|| (allowed_locator !=  nullptr && allowed_locator->has_data())
	|| (eid_prefix !=  nullptr && eid_prefix->has_data())
	|| (eid_record !=  nullptr && eid_record->has_data());
}

bool Native::Router::Lisp::Default::Site::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(site_id.yfilter)
	|| (authentication_key !=  nullptr && authentication_key->has_operation())
	|| (allowed_locator !=  nullptr && allowed_locator->has_operation())
	|| (eid_prefix !=  nullptr && eid_prefix->has_operation())
	|| (eid_record !=  nullptr && eid_record->has_operation());
}

std::string Native::Router::Lisp::Default::Site::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (site_id.is_set || is_set(site_id.yfilter)) leaf_name_data.push_back(site_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::Lisp::Default::Site::Default_::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "allowed-locator")
    {
        if(allowed_locator == nullptr)
        {
            allowed_locator = std::make_shared<Native::Router::Lisp::Default::Site::Default_::AllowedLocator>();
        }
        return allowed_locator;
    }

    if(child_yang_name == "eid-prefix")
    {
        if(eid_prefix == nullptr)
        {
            eid_prefix = std::make_shared<Native::Router::Lisp::Default::Site::Default_::EidPrefix>();
        }
        return eid_prefix;
    }

    if(child_yang_name == "eid-record")
    {
        if(eid_record == nullptr)
        {
            eid_record = std::make_shared<Native::Router::Lisp::Default::Site::Default_::EidRecord>();
        }
        return eid_record;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    if(allowed_locator != nullptr)
    {
        children["allowed-locator"] = allowed_locator;
    }

    if(eid_prefix != nullptr)
    {
        children["eid-prefix"] = eid_prefix;
    }

    if(eid_record != nullptr)
    {
        children["eid-record"] = eid_record;
    }

    return children;
}

void Native::Router::Lisp::Default::Site::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-id")
    {
        site_id = value;
        site_id.value_namespace = name_space;
        site_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "site-id")
    {
        site_id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-key" || name == "allowed-locator" || name == "eid-prefix" || name == "eid-record" || name == "description" || name == "site-id")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::Default_::AuthenticationKey::AuthenticationKey()
    :
    unc_pwd{YType::str, "unc-pwd"},
    key_0{YType::str, "key-0"},
    key_6{YType::str, "key-6"},
    key_7{YType::str, "key-7"}
{

    yang_name = "authentication-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::Default_::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::Lisp::Default::Site::Default_::AuthenticationKey::has_data() const
{
    return unc_pwd.is_set
	|| key_0.is_set
	|| key_6.is_set
	|| key_7.is_set;
}

bool Native::Router::Lisp::Default::Site::Default_::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(key_0.yfilter)
	|| ydk::is_set(key_6.yfilter)
	|| ydk::is_set(key_7.yfilter);
}

std::string Native::Router::Lisp::Default::Site::Default_::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::Default_::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (key_0.is_set || is_set(key_0.yfilter)) leaf_name_data.push_back(key_0.get_name_leafdata());
    if (key_6.is_set || is_set(key_6.yfilter)) leaf_name_data.push_back(key_6.get_name_leafdata());
    if (key_7.is_set || is_set(key_7.yfilter)) leaf_name_data.push_back(key_7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::Default_::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::Default_::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::Site::Default_::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-0")
    {
        key_0 = value;
        key_0.value_namespace = name_space;
        key_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-6")
    {
        key_6 = value;
        key_6.value_namespace = name_space;
        key_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-7")
    {
        key_7 = value;
        key_7.value_namespace = name_space;
        key_7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::Default_::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "key-0")
    {
        key_0.yfilter = yfilter;
    }
    if(value_path == "key-6")
    {
        key_6.yfilter = yfilter;
    }
    if(value_path == "key-7")
    {
        key_7.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::Default_::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::Default_::AllowedLocator::AllowedLocator()
    :
    ls_ipv4{YType::str, "ls-ipv4"},
    ls_ipv6{YType::str, "ls-ipv6"}
    	,
    list(std::make_shared<Native::Router::Lisp::Default::Site::Default_::AllowedLocator::List>())
{
    list->parent = this;

    yang_name = "allowed-locator"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::Default_::AllowedLocator::~AllowedLocator()
{
}

bool Native::Router::Lisp::Default::Site::Default_::AllowedLocator::has_data() const
{
    return ls_ipv4.is_set
	|| ls_ipv6.is_set
	|| (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Default::Site::Default_::AllowedLocator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ls_ipv4.yfilter)
	|| ydk::is_set(ls_ipv6.yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Default::Site::Default_::AllowedLocator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowed-locator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::Default_::AllowedLocator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ls_ipv4.is_set || is_set(ls_ipv4.yfilter)) leaf_name_data.push_back(ls_ipv4.get_name_leafdata());
    if (ls_ipv6.is_set || is_set(ls_ipv6.yfilter)) leaf_name_data.push_back(ls_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::Default_::AllowedLocator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Default::Site::Default_::AllowedLocator::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::Default_::AllowedLocator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Router::Lisp::Default::Site::Default_::AllowedLocator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ls-ipv4")
    {
        ls_ipv4 = value;
        ls_ipv4.value_namespace = name_space;
        ls_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ipv6")
    {
        ls_ipv6 = value;
        ls_ipv6.value_namespace = name_space;
        ls_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::Default_::AllowedLocator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ls-ipv4")
    {
        ls_ipv4.yfilter = yfilter;
    }
    if(value_path == "ls-ipv6")
    {
        ls_ipv6.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::Default_::AllowedLocator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "ls-ipv4" || name == "ls-ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::Default_::AllowedLocator::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "allowed-locator"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::Default_::AllowedLocator::List::~List()
{
}

bool Native::Router::Lisp::Default::Site::Default_::AllowedLocator::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Default::Site::Default_::AllowedLocator::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Lisp::Default::Site::Default_::AllowedLocator::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::Default_::AllowedLocator::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::Default_::AllowedLocator::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::Default_::AllowedLocator::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::Site::Default_::AllowedLocator::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::Default_::AllowedLocator::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::Default_::AllowedLocator::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::Default_::EidPrefix::EidPrefix()
    :
    any_mac{YType::empty, "any-mac"}
{

    yang_name = "eid-prefix"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::Default_::EidPrefix::~EidPrefix()
{
}

bool Native::Router::Lisp::Default::Site::Default_::EidPrefix::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    return any_mac.is_set;
}

bool Native::Router::Lisp::Default::Site::Default_::EidPrefix::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(any_mac.yfilter);
}

std::string Native::Router::Lisp::Default::Site::Default_::EidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::Default_::EidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::Default_::EidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto c = std::make_shared<Native::Router::Lisp::Default::Site::Default_::EidPrefix::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    if(child_yang_name == "instance-id")
    {
        auto c = std::make_shared<Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId>();
        c->parent = this;
        instance_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::Default_::EidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefixes)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : instance_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Lisp::Default::Site::Default_::EidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-mac")
    {
        any_mac = value;
        any_mac.value_namespace = name_space;
        any_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::Default_::EidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-mac")
    {
        any_mac.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::Default_::EidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "instance-id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::Default_::EidPrefix::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "eid-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::Default_::EidPrefix::Prefixes::~Prefixes()
{
}

bool Native::Router::Lisp::Default::Site::Default_::EidPrefix::Prefixes::has_data() const
{
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::Lisp::Default::Site::Default_::EidPrefix::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::Lisp::Default::Site::Default_::EidPrefix::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::Default_::EidPrefix::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::Default_::EidPrefix::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::Default_::EidPrefix::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::Site::Default_::EidPrefix::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-more-specifics")
    {
        accept_more_specifics = value;
        accept_more_specifics.value_namespace = name_space;
        accept_more_specifics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::Default_::EidPrefix::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "accept-more-specifics")
    {
        accept_more_specifics.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::Default_::EidPrefix::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::InstanceId()
    :
    id{YType::uint32, "id"},
    any_mac{YType::empty, "any-mac"}
{

    yang_name = "instance-id"; yang_parent_name = "eid-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::~InstanceId()
{
}

bool Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return id.is_set
	|| any_mac.is_set;
}

bool Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(any_mac.yfilter);
}

std::string Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto c = std::make_shared<Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefixes)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any-mac")
    {
        any_mac = value;
        any_mac.value_namespace = name_space;
        any_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "any-mac")
    {
        any_mac.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "instance-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::Prefixes::~Prefixes()
{
}

bool Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::Prefixes::has_data() const
{
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-more-specifics")
    {
        accept_more_specifics = value;
        accept_more_specifics.value_namespace = name_space;
        accept_more_specifics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "accept-more-specifics")
    {
        accept_more_specifics.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::Default_::EidPrefix::InstanceId::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::Default_::EidRecord::EidRecord()
    :
    any_mac{YType::empty, "any-mac"}
{

    yang_name = "eid-record"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::Default_::EidRecord::~EidRecord()
{
}

bool Native::Router::Lisp::Default::Site::Default_::EidRecord::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    return any_mac.is_set;
}

bool Native::Router::Lisp::Default::Site::Default_::EidRecord::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(any_mac.yfilter);
}

std::string Native::Router::Lisp::Default::Site::Default_::EidRecord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-record";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::Default_::EidRecord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::Default_::EidRecord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto c = std::make_shared<Native::Router::Lisp::Default::Site::Default_::EidRecord::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    if(child_yang_name == "instance-id")
    {
        auto c = std::make_shared<Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId>();
        c->parent = this;
        instance_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::Default_::EidRecord::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefixes)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : instance_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Lisp::Default::Site::Default_::EidRecord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-mac")
    {
        any_mac = value;
        any_mac.value_namespace = name_space;
        any_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::Default_::EidRecord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-mac")
    {
        any_mac.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::Default_::EidRecord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "instance-id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::Default_::EidRecord::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "eid-record"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::Default_::EidRecord::Prefixes::~Prefixes()
{
}

bool Native::Router::Lisp::Default::Site::Default_::EidRecord::Prefixes::has_data() const
{
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::Lisp::Default::Site::Default_::EidRecord::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::Lisp::Default::Site::Default_::EidRecord::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::Default_::EidRecord::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::Default_::EidRecord::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::Default_::EidRecord::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::Site::Default_::EidRecord::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-more-specifics")
    {
        accept_more_specifics = value;
        accept_more_specifics.value_namespace = name_space;
        accept_more_specifics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::Default_::EidRecord::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "accept-more-specifics")
    {
        accept_more_specifics.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::Default_::EidRecord::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::InstanceId()
    :
    id{YType::uint32, "id"},
    any_mac{YType::empty, "any-mac"}
{

    yang_name = "instance-id"; yang_parent_name = "eid-record"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::~InstanceId()
{
}

bool Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return id.is_set
	|| any_mac.is_set;
}

bool Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(any_mac.yfilter);
}

std::string Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto c = std::make_shared<Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefixes)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any-mac")
    {
        any_mac = value;
        any_mac.value_namespace = name_space;
        any_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "any-mac")
    {
        any_mac.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "instance-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::Prefixes::~Prefixes()
{
}

bool Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::Prefixes::has_data() const
{
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-more-specifics")
    {
        accept_more_specifics = value;
        accept_more_specifics.value_namespace = name_space;
        accept_more_specifics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "accept-more-specifics")
    {
        accept_more_specifics.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::Default_::EidRecord::InstanceId::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::AuthenticationKey::AuthenticationKey()
    :
    unc_pwd{YType::str, "unc-pwd"},
    key_0{YType::str, "key-0"},
    key_6{YType::str, "key-6"},
    key_7{YType::str, "key-7"}
{

    yang_name = "authentication-key"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::Lisp::Default::Site::AuthenticationKey::has_data() const
{
    return unc_pwd.is_set
	|| key_0.is_set
	|| key_6.is_set
	|| key_7.is_set;
}

bool Native::Router::Lisp::Default::Site::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(key_0.yfilter)
	|| ydk::is_set(key_6.yfilter)
	|| ydk::is_set(key_7.yfilter);
}

std::string Native::Router::Lisp::Default::Site::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (key_0.is_set || is_set(key_0.yfilter)) leaf_name_data.push_back(key_0.get_name_leafdata());
    if (key_6.is_set || is_set(key_6.yfilter)) leaf_name_data.push_back(key_6.get_name_leafdata());
    if (key_7.is_set || is_set(key_7.yfilter)) leaf_name_data.push_back(key_7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::Site::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-0")
    {
        key_0 = value;
        key_0.value_namespace = name_space;
        key_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-6")
    {
        key_6 = value;
        key_6.value_namespace = name_space;
        key_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-7")
    {
        key_7 = value;
        key_7.value_namespace = name_space;
        key_7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "key-0")
    {
        key_0.yfilter = yfilter;
    }
    if(value_path == "key-6")
    {
        key_6.yfilter = yfilter;
    }
    if(value_path == "key-7")
    {
        key_7.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::AllowedLocator::AllowedLocator()
    :
    ls_ipv4{YType::str, "ls-ipv4"},
    ls_ipv6{YType::str, "ls-ipv6"}
    	,
    list(std::make_shared<Native::Router::Lisp::Default::Site::AllowedLocator::List>())
{
    list->parent = this;

    yang_name = "allowed-locator"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::AllowedLocator::~AllowedLocator()
{
}

bool Native::Router::Lisp::Default::Site::AllowedLocator::has_data() const
{
    return ls_ipv4.is_set
	|| ls_ipv6.is_set
	|| (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Default::Site::AllowedLocator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ls_ipv4.yfilter)
	|| ydk::is_set(ls_ipv6.yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Default::Site::AllowedLocator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowed-locator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::AllowedLocator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ls_ipv4.is_set || is_set(ls_ipv4.yfilter)) leaf_name_data.push_back(ls_ipv4.get_name_leafdata());
    if (ls_ipv6.is_set || is_set(ls_ipv6.yfilter)) leaf_name_data.push_back(ls_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::AllowedLocator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Default::Site::AllowedLocator::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::AllowedLocator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Router::Lisp::Default::Site::AllowedLocator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ls-ipv4")
    {
        ls_ipv4 = value;
        ls_ipv4.value_namespace = name_space;
        ls_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ipv6")
    {
        ls_ipv6 = value;
        ls_ipv6.value_namespace = name_space;
        ls_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::AllowedLocator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ls-ipv4")
    {
        ls_ipv4.yfilter = yfilter;
    }
    if(value_path == "ls-ipv6")
    {
        ls_ipv6.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::AllowedLocator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "ls-ipv4" || name == "ls-ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::AllowedLocator::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "allowed-locator"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::AllowedLocator::List::~List()
{
}

bool Native::Router::Lisp::Default::Site::AllowedLocator::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Default::Site::AllowedLocator::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Lisp::Default::Site::AllowedLocator::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::AllowedLocator::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::AllowedLocator::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::AllowedLocator::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::Site::AllowedLocator::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::AllowedLocator::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::AllowedLocator::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::EidPrefix::EidPrefix()
    :
    any_mac{YType::empty, "any-mac"}
{

    yang_name = "eid-prefix"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::EidPrefix::~EidPrefix()
{
}

bool Native::Router::Lisp::Default::Site::EidPrefix::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    return any_mac.is_set;
}

bool Native::Router::Lisp::Default::Site::EidPrefix::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(any_mac.yfilter);
}

std::string Native::Router::Lisp::Default::Site::EidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::EidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::EidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto c = std::make_shared<Native::Router::Lisp::Default::Site::EidPrefix::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    if(child_yang_name == "instance-id")
    {
        auto c = std::make_shared<Native::Router::Lisp::Default::Site::EidPrefix::InstanceId>();
        c->parent = this;
        instance_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::EidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefixes)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : instance_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Lisp::Default::Site::EidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-mac")
    {
        any_mac = value;
        any_mac.value_namespace = name_space;
        any_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::EidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-mac")
    {
        any_mac.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::EidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "instance-id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::EidPrefix::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "eid-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::EidPrefix::Prefixes::~Prefixes()
{
}

bool Native::Router::Lisp::Default::Site::EidPrefix::Prefixes::has_data() const
{
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::Lisp::Default::Site::EidPrefix::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::Lisp::Default::Site::EidPrefix::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::EidPrefix::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::EidPrefix::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::EidPrefix::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::Site::EidPrefix::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-more-specifics")
    {
        accept_more_specifics = value;
        accept_more_specifics.value_namespace = name_space;
        accept_more_specifics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::EidPrefix::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "accept-more-specifics")
    {
        accept_more_specifics.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::EidPrefix::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::InstanceId()
    :
    id{YType::uint32, "id"},
    any_mac{YType::empty, "any-mac"}
{

    yang_name = "instance-id"; yang_parent_name = "eid-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::~InstanceId()
{
}

bool Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return id.is_set
	|| any_mac.is_set;
}

bool Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(any_mac.yfilter);
}

std::string Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto c = std::make_shared<Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefixes)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any-mac")
    {
        any_mac = value;
        any_mac.value_namespace = name_space;
        any_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "any-mac")
    {
        any_mac.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "instance-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::Prefixes::~Prefixes()
{
}

bool Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::Prefixes::has_data() const
{
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-more-specifics")
    {
        accept_more_specifics = value;
        accept_more_specifics.value_namespace = name_space;
        accept_more_specifics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "accept-more-specifics")
    {
        accept_more_specifics.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::EidPrefix::InstanceId::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::EidRecord::EidRecord()
    :
    any_mac{YType::empty, "any-mac"}
{

    yang_name = "eid-record"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::EidRecord::~EidRecord()
{
}

bool Native::Router::Lisp::Default::Site::EidRecord::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    return any_mac.is_set;
}

bool Native::Router::Lisp::Default::Site::EidRecord::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(any_mac.yfilter);
}

std::string Native::Router::Lisp::Default::Site::EidRecord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-record";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::EidRecord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::EidRecord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto c = std::make_shared<Native::Router::Lisp::Default::Site::EidRecord::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    if(child_yang_name == "instance-id")
    {
        auto c = std::make_shared<Native::Router::Lisp::Default::Site::EidRecord::InstanceId>();
        c->parent = this;
        instance_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::EidRecord::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefixes)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : instance_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Lisp::Default::Site::EidRecord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-mac")
    {
        any_mac = value;
        any_mac.value_namespace = name_space;
        any_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::EidRecord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-mac")
    {
        any_mac.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::EidRecord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "instance-id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::EidRecord::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "eid-record"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::EidRecord::Prefixes::~Prefixes()
{
}

bool Native::Router::Lisp::Default::Site::EidRecord::Prefixes::has_data() const
{
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::Lisp::Default::Site::EidRecord::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::Lisp::Default::Site::EidRecord::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::EidRecord::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::EidRecord::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::EidRecord::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::Site::EidRecord::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-more-specifics")
    {
        accept_more_specifics = value;
        accept_more_specifics.value_namespace = name_space;
        accept_more_specifics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::EidRecord::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "accept-more-specifics")
    {
        accept_more_specifics.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::EidRecord::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::EidRecord::InstanceId::InstanceId()
    :
    id{YType::uint32, "id"},
    any_mac{YType::empty, "any-mac"}
{

    yang_name = "instance-id"; yang_parent_name = "eid-record"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::EidRecord::InstanceId::~InstanceId()
{
}

bool Native::Router::Lisp::Default::Site::EidRecord::InstanceId::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return id.is_set
	|| any_mac.is_set;
}

bool Native::Router::Lisp::Default::Site::EidRecord::InstanceId::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(any_mac.yfilter);
}

std::string Native::Router::Lisp::Default::Site::EidRecord::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::EidRecord::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::EidRecord::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto c = std::make_shared<Native::Router::Lisp::Default::Site::EidRecord::InstanceId::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::EidRecord::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefixes)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Lisp::Default::Site::EidRecord::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any-mac")
    {
        any_mac = value;
        any_mac.value_namespace = name_space;
        any_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::EidRecord::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "any-mac")
    {
        any_mac.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::EidRecord::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::Lisp::Default::Site::EidRecord::InstanceId::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "instance-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Default::Site::EidRecord::InstanceId::Prefixes::~Prefixes()
{
}

bool Native::Router::Lisp::Default::Site::EidRecord::InstanceId::Prefixes::has_data() const
{
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::Lisp::Default::Site::EidRecord::InstanceId::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::Lisp::Default::Site::EidRecord::InstanceId::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Site::EidRecord::InstanceId::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Site::EidRecord::InstanceId::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Site::EidRecord::InstanceId::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::Site::EidRecord::InstanceId::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-more-specifics")
    {
        accept_more_specifics = value;
        accept_more_specifics.value_namespace = name_space;
        accept_more_specifics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Site::EidRecord::InstanceId::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "accept-more-specifics")
    {
        accept_more_specifics.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Site::EidRecord::InstanceId::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::Lisp::Default::Syslog::Syslog()
    :
    verbose{YType::empty, "verbose"}
    	,
    session(std::make_shared<Native::Router::Lisp::Default::Syslog::Session>())
{
    session->parent = this;

    yang_name = "syslog"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Default::Syslog::~Syslog()
{
}

bool Native::Router::Lisp::Default::Syslog::has_data() const
{
    return verbose.is_set
	|| (session !=  nullptr && session->has_data());
}

bool Native::Router::Lisp::Default::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(verbose.yfilter)
	|| (session !=  nullptr && session->has_operation());
}

std::string Native::Router::Lisp::Default::Syslog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (verbose.is_set || is_set(verbose.yfilter)) leaf_name_data.push_back(verbose.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Native::Router::Lisp::Default::Syslog::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void Native::Router::Lisp::Default::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "verbose")
    {
        verbose = value;
        verbose.value_namespace = name_space;
        verbose.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "verbose")
    {
        verbose.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "verbose")
        return true;
    return false;
}

Native::Router::Lisp::Default::Syslog::Session::Session()
    :
    changes{YType::empty, "changes"}
{

    yang_name = "session"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Default::Syslog::Session::~Session()
{
}

bool Native::Router::Lisp::Default::Syslog::Session::has_data() const
{
    return changes.is_set;
}

bool Native::Router::Lisp::Default::Syslog::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(changes.yfilter);
}

std::string Native::Router::Lisp::Default::Syslog::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Syslog::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Syslog::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (changes.is_set || is_set(changes.yfilter)) leaf_name_data.push_back(changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Default::Syslog::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Default::Syslog::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Default::Syslog::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "changes")
    {
        changes = value;
        changes.value_namespace = name_space;
        changes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Syslog::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "changes")
    {
        changes.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Syslog::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "changes")
        return true;
    return false;
}

Native::Router::Lisp::Service::Service()
    :
    ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
	,ethernet(nullptr) // presence node
{

    yang_name = "service"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::~Service()
{
}

bool Native::Router::Lisp::Service::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data());
}

bool Native::Router::Lisp::Service::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Native::Router::Lisp::Service::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Lisp::Service::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::Lisp::Service::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Router::Lisp::Service::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    return children;
}

void Native::Router::Lisp::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "ethernet")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Ipv4()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"},
    map_request_source{YType::str, "map-request-source"}
    	,
    default_(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default>())
	,database_mapping(std::make_shared<Native::Router::Lisp::Service::Ipv4::DatabaseMapping>())
	,itr(std::make_shared<Native::Router::Lisp::Service::Ipv4::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Service::Ipv4::ItrEnable>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Service::Ipv4::EtrEnable>())
	,etr(std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapCacheLimit>())
	,map_resolver(nullptr) // presence node
	,map_server(nullptr) // presence node
	,site_registration(std::make_shared<Native::Router::Lisp::Service::Ipv4::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Service::Ipv4::SolicitMapRequest>())
	,distance(std::make_shared<Native::Router::Lisp::Service::Ipv4::Distance>())
	,map_cache(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapCache>())
	,map_cache_persistent(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapCachePersistent>())
	,proxy_itr(std::make_shared<Native::Router::Lisp::Service::Ipv4::ProxyItr>())
	,route_export(std::make_shared<Native::Router::Lisp::Service::Ipv4::RouteExport>())
{
    default_->parent = this;
    database_mapping->parent = this;
    itr->parent = this;
    itr_enable->parent = this;
    etr_enable->parent = this;
    etr->parent = this;
    map_cache_limit->parent = this;
    site_registration->parent = this;
    solicit_map_request->parent = this;
    distance->parent = this;
    map_cache->parent = this;
    map_cache_persistent->parent = this;
    proxy_itr->parent = this;
    route_export->parent = this;

    yang_name = "ipv4"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::~Ipv4()
{
}

bool Native::Router::Lisp::Service::Ipv4::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return encapsulation.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| map_request_source.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(proxy_etr.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(map_request_source.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.yfilter)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default>();
        }
        return default_;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Service::Ipv4::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Service::Ipv4::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Service::Ipv4::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Service::Ipv4::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Service::Ipv4::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Service::Ipv4::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Lisp::Service::Ipv4::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::Lisp::Service::Ipv4::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::Lisp::Service::Ipv4::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "use-petr")
    {
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv4::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_resolver != nullptr)
    {
        children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(proxy_itr != nullptr)
    {
        children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    count = 0;
    for (auto const & c : use_petr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
        proxy_etr.value_namespace = name_space;
        proxy_etr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
        map_request_source.value_namespace = name_space;
        map_request_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "map-request-source")
    {
        map_request_source.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "database-mapping" || name == "itr" || name == "itr-enable" || name == "etr-enable" || name == "etr" || name == "map-cache-limit" || name == "map-resolver" || name == "map-server" || name == "site-registration" || name == "solicit-map-request" || name == "distance" || name == "map-cache" || name == "map-cache-persistent" || name == "proxy-itr" || name == "route-export" || name == "use-petr" || name == "encapsulation" || name == "proxy-etr" || name == "sgt" || name == "map-request-source")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::Default()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"},
    map_request_source{YType::str, "map-request-source"}
    	,
    database_mapping(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping>())
	,itr(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::ItrEnable>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::EtrEnable>())
	,etr(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Etr>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapCacheLimit>())
	,map_resolver(nullptr) // presence node
	,map_server(nullptr) // presence node
	,site_registration(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::SolicitMapRequest>())
	,distance(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Distance>())
	,map_cache(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapCache>())
	,map_cache_persistent(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapCachePersistent>())
	,proxy_itr(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::ProxyItr>())
	,route_export(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::RouteExport>())
{
    database_mapping->parent = this;
    itr->parent = this;
    itr_enable->parent = this;
    etr_enable->parent = this;
    etr->parent = this;
    map_cache_limit->parent = this;
    site_registration->parent = this;
    solicit_map_request->parent = this;
    distance->parent = this;
    map_cache->parent = this;
    map_cache_persistent->parent = this;
    proxy_itr->parent = this;
    route_export->parent = this;

    yang_name = "default"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::~Default()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return encapsulation.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| map_request_source.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(proxy_etr.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(map_request_source.yfilter)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.yfilter)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "use-petr")
    {
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_resolver != nullptr)
    {
        children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(proxy_itr != nullptr)
    {
        children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    count = 0;
    for (auto const & c : use_petr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
        proxy_etr.value_namespace = name_space;
        proxy_etr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
        map_request_source.value_namespace = name_space;
        map_request_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "map-request-source")
    {
        map_request_source.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping" || name == "itr" || name == "itr-enable" || name == "etr-enable" || name == "etr" || name == "map-cache-limit" || name == "map-resolver" || name == "map-server" || name == "site-registration" || name == "solicit-map-request" || name == "distance" || name == "map-cache" || name == "map-cache-persistent" || name == "proxy-itr" || name == "route-export" || name == "use-petr" || name == "encapsulation" || name == "proxy-etr" || name == "sgt" || name == "map-request-source")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "limit"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/database-mapping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::Itr::Itr()
{

    yang_name = "itr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::Itr::~Itr()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Service::Ipv4::Default::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::Itr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::Itr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : map_resolver)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::Default::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "map-resolver"; yang_parent_name = "itr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::Itr::MapResolver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/itr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::Itr::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{

    yang_name = "itr-enable"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::ItrEnable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::ItrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{

    yang_name = "etr-enable"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::EtrEnable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::EtrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::Etr::~Etr()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(map_cache_ttl.yfilter)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default::Etr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::Etr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.yfilter)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-server")
    {
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : map_server)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
        map_cache_ttl.value_namespace = name_space;
        map_cache_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-server" || name == "accept-map-request-mapping" || name == "map-cache-ttl")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/etr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
        proxy_reply.value_namespace = name_space;
        proxy_reply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd>())
	,key_0(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key7>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;
    key_7->parent = this;

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::has_data() const
{
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return unc_pwd.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
        ak_0.value_namespace = name_space;
        ak_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-0")
    {
        ak_0.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
        ak_6.value_namespace = name_space;
        ak_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-6")
    {
        ak_6.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-7"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
        ak_7.value_namespace = name_space;
        ak_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-7")
    {
        ak_7.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{

    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_mappping.yfilter)
	|| ydk::is_set(verify.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/etr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.yfilter)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.yfilter)) leaf_name_data.push_back(verify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
        accept_mappping.value_namespace = name_space;
        accept_mappping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify")
    {
        verify = value;
        verify.value_namespace = name_space;
        verify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping.yfilter = yfilter;
    }
    if(value_path == "verify")
    {
        verify.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::Etr::AcceptMapRequestMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mappping" || name == "verify")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "map-cache-limit"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapCacheLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::MapCacheLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
        max_map_cache_entries.value_namespace = name_space;
        max_map_cache_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
        reserve_list.value_namespace = name_space;
        reserve_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries.yfilter = yfilter;
    }
    if(value_path == "reserve-list")
    {
        reserve_list.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::has_data() const
{
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapResolver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::Default::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-request")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-resolver/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-resolver/map-request/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::List>())
	,registered(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;
    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::has_data() const
{
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-resolver/map-request/validate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(registered != nullptr)
    {
        children["registered"] = registered;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "registered")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-resolver/map-request/validate/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-resolver/map-request/validate/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "registered"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-resolver/map-request/validate/source/registered/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapResolver::MapRequest::Validate::Source::Registered::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapServer::has_data() const
{
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(map_register != nullptr)
    {
        children["map-register"] = map_register;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::Default::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-register")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-server/map-register/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::Source::has_data() const
{
    return allowed_locator.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allowed_locator.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-server/map-register/validate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.yfilter)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
        allowed_locator.value_namespace = name_space;
        allowed_locator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapServer::MapRegister::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowed-locator")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::SiteRegistration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::SolicitMapRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
        max_per_entry.value_namespace = name_space;
        max_per_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
        suppression_time.value_namespace = name_space;
        suppression_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry.yfilter = yfilter;
    }
    if(value_path == "suppression-time")
    {
        suppression_time.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{

    yang_name = "distance"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::Distance::~Distance()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::Distance::has_data() const
{
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alt.yfilter)
	|| ydk::is_set(away.yfilter)
	|| ydk::is_set(dyn_eid.yfilter)
	|| ydk::is_set(site_registrations.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::Distance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.yfilter)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.yfilter)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.yfilter)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alt")
    {
        alt = value;
        alt.value_namespace = name_space;
        alt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "away")
    {
        away = value;
        away.value_namespace = name_space;
        away.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid = value;
        dyn_eid.value_namespace = name_space;
        dyn_eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alt")
    {
        alt.yfilter = yfilter;
    }
    if(value_path == "away")
    {
        away.yfilter = yfilter;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid.yfilter = yfilter;
    }
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alt" || name == "away" || name == "dyn-eid" || name == "site-registrations")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
    	,
    away_eids(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapCache::has_data() const
{
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registration.yfilter)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapCache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.yfilter)) leaf_name_data.push_back(site_registration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::MapCache::AwayEids>();
        }
        return away_eids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(away_eids != nullptr)
    {
        children["away-eids"] = away_eids;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
        site_registration.value_namespace = name_space;
        site_registration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registration")
    {
        site_registration.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "away-eids" || name == "site-registration")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{

    yang_name = "away-eids"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapCache::AwayEids::has_data() const
{
    return send_map_request.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapCache::AwayEids::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_map_request.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapCache::AwayEids::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::MapCache::AwayEids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.yfilter)) leaf_name_data.push_back(send_map_request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::MapCache::AwayEids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
        send_map_request.value_namespace = name_space;
        send_map_request.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::MapCache::AwayEids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-map-request")
    {
        send_map_request.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapCache::AwayEids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-map-request")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "map-cache-persistent"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapCachePersistent::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapCachePersistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapCachePersistent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::MapCachePersistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::MapCachePersistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::MapCachePersistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::MapCachePersistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "proxy-itr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::ProxyItr::~ProxyItr()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::ProxyItr::has_data() const
{
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::ProxyItr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::ProxyItr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::ProxyItr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::ProxyItr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::ProxyItr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::ProxyItr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "ipv6-addr")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::RouteExport::RouteExport()
    :
    site_registrations{YType::empty, "site-registrations"},
    away_eids{YType::empty, "away-eids"}
{

    yang_name = "route-export"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::RouteExport::~RouteExport()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::RouteExport::has_data() const
{
    return site_registrations.is_set
	|| away_eids.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::RouteExport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registrations.yfilter)
	|| ydk::is_set(away_eids.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::RouteExport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::RouteExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());
    if (away_eids.is_set || is_set(away_eids.yfilter)) leaf_name_data.push_back(away_eids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::RouteExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "away-eids")
    {
        away_eids = value;
        away_eids.value_namespace = name_space;
        away_eids.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::RouteExport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
    if(value_path == "away-eids")
    {
        away_eids.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::RouteExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registrations" || name == "away-eids")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
    	,
    priority(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Default::UsePetr::~UsePetr()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::UsePetr::has_data() const
{
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default::UsePetr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_address.yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default::UsePetr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Default::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr" <<"[locator-address='" <<locator_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::UsePetr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.yfilter)) leaf_name_data.push_back(locator_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::UsePetr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
        locator_address.value_namespace = name_space;
        locator_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::UsePetr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-address")
    {
        locator_address.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::UsePetr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "locator-address")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Default::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{

    yang_name = "priority"; yang_parent_name = "use-petr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv4::Default::UsePetr::Priority::~Priority()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default::UsePetr::Priority::has_data() const
{
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default::UsePetr::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_value.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Default::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Default::UsePetr::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.yfilter)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default::UsePetr::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-value")
    {
        priority_value = value;
        priority_value.value_namespace = name_space;
        priority_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Default::UsePetr::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-value")
    {
        priority_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Default::UsePetr::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-value" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Service::Ipv4::DatabaseMapping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::DatabaseMapping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::DatabaseMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "limit"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/database-mapping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Itr::Itr()
{

    yang_name = "itr"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Itr::~Itr()
{
}

bool Native::Router::Lisp::Service::Ipv4::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Service::Ipv4::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Itr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Itr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv4::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : map_resolver)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "map-resolver"; yang_parent_name = "itr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/itr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{

    yang_name = "itr-enable"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Service::Ipv4::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::ItrEnable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::ItrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{

    yang_name = "etr-enable"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Service::Ipv4::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::EtrEnable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::EtrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Etr::~Etr()
{
}

bool Native::Router::Lisp::Service::Ipv4::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(map_cache_ttl.yfilter)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Etr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.yfilter)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-server")
    {
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : map_server)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
        map_cache_ttl.value_namespace = name_space;
        map_cache_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-server" || name == "accept-map-request-mapping" || name == "map-cache-ttl")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::MapServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/etr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Etr::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
        proxy_reply.value_namespace = name_space;
        proxy_reply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd>())
	,key_0(std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;
    key_7->parent = this;

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::has_data() const
{
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return unc_pwd.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
        ak_0.value_namespace = name_space;
        ak_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-0")
    {
        ak_0.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
        ak_6.value_namespace = name_space;
        ak_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-6")
    {
        ak_6.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-7"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
        ak_7.value_namespace = name_space;
        ak_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-7")
    {
        ak_7.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{

    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_mappping.yfilter)
	|| ydk::is_set(verify.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/etr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.yfilter)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.yfilter)) leaf_name_data.push_back(verify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
        accept_mappping.value_namespace = name_space;
        accept_mappping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify")
    {
        verify = value;
        verify.value_namespace = name_space;
        verify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping.yfilter = yfilter;
    }
    if(value_path == "verify")
    {
        verify.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mappping" || name == "verify")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "map-cache-limit"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::MapCacheLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::MapCacheLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
        max_map_cache_entries.value_namespace = name_space;
        max_map_cache_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
        reserve_list.value_namespace = name_space;
        reserve_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries.yfilter = yfilter;
    }
    if(value_path == "reserve-list")
    {
        reserve_list.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::has_data() const
{
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-request")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-resolver/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-resolver/map-request/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List>())
	,registered(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;
    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::has_data() const
{
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-resolver/map-request/validate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(registered != nullptr)
    {
        children["registered"] = registered;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "registered")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-resolver/map-request/validate/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-resolver/map-request/validate/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "registered"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-resolver/map-request/validate/source/registered/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::has_data() const
{
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(map_register != nullptr)
    {
        children["map-register"] = map_register;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-register")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-server/map-register/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::has_data() const
{
    return allowed_locator.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allowed_locator.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-server/map-register/validate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.yfilter)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
        allowed_locator.value_namespace = name_space;
        allowed_locator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowed-locator")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Service::Ipv4::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::SiteRegistration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
        max_per_entry.value_namespace = name_space;
        max_per_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
        suppression_time.value_namespace = name_space;
        suppression_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry.yfilter = yfilter;
    }
    if(value_path == "suppression-time")
    {
        suppression_time.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{

    yang_name = "distance"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::Distance::~Distance()
{
}

bool Native::Router::Lisp::Service::Ipv4::Distance::has_data() const
{
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alt.yfilter)
	|| ydk::is_set(away.yfilter)
	|| ydk::is_set(dyn_eid.yfilter)
	|| ydk::is_set(site_registrations.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::Distance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.yfilter)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.yfilter)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.yfilter)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alt")
    {
        alt = value;
        alt.value_namespace = name_space;
        alt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "away")
    {
        away = value;
        away.value_namespace = name_space;
        away.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid = value;
        dyn_eid.value_namespace = name_space;
        dyn_eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alt")
    {
        alt.yfilter = yfilter;
    }
    if(value_path == "away")
    {
        away.yfilter = yfilter;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid.yfilter = yfilter;
    }
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alt" || name == "away" || name == "dyn-eid" || name == "site-registrations")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
    	,
    away_eids(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapCache::has_data() const
{
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registration.yfilter)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapCache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.yfilter)) leaf_name_data.push_back(site_registration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids>();
        }
        return away_eids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(away_eids != nullptr)
    {
        children["away-eids"] = away_eids;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
        site_registration.value_namespace = name_space;
        site_registration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registration")
    {
        site_registration.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "away-eids" || name == "site-registration")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{

    yang_name = "away-eids"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::has_data() const
{
    return send_map_request.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_map_request.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.yfilter)) leaf_name_data.push_back(send_map_request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
        send_map_request.value_namespace = name_space;
        send_map_request.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-map-request")
    {
        send_map_request.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-map-request")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "map-cache-persistent"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapCachePersistent::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::MapCachePersistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::MapCachePersistent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::MapCachePersistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapCachePersistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::MapCachePersistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::MapCachePersistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "proxy-itr"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::ProxyItr::~ProxyItr()
{
}

bool Native::Router::Lisp::Service::Ipv4::ProxyItr::has_data() const
{
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::ProxyItr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::ProxyItr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::ProxyItr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::ProxyItr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::ProxyItr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::ProxyItr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "ipv6-addr")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::RouteExport::RouteExport()
    :
    site_registrations{YType::empty, "site-registrations"},
    away_eids{YType::empty, "away-eids"}
{

    yang_name = "route-export"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::RouteExport::~RouteExport()
{
}

bool Native::Router::Lisp::Service::Ipv4::RouteExport::has_data() const
{
    return site_registrations.is_set
	|| away_eids.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::RouteExport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registrations.yfilter)
	|| ydk::is_set(away_eids.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::RouteExport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::RouteExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());
    if (away_eids.is_set || is_set(away_eids.yfilter)) leaf_name_data.push_back(away_eids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::RouteExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "away-eids")
    {
        away_eids = value;
        away_eids.value_namespace = name_space;
        away_eids.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::RouteExport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
    if(value_path == "away-eids")
    {
        away_eids.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::RouteExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registrations" || name == "away-eids")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
    	,
    priority(std::make_shared<Native::Router::Lisp::Service::Ipv4::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv4::UsePetr::~UsePetr()
{
}

bool Native::Router::Lisp::Service::Ipv4::UsePetr::has_data() const
{
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::UsePetr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_address.yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::UsePetr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv4::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr" <<"[locator-address='" <<locator_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::UsePetr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.yfilter)) leaf_name_data.push_back(locator_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::Lisp::Service::Ipv4::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::UsePetr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
        locator_address.value_namespace = name_space;
        locator_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::UsePetr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-address")
    {
        locator_address.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::UsePetr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "locator-address")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{

    yang_name = "priority"; yang_parent_name = "use-petr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::~Priority()
{
}

bool Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::has_data() const
{
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_value.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.yfilter)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-value")
    {
        priority_value = value;
        priority_value.value_namespace = name_space;
        priority_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-value")
    {
        priority_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-value" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Ipv6()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"},
    map_request_source{YType::str, "map-request-source"}
    	,
    default_(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default>())
	,database_mapping(std::make_shared<Native::Router::Lisp::Service::Ipv6::DatabaseMapping>())
	,itr(std::make_shared<Native::Router::Lisp::Service::Ipv6::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Service::Ipv6::ItrEnable>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Service::Ipv6::EtrEnable>())
	,etr(std::make_shared<Native::Router::Lisp::Service::Ipv6::Etr>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Service::Ipv6::MapCacheLimit>())
	,map_resolver(nullptr) // presence node
	,map_server(nullptr) // presence node
	,site_registration(std::make_shared<Native::Router::Lisp::Service::Ipv6::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Service::Ipv6::SolicitMapRequest>())
	,distance(std::make_shared<Native::Router::Lisp::Service::Ipv6::Distance>())
	,map_cache(std::make_shared<Native::Router::Lisp::Service::Ipv6::MapCache>())
	,map_cache_persistent(std::make_shared<Native::Router::Lisp::Service::Ipv6::MapCachePersistent>())
	,proxy_itr(std::make_shared<Native::Router::Lisp::Service::Ipv6::ProxyItr>())
	,route_export(std::make_shared<Native::Router::Lisp::Service::Ipv6::RouteExport>())
{
    default_->parent = this;
    database_mapping->parent = this;
    itr->parent = this;
    itr_enable->parent = this;
    etr_enable->parent = this;
    etr->parent = this;
    map_cache_limit->parent = this;
    site_registration->parent = this;
    solicit_map_request->parent = this;
    distance->parent = this;
    map_cache->parent = this;
    map_cache_persistent->parent = this;
    proxy_itr->parent = this;
    route_export->parent = this;

    yang_name = "ipv6"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::~Ipv6()
{
}

bool Native::Router::Lisp::Service::Ipv6::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return encapsulation.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| map_request_source.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(proxy_etr.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(map_request_source.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.yfilter)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default>();
        }
        return default_;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Service::Ipv6::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Service::Ipv6::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Service::Ipv6::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Service::Ipv6::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Service::Ipv6::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Service::Ipv6::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Service::Ipv6::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Lisp::Service::Ipv6::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::Lisp::Service::Ipv6::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::Lisp::Service::Ipv6::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "use-petr")
    {
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv6::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_resolver != nullptr)
    {
        children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(proxy_itr != nullptr)
    {
        children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    count = 0;
    for (auto const & c : use_petr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
        proxy_etr.value_namespace = name_space;
        proxy_etr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
        map_request_source.value_namespace = name_space;
        map_request_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "map-request-source")
    {
        map_request_source.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "database-mapping" || name == "itr" || name == "itr-enable" || name == "etr-enable" || name == "etr" || name == "map-cache-limit" || name == "map-resolver" || name == "map-server" || name == "site-registration" || name == "solicit-map-request" || name == "distance" || name == "map-cache" || name == "map-cache-persistent" || name == "proxy-itr" || name == "route-export" || name == "use-petr" || name == "encapsulation" || name == "proxy-etr" || name == "sgt" || name == "map-request-source")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::Default()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"},
    map_request_source{YType::str, "map-request-source"}
    	,
    database_mapping(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping>())
	,itr(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::ItrEnable>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::EtrEnable>())
	,etr(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Etr>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapCacheLimit>())
	,map_resolver(nullptr) // presence node
	,map_server(nullptr) // presence node
	,site_registration(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::SolicitMapRequest>())
	,distance(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Distance>())
	,map_cache(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapCache>())
	,map_cache_persistent(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapCachePersistent>())
	,proxy_itr(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::ProxyItr>())
	,route_export(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::RouteExport>())
{
    database_mapping->parent = this;
    itr->parent = this;
    itr_enable->parent = this;
    etr_enable->parent = this;
    etr->parent = this;
    map_cache_limit->parent = this;
    site_registration->parent = this;
    solicit_map_request->parent = this;
    distance->parent = this;
    map_cache->parent = this;
    map_cache_persistent->parent = this;
    proxy_itr->parent = this;
    route_export->parent = this;

    yang_name = "default"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::~Default()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return encapsulation.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| map_request_source.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(proxy_etr.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(map_request_source.yfilter)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.yfilter)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "use-petr")
    {
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_resolver != nullptr)
    {
        children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(proxy_itr != nullptr)
    {
        children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    count = 0;
    for (auto const & c : use_petr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
        proxy_etr.value_namespace = name_space;
        proxy_etr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
        map_request_source.value_namespace = name_space;
        map_request_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "map-request-source")
    {
        map_request_source.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping" || name == "itr" || name == "itr-enable" || name == "etr-enable" || name == "etr" || name == "map-cache-limit" || name == "map-resolver" || name == "map-server" || name == "site-registration" || name == "solicit-map-request" || name == "distance" || name == "map-cache" || name == "map-cache-persistent" || name == "proxy-itr" || name == "route-export" || name == "use-petr" || name == "encapsulation" || name == "proxy-etr" || name == "sgt" || name == "map-request-source")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "limit"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/database-mapping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::Itr::Itr()
{

    yang_name = "itr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::Itr::~Itr()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Service::Ipv6::Default::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::Itr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::Itr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : map_resolver)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv6::Default::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "map-resolver"; yang_parent_name = "itr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::Itr::MapResolver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/itr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::Itr::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{

    yang_name = "itr-enable"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::ItrEnable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::ItrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{

    yang_name = "etr-enable"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::EtrEnable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::EtrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::Etr::~Etr()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(map_cache_ttl.yfilter)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default::Etr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::Etr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.yfilter)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-server")
    {
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : map_server)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
        map_cache_ttl.value_namespace = name_space;
        map_cache_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-server" || name == "accept-map-request-mapping" || name == "map-cache-ttl")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/etr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
        proxy_reply.value_namespace = name_space;
        proxy_reply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::KeyPwd>())
	,key_0(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key7>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;
    key_7->parent = this;

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::has_data() const
{
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return unc_pwd.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
        ak_0.value_namespace = name_space;
        ak_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-0")
    {
        ak_0.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
        ak_6.value_namespace = name_space;
        ak_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-6")
    {
        ak_6.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-7"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
        ak_7.value_namespace = name_space;
        ak_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-7")
    {
        ak_7.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{

    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_mappping.yfilter)
	|| ydk::is_set(verify.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::Etr::AcceptMapRequestMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/etr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::Etr::AcceptMapRequestMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.yfilter)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.yfilter)) leaf_name_data.push_back(verify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
        accept_mappping.value_namespace = name_space;
        accept_mappping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify")
    {
        verify = value;
        verify.value_namespace = name_space;
        verify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::Etr::AcceptMapRequestMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping.yfilter = yfilter;
    }
    if(value_path == "verify")
    {
        verify.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::Etr::AcceptMapRequestMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mappping" || name == "verify")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "map-cache-limit"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapCacheLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::MapCacheLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
        max_map_cache_entries.value_namespace = name_space;
        max_map_cache_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
        reserve_list.value_namespace = name_space;
        reserve_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries.yfilter = yfilter;
    }
    if(value_path == "reserve-list")
    {
        reserve_list.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::has_data() const
{
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapResolver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv6::Default::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-request")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-resolver/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-resolver/map-request/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::List>())
	,registered(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;
    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::has_data() const
{
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-resolver/map-request/validate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(registered != nullptr)
    {
        children["registered"] = registered;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "registered")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-resolver/map-request/validate/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-resolver/map-request/validate/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "registered"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-resolver/map-request/validate/source/registered/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapResolver::MapRequest::Validate::Source::Registered::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapServer::has_data() const
{
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(map_register != nullptr)
    {
        children["map-register"] = map_register;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv6::Default::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-register")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-server/map-register/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::Source::has_data() const
{
    return allowed_locator.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allowed_locator.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-server/map-register/validate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.yfilter)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
        allowed_locator.value_namespace = name_space;
        allowed_locator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapServer::MapRegister::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowed-locator")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::SiteRegistration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::SolicitMapRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
        max_per_entry.value_namespace = name_space;
        max_per_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
        suppression_time.value_namespace = name_space;
        suppression_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry.yfilter = yfilter;
    }
    if(value_path == "suppression-time")
    {
        suppression_time.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{

    yang_name = "distance"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::Distance::~Distance()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::Distance::has_data() const
{
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alt.yfilter)
	|| ydk::is_set(away.yfilter)
	|| ydk::is_set(dyn_eid.yfilter)
	|| ydk::is_set(site_registrations.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::Distance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.yfilter)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.yfilter)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.yfilter)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alt")
    {
        alt = value;
        alt.value_namespace = name_space;
        alt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "away")
    {
        away = value;
        away.value_namespace = name_space;
        away.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid = value;
        dyn_eid.value_namespace = name_space;
        dyn_eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alt")
    {
        alt.yfilter = yfilter;
    }
    if(value_path == "away")
    {
        away.yfilter = yfilter;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid.yfilter = yfilter;
    }
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alt" || name == "away" || name == "dyn-eid" || name == "site-registrations")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
    	,
    away_eids(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapCache::has_data() const
{
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registration.yfilter)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapCache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.yfilter)) leaf_name_data.push_back(site_registration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::MapCache::AwayEids>();
        }
        return away_eids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(away_eids != nullptr)
    {
        children["away-eids"] = away_eids;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
        site_registration.value_namespace = name_space;
        site_registration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registration")
    {
        site_registration.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "away-eids" || name == "site-registration")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{

    yang_name = "away-eids"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapCache::AwayEids::has_data() const
{
    return send_map_request.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapCache::AwayEids::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_map_request.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapCache::AwayEids::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::MapCache::AwayEids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.yfilter)) leaf_name_data.push_back(send_map_request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::MapCache::AwayEids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
        send_map_request.value_namespace = name_space;
        send_map_request.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::MapCache::AwayEids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-map-request")
    {
        send_map_request.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapCache::AwayEids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-map-request")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "map-cache-persistent"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapCachePersistent::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapCachePersistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapCachePersistent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::MapCachePersistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::MapCachePersistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::MapCachePersistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::MapCachePersistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "proxy-itr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::ProxyItr::~ProxyItr()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::ProxyItr::has_data() const
{
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::ProxyItr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::ProxyItr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::ProxyItr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::ProxyItr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::ProxyItr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::ProxyItr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "ipv6-addr")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::RouteExport::RouteExport()
    :
    site_registrations{YType::empty, "site-registrations"},
    away_eids{YType::empty, "away-eids"}
{

    yang_name = "route-export"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::RouteExport::~RouteExport()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::RouteExport::has_data() const
{
    return site_registrations.is_set
	|| away_eids.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::RouteExport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registrations.yfilter)
	|| ydk::is_set(away_eids.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::RouteExport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::RouteExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());
    if (away_eids.is_set || is_set(away_eids.yfilter)) leaf_name_data.push_back(away_eids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::RouteExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "away-eids")
    {
        away_eids = value;
        away_eids.value_namespace = name_space;
        away_eids.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::RouteExport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
    if(value_path == "away-eids")
    {
        away_eids.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::RouteExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registrations" || name == "away-eids")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
    	,
    priority(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::Default::UsePetr::~UsePetr()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::UsePetr::has_data() const
{
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default::UsePetr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_address.yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default::UsePetr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::Default::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr" <<"[locator-address='" <<locator_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::UsePetr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.yfilter)) leaf_name_data.push_back(locator_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::UsePetr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
        locator_address.value_namespace = name_space;
        locator_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::UsePetr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-address")
    {
        locator_address.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::UsePetr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "locator-address")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::Default::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{

    yang_name = "priority"; yang_parent_name = "use-petr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Service::Ipv6::Default::UsePetr::Priority::~Priority()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default::UsePetr::Priority::has_data() const
{
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default::UsePetr::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_value.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::Service::Ipv6::Default::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::Default::UsePetr::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.yfilter)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default::UsePetr::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-value")
    {
        priority_value = value;
        priority_value.value_namespace = name_space;
        priority_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Service::Ipv6::Default::UsePetr::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-value")
    {
        priority_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Service::Ipv6::Default::UsePetr::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-value" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::Service::Ipv6::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Service::Ipv6::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Service::Ipv6::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Service::Ipv6::DatabaseMapping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::DatabaseMapping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::DatabaseMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Service::Ipv6::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Service::Ipv6::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Service::Ipv6::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Service::Ipv6::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Service::Ipv6::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::Operator_::add {0, "add"};
const Enum::YLeaf Native::Router::Lisp::Default::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::Operator_::override {1, "override"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Encapsulation::lisp {0, "lisp"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Encapsulation::vxlan {1, "vxlan"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Default::Encapsulation::lisp {0, "lisp"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Default::Encapsulation::vxlan {1, "vxlan"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Default::Etr::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Encapsulation::lisp {0, "lisp"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Encapsulation::vxlan {1, "vxlan"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default::Encapsulation::lisp {0, "lisp"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default::Encapsulation::vxlan {1, "vxlan"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default::Etr::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};


}
}

