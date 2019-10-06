
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_215.hpp"
#include "Cisco_IOS_XE_native_217.hpp"
#include "Cisco_IOS_XE_native_216.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::Isis()
    :
    id{YType::str, "id"}
        ,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "isis"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::~Isis()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lisp_ip_route_import != nullptr)
    {
        _children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix::MaximumPrefix()
    :
    number{YType::int32, "number"},
    warning_only{YType::empty, "warning-only"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only1{YType::empty, "warning-only1"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| warning_only.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only1.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold1.yfilter)
	|| ydk::is_set(warning_only1.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.yfilter)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.yfilter)) leaf_name_data.push_back(warning_only1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold1")
    {
        threshold1 = value;
        threshold1.value_namespace = name_space;
        threshold1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only1")
    {
        warning_only1 = value;
        warning_only1.value_namespace = name_space;
        warning_only1.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold1")
    {
        threshold1.yfilter = yfilter;
    }
    if(value_path == "warning-only1")
    {
        warning_only1.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "warning-only" || name == "threshold" || name == "threshold1" || name == "warning-only1")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
        ,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "ospf"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::~Ospf()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lisp_ip_route_import != nullptr)
    {
        _children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::Ospfv3()
    :
    id{YType::uint16, "id"}
        ,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::~Ospfv3()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lisp_ip_route_import != nullptr)
    {
        _children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::Rip()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "rip"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::~Rip()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::has_data() const
{
    if (is_presence_container) return true;
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lisp_ip_route_import != nullptr)
    {
        _children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::Static()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "static"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::~Static()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::has_data() const
{
    if (is_presence_container) return true;
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lisp_ip_route_import != nullptr)
    {
        _children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::LispIpRouteImport::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::Database::Static::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MapCache()
    :
    bgp(this, {"id"})
    , connected(nullptr) // presence node
    , eigrp(this, {"id"})
    , isis(this, {"id"})
    , maximum_prefix(std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix>())
    , ospf(this, {"id"})
    , ospfv3(this, {"id"})
    , rip(nullptr) // presence node
    , static_(nullptr) // presence node
{
    maximum_prefix->parent = this;

    yang_name = "map-cache"; yang_parent_name = "route-import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::~MapCache()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<isis.len(); index++)
    {
        if(isis[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    return (connected !=  nullptr && connected->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::has_operation() const
{
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<isis.len(); index++)
    {
        if(isis[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp>();
        ent_->parent = this;
        bgp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp>();
        ent_->parent = this;
        eigrp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "isis")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis>();
        ent_->parent = this;
        isis.append(ent_);
        return ent_;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "ospf")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf>();
        ent_->parent = this;
        ospf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ospfv3")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3>();
        ent_->parent = this;
        ospfv3.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(connected != nullptr)
    {
        _children["connected"] = connected;
    }

    count_ = 0;
    for (auto ent_ : eigrp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : isis.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(maximum_prefix != nullptr)
    {
        _children["maximum-prefix"] = maximum_prefix;
    }

    count_ = 0;
    for (auto ent_ : ospf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ospfv3.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(rip != nullptr)
    {
        _children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "maximum-prefix" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::Bgp()
    :
    id{YType::str, "id"}
        ,
    map_cache_container(nullptr) // presence node
{

    yang_name = "bgp"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::~Bgp()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::Connected()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "connected"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::~Connected()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::has_data() const
{
    if (is_presence_container) return true;
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
        ,
    map_cache_container(nullptr) // presence node
{

    yang_name = "eigrp"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::~Eigrp()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::Isis()
    :
    id{YType::str, "id"}
        ,
    map_cache_container(nullptr) // presence node
{

    yang_name = "isis"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::~Isis()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::MaximumPrefix()
    :
    number{YType::int32, "number"},
    warning_only{YType::empty, "warning-only"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only1{YType::empty, "warning-only1"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| warning_only.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only1.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold1.yfilter)
	|| ydk::is_set(warning_only1.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.yfilter)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.yfilter)) leaf_name_data.push_back(warning_only1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold1")
    {
        threshold1 = value;
        threshold1.value_namespace = name_space;
        threshold1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only1")
    {
        warning_only1 = value;
        warning_only1.value_namespace = name_space;
        warning_only1.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold1")
    {
        threshold1.yfilter = yfilter;
    }
    if(value_path == "warning-only1")
    {
        warning_only1.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "warning-only" || name == "threshold" || name == "threshold1" || name == "warning-only1")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
        ,
    map_cache_container(nullptr) // presence node
{

    yang_name = "ospf"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::~Ospf()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::Ospfv3()
    :
    id{YType::uint16, "id"}
        ,
    map_cache_container(nullptr) // presence node
{

    yang_name = "ospfv3"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::~Ospfv3()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::Rip()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "rip"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::~Rip()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::has_data() const
{
    if (is_presence_container) return true;
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::Static()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "static"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::~Static()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::has_data() const
{
    if (is_presence_container) return true;
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SiteRegistration::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::EidTable::InstanceList::Ipv6::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SolicitMapRequest::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::EidTable::InstanceList::Ipv6::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::SourceLocator()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
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
    atm_subinterface(std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-locator"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::~SourceLocator()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
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

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::has_operation() const
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
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
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

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-locator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::get_name_leaf_data() const
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
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
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

void Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{

    yang_name = "use-petr"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::Ipv6::UsePetr::~UsePetr()
{
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::UsePetr::has_data() const
{
    if (is_presence_container) return true;
    return locator_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::UsePetr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::Ipv6::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr";
    ADD_KEY_TOKEN(locator_address, "locator-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::Ipv6::UsePetr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.yfilter)) leaf_name_data.push_back(locator_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::Ipv6::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::Ipv6::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::Ipv6::UsePetr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
        locator_address.value_namespace = name_space;
        locator_address.value_namespace_prefix = name_space_prefix;
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

void Native::Router::LispList::EidTable::InstanceList::Ipv6::UsePetr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-address")
    {
        locator_address.yfilter = yfilter;
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

bool Native::Router::LispList::EidTable::InstanceList::Ipv6::UsePetr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-address" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::LocReachAlgorithm()
    :
    rloc_probing{YType::empty, "rloc-probing"}
        ,
    lsb_reports(std::make_shared<Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::LsbReports>())
{
    lsb_reports->parent = this;

    yang_name = "loc-reach-algorithm"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::~LocReachAlgorithm()
{
}

bool Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::has_data() const
{
    if (is_presence_container) return true;
    return rloc_probing.is_set
	|| (lsb_reports !=  nullptr && lsb_reports->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rloc_probing.yfilter)
	|| (lsb_reports !=  nullptr && lsb_reports->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loc-reach-algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rloc_probing.is_set || is_set(rloc_probing.yfilter)) leaf_name_data.push_back(rloc_probing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsb-reports")
    {
        if(lsb_reports == nullptr)
        {
            lsb_reports = std::make_shared<Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::LsbReports>();
        }
        return lsb_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsb_reports != nullptr)
    {
        _children["lsb-reports"] = lsb_reports;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rloc-probing")
    {
        rloc_probing = value;
        rloc_probing.value_namespace = name_space;
        rloc_probing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rloc-probing")
    {
        rloc_probing.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsb-reports" || name == "rloc-probing")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::LsbReports::LsbReports()
    :
    do_not_transmit{YType::empty, "do-not-transmit"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "lsb-reports"; yang_parent_name = "loc-reach-algorithm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::LsbReports::~LsbReports()
{
}

bool Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::LsbReports::has_data() const
{
    if (is_presence_container) return true;
    return do_not_transmit.is_set
	|| ignore.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::LsbReports::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(do_not_transmit.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::LsbReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsb-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::LsbReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_transmit.is_set || is_set(do_not_transmit.yfilter)) leaf_name_data.push_back(do_not_transmit.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::LsbReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::LsbReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::LsbReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-transmit")
    {
        do_not_transmit = value;
        do_not_transmit.value_namespace = name_space;
        do_not_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::LsbReports::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-transmit")
    {
        do_not_transmit.yfilter = yfilter;
    }
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::LocReachAlgorithm::LsbReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-transmit" || name == "ignore")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::LocatorDown::LocatorDown()
    :
    address{YType::str, "address"},
    ipv4_interface{YType::str, "IPv4-interface"},
    ipv6_interface{YType::str, "IPv6-interface"}
{

    yang_name = "locator-down"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::LocatorDown::~LocatorDown()
{
}

bool Native::Router::LispList::EidTable::InstanceList::LocatorDown::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| ipv4_interface.is_set
	|| ipv6_interface.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::LocatorDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(ipv4_interface.yfilter)
	|| ydk::is_set(ipv6_interface.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::LocatorDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::LocatorDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (ipv4_interface.is_set || is_set(ipv4_interface.yfilter)) leaf_name_data.push_back(ipv4_interface.get_name_leafdata());
    if (ipv6_interface.is_set || is_set(ipv6_interface.yfilter)) leaf_name_data.push_back(ipv6_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::LocatorDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::LocatorDown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::LocatorDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "IPv4-interface")
    {
        ipv4_interface = value;
        ipv4_interface.value_namespace = name_space;
        ipv4_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "IPv6-interface")
    {
        ipv6_interface = value;
        ipv6_interface.value_namespace = name_space;
        ipv6_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::LocatorDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "IPv4-interface")
    {
        ipv4_interface.yfilter = yfilter;
    }
    if(value_path == "IPv6-interface")
    {
        ipv6_interface.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::LocatorDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "IPv4-interface" || name == "IPv6-interface")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::LocatorTable::LocatorTable()
    :
    vrf_name{YType::str, "vrf-name"},
    default_{YType::empty, "default"},
    vrf{YType::str, "vrf"}
{

    yang_name = "locator-table"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::LocatorTable::~LocatorTable()
{
}

bool Native::Router::LispList::EidTable::InstanceList::LocatorTable::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| default_.is_set
	|| vrf.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::LocatorTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::LocatorTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::LocatorTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::LocatorTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::LocatorTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::LocatorTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::LocatorTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::LocatorTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "default" || name == "vrf")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::MapRequest::MapRequest()
    :
    itr_rlocs{YType::str, "itr-rlocs"}
{

    yang_name = "map-request"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::MapRequest::~MapRequest()
{
}

bool Native::Router::LispList::EidTable::InstanceList::MapRequest::has_data() const
{
    if (is_presence_container) return true;
    return itr_rlocs.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::MapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr_rlocs.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::MapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr_rlocs.is_set || is_set(itr_rlocs.yfilter)) leaf_name_data.push_back(itr_rlocs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::MapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr-rlocs")
    {
        itr_rlocs = value;
        itr_rlocs.value_namespace = name_space;
        itr_rlocs.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::MapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr-rlocs")
    {
        itr_rlocs.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::MapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr-rlocs")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::MapServer::MapServer()
    :
    rloc(std::make_shared<Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc>())
    , site_registration(std::make_shared<Native::Router::LispList::EidTable::InstanceList::MapServer::SiteRegistration>())
    , nmr(std::make_shared<Native::Router::LispList::EidTable::InstanceList::MapServer::Nmr>())
    , session(std::make_shared<Native::Router::LispList::EidTable::InstanceList::MapServer::Session>())
{
    rloc->parent = this;
    site_registration->parent = this;
    nmr->parent = this;
    session->parent = this;

    yang_name = "map-server"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::MapServer::~MapServer()
{
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return (rloc !=  nullptr && rloc->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (nmr !=  nullptr && nmr->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (rloc !=  nullptr && rloc->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (nmr !=  nullptr && nmr->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rloc")
    {
        if(rloc == nullptr)
        {
            rloc = std::make_shared<Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc>();
        }
        return rloc;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::LispList::EidTable::InstanceList::MapServer::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "nmr")
    {
        if(nmr == nullptr)
        {
            nmr = std::make_shared<Native::Router::LispList::EidTable::InstanceList::MapServer::Nmr>();
        }
        return nmr;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Native::Router::LispList::EidTable::InstanceList::MapServer::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rloc != nullptr)
    {
        _children["rloc"] = rloc;
    }

    if(site_registration != nullptr)
    {
        _children["site-registration"] = site_registration;
    }

    if(nmr != nullptr)
    {
        _children["nmr"] = nmr;
    }

    if(session != nullptr)
    {
        _children["session"] = session;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::EidTable::InstanceList::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rloc" || name == "site-registration" || name == "nmr" || name == "session")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Rloc()
    :
    members(std::make_shared<Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members>())
{
    members->parent = this;

    yang_name = "rloc"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::~Rloc()
{
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::has_data() const
{
    if (is_presence_container) return true;
    return (members !=  nullptr && members->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::has_operation() const
{
    return is_set(yfilter)
	|| (members !=  nullptr && members->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rloc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members>();
        }
        return members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(members != nullptr)
    {
        _children["members"] = members;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "members")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::Members()
    :
    distribute{YType::empty, "distribute"}
        ,
    modify_discovered(std::make_shared<Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered>())
{
    modify_discovered->parent = this;

    yang_name = "members"; yang_parent_name = "rloc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::~Members()
{
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::has_data() const
{
    if (is_presence_container) return true;
    return distribute.is_set
	|| (modify_discovered !=  nullptr && modify_discovered->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distribute.yfilter)
	|| (modify_discovered !=  nullptr && modify_discovered->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distribute.is_set || is_set(distribute.yfilter)) leaf_name_data.push_back(distribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "modify-discovered")
    {
        if(modify_discovered == nullptr)
        {
            modify_discovered = std::make_shared<Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered>();
        }
        return modify_discovered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(modify_discovered != nullptr)
    {
        _children["modify-discovered"] = modify_discovered;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distribute")
    {
        distribute = value;
        distribute.value_namespace = name_space;
        distribute.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distribute")
    {
        distribute.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modify-discovered" || name == "distribute")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::ModifyDiscovered()
    :
    operator_{YType::enumeration, "operator"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "modify-discovered"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::~ModifyDiscovered()
{
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::has_data() const
{
    if (is_presence_container) return true;
    return operator_.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modify-discovered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::MapServer::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::MapServer::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::SiteRegistration::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::MapServer::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::MapServer::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::MapServer::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::MapServer::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::MapServer::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::EidTable::InstanceList::MapServer::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::EidTable::InstanceList::MapServer::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::MapServer::Nmr::Nmr()
    :
    non_site_ttl{YType::uint16, "non-site-ttl"}
{

    yang_name = "nmr"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::MapServer::Nmr::~Nmr()
{
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::Nmr::has_data() const
{
    if (is_presence_container) return true;
    return non_site_ttl.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::Nmr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_site_ttl.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::MapServer::Nmr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nmr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::MapServer::Nmr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_site_ttl.is_set || is_set(non_site_ttl.yfilter)) leaf_name_data.push_back(non_site_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::MapServer::Nmr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::MapServer::Nmr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::MapServer::Nmr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-site-ttl")
    {
        non_site_ttl = value;
        non_site_ttl.value_namespace = name_space;
        non_site_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::MapServer::Nmr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-site-ttl")
    {
        non_site_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::Nmr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-site-ttl")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::MapServer::Session::Session()
    :
    passive_open{YType::str, "passive-open"}
{

    yang_name = "session"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::MapServer::Session::~Session()
{
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::Session::has_data() const
{
    if (is_presence_container) return true;
    return passive_open.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive_open.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::MapServer::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::MapServer::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive_open.is_set || is_set(passive_open.yfilter)) leaf_name_data.push_back(passive_open.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::MapServer::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::MapServer::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::MapServer::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive-open")
    {
        passive_open = value;
        passive_open.value_namespace = name_space;
        passive_open.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::MapServer::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive-open")
    {
        passive_open.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::MapServer::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-open")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::OtherXtrProbe::OtherXtrProbe()
    :
    period{YType::uint16, "period"}
{

    yang_name = "other-xtr-probe"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::OtherXtrProbe::~OtherXtrProbe()
{
}

bool Native::Router::LispList::EidTable::InstanceList::OtherXtrProbe::has_data() const
{
    if (is_presence_container) return true;
    return period.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::OtherXtrProbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::OtherXtrProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "other-xtr-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::OtherXtrProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::OtherXtrProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::OtherXtrProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::OtherXtrProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::EidTable::InstanceList::OtherXtrProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Router::LispList::EidTable::InstanceList::OtherXtrProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::RemoteRlocProbe::RemoteRlocProbe()
    :
    on_membership_change{YType::empty, "on-membership-change"},
    on_route_change{YType::empty, "on-route-change"}
{

    yang_name = "remote-rloc-probe"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::RemoteRlocProbe::~RemoteRlocProbe()
{
}

bool Native::Router::LispList::EidTable::InstanceList::RemoteRlocProbe::has_data() const
{
    if (is_presence_container) return true;
    return on_membership_change.is_set
	|| on_route_change.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::RemoteRlocProbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on_membership_change.yfilter)
	|| ydk::is_set(on_route_change.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::RemoteRlocProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-rloc-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::RemoteRlocProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on_membership_change.is_set || is_set(on_membership_change.yfilter)) leaf_name_data.push_back(on_membership_change.get_name_leafdata());
    if (on_route_change.is_set || is_set(on_route_change.yfilter)) leaf_name_data.push_back(on_route_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::RemoteRlocProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::RemoteRlocProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::RemoteRlocProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::EidTable::InstanceList::RemoteRlocProbe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::EidTable::InstanceList::RemoteRlocProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-membership-change" || name == "on-route-change")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::MapCache::MapCache()
    :
    eid_prefix{YType::str, "eid-prefix"},
    drop{YType::empty, "drop"},
    map_request{YType::empty, "map-request"},
    native_forward{YType::empty, "native-forward"}
        ,
    etr_interface_ip(std::make_shared<Native::Router::LispList::EidTable::InstanceList::MapCache::EtrInterfaceIp>())
{
    etr_interface_ip->parent = this;

    yang_name = "map-cache"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::MapCache::~MapCache()
{
}

bool Native::Router::LispList::EidTable::InstanceList::MapCache::has_data() const
{
    if (is_presence_container) return true;
    return eid_prefix.is_set
	|| drop.is_set
	|| map_request.is_set
	|| native_forward.is_set
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_data());
}

bool Native::Router::LispList::EidTable::InstanceList::MapCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(map_request.yfilter)
	|| ydk::is_set(native_forward.yfilter)
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_operation());
}

std::string Native::Router::LispList::EidTable::InstanceList::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    ADD_KEY_TOKEN(eid_prefix, "eid-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (map_request.is_set || is_set(map_request.yfilter)) leaf_name_data.push_back(map_request.get_name_leafdata());
    if (native_forward.is_set || is_set(native_forward.yfilter)) leaf_name_data.push_back(native_forward.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etr-interface-ip")
    {
        if(etr_interface_ip == nullptr)
        {
            etr_interface_ip = std::make_shared<Native::Router::LispList::EidTable::InstanceList::MapCache::EtrInterfaceIp>();
        }
        return etr_interface_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(etr_interface_ip != nullptr)
    {
        _children["etr-interface-ip"] = etr_interface_ip;
    }

    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::EidTable::InstanceList::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::EidTable::InstanceList::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip" || name == "eid-prefix" || name == "drop" || name == "map-request" || name == "native-forward")
        return true;
    return false;
}

Native::Router::LispList::EidTable::InstanceList::MapCache::EtrInterfaceIp::EtrInterfaceIp()
    :
    etr_interface_ip_address{YType::str, "etr-interface-ip-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{

    yang_name = "etr-interface-ip"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::EidTable::InstanceList::MapCache::EtrInterfaceIp::~EtrInterfaceIp()
{
}

bool Native::Router::LispList::EidTable::InstanceList::MapCache::EtrInterfaceIp::has_data() const
{
    if (is_presence_container) return true;
    return etr_interface_ip_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::EidTable::InstanceList::MapCache::EtrInterfaceIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr_interface_ip_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::LispList::EidTable::InstanceList::MapCache::EtrInterfaceIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-interface-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::EidTable::InstanceList::MapCache::EtrInterfaceIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr_interface_ip_address.is_set || is_set(etr_interface_ip_address.yfilter)) leaf_name_data.push_back(etr_interface_ip_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::EidTable::InstanceList::MapCache::EtrInterfaceIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::EidTable::InstanceList::MapCache::EtrInterfaceIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::EidTable::InstanceList::MapCache::EtrInterfaceIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::EidTable::InstanceList::MapCache::EtrInterfaceIp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::EidTable::InstanceList::MapCache::EtrInterfaceIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip-address" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::LispList::Security::Security()
    :
    strong{YType::empty, "strong"}
{

    yang_name = "security"; yang_parent_name = "lisp-list"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::Security::~Security()
{
}

bool Native::Router::LispList::Security::has_data() const
{
    if (is_presence_container) return true;
    return strong.is_set;
}

bool Native::Router::LispList::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(strong.yfilter);
}

std::string Native::Router::LispList::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (strong.is_set || is_set(strong.yfilter)) leaf_name_data.push_back(strong.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "strong")
    {
        strong = value;
        strong.value_namespace = name_space;
        strong.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "strong")
    {
        strong.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "strong")
        return true;
    return false;
}

Native::Router::LispList::Site::Site()
    :
    sname{YType::str, "sname"},
    description{YType::str, "description"},
    site_id{YType::uint32, "site-id"}
        ,
    default_(std::make_shared<Native::Router::LispList::Site::Default>())
    , authentication_key(std::make_shared<Native::Router::LispList::Site::AuthenticationKey>())
    , allowed_locator(std::make_shared<Native::Router::LispList::Site::AllowedLocator>())
    , eid_prefix(std::make_shared<Native::Router::LispList::Site::EidPrefix>())
    , eid_record(std::make_shared<Native::Router::LispList::Site::EidRecord>())
{
    default_->parent = this;
    authentication_key->parent = this;
    allowed_locator->parent = this;
    eid_prefix->parent = this;
    eid_record->parent = this;

    yang_name = "site"; yang_parent_name = "lisp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::~Site()
{
}

bool Native::Router::LispList::Site::has_data() const
{
    if (is_presence_container) return true;
    return sname.is_set
	|| description.is_set
	|| site_id.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (authentication_key !=  nullptr && authentication_key->has_data())
	|| (allowed_locator !=  nullptr && allowed_locator->has_data())
	|| (eid_prefix !=  nullptr && eid_prefix->has_data())
	|| (eid_record !=  nullptr && eid_record->has_data());
}

bool Native::Router::LispList::Site::has_operation() const
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

std::string Native::Router::LispList::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site";
    ADD_KEY_TOKEN(sname, "sname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sname.is_set || is_set(sname.yfilter)) leaf_name_data.push_back(sname.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (site_id.is_set || is_set(site_id.yfilter)) leaf_name_data.push_back(site_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::LispList::Site::Default>();
        }
        return default_;
    }

    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::LispList::Site::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "allowed-locator")
    {
        if(allowed_locator == nullptr)
        {
            allowed_locator = std::make_shared<Native::Router::LispList::Site::AllowedLocator>();
        }
        return allowed_locator;
    }

    if(child_yang_name == "eid-prefix")
    {
        if(eid_prefix == nullptr)
        {
            eid_prefix = std::make_shared<Native::Router::LispList::Site::EidPrefix>();
        }
        return eid_prefix;
    }

    if(child_yang_name == "eid-record")
    {
        if(eid_record == nullptr)
        {
            eid_record = std::make_shared<Native::Router::LispList::Site::EidRecord>();
        }
        return eid_record;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(authentication_key != nullptr)
    {
        _children["authentication-key"] = authentication_key;
    }

    if(allowed_locator != nullptr)
    {
        _children["allowed-locator"] = allowed_locator;
    }

    if(eid_prefix != nullptr)
    {
        _children["eid-prefix"] = eid_prefix;
    }

    if(eid_record != nullptr)
    {
        _children["eid-record"] = eid_record;
    }

    return _children;
}

void Native::Router::LispList::Site::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "authentication-key" || name == "allowed-locator" || name == "eid-prefix" || name == "eid-record" || name == "sname" || name == "description" || name == "site-id")
        return true;
    return false;
}

Native::Router::LispList::Site::Default::Default()
    :
    description{YType::str, "description"},
    site_id{YType::uint32, "site-id"}
        ,
    authentication_key(std::make_shared<Native::Router::LispList::Site::Default::AuthenticationKey>())
    , allowed_locator(std::make_shared<Native::Router::LispList::Site::Default::AllowedLocator>())
    , eid_prefix(std::make_shared<Native::Router::LispList::Site::Default::EidPrefix>())
    , eid_record(std::make_shared<Native::Router::LispList::Site::Default::EidRecord>())
{
    authentication_key->parent = this;
    allowed_locator->parent = this;
    eid_prefix->parent = this;
    eid_record->parent = this;

    yang_name = "default"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::Default::~Default()
{
}

bool Native::Router::LispList::Site::Default::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| site_id.is_set
	|| (authentication_key !=  nullptr && authentication_key->has_data())
	|| (allowed_locator !=  nullptr && allowed_locator->has_data())
	|| (eid_prefix !=  nullptr && eid_prefix->has_data())
	|| (eid_record !=  nullptr && eid_record->has_data());
}

bool Native::Router::LispList::Site::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(site_id.yfilter)
	|| (authentication_key !=  nullptr && authentication_key->has_operation())
	|| (allowed_locator !=  nullptr && allowed_locator->has_operation())
	|| (eid_prefix !=  nullptr && eid_prefix->has_operation())
	|| (eid_record !=  nullptr && eid_record->has_operation());
}

std::string Native::Router::LispList::Site::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (site_id.is_set || is_set(site_id.yfilter)) leaf_name_data.push_back(site_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::LispList::Site::Default::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "allowed-locator")
    {
        if(allowed_locator == nullptr)
        {
            allowed_locator = std::make_shared<Native::Router::LispList::Site::Default::AllowedLocator>();
        }
        return allowed_locator;
    }

    if(child_yang_name == "eid-prefix")
    {
        if(eid_prefix == nullptr)
        {
            eid_prefix = std::make_shared<Native::Router::LispList::Site::Default::EidPrefix>();
        }
        return eid_prefix;
    }

    if(child_yang_name == "eid-record")
    {
        if(eid_record == nullptr)
        {
            eid_record = std::make_shared<Native::Router::LispList::Site::Default::EidRecord>();
        }
        return eid_record;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication_key != nullptr)
    {
        _children["authentication-key"] = authentication_key;
    }

    if(allowed_locator != nullptr)
    {
        _children["allowed-locator"] = allowed_locator;
    }

    if(eid_prefix != nullptr)
    {
        _children["eid-prefix"] = eid_prefix;
    }

    if(eid_record != nullptr)
    {
        _children["eid-record"] = eid_record;
    }

    return _children;
}

void Native::Router::LispList::Site::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::Default::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-key" || name == "allowed-locator" || name == "eid-prefix" || name == "eid-record" || name == "description" || name == "site-id")
        return true;
    return false;
}

Native::Router::LispList::Site::Default::AuthenticationKey::AuthenticationKey()
    :
    unc_pwd{YType::str, "unc-pwd"},
    key_0{YType::str, "key-0"},
    key_6{YType::str, "key-6"},
    key_7{YType::str, "key-7"}
{

    yang_name = "authentication-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::Default::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::LispList::Site::Default::AuthenticationKey::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| key_0.is_set
	|| key_6.is_set
	|| key_7.is_set;
}

bool Native::Router::LispList::Site::Default::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(key_0.yfilter)
	|| ydk::is_set(key_6.yfilter)
	|| ydk::is_set(key_7.yfilter);
}

std::string Native::Router::LispList::Site::Default::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::Default::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (key_0.is_set || is_set(key_0.yfilter)) leaf_name_data.push_back(key_0.get_name_leafdata());
    if (key_6.is_set || is_set(key_6.yfilter)) leaf_name_data.push_back(key_6.get_name_leafdata());
    if (key_7.is_set || is_set(key_7.yfilter)) leaf_name_data.push_back(key_7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::Default::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::Default::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Site::Default::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::Default::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::Default::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::Site::Default::AllowedLocator::AllowedLocator()
    :
    ls_ipv4{YType::str, "ls-ipv4"},
    ls_ipv6{YType::str, "ls-ipv6"}
        ,
    list(std::make_shared<Native::Router::LispList::Site::Default::AllowedLocator::List>())
{
    list->parent = this;

    yang_name = "allowed-locator"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::Default::AllowedLocator::~AllowedLocator()
{
}

bool Native::Router::LispList::Site::Default::AllowedLocator::has_data() const
{
    if (is_presence_container) return true;
    return ls_ipv4.is_set
	|| ls_ipv6.is_set
	|| (list !=  nullptr && list->has_data());
}

bool Native::Router::LispList::Site::Default::AllowedLocator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ls_ipv4.yfilter)
	|| ydk::is_set(ls_ipv6.yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::LispList::Site::Default::AllowedLocator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowed-locator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::Default::AllowedLocator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ls_ipv4.is_set || is_set(ls_ipv4.yfilter)) leaf_name_data.push_back(ls_ipv4.get_name_leafdata());
    if (ls_ipv6.is_set || is_set(ls_ipv6.yfilter)) leaf_name_data.push_back(ls_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::Default::AllowedLocator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::LispList::Site::Default::AllowedLocator::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::Default::AllowedLocator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    return _children;
}

void Native::Router::LispList::Site::Default::AllowedLocator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::Default::AllowedLocator::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::Default::AllowedLocator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "ls-ipv4" || name == "ls-ipv6")
        return true;
    return false;
}

Native::Router::LispList::Site::Default::AllowedLocator::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "allowed-locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::Default::AllowedLocator::List::~List()
{
}

bool Native::Router::LispList::Site::Default::AllowedLocator::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::LispList::Site::Default::AllowedLocator::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::LispList::Site::Default::AllowedLocator::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::Default::AllowedLocator::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::Default::AllowedLocator::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::Default::AllowedLocator::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Site::Default::AllowedLocator::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::Default::AllowedLocator::List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::Default::AllowedLocator::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::LispList::Site::Default::EidPrefix::EidPrefix()
    :
    any_mac{YType::empty, "any-mac"}
        ,
    prefixes(this, {"prefix"})
    , instance_id(this, {"id"})
{

    yang_name = "eid-prefix"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::Default::EidPrefix::~EidPrefix()
{
}

bool Native::Router::LispList::Site::Default::EidPrefix::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instance_id.len(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    return any_mac.is_set;
}

bool Native::Router::LispList::Site::Default::EidPrefix::has_operation() const
{
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instance_id.len(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(any_mac.yfilter);
}

std::string Native::Router::LispList::Site::Default::EidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::Default::EidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::Default::EidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Site::Default::EidPrefix::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    if(child_yang_name == "instance-id")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Site::Default::EidPrefix::InstanceId>();
        ent_->parent = this;
        instance_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::Default::EidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : instance_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::Site::Default::EidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-mac")
    {
        any_mac = value;
        any_mac.value_namespace = name_space;
        any_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Site::Default::EidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-mac")
    {
        any_mac.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Site::Default::EidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "instance-id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::LispList::Site::Default::EidPrefix::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "eid-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::Default::EidPrefix::Prefixes::~Prefixes()
{
}

bool Native::Router::LispList::Site::Default::EidPrefix::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::LispList::Site::Default::EidPrefix::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::LispList::Site::Default::EidPrefix::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::Default::EidPrefix::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::Default::EidPrefix::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::Default::EidPrefix::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Site::Default::EidPrefix::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::Default::EidPrefix::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::Default::EidPrefix::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::LispList::Site::Default::EidPrefix::InstanceId::InstanceId()
    :
    id{YType::uint32, "id"},
    any_mac{YType::empty, "any-mac"}
        ,
    prefixes(this, {"prefix"})
{

    yang_name = "instance-id"; yang_parent_name = "eid-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::Default::EidPrefix::InstanceId::~InstanceId()
{
}

bool Native::Router::LispList::Site::Default::EidPrefix::InstanceId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return id.is_set
	|| any_mac.is_set;
}

bool Native::Router::LispList::Site::Default::EidPrefix::InstanceId::has_operation() const
{
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(any_mac.yfilter);
}

std::string Native::Router::LispList::Site::Default::EidPrefix::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::Default::EidPrefix::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::Default::EidPrefix::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Site::Default::EidPrefix::InstanceId::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::Default::EidPrefix::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::Site::Default::EidPrefix::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::Default::EidPrefix::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::Default::EidPrefix::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::LispList::Site::Default::EidPrefix::InstanceId::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "instance-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::Default::EidPrefix::InstanceId::Prefixes::~Prefixes()
{
}

bool Native::Router::LispList::Site::Default::EidPrefix::InstanceId::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::LispList::Site::Default::EidPrefix::InstanceId::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::LispList::Site::Default::EidPrefix::InstanceId::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::Default::EidPrefix::InstanceId::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::Default::EidPrefix::InstanceId::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::Default::EidPrefix::InstanceId::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Site::Default::EidPrefix::InstanceId::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::Default::EidPrefix::InstanceId::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::Default::EidPrefix::InstanceId::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::LispList::Site::Default::EidRecord::EidRecord()
    :
    any_mac{YType::empty, "any-mac"}
        ,
    prefixes(this, {"prefix"})
    , instance_id(this, {"id"})
{

    yang_name = "eid-record"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::Default::EidRecord::~EidRecord()
{
}

bool Native::Router::LispList::Site::Default::EidRecord::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instance_id.len(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    return any_mac.is_set;
}

bool Native::Router::LispList::Site::Default::EidRecord::has_operation() const
{
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instance_id.len(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(any_mac.yfilter);
}

std::string Native::Router::LispList::Site::Default::EidRecord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-record";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::Default::EidRecord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::Default::EidRecord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Site::Default::EidRecord::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    if(child_yang_name == "instance-id")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Site::Default::EidRecord::InstanceId>();
        ent_->parent = this;
        instance_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::Default::EidRecord::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : instance_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::Site::Default::EidRecord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-mac")
    {
        any_mac = value;
        any_mac.value_namespace = name_space;
        any_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Site::Default::EidRecord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-mac")
    {
        any_mac.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Site::Default::EidRecord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "instance-id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::LispList::Site::Default::EidRecord::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "eid-record"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::Default::EidRecord::Prefixes::~Prefixes()
{
}

bool Native::Router::LispList::Site::Default::EidRecord::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::LispList::Site::Default::EidRecord::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::LispList::Site::Default::EidRecord::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::Default::EidRecord::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::Default::EidRecord::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::Default::EidRecord::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Site::Default::EidRecord::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::Default::EidRecord::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::Default::EidRecord::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::LispList::Site::Default::EidRecord::InstanceId::InstanceId()
    :
    id{YType::uint32, "id"},
    any_mac{YType::empty, "any-mac"}
        ,
    prefixes(this, {"prefix"})
{

    yang_name = "instance-id"; yang_parent_name = "eid-record"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::Default::EidRecord::InstanceId::~InstanceId()
{
}

bool Native::Router::LispList::Site::Default::EidRecord::InstanceId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return id.is_set
	|| any_mac.is_set;
}

bool Native::Router::LispList::Site::Default::EidRecord::InstanceId::has_operation() const
{
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(any_mac.yfilter);
}

std::string Native::Router::LispList::Site::Default::EidRecord::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::Default::EidRecord::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::Default::EidRecord::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Site::Default::EidRecord::InstanceId::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::Default::EidRecord::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::Site::Default::EidRecord::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::Default::EidRecord::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::Default::EidRecord::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::LispList::Site::Default::EidRecord::InstanceId::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "instance-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::Default::EidRecord::InstanceId::Prefixes::~Prefixes()
{
}

bool Native::Router::LispList::Site::Default::EidRecord::InstanceId::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::LispList::Site::Default::EidRecord::InstanceId::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::LispList::Site::Default::EidRecord::InstanceId::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::Default::EidRecord::InstanceId::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::Default::EidRecord::InstanceId::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::Default::EidRecord::InstanceId::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Site::Default::EidRecord::InstanceId::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::Default::EidRecord::InstanceId::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::Default::EidRecord::InstanceId::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::LispList::Site::AuthenticationKey::AuthenticationKey()
    :
    unc_pwd{YType::str, "unc-pwd"},
    key_0{YType::str, "key-0"},
    key_6{YType::str, "key-6"},
    key_7{YType::str, "key-7"}
{

    yang_name = "authentication-key"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::LispList::Site::AuthenticationKey::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| key_0.is_set
	|| key_6.is_set
	|| key_7.is_set;
}

bool Native::Router::LispList::Site::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(key_0.yfilter)
	|| ydk::is_set(key_6.yfilter)
	|| ydk::is_set(key_7.yfilter);
}

std::string Native::Router::LispList::Site::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (key_0.is_set || is_set(key_0.yfilter)) leaf_name_data.push_back(key_0.get_name_leafdata());
    if (key_6.is_set || is_set(key_6.yfilter)) leaf_name_data.push_back(key_6.get_name_leafdata());
    if (key_7.is_set || is_set(key_7.yfilter)) leaf_name_data.push_back(key_7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Site::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::Site::AllowedLocator::AllowedLocator()
    :
    ls_ipv4{YType::str, "ls-ipv4"},
    ls_ipv6{YType::str, "ls-ipv6"}
        ,
    list(std::make_shared<Native::Router::LispList::Site::AllowedLocator::List>())
{
    list->parent = this;

    yang_name = "allowed-locator"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::AllowedLocator::~AllowedLocator()
{
}

bool Native::Router::LispList::Site::AllowedLocator::has_data() const
{
    if (is_presence_container) return true;
    return ls_ipv4.is_set
	|| ls_ipv6.is_set
	|| (list !=  nullptr && list->has_data());
}

bool Native::Router::LispList::Site::AllowedLocator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ls_ipv4.yfilter)
	|| ydk::is_set(ls_ipv6.yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::LispList::Site::AllowedLocator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowed-locator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::AllowedLocator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ls_ipv4.is_set || is_set(ls_ipv4.yfilter)) leaf_name_data.push_back(ls_ipv4.get_name_leafdata());
    if (ls_ipv6.is_set || is_set(ls_ipv6.yfilter)) leaf_name_data.push_back(ls_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::AllowedLocator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::LispList::Site::AllowedLocator::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::AllowedLocator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    return _children;
}

void Native::Router::LispList::Site::AllowedLocator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::AllowedLocator::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::AllowedLocator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "ls-ipv4" || name == "ls-ipv6")
        return true;
    return false;
}

Native::Router::LispList::Site::AllowedLocator::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "allowed-locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::AllowedLocator::List::~List()
{
}

bool Native::Router::LispList::Site::AllowedLocator::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::LispList::Site::AllowedLocator::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::LispList::Site::AllowedLocator::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::AllowedLocator::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::AllowedLocator::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::AllowedLocator::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Site::AllowedLocator::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::AllowedLocator::List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::AllowedLocator::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::LispList::Site::EidPrefix::EidPrefix()
    :
    any_mac{YType::empty, "any-mac"}
        ,
    prefixes(this, {"prefix"})
    , instance_id(this, {"id"})
{

    yang_name = "eid-prefix"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::EidPrefix::~EidPrefix()
{
}

bool Native::Router::LispList::Site::EidPrefix::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instance_id.len(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    return any_mac.is_set;
}

bool Native::Router::LispList::Site::EidPrefix::has_operation() const
{
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instance_id.len(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(any_mac.yfilter);
}

std::string Native::Router::LispList::Site::EidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::EidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::EidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Site::EidPrefix::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    if(child_yang_name == "instance-id")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Site::EidPrefix::InstanceId>();
        ent_->parent = this;
        instance_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::EidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : instance_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::Site::EidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-mac")
    {
        any_mac = value;
        any_mac.value_namespace = name_space;
        any_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Site::EidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-mac")
    {
        any_mac.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Site::EidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "instance-id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::LispList::Site::EidPrefix::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "eid-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::EidPrefix::Prefixes::~Prefixes()
{
}

bool Native::Router::LispList::Site::EidPrefix::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::LispList::Site::EidPrefix::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::LispList::Site::EidPrefix::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::EidPrefix::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::EidPrefix::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::EidPrefix::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Site::EidPrefix::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::EidPrefix::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::EidPrefix::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::LispList::Site::EidPrefix::InstanceId::InstanceId()
    :
    id{YType::uint32, "id"},
    any_mac{YType::empty, "any-mac"}
        ,
    prefixes(this, {"prefix"})
{

    yang_name = "instance-id"; yang_parent_name = "eid-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::EidPrefix::InstanceId::~InstanceId()
{
}

bool Native::Router::LispList::Site::EidPrefix::InstanceId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return id.is_set
	|| any_mac.is_set;
}

bool Native::Router::LispList::Site::EidPrefix::InstanceId::has_operation() const
{
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(any_mac.yfilter);
}

std::string Native::Router::LispList::Site::EidPrefix::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::EidPrefix::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::EidPrefix::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Site::EidPrefix::InstanceId::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::EidPrefix::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::Site::EidPrefix::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::EidPrefix::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::EidPrefix::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::LispList::Site::EidPrefix::InstanceId::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "instance-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::EidPrefix::InstanceId::Prefixes::~Prefixes()
{
}

bool Native::Router::LispList::Site::EidPrefix::InstanceId::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::LispList::Site::EidPrefix::InstanceId::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::LispList::Site::EidPrefix::InstanceId::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::EidPrefix::InstanceId::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::EidPrefix::InstanceId::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::EidPrefix::InstanceId::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Site::EidPrefix::InstanceId::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::EidPrefix::InstanceId::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::EidPrefix::InstanceId::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::LispList::Site::EidRecord::EidRecord()
    :
    any_mac{YType::empty, "any-mac"}
        ,
    prefixes(this, {"prefix"})
    , instance_id(this, {"id"})
{

    yang_name = "eid-record"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::EidRecord::~EidRecord()
{
}

bool Native::Router::LispList::Site::EidRecord::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instance_id.len(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    return any_mac.is_set;
}

bool Native::Router::LispList::Site::EidRecord::has_operation() const
{
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instance_id.len(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(any_mac.yfilter);
}

std::string Native::Router::LispList::Site::EidRecord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-record";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::EidRecord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::EidRecord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Site::EidRecord::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    if(child_yang_name == "instance-id")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Site::EidRecord::InstanceId>();
        ent_->parent = this;
        instance_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::EidRecord::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : instance_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::Site::EidRecord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-mac")
    {
        any_mac = value;
        any_mac.value_namespace = name_space;
        any_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Site::EidRecord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-mac")
    {
        any_mac.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Site::EidRecord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "instance-id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::LispList::Site::EidRecord::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "eid-record"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::EidRecord::Prefixes::~Prefixes()
{
}

bool Native::Router::LispList::Site::EidRecord::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::LispList::Site::EidRecord::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::LispList::Site::EidRecord::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::EidRecord::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::EidRecord::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::EidRecord::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Site::EidRecord::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::EidRecord::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::EidRecord::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::LispList::Site::EidRecord::InstanceId::InstanceId()
    :
    id{YType::uint32, "id"},
    any_mac{YType::empty, "any-mac"}
        ,
    prefixes(this, {"prefix"})
{

    yang_name = "instance-id"; yang_parent_name = "eid-record"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::EidRecord::InstanceId::~InstanceId()
{
}

bool Native::Router::LispList::Site::EidRecord::InstanceId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return id.is_set
	|| any_mac.is_set;
}

bool Native::Router::LispList::Site::EidRecord::InstanceId::has_operation() const
{
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(any_mac.yfilter);
}

std::string Native::Router::LispList::Site::EidRecord::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::EidRecord::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::EidRecord::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Site::EidRecord::InstanceId::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::EidRecord::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::Site::EidRecord::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::EidRecord::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::EidRecord::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::LispList::Site::EidRecord::InstanceId::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "instance-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Site::EidRecord::InstanceId::Prefixes::~Prefixes()
{
}

bool Native::Router::LispList::Site::EidRecord::InstanceId::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::LispList::Site::EidRecord::InstanceId::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::LispList::Site::EidRecord::InstanceId::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Site::EidRecord::InstanceId::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Site::EidRecord::InstanceId::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Site::EidRecord::InstanceId::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Site::EidRecord::InstanceId::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Site::EidRecord::InstanceId::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Site::EidRecord::InstanceId::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::LispList::Syslog::Syslog()
    :
    verbose{YType::empty, "verbose"}
        ,
    session(std::make_shared<Native::Router::LispList::Syslog::Session>())
{
    session->parent = this;

    yang_name = "syslog"; yang_parent_name = "lisp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Syslog::~Syslog()
{
}

bool Native::Router::LispList::Syslog::has_data() const
{
    if (is_presence_container) return true;
    return verbose.is_set
	|| (session !=  nullptr && session->has_data());
}

bool Native::Router::LispList::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(verbose.yfilter)
	|| (session !=  nullptr && session->has_operation());
}

std::string Native::Router::LispList::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (verbose.is_set || is_set(verbose.yfilter)) leaf_name_data.push_back(verbose.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Native::Router::LispList::Syslog::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    return _children;
}

void Native::Router::LispList::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "verbose")
    {
        verbose = value;
        verbose.value_namespace = name_space;
        verbose.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "verbose")
    {
        verbose.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "verbose")
        return true;
    return false;
}

Native::Router::LispList::Syslog::Session::Session()
    :
    changes{YType::empty, "changes"}
{

    yang_name = "session"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Syslog::Session::~Session()
{
}

bool Native::Router::LispList::Syslog::Session::has_data() const
{
    if (is_presence_container) return true;
    return changes.is_set;
}

bool Native::Router::LispList::Syslog::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(changes.yfilter);
}

std::string Native::Router::LispList::Syslog::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Syslog::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (changes.is_set || is_set(changes.yfilter)) leaf_name_data.push_back(changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Syslog::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Syslog::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Syslog::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "changes")
    {
        changes = value;
        changes.value_namespace = name_space;
        changes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Syslog::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "changes")
    {
        changes.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Syslog::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "changes")
        return true;
    return false;
}

Native::Router::Eigrp::Eigrp()
    :
    id{YType::str, "id"},
    auto_summary{YType::empty, "auto-summary"},
    maximum_paths{YType::uint8, "maximum-paths"},
    nsf{YType::empty, "nsf"},
    shutdown{YType::empty, "shutdown"},
    variance{YType::uint8, "variance"}
        ,
    passive_interface(std::make_shared<Native::Router::Eigrp::PassiveInterface>())
    , address_family(this, {"type"})
    , af_interface(this, {"name"})
    , set_as_in_submode(std::make_shared<Native::Router::Eigrp::SetAsInSubmode>())
    , bfd(std::make_shared<Native::Router::Eigrp::Bfd>())
    , default_information(std::make_shared<Native::Router::Eigrp::DefaultInformation>())
    , default_metric(std::make_shared<Native::Router::Eigrp::DefaultMetric>())
    , distance(std::make_shared<Native::Router::Eigrp::Distance>())
    , distribute_list(std::make_shared<Native::Router::Eigrp::DistributeList>())
    , eigrp(std::make_shared<Native::Router::Eigrp::Eigrp_>())
    , metric(std::make_shared<Native::Router::Eigrp::Metric>())
    , neighbor(std::make_shared<Native::Router::Eigrp::Neighbor>())
    , network(this, {"number"})
    , offset_list(std::make_shared<Native::Router::Eigrp::OffsetList>())
    , redistribute(std::make_shared<Native::Router::Eigrp::Redistribute>())
    , summary_metric(std::make_shared<Native::Router::Eigrp::SummaryMetric>())
    , timers(std::make_shared<Native::Router::Eigrp::Timers>())
    , traffic_share(std::make_shared<Native::Router::Eigrp::TrafficShare>())
{
    passive_interface->parent = this;
    set_as_in_submode->parent = this;
    bfd->parent = this;
    default_information->parent = this;
    default_metric->parent = this;
    distance->parent = this;
    distribute_list->parent = this;
    eigrp->parent = this;
    metric->parent = this;
    neighbor->parent = this;
    offset_list->parent = this;
    redistribute->parent = this;
    summary_metric->parent = this;
    timers->parent = this;
    traffic_share->parent = this;

    yang_name = "eigrp"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Eigrp::~Eigrp()
{
}

bool Native::Router::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address_family.len(); index++)
    {
        if(address_family[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<af_interface.len(); index++)
    {
        if(af_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return id.is_set
	|| auto_summary.is_set
	|| maximum_paths.is_set
	|| nsf.is_set
	|| shutdown.is_set
	|| variance.is_set
	|| (passive_interface !=  nullptr && passive_interface->has_data())
	|| (set_as_in_submode !=  nullptr && set_as_in_submode->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (offset_list !=  nullptr && offset_list->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (summary_metric !=  nullptr && summary_metric->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data());
}

bool Native::Router::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<address_family.len(); index++)
    {
        if(address_family[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<af_interface.len(); index++)
    {
        if(af_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(variance.yfilter)
	|| (passive_interface !=  nullptr && passive_interface->has_operation())
	|| (set_as_in_submode !=  nullptr && set_as_in_submode->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (offset_list !=  nullptr && offset_list->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (summary_metric !=  nullptr && summary_metric->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation());
}

std::string Native::Router::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:eigrp";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "passive-interface")
    {
        if(passive_interface == nullptr)
        {
            passive_interface = std::make_shared<Native::Router::Eigrp::PassiveInterface>();
        }
        return passive_interface;
    }

    if(child_yang_name == "address-family")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily>();
        ent_->parent = this;
        address_family.append(ent_);
        return ent_;
    }

    if(child_yang_name == "af-interface")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AfInterface>();
        ent_->parent = this;
        af_interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "set-as-in-submode")
    {
        if(set_as_in_submode == nullptr)
        {
            set_as_in_submode = std::make_shared<Native::Router::Eigrp::SetAsInSubmode>();
        }
        return set_as_in_submode;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Eigrp::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Eigrp::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<Native::Router::Eigrp::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Eigrp::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Eigrp::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::Eigrp_>();
        }
        return eigrp;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Eigrp::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Router::Eigrp::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "network")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::Network>();
        ent_->parent = this;
        network.append(ent_);
        return ent_;
    }

    if(child_yang_name == "offset-list")
    {
        if(offset_list == nullptr)
        {
            offset_list = std::make_shared<Native::Router::Eigrp::OffsetList>();
        }
        return offset_list;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Eigrp::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "summary-metric")
    {
        if(summary_metric == nullptr)
        {
            summary_metric = std::make_shared<Native::Router::Eigrp::SummaryMetric>();
        }
        return summary_metric;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Eigrp::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Eigrp::TrafficShare>();
        }
        return traffic_share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(passive_interface != nullptr)
    {
        _children["passive-interface"] = passive_interface;
    }

    count_ = 0;
    for (auto ent_ : address_family.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : af_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(set_as_in_submode != nullptr)
    {
        _children["set-as-in-submode"] = set_as_in_submode;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(default_information != nullptr)
    {
        _children["default-information"] = default_information;
    }

    if(default_metric != nullptr)
    {
        _children["default-metric"] = default_metric;
    }

    if(distance != nullptr)
    {
        _children["distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        _children["distribute-list"] = distribute_list;
    }

    if(eigrp != nullptr)
    {
        _children["eigrp"] = eigrp;
    }

    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    if(neighbor != nullptr)
    {
        _children["neighbor"] = neighbor;
    }

    count_ = 0;
    for (auto ent_ : network.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(offset_list != nullptr)
    {
        _children["offset-list"] = offset_list;
    }

    if(redistribute != nullptr)
    {
        _children["redistribute"] = redistribute;
    }

    if(summary_metric != nullptr)
    {
        _children["summary-metric"] = summary_metric;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(traffic_share != nullptr)
    {
        _children["traffic-share"] = traffic_share;
    }

    return _children;
}

void Native::Router::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-summary")
    {
        auto_summary = value;
        auto_summary.value_namespace = name_space;
        auto_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-interface" || name == "address-family" || name == "af-interface" || name == "set-as-in-submode" || name == "bfd" || name == "default-information" || name == "default-metric" || name == "distance" || name == "distribute-list" || name == "eigrp" || name == "metric" || name == "neighbor" || name == "network" || name == "offset-list" || name == "redistribute" || name == "summary-metric" || name == "timers" || name == "traffic-share" || name == "id" || name == "auto-summary" || name == "maximum-paths" || name == "nsf" || name == "shutdown" || name == "variance")
        return true;
    return false;
}

Native::Router::Eigrp::PassiveInterface::PassiveInterface()
    :
    interface{YType::str, "interface"},
    tunnel{YType::uint32, "Tunnel"},
    vlan{YType::uint16, "Vlan"},
    default_{YType::empty, "default"}
{

    yang_name = "passive-interface"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Eigrp::PassiveInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| tunnel.is_set
	|| vlan.is_set
	|| default_.is_set;
}

bool Native::Router::Eigrp::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Router::Eigrp::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "Tunnel" || name == "Vlan" || name == "default")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AddressFamily()
    :
    type{YType::enumeration, "type"}
        ,
    af_ip_list(this, {"unicast_multicast"})
    , af_ip_vrf_list(this, {"vrf"})
{

    yang_name = "address-family"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::~AddressFamily()
{
}

bool Native::Router::Eigrp::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af_ip_list.len(); index++)
    {
        if(af_ip_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<af_ip_vrf_list.len(); index++)
    {
        if(af_ip_vrf_list[index]->has_data())
            return true;
    }
    return type.is_set;
}

bool Native::Router::Eigrp::AddressFamily::has_operation() const
{
    for (std::size_t index=0; index<af_ip_list.len(); index++)
    {
        if(af_ip_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<af_ip_vrf_list.len(); index++)
    {
        if(af_ip_vrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-ip-list")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList>();
        ent_->parent = this;
        af_ip_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "af-ip-vrf-list")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList>();
        ent_->parent = this;
        af_ip_vrf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af_ip_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : af_ip_vrf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-ip-list" || name == "af-ip-vrf-list" || name == "type")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfIpList()
    :
    unicast_multicast{YType::enumeration, "unicast-multicast"},
    autonomous_system{YType::uint16, "autonomous-system"},
    auto_summary{YType::empty, "auto-summary"},
    maximum_paths{YType::uint8, "maximum-paths"},
    nsf{YType::empty, "nsf"},
    shutdown{YType::empty, "shutdown"},
    variance{YType::uint8, "variance"}
        ,
    af_interface(this, {"name"})
    , set_as_in_submode(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode>())
    , bfd(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd>())
    , default_information(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation>())
    , default_metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric>())
    , distance(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance>())
    , distribute_list(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList>())
    , eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_>())
    , metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Metric>())
    , neighbor(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor>())
    , network(this, {"number"})
    , offset_list(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList>())
    , redistribute(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute>())
    , summary_metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric>())
    , timers(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers>())
    , traffic_share(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare>())
    , topology(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology>())
{
    set_as_in_submode->parent = this;
    bfd->parent = this;
    default_information->parent = this;
    default_metric->parent = this;
    distance->parent = this;
    distribute_list->parent = this;
    eigrp->parent = this;
    metric->parent = this;
    neighbor->parent = this;
    offset_list->parent = this;
    redistribute->parent = this;
    summary_metric->parent = this;
    timers->parent = this;
    traffic_share->parent = this;
    topology->parent = this;

    yang_name = "af-ip-list"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::~AfIpList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af_interface.len(); index++)
    {
        if(af_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return unicast_multicast.is_set
	|| autonomous_system.is_set
	|| auto_summary.is_set
	|| maximum_paths.is_set
	|| nsf.is_set
	|| shutdown.is_set
	|| variance.is_set
	|| (set_as_in_submode !=  nullptr && set_as_in_submode->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (offset_list !=  nullptr && offset_list->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (summary_metric !=  nullptr && summary_metric->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data())
	|| (topology !=  nullptr && topology->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::has_operation() const
{
    for (std::size_t index=0; index<af_interface.len(); index++)
    {
        if(af_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(unicast_multicast.yfilter)
	|| ydk::is_set(autonomous_system.yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(variance.yfilter)
	|| (set_as_in_submode !=  nullptr && set_as_in_submode->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (offset_list !=  nullptr && offset_list->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (summary_metric !=  nullptr && summary_metric->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation())
	|| (topology !=  nullptr && topology->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-ip-list";
    ADD_KEY_TOKEN(unicast_multicast, "unicast-multicast");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast_multicast.is_set || is_set(unicast_multicast.yfilter)) leaf_name_data.push_back(unicast_multicast.get_name_leafdata());
    if (autonomous_system.is_set || is_set(autonomous_system.yfilter)) leaf_name_data.push_back(autonomous_system.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-interface")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface>();
        ent_->parent = this;
        af_interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "set-as-in-submode")
    {
        if(set_as_in_submode == nullptr)
        {
            set_as_in_submode = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode>();
        }
        return set_as_in_submode;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_>();
        }
        return eigrp;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "network")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Network>();
        ent_->parent = this;
        network.append(ent_);
        return ent_;
    }

    if(child_yang_name == "offset-list")
    {
        if(offset_list == nullptr)
        {
            offset_list = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList>();
        }
        return offset_list;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "summary-metric")
    {
        if(summary_metric == nullptr)
        {
            summary_metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric>();
        }
        return summary_metric;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare>();
        }
        return traffic_share;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology>();
        }
        return topology;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(set_as_in_submode != nullptr)
    {
        _children["set-as-in-submode"] = set_as_in_submode;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(default_information != nullptr)
    {
        _children["default-information"] = default_information;
    }

    if(default_metric != nullptr)
    {
        _children["default-metric"] = default_metric;
    }

    if(distance != nullptr)
    {
        _children["distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        _children["distribute-list"] = distribute_list;
    }

    if(eigrp != nullptr)
    {
        _children["eigrp"] = eigrp;
    }

    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    if(neighbor != nullptr)
    {
        _children["neighbor"] = neighbor;
    }

    count_ = 0;
    for (auto ent_ : network.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(offset_list != nullptr)
    {
        _children["offset-list"] = offset_list;
    }

    if(redistribute != nullptr)
    {
        _children["redistribute"] = redistribute;
    }

    if(summary_metric != nullptr)
    {
        _children["summary-metric"] = summary_metric;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(traffic_share != nullptr)
    {
        _children["traffic-share"] = traffic_share;
    }

    if(topology != nullptr)
    {
        _children["topology"] = topology;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast-multicast")
    {
        unicast_multicast = value;
        unicast_multicast.value_namespace = name_space;
        unicast_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomous-system")
    {
        autonomous_system = value;
        autonomous_system.value_namespace = name_space;
        autonomous_system.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-summary")
    {
        auto_summary = value;
        auto_summary.value_namespace = name_space;
        auto_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast-multicast")
    {
        unicast_multicast.yfilter = yfilter;
    }
    if(value_path == "autonomous-system")
    {
        autonomous_system.yfilter = yfilter;
    }
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-interface" || name == "set-as-in-submode" || name == "bfd" || name == "default-information" || name == "default-metric" || name == "distance" || name == "distribute-list" || name == "eigrp" || name == "metric" || name == "neighbor" || name == "network" || name == "offset-list" || name == "redistribute" || name == "summary-metric" || name == "timers" || name == "traffic-share" || name == "topology" || name == "unicast-multicast" || name == "autonomous-system" || name == "auto-summary" || name == "maximum-paths" || name == "nsf" || name == "shutdown" || name == "variance")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::AfInterface()
    :
    name{YType::str, "name"},
    bandwidth_percent{YType::uint32, "bandwidth-percent"},
    hello_interval{YType::uint16, "hello-interval"},
    hold_time{YType::uint16, "hold-time"},
    passive_interface{YType::boolean, "passive-interface"},
    split_horizon{YType::boolean, "split-horizon"}
        ,
    stub_site(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite>())
    , authentication(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication>())
    , summary_address(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress>())
{
    stub_site->parent = this;
    authentication->parent = this;
    summary_address->parent = this;

    yang_name = "af-interface"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::~AfInterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| bandwidth_percent.is_set
	|| hello_interval.is_set
	|| hold_time.is_set
	|| passive_interface.is_set
	|| split_horizon.is_set
	|| (stub_site !=  nullptr && stub_site->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(bandwidth_percent.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(split_horizon.yfilter)
	|| (stub_site !=  nullptr && stub_site->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (bandwidth_percent.is_set || is_set(bandwidth_percent.yfilter)) leaf_name_data.push_back(bandwidth_percent.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stub-site")
    {
        if(stub_site == nullptr)
        {
            stub_site = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite>();
        }
        return stub_site;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress>();
        }
        return summary_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stub_site != nullptr)
    {
        _children["stub-site"] = stub_site;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(summary_address != nullptr)
    {
        _children["summary-address"] = summary_address;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent = value;
        bandwidth_percent.value_namespace = name_space;
        bandwidth_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stub-site" || name == "authentication" || name == "summary-address" || name == "name" || name == "bandwidth-percent" || name == "hello-interval" || name == "hold-time" || name == "passive-interface" || name == "split-horizon")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::StubSite()
    :
    wan_interface{YType::empty, "wan-interface"}
{

    yang_name = "stub-site"; yang_parent_name = "af-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::~StubSite()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::has_data() const
{
    if (is_presence_container) return true;
    return wan_interface.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wan_interface.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub-site";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wan_interface.is_set || is_set(wan_interface.yfilter)) leaf_name_data.push_back(wan_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wan-interface")
    {
        wan_interface = value;
        wan_interface.value_namespace = name_space;
        wan_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wan-interface")
    {
        wan_interface.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wan-interface")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"}
        ,
    mode(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode>())
{
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "af-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::~Authentication()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::Mode()
    :
    md5{YType::empty, "md5"}
        ,
    hmac_sha_256(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256>())
{
    hmac_sha_256->parent = this;

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::~Mode()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::has_data() const
{
    if (is_presence_container) return true;
    return md5.is_set
	|| (hmac_sha_256 !=  nullptr && hmac_sha_256->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| (hmac_sha_256 !=  nullptr && hmac_sha_256->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hmac-sha-256")
    {
        if(hmac_sha_256 == nullptr)
        {
            hmac_sha_256 = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256>();
        }
        return hmac_sha_256;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hmac_sha_256 != nullptr)
    {
        _children["hmac-sha-256"] = hmac_sha_256;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hmac-sha-256" || name == "md5")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::HmacSha256()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "hmac-sha-256"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::~HmacSha256()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::has_data() const
{
    if (is_presence_container) return true;
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hmac-sha-256";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::SummaryAddress()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "summary-address"; yang_parent_name = "af-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::~SummaryAddress()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::SetAsInSubmode()
    :
    autonomous_system{YType::uint16, "autonomous-system"}
{

    yang_name = "set-as-in-submode"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::~SetAsInSubmode()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-as-in-submode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system.is_set || is_set(autonomous_system.yfilter)) leaf_name_data.push_back(autonomous_system.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system")
    {
        autonomous_system = value;
        autonomous_system.value_namespace = name_space;
        autonomous_system.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system")
    {
        autonomous_system.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autonomous-system")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Bfd()
    :
    all_interfaces{YType::empty, "all-interfaces"}
        ,
    interface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface>())
{
    interface->parent = this;

    yang_name = "bfd"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::~Bfd()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return all_interfaces.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_interfaces.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "all-interfaces")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
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
    atm_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::~Interface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
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

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::has_operation() const
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
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
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

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::get_name_leaf_data() const
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
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::DefaultInformation()
    :
    in(nullptr) // presence node
    , out(nullptr) // presence node
{

    yang_name = "default-information"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::has_data() const
{
    if (is_presence_container) return true;
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(in != nullptr)
    {
        _children["in"] = in;
    }

    if(out != nullptr)
    {
        _children["out"] = out;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::In()
    :
    sa_num{YType::uint16, "sa-num"},
    sa_name{YType::str, "sa-name"}
{

    yang_name = "in"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::~In()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::has_data() const
{
    if (is_presence_container) return true;
    return sa_num.is_set
	|| sa_name.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_num.yfilter)
	|| ydk::is_set(sa_name.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_num.is_set || is_set(sa_num.yfilter)) leaf_name_data.push_back(sa_num.get_name_leafdata());
    if (sa_name.is_set || is_set(sa_name.yfilter)) leaf_name_data.push_back(sa_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-num")
    {
        sa_num = value;
        sa_num.value_namespace = name_space;
        sa_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-name")
    {
        sa_name = value;
        sa_name.value_namespace = name_space;
        sa_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-num")
    {
        sa_num.yfilter = yfilter;
    }
    if(value_path == "sa-name")
    {
        sa_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-num" || name == "sa-name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::Out()
    :
    sa_out_num{YType::uint16, "sa-out-num"},
    sa_out_name{YType::str, "sa-out-name"}
{

    yang_name = "out"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::~Out()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::has_data() const
{
    if (is_presence_container) return true;
    return sa_out_num.is_set
	|| sa_out_name.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_out_num.yfilter)
	|| ydk::is_set(sa_out_name.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_out_num.is_set || is_set(sa_out_num.yfilter)) leaf_name_data.push_back(sa_out_num.get_name_leafdata());
    if (sa_out_name.is_set || is_set(sa_out_name.yfilter)) leaf_name_data.push_back(sa_out_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-out-num")
    {
        sa_out_num = value;
        sa_out_num.value_namespace = name_space;
        sa_out_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-out-name")
    {
        sa_out_name = value;
        sa_out_name.value_namespace = name_space;
        sa_out_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-out-num")
    {
        sa_out_num.yfilter = yfilter;
    }
    if(value_path == "sa-out-name")
    {
        sa_out_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-out-num" || name == "sa-out-name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DefaultMetric()
    :
    dm_rdr(this, {"dm_rdr"})
{

    yang_name = "default-metric"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::~DefaultMetric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dm_rdr.len(); index++)
    {
        if(dm_rdr[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::has_operation() const
{
    for (std::size_t index=0; index<dm_rdr.len(); index++)
    {
        if(dm_rdr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dm-rdr")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr>();
        ent_->parent = this;
        dm_rdr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dm_rdr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dm-rdr")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr()
    :
    dm_rdr{YType::uint32, "dm-rdr"}
        ,
    dm_rdr0(this, {"dm_rdr0"})
{

    yang_name = "dm-rdr"; yang_parent_name = "default-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::~DmRdr()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dm_rdr0.len(); index++)
    {
        if(dm_rdr0[index]->has_data())
            return true;
    }
    return dm_rdr.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::has_operation() const
{
    for (std::size_t index=0; index<dm_rdr0.len(); index++)
    {
        if(dm_rdr0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dm_rdr.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dm-rdr";
    ADD_KEY_TOKEN(dm_rdr, "dm-rdr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dm_rdr.is_set || is_set(dm_rdr.yfilter)) leaf_name_data.push_back(dm_rdr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dm-rdr0")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0>();
        ent_->parent = this;
        dm_rdr0.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dm_rdr0.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dm-rdr")
    {
        dm_rdr = value;
        dm_rdr.value_namespace = name_space;
        dm_rdr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dm-rdr")
    {
        dm_rdr.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dm-rdr0" || name == "dm-rdr")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::DmRdr0()
    :
    dm_rdr0{YType::uint32, "dm-rdr0"},
    dm_rdr_pct{YType::uint8, "dm-rdr-pct"}
{

    yang_name = "dm-rdr0"; yang_parent_name = "dm-rdr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::~DmRdr0()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::has_data() const
{
    if (is_presence_container) return true;
    return dm_rdr0.is_set
	|| dm_rdr_pct.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dm_rdr0.yfilter)
	|| ydk::is_set(dm_rdr_pct.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dm-rdr0";
    ADD_KEY_TOKEN(dm_rdr0, "dm-rdr0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dm_rdr0.is_set || is_set(dm_rdr0.yfilter)) leaf_name_data.push_back(dm_rdr0.get_name_leafdata());
    if (dm_rdr_pct.is_set || is_set(dm_rdr_pct.yfilter)) leaf_name_data.push_back(dm_rdr_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dm-rdr0")
    {
        dm_rdr0 = value;
        dm_rdr0.value_namespace = name_space;
        dm_rdr0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dm-rdr-pct")
    {
        dm_rdr_pct = value;
        dm_rdr_pct.value_namespace = name_space;
        dm_rdr_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dm-rdr0")
    {
        dm_rdr0.yfilter = yfilter;
    }
    if(value_path == "dm-rdr-pct")
    {
        dm_rdr_pct.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dm-rdr0" || name == "dm-rdr-pct")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Distance()
    :
    rad_dis(this, {"rad_dis"})
    , eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_>())
{
    eigrp->parent = this;

    yang_name = "distance"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::~Distance()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rad_dis.len(); index++)
    {
        if(rad_dis[index]->has_data())
            return true;
    }
    return (eigrp !=  nullptr && eigrp->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::has_operation() const
{
    for (std::size_t index=0; index<rad_dis.len(); index++)
    {
        if(rad_dis[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (eigrp !=  nullptr && eigrp->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rad-dis")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis>();
        ent_->parent = this;
        rad_dis.append(ent_);
        return ent_;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_>();
        }
        return eigrp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rad_dis.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(eigrp != nullptr)
    {
        _children["eigrp"] = eigrp;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rad-dis" || name == "eigrp")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::RadDis()
    :
    rad_dis{YType::uint8, "rad-dis"}
        ,
    ipv4(this, {"ipv4"})
{

    yang_name = "rad-dis"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::~RadDis()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return rad_dis.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rad_dis.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rad-dis";
    ADD_KEY_TOKEN(rad_dis, "rad-dis");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rad_dis.is_set || is_set(rad_dis.yfilter)) leaf_name_data.push_back(rad_dis.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rad-dis")
    {
        rad_dis = value;
        rad_dis.value_namespace = name_space;
        rad_dis.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rad-dis")
    {
        rad_dis.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "rad-dis")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    ipv40{YType::str, "ipv40"}
{

    yang_name = "ipv4"; yang_parent_name = "rad-dis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv40.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv40.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv40.is_set || is_set(ipv40.yfilter)) leaf_name_data.push_back(ipv40.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv40")
    {
        ipv40 = value;
        ipv40.value_namespace = name_space;
        ipv40.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv40")
    {
        ipv40.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv40")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::Eigrp_()
    :
    di_rt(this, {"di_rt"})
{

    yang_name = "eigrp"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<di_rt.len(); index++)
    {
        if(di_rt[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::has_operation() const
{
    for (std::size_t index=0; index<di_rt.len(); index++)
    {
        if(di_rt[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "di-rt")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt>();
        ent_->parent = this;
        di_rt.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : di_rt.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "di-rt")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::DiRt()
    :
    di_rt{YType::uint8, "di-rt"},
    di_rt0{YType::uint8, "di-rt0"}
{

    yang_name = "di-rt"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::~DiRt()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::has_data() const
{
    if (is_presence_container) return true;
    return di_rt.is_set
	|| di_rt0.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(di_rt.yfilter)
	|| ydk::is_set(di_rt0.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "di-rt";
    ADD_KEY_TOKEN(di_rt, "di-rt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (di_rt.is_set || is_set(di_rt.yfilter)) leaf_name_data.push_back(di_rt.get_name_leafdata());
    if (di_rt0.is_set || is_set(di_rt0.yfilter)) leaf_name_data.push_back(di_rt0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "di-rt")
    {
        di_rt = value;
        di_rt.value_namespace = name_space;
        di_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "di-rt0")
    {
        di_rt0 = value;
        di_rt0.value_namespace = name_space;
        di_rt0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "di-rt")
    {
        di_rt.yfilter = yfilter;
    }
    if(value_path == "di-rt0")
    {
        di_rt0.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "di-rt" || name == "di-rt0")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::DistributeList()
    :
    eig_filt(this, {"eig_filt"})
    , gateway(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway>())
    , prefix(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix>())
    , route_map(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap>())
{
    gateway->parent = this;
    prefix->parent = this;
    route_map->parent = this;

    yang_name = "distribute-list"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::~DistributeList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eig_filt.len(); index++)
    {
        if(eig_filt[index]->has_data())
            return true;
    }
    return (gateway !=  nullptr && gateway->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<eig_filt.len(); index++)
    {
        if(eig_filt[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (gateway !=  nullptr && gateway->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eig-filt")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt>();
        ent_->parent = this;
        eig_filt.append(ent_);
        return ent_;
    }

    if(child_yang_name == "gateway")
    {
        if(gateway == nullptr)
        {
            gateway = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway>();
        }
        return gateway;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eig_filt.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(gateway != nullptr)
    {
        _children["gateway"] = gateway;
    }

    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    if(route_map != nullptr)
    {
        _children["route-map"] = route_map;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eig-filt" || name == "gateway" || name == "prefix" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::EigFilt()
    :
    eig_filt{YType::str, "eig-filt"}
        ,
    in(nullptr) // presence node
    , out(nullptr) // presence node
{

    yang_name = "eig-filt"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::~EigFilt()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::has_data() const
{
    if (is_presence_container) return true;
    return eig_filt.is_set
	|| (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eig_filt.yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eig-filt";
    ADD_KEY_TOKEN(eig_filt, "eig-filt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eig_filt.is_set || is_set(eig_filt.yfilter)) leaf_name_data.push_back(eig_filt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(in != nullptr)
    {
        _children["in"] = in;
    }

    if(out != nullptr)
    {
        _children["out"] = out;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eig-filt")
    {
        eig_filt = value;
        eig_filt.value_namespace = name_space;
        eig_filt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eig-filt")
    {
        eig_filt.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out" || name == "eig-filt")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::In()
    :
    interface_name{YType::str, "interface_name"}
{

    yang_name = "in"; yang_parent_name = "eig-filt"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::~In()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface_name")
    {
        interface_name.append(value);
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface_name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface_name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::Out()
    :
    interface_name{YType::str, "interface_name"}
{

    yang_name = "out"; yang_parent_name = "eig-filt"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::~Out()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface_name")
    {
        interface_name.append(value);
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface_name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface_name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::Gateway()
    :
    gw_list(this, {"gw_list"})
{

    yang_name = "gateway"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::~Gateway()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<gw_list.len(); index++)
    {
        if(gw_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::has_operation() const
{
    for (std::size_t index=0; index<gw_list.len(); index++)
    {
        if(gw_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gw-list")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList>();
        ent_->parent = this;
        gw_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : gw_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gw-list")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::GwList()
    :
    gw_list{YType::str, "gw-list"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "gw-list"; yang_parent_name = "gateway"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::~GwList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::has_data() const
{
    if (is_presence_container) return true;
    return gw_list.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gw_list.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gw-list";
    ADD_KEY_TOKEN(gw_list, "gw-list");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gw_list.is_set || is_set(gw_list.yfilter)) leaf_name_data.push_back(gw_list.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gw-list")
    {
        gw_list = value;
        gw_list.value_namespace = name_space;
        gw_list.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gw-list")
    {
        gw_list.yfilter = yfilter;
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

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gw-list" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::Prefix()
    :
    pl_name(this, {"pl_name"})
{

    yang_name = "prefix"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::~Prefix()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pl_name.len(); index++)
    {
        if(pl_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::has_operation() const
{
    for (std::size_t index=0; index<pl_name.len(); index++)
    {
        if(pl_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pl-name")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName>();
        ent_->parent = this;
        pl_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pl_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pl-name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::PlName()
    :
    pl_name{YType::str, "pl-name"},
    gateway{YType::empty, "gateway"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "pl-name"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::~PlName()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::has_data() const
{
    if (is_presence_container) return true;
    return pl_name.is_set
	|| gateway.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pl_name.yfilter)
	|| ydk::is_set(gateway.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pl-name";
    ADD_KEY_TOKEN(pl_name, "pl-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pl_name.is_set || is_set(pl_name.yfilter)) leaf_name_data.push_back(pl_name.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pl-name")
    {
        pl_name = value;
        pl_name.value_namespace = name_space;
        pl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pl-name")
    {
        pl_name.yfilter = yfilter;
    }
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
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

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pl-name" || name == "gateway" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RouteMap()
    :
    rmap_name(this, {"rmap_name"})
{

    yang_name = "route-map"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::~RouteMap()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rmap_name.len(); index++)
    {
        if(rmap_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::has_operation() const
{
    for (std::size_t index=0; index<rmap_name.len(); index++)
    {
        if(rmap_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rmap-name")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName>();
        ent_->parent = this;
        rmap_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rmap_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rmap-name")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::RmapName()
    :
    rmap_name{YType::str, "rmap-name"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "rmap-name"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::~RmapName()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::has_data() const
{
    if (is_presence_container) return true;
    return rmap_name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rmap_name.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rmap-name";
    ADD_KEY_TOKEN(rmap_name, "rmap-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rmap_name.is_set || is_set(rmap_name.yfilter)) leaf_name_data.push_back(rmap_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rmap-name")
    {
        rmap_name = value;
        rmap_name.value_namespace = name_space;
        rmap_name.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rmap-name")
    {
        rmap_name.yfilter = yfilter;
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

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rmap-name" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Eigrp_()
    :
    router_id{YType::str, "router-id"},
    stub_site{YType::str, "stub-site"}
        ,
    stub(nullptr) // presence node
{

    yang_name = "eigrp"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| stub_site.is_set
	|| (stub !=  nullptr && stub->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(stub_site.yfilter)
	|| (stub !=  nullptr && stub->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (stub_site.is_set || is_set(stub_site.yfilter)) leaf_name_data.push_back(stub_site.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stub")
    {
        if(stub == nullptr)
        {
            stub = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub>();
        }
        return stub;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stub != nullptr)
    {
        _children["stub"] = stub;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-site")
    {
        stub_site = value;
        stub_site.value_namespace = name_space;
        stub_site.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "stub-site")
    {
        stub_site.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stub" || name == "router-id" || name == "stub-site")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::Stub()
    :
    connected{YType::empty, "connected"},
    summary{YType::empty, "summary"},
    redistributed{YType::empty, "redistributed"},
    leak_map{YType::str, "leak-map"},
    receive_only{YType::empty, "receive-only"},
    static_{YType::empty, "static"}
{

    yang_name = "stub"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::~Stub()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::has_data() const
{
    if (is_presence_container) return true;
    return connected.is_set
	|| summary.is_set
	|| redistributed.is_set
	|| leak_map.is_set
	|| receive_only.is_set
	|| static_.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(summary.yfilter)
	|| ydk::is_set(redistributed.yfilter)
	|| ydk::is_set(leak_map.yfilter)
	|| ydk::is_set(receive_only.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (summary.is_set || is_set(summary.yfilter)) leaf_name_data.push_back(summary.get_name_leafdata());
    if (redistributed.is_set || is_set(redistributed.yfilter)) leaf_name_data.push_back(redistributed.get_name_leafdata());
    if (leak_map.is_set || is_set(leak_map.yfilter)) leaf_name_data.push_back(leak_map.get_name_leafdata());
    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary")
    {
        summary = value;
        summary.value_namespace = name_space;
        summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistributed")
    {
        redistributed = value;
        redistributed.value_namespace = name_space;
        redistributed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leak-map")
    {
        leak_map = value;
        leak_map.value_namespace = name_space;
        leak_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "summary")
    {
        summary.yfilter = yfilter;
    }
    if(value_path == "redistributed")
    {
        redistributed.yfilter = yfilter;
    }
    if(value_path == "leak-map")
    {
        leak_map.yfilter = yfilter;
    }
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected" || name == "summary" || name == "redistributed" || name == "leak-map" || name == "receive-only" || name == "static")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Metric::Metric()
    :
    maximum_hops{YType::uint8, "maximum-hops"},
    weights{YType::uint8, "weights"}
{

    yang_name = "metric"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Metric::~Metric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Metric::has_data() const
{
    if (is_presence_container) return true;
    return maximum_hops.is_set
	|| weights.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_hops.yfilter)
	|| ydk::is_set(weights.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_hops.is_set || is_set(maximum_hops.yfilter)) leaf_name_data.push_back(maximum_hops.get_name_leafdata());
    if (weights.is_set || is_set(weights.yfilter)) leaf_name_data.push_back(weights.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-hops")
    {
        maximum_hops = value;
        maximum_hops.value_namespace = name_space;
        maximum_hops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weights")
    {
        weights = value;
        weights.value_namespace = name_space;
        weights.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-hops")
    {
        maximum_hops.yfilter = yfilter;
    }
    if(value_path == "weights")
    {
        weights.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-hops" || name == "weights")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Neighbor()
    :
    ipv4(this, {"ipv4"})
{

    yang_name = "neighbor"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::~Neighbor()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"}
        ,
    interface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface>())
{
    interface->parent = this;

    yang_name = "ipv4"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ipv4")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
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
    atm_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::~Interface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
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

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::has_operation() const
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
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
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

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::get_name_leaf_data() const
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
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Network::Network()
    :
    number{YType::str, "number"},
    wild_card{YType::str, "wild-card"}
{

    yang_name = "network"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Network::~Network()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Network::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| wild_card.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(wild_card.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (wild_card.is_set || is_set(wild_card.yfilter)) leaf_name_data.push_back(wild_card.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wild-card")
    {
        wild_card = value;
        wild_card.value_namespace = name_space;
        wild_card.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "wild-card")
    {
        wild_card.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "wild-card")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OffsetList()
    :
    nsr_list(this, {"nsr_list"})
    , ol_acl(this, {"ol_acl"})
{

    yang_name = "offset-list"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::~OffsetList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nsr_list.len(); index++)
    {
        if(nsr_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ol_acl.len(); index++)
    {
        if(ol_acl[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::has_operation() const
{
    for (std::size_t index=0; index<nsr_list.len(); index++)
    {
        if(nsr_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ol_acl.len(); index++)
    {
        if(ol_acl[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "offset-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-list")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList>();
        ent_->parent = this;
        nsr_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ol-acl")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl>();
        ent_->parent = this;
        ol_acl.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nsr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ol_acl.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-list" || name == "ol-acl")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::NsrList()
    :
    nsr_list{YType::uint16, "nsr-list"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "nsr-list"; yang_parent_name = "offset-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::~NsrList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::has_data() const
{
    if (is_presence_container) return true;
    return nsr_list.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_list.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-list";
    ADD_KEY_TOKEN(nsr_list, "nsr-list");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_list.is_set || is_set(nsr_list.yfilter)) leaf_name_data.push_back(nsr_list.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-list")
    {
        nsr_list = value;
        nsr_list.value_namespace = name_space;
        nsr_list.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-list")
    {
        nsr_list.yfilter = yfilter;
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

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-list" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::OlAcl()
    :
    ol_acl{YType::str, "ol-acl"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "ol-acl"; yang_parent_name = "offset-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::~OlAcl()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::has_data() const
{
    if (is_presence_container) return true;
    return ol_acl.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ol_acl.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ol-acl";
    ADD_KEY_TOKEN(ol_acl, "ol-acl");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ol_acl.is_set || is_set(ol_acl.yfilter)) leaf_name_data.push_back(ol_acl.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ol-acl")
    {
        ol_acl = value;
        ol_acl.value_namespace = name_space;
        ol_acl.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ol-acl")
    {
        ol_acl.yfilter = yfilter;
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

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ol-acl" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Redistribute()
    :
    eigrp{YType::uint16, "eigrp"},
    ospf{YType::uint16, "ospf"}
        ,
    bgp(this, {"rdr_as"})
    , connected(nullptr) // presence node
    , isis(nullptr) // presence node
    , lisp(nullptr) // presence node
    , mobile(nullptr) // presence node
    , odr(nullptr) // presence node
    , rip(nullptr) // presence node
    , static_(nullptr) // presence node
    , vrf(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf>())
{
    vrf->parent = this;

    yang_name = "redistribute"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::~Redistribute()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    return eigrp.is_set
	|| ospf.is_set
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp>();
        ent_->parent = this;
        bgp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static>();
        }
        return static_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(connected != nullptr)
    {
        _children["connected"] = connected;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(lisp != nullptr)
    {
        _children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        _children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        _children["odr"] = odr;
    }

    if(rip != nullptr)
    {
        _children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "connected" || name == "isis" || name == "lisp" || name == "mobile" || name == "odr" || name == "rip" || name == "static" || name == "vrf" || name == "eigrp" || name == "ospf")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Bgp()
    :
    rdr_as{YType::str, "rdr-as"},
    route_map{YType::str, "route-map"},
    rd_lesser_1_period_0_xx_period_yy_greater_{YType::empty, "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_"}
        ,
    metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric>())
{
    metric->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return rdr_as.is_set
	|| route_map.is_set
	|| rd_lesser_1_period_0_xx_period_yy_greater_.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rdr_as.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rd_lesser_1_period_0_xx_period_yy_greater_.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    ADD_KEY_TOKEN(rdr_as, "rdr-as");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rdr_as.is_set || is_set(rdr_as.yfilter)) leaf_name_data.push_back(rdr_as.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rd_lesser_1_period_0_xx_period_yy_greater_.is_set || is_set(rd_lesser_1_period_0_xx_period_yy_greater_.yfilter)) leaf_name_data.push_back(rd_lesser_1_period_0_xx_period_yy_greater_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rdr-as")
    {
        rdr_as = value;
        rdr_as.value_namespace = name_space;
        rdr_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        rd_lesser_1_period_0_xx_period_yy_greater_ = value;
        rd_lesser_1_period_0_xx_period_yy_greater_.value_namespace = name_space;
        rd_lesser_1_period_0_xx_period_yy_greater_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rdr-as")
    {
        rdr_as.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        rd_lesser_1_period_0_xx_period_yy_greater_.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "rdr-as" || name == "route-map" || name == "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::Metric()
    :
    bandwith{YType::uint32, "bandwith"},
    delay{YType::uint32, "delay"},
    reliability{YType::uint8, "reliability"},
    effective{YType::uint8, "Effective"},
    mtu{YType::uint16, "mtu"}
{

    yang_name = "metric"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::~Metric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::has_data() const
{
    if (is_presence_container) return true;
    return bandwith.is_set
	|| delay.is_set
	|| reliability.is_set
	|| effective.is_set
	|| mtu.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwith.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(reliability.yfilter)
	|| ydk::is_set(effective.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwith.is_set || is_set(bandwith.yfilter)) leaf_name_data.push_back(bandwith.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());
    if (effective.is_set || is_set(effective.yfilter)) leaf_name_data.push_back(effective.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwith")
    {
        bandwith = value;
        bandwith.value_namespace = name_space;
        bandwith.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Effective")
    {
        effective = value;
        effective.value_namespace = name_space;
        effective.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwith")
    {
        bandwith.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
    if(value_path == "Effective")
    {
        effective.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwith" || name == "delay" || name == "reliability" || name == "Effective" || name == "mtu")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::Connected()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "connected"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::Isis()
    :
    is_tag{YType::str, "is-tag"},
    level_1{YType::empty, "level-1"},
    level_1_2{YType::empty, "level-1-2"},
    level_2{YType::empty, "level-2"},
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "isis"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::~Isis()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::has_data() const
{
    if (is_presence_container) return true;
    return is_tag.is_set
	|| level_1.is_set
	|| level_1_2.is_set
	|| level_2.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_tag.yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(level_1_2.yfilter)
	|| ydk::is_set(level_2.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_tag.is_set || is_set(is_tag.yfilter)) leaf_name_data.push_back(is_tag.get_name_leafdata());
    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_1_2.is_set || is_set(level_1_2.yfilter)) leaf_name_data.push_back(level_1_2.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-tag")
    {
        is_tag = value;
        is_tag.value_namespace = name_space;
        is_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-1")
    {
        level_1 = value;
        level_1.value_namespace = name_space;
        level_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-1-2")
    {
        level_1_2 = value;
        level_1_2.value_namespace = name_space;
        level_1_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
        level_2.value_namespace = name_space;
        level_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-tag")
    {
        is_tag.yfilter = yfilter;
    }
    if(value_path == "level-1")
    {
        level_1.yfilter = yfilter;
    }
    if(value_path == "level-1-2")
    {
        level_1_2.yfilter = yfilter;
    }
    if(value_path == "level-2")
    {
        level_2.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-tag" || name == "level-1" || name == "level-1-2" || name == "level-2" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::Lisp()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "lisp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::Mobile()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::Odr()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "odr"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::Rip()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::~Rip()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::Static()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::~Static()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::Vrf()
    :
    name{YType::str, "name"},
    global{YType::empty, "global"}
{

    yang_name = "vrf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::~Vrf()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| global.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(global.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "global")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::SummaryMetric()
    :
    a_period_b_period_c_period_d_slash_nn{YType::empty, "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn"}
        ,
    ipv4(this, {"ipv4"})
{

    yang_name = "summary-metric"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::~SummaryMetric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return a_period_b_period_c_period_d_slash_nn.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(a_period_b_period_c_period_d_slash_nn.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a_period_b_period_c_period_d_slash_nn.is_set || is_set(a_period_b_period_c_period_d_slash_nn.yfilter)) leaf_name_data.push_back(a_period_b_period_c_period_d_slash_nn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
    {
        a_period_b_period_c_period_d_slash_nn = value;
        a_period_b_period_c_period_d_slash_nn.value_namespace = name_space;
        a_period_b_period_c_period_d_slash_nn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
    {
        a_period_b_period_c_period_d_slash_nn.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{

    yang_name = "ipv4"; yang_parent_name = "summary-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mask")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Timers()
    :
    active_time(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime>())
    , graceful_restart(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart>())
    , nsf(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf>())
{
    active_time->parent = this;
    graceful_restart->parent = this;
    nsf->parent = this;

    yang_name = "timers"; yang_parent_name = "af-ip-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::~Timers()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::has_data() const
{
    if (is_presence_container) return true;
    return (active_time !=  nullptr && active_time->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (nsf !=  nullptr && nsf->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (active_time !=  nullptr && active_time->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-time")
    {
        if(active_time == nullptr)
        {
            active_time = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime>();
        }
        return active_time;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf>();
        }
        return nsf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(active_time != nullptr)
    {
        _children["active-time"] = active_time;
    }

    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(nsf != nullptr)
    {
        _children["nsf"] = nsf;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-time" || name == "graceful-restart" || name == "nsf")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::ActiveTime()
    :
    atimer{YType::uint16, "atimer"},
    disabled{YType::empty, "disabled"}
{

    yang_name = "active-time"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::~ActiveTime()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::has_data() const
{
    if (is_presence_container) return true;
    return atimer.is_set
	|| disabled.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atimer.yfilter)
	|| ydk::is_set(disabled.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atimer.is_set || is_set(atimer.yfilter)) leaf_name_data.push_back(atimer.get_name_leafdata());
    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atimer")
    {
        atimer = value;
        atimer.value_namespace = name_space;
        atimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atimer")
    {
        atimer.yfilter = yfilter;
    }
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atimer" || name == "disabled")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::GracefulRestart()
    :
    purge_time{YType::empty, "purge-time"}
{

    yang_name = "graceful-restart"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return purge_time.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(purge_time.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (purge_time.is_set || is_set(purge_time.yfilter)) leaf_name_data.push_back(purge_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "purge-time")
    {
        purge_time = value;
        purge_time.value_namespace = name_space;
        purge_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "purge-time")
    {
        purge_time.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "purge-time")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::Nsf()
    :
    converge{YType::empty, "converge"},
    signal{YType::empty, "signal"}
{

    yang_name = "nsf"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::~Nsf()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::has_data() const
{
    if (is_presence_container) return true;
    return converge.is_set
	|| signal.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(converge.yfilter)
	|| ydk::is_set(signal.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (converge.is_set || is_set(converge.yfilter)) leaf_name_data.push_back(converge.get_name_leafdata());
    if (signal.is_set || is_set(signal.yfilter)) leaf_name_data.push_back(signal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "converge")
    {
        converge = value;
        converge.value_namespace = name_space;
        converge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal")
    {
        signal = value;
        signal.value_namespace = name_space;
        signal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "converge")
    {
        converge.yfilter = yfilter;
    }
    if(value_path == "signal")
    {
        signal.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "converge" || name == "signal")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::Operator_::add {0, "add"};
const Enum::YLeaf Native::Router::LispList::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::Operator_::override {1, "override"};

const Enum::YLeaf Native::Router::Eigrp::AddressFamily::Type::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Router::Eigrp::AddressFamily::Type::ipv6 {1, "ipv6"};

const Enum::YLeaf Native::Router::Eigrp::AddressFamily::AfIpList::UnicastMulticast::unicast {0, "unicast"};
const Enum::YLeaf Native::Router::Eigrp::AddressFamily::AfIpList::UnicastMulticast::multicast {1, "multicast"};


}
}

