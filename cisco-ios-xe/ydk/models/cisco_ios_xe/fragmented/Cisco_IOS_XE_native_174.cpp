
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_174.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::Bgp()
    :
    id{YType::str, "id"}
        ,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "bgp"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::~Bgp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lisp_ip_route_import != nullptr)
    {
        _children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::Connected()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "connected"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::~Connected()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::has_data() const
{
    if (is_presence_container) return true;
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lisp_ip_route_import != nullptr)
    {
        _children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
        ,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "eigrp"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::~Eigrp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lisp_ip_route_import != nullptr)
    {
        _children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::Isis()
    :
    process_id{YType::str, "process-id"}
        ,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "isis"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::~Isis()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::has_data() const
{
    if (is_presence_container) return true;
    return process_id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lisp_ip_route_import != nullptr)
    {
        _children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "process-id")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"},
    warning_only{YType::empty, "warning-only"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only1{YType::empty, "warning-only1"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| warning_only.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only1.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold1.yfilter)
	|| ydk::is_set(warning_only1.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.yfilter)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.yfilter)) leaf_name_data.push_back(warning_only1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "warning-only" || name == "threshold" || name == "threshold1" || name == "warning-only1")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::Nd()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "nd"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::~Nd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::has_data() const
{
    if (is_presence_container) return true;
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lisp_ip_route_import != nullptr)
    {
        _children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
        ,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "ospf"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::~Ospf()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lisp_ip_route_import != nullptr)
    {
        _children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::Static()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "static"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::~Static()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::has_data() const
{
    if (is_presence_container) return true;
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lisp_ip_route_import != nullptr)
    {
        _children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::LispIpRouteImport::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Static::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::Rip()
    :
    id{YType::str, "id"}
        ,
    lisp_ip_route_import(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "rip"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::~Rip()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lisp_ip_route_import != nullptr)
    {
        _children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::MapCache()
    :
    application(nullptr) // presence node
    , bgp(this, {"id"})
    , connected(nullptr) // presence node
    , eigrp(this, {"id"})
    , isis(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis>())
    , maximum_prefix(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::MaximumPrefix>())
    , nd(nullptr) // presence node
    , ospf(this, {"id"})
    , static_(nullptr) // presence node
    , rip(this, {"id"})
{
    isis->parent = this;
    maximum_prefix->parent = this;

    yang_name = "map-cache"; yang_parent_name = "route-import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::~MapCache()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::has_data() const
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
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return (application !=  nullptr && application->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::has_operation() const
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
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp>();
        ent_->parent = this;
        bgp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp>();
        ent_->parent = this;
        eigrp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "ospf")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf>();
        ent_->parent = this;
        ospf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static>();
        }
        return static_;
    }

    if(child_yang_name == "rip")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip>();
        ent_->parent = this;
        rip.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(application != nullptr)
    {
        _children["application"] = application;
    }

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

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(maximum_prefix != nullptr)
    {
        _children["maximum-prefix"] = maximum_prefix;
    }

    if(nd != nullptr)
    {
        _children["nd"] = nd;
    }

    count_ = 0;
    for (auto ent_ : ospf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    count_ = 0;
    for (auto ent_ : rip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "maximum-prefix" || name == "nd" || name == "ospf" || name == "static" || name == "rip")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::Application()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "application"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::~Application()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::has_data() const
{
    if (is_presence_container) return true;
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::Bgp()
    :
    id{YType::str, "id"}
        ,
    map_cache_container(nullptr) // presence node
{

    yang_name = "bgp"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::~Bgp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::Connected()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "connected"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::~Connected()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::has_data() const
{
    if (is_presence_container) return true;
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
        ,
    map_cache_container(nullptr) // presence node
{

    yang_name = "eigrp"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::~Eigrp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::Isis()
    :
    id{YType::str, "id"}
        ,
    map_cache_container(nullptr) // presence node
{

    yang_name = "isis"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::~Isis()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"},
    warning_only{YType::empty, "warning-only"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only1{YType::empty, "warning-only1"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| warning_only.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only1.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold1.yfilter)
	|| ydk::is_set(warning_only1.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.yfilter)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.yfilter)) leaf_name_data.push_back(warning_only1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "warning-only" || name == "threshold" || name == "threshold1" || name == "warning-only1")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::Nd()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "nd"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::~Nd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::has_data() const
{
    if (is_presence_container) return true;
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
        ,
    map_cache_container(nullptr) // presence node
{

    yang_name = "ospf"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::~Ospf()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::Static()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "static"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::~Static()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::has_data() const
{
    if (is_presence_container) return true;
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::Rip()
    :
    id{YType::str, "id"}
        ,
    map_cache_container(nullptr) // presence node
{

    yang_name = "rip"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::~Rip()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::PrefixListProto()
    :
    prefix_list{YType::str, "prefix-list"},
    protocol{YType::enumeration, "protocol"},
    isis_id{YType::str, "isis-id"},
    number{YType::uint32, "number"},
    threshold{YType::uint8, "threshold"},
    warning_only{YType::empty, "warning-only"},
    route_map{YType::str, "route-map"}
        ,
    bgp_id(this, {"bgp_id"})
    , eigrp_or_ospf_id(this, {"int16_id"})
{

    yang_name = "prefix-list-proto"; yang_parent_name = "route-import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::~PrefixListProto()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_id.len(); index++)
    {
        if(bgp_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp_or_ospf_id.len(); index++)
    {
        if(eigrp_or_ospf_id[index]->has_data())
            return true;
    }
    return prefix_list.is_set
	|| protocol.is_set
	|| isis_id.is_set
	|| number.is_set
	|| threshold.is_set
	|| warning_only.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::has_operation() const
{
    for (std::size_t index=0; index<bgp_id.len(); index++)
    {
        if(bgp_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp_or_ospf_id.len(); index++)
    {
        if(eigrp_or_ospf_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(isis_id.yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-proto";
    ADD_KEY_TOKEN(prefix_list, "prefix-list");
    ADD_KEY_TOKEN(protocol, "protocol");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (isis_id.is_set || is_set(isis_id.yfilter)) leaf_name_data.push_back(isis_id.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-id")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::BgpId>();
        ent_->parent = this;
        bgp_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "eigrp-or-ospf-id")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::EigrpOrOspfId>();
        ent_->parent = this;
        eigrp_or_ospf_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : eigrp_or_ospf_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-id")
    {
        isis_id = value;
        isis_id.value_namespace = name_space;
        isis_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "isis-id")
    {
        isis_id.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-id" || name == "eigrp-or-ospf-id" || name == "prefix-list" || name == "protocol" || name == "isis-id" || name == "number" || name == "threshold" || name == "warning-only" || name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::BgpId::BgpId()
    :
    bgp_id{YType::str, "bgp-id"},
    route_map{YType::str, "route-map"}
{

    yang_name = "bgp-id"; yang_parent_name = "prefix-list-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::BgpId::~BgpId()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::BgpId::has_data() const
{
    if (is_presence_container) return true;
    return bgp_id.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::BgpId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_id.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::BgpId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-id";
    ADD_KEY_TOKEN(bgp_id, "bgp-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::BgpId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_id.is_set || is_set(bgp_id.yfilter)) leaf_name_data.push_back(bgp_id.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::BgpId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::BgpId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::BgpId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-id")
    {
        bgp_id = value;
        bgp_id.value_namespace = name_space;
        bgp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::BgpId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-id")
    {
        bgp_id.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::BgpId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-id" || name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::EigrpOrOspfId::EigrpOrOspfId()
    :
    int16_id{YType::uint16, "int16-id"},
    route_map{YType::str, "route-map"}
{

    yang_name = "eigrp-or-ospf-id"; yang_parent_name = "prefix-list-proto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::EigrpOrOspfId::~EigrpOrOspfId()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::EigrpOrOspfId::has_data() const
{
    if (is_presence_container) return true;
    return int16_id.is_set
	|| route_map.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::EigrpOrOspfId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(int16_id.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::EigrpOrOspfId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-or-ospf-id";
    ADD_KEY_TOKEN(int16_id, "int16-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::EigrpOrOspfId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (int16_id.is_set || is_set(int16_id.yfilter)) leaf_name_data.push_back(int16_id.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::EigrpOrOspfId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::EigrpOrOspfId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::EigrpOrOspfId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "int16-id")
    {
        int16_id = value;
        int16_id.value_namespace = name_space;
        int16_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::EigrpOrOspfId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "int16-id")
    {
        int16_id.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::EigrpOrOspfId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "int16-id" || name == "route-map")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::DatabaseMapping()
    :
    eid_cont(this, {"eid_prefix"})
    , limit(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eid_cont.len(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.len(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont>();
        ent_->parent = this;
        eid_cont.append(ent_);
        return ent_;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eid_cont.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-cont" || name == "limit")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"},
    auto_discover_rlocs{YType::empty, "auto-discover-rlocs"}
        ,
    locator_set_container(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::LocatorSetContainer>())
    , ipv4_addrees(this, {"address"})
    , ipv6_addrees(this, {"address"})
    , ipv4_interface(this, {"name"})
    , ipv6_interface(this, {"name"})
{
    locator_set_container->parent = this;

    yang_name = "eid-cont"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::~EidCont()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_addrees.len(); index++)
    {
        if(ipv4_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.len(); index++)
    {
        if(ipv6_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.len(); index++)
    {
        if(ipv4_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.len(); index++)
    {
        if(ipv6_interface[index]->has_data())
            return true;
    }
    return eid_prefix.is_set
	|| auto_discover_rlocs.is_set
	|| (locator_set_container !=  nullptr && locator_set_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addrees.len(); index++)
    {
        if(ipv4_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.len(); index++)
    {
        if(ipv6_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.len(); index++)
    {
        if(ipv4_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.len(); index++)
    {
        if(ipv6_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| ydk::is_set(auto_discover_rlocs.yfilter)
	|| (locator_set_container !=  nullptr && locator_set_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont";
    ADD_KEY_TOKEN(eid_prefix, "eid-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (auto_discover_rlocs.is_set || is_set(auto_discover_rlocs.yfilter)) leaf_name_data.push_back(auto_discover_rlocs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locator-set-container")
    {
        if(locator_set_container == nullptr)
        {
            locator_set_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::LocatorSetContainer>();
        }
        return locator_set_container;
    }

    if(child_yang_name == "ipv4-addrees")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees>();
        ent_->parent = this;
        ipv4_addrees.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6-addrees")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees>();
        ent_->parent = this;
        ipv6_addrees.append(ent_);
        return ent_;
    }

    if(child_yang_name == "IPv4-interface")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface>();
        ent_->parent = this;
        ipv4_interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "IPv6-interface")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface>();
        ent_->parent = this;
        ipv6_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(locator_set_container != nullptr)
    {
        _children["locator-set-container"] = locator_set_container;
    }

    count_ = 0;
    for (auto ent_ : ipv4_addrees.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6_addrees.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
        eid_prefix.value_namespace = name_space;
        eid_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-discover-rlocs")
    {
        auto_discover_rlocs = value;
        auto_discover_rlocs.value_namespace = name_space;
        auto_discover_rlocs.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
    if(value_path == "auto-discover-rlocs")
    {
        auto_discover_rlocs.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set-container" || name == "ipv4-addrees" || name == "ipv6-addrees" || name == "IPv4-interface" || name == "IPv6-interface" || name == "eid-prefix" || name == "auto-discover-rlocs")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::LocatorSetContainer::LocatorSetContainer()
    :
    locator_set{YType::str, "locator-set"},
    proxy{YType::empty, "proxy"}
{

    yang_name = "locator-set-container"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::LocatorSetContainer::~LocatorSetContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::LocatorSetContainer::has_data() const
{
    if (is_presence_container) return true;
    return locator_set.is_set
	|| proxy.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::LocatorSetContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter)
	|| ydk::is_set(proxy.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::LocatorSetContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-set-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::LocatorSetContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (proxy.is_set || is_set(proxy.yfilter)) leaf_name_data.push_back(proxy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::LocatorSetContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::LocatorSetContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::LocatorSetContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy")
    {
        proxy = value;
        proxy.value_namespace = name_space;
        proxy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::LocatorSetContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
    if(value_path == "proxy")
    {
        proxy.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::LocatorSetContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set" || name == "proxy")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::Ipv4Addrees()
    :
    address{YType::str, "address"}
        ,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv4-addrees"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::~Ipv4Addrees()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addrees";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_mapping_option != nullptr)
    {
        _children["database-mapping-option"] = database_mapping_option;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "address")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "ipv4-addrees"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::Ipv6Addrees()
    :
    address{YType::str, "address"}
        ,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv6-addrees"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::~Ipv6Addrees()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addrees";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_mapping_option != nullptr)
    {
        _children["database-mapping-option"] = database_mapping_option;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "address")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "ipv6-addrees"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::IPv4Interface()
    :
    name{YType::str, "name"}
        ,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv4-interface"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::~IPv4Interface()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv4-interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_mapping_option != nullptr)
    {
        _children["database-mapping-option"] = database_mapping_option;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "IPv4-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::IPv6Interface()
    :
    name{YType::str, "name"}
        ,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv6-interface"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::~IPv6Interface()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6-interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_mapping_option != nullptr)
    {
        _children["database-mapping-option"] = database_mapping_option;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "IPv6-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "limit"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::Limit::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Ethernet()
    :
    map_request_source{YType::str, "map-request-source"}
        ,
    default_(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_>())
    , eid_table(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable>())
    , broadcast_underlay(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay>())
    , flood(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Flood>())
    , database_mapping(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping>())
    , itr(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr>())
    , itr_enable(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable>())
    , etr_enable(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable>())
    , etr(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr>())
    , map_cache_limit(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit>())
    , site_registration(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration>())
    , solicit_map_request(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest>())
    , map_cache(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache>())
{
    default_->parent = this;
    eid_table->parent = this;
    broadcast_underlay->parent = this;
    flood->parent = this;
    database_mapping->parent = this;
    itr->parent = this;
    itr_enable->parent = this;
    etr_enable->parent = this;
    etr->parent = this;
    map_cache_limit->parent = this;
    site_registration->parent = this;
    solicit_map_request->parent = this;
    map_cache->parent = this;

    yang_name = "ethernet"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::~Ethernet()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return map_request_source.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (broadcast_underlay !=  nullptr && broadcast_underlay->has_data())
	|| (flood !=  nullptr && flood->has_data())
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map_request_source.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (broadcast_underlay !=  nullptr && broadcast_underlay->has_operation())
	|| (flood !=  nullptr && flood->has_operation())
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "broadcast-underlay")
    {
        if(broadcast_underlay == nullptr)
        {
            broadcast_underlay = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay>();
        }
        return broadcast_underlay;
    }

    if(child_yang_name == "flood")
    {
        if(flood == nullptr)
        {
            flood = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Flood>();
        }
        return flood;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache>();
        }
        return map_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(eid_table != nullptr)
    {
        _children["eid-table"] = eid_table;
    }

    if(broadcast_underlay != nullptr)
    {
        _children["broadcast-underlay"] = broadcast_underlay;
    }

    if(flood != nullptr)
    {
        _children["flood"] = flood;
    }

    if(database_mapping != nullptr)
    {
        _children["database-mapping"] = database_mapping;
    }

    if(itr != nullptr)
    {
        _children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        _children["itr-enable"] = itr_enable;
    }

    if(etr_enable != nullptr)
    {
        _children["etr-enable"] = etr_enable;
    }

    if(etr != nullptr)
    {
        _children["etr"] = etr;
    }

    if(map_cache_limit != nullptr)
    {
        _children["map-cache-limit"] = map_cache_limit;
    }

    if(site_registration != nullptr)
    {
        _children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        _children["solicit-map-request"] = solicit_map_request;
    }

    if(map_cache != nullptr)
    {
        _children["map-cache"] = map_cache;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-request-source")
    {
        map_request_source = value;
        map_request_source.value_namespace = name_space;
        map_request_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-request-source")
    {
        map_request_source.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "eid-table" || name == "broadcast-underlay" || name == "flood" || name == "database-mapping" || name == "itr" || name == "itr-enable" || name == "etr-enable" || name == "etr" || name == "map-cache-limit" || name == "site-registration" || name == "solicit-map-request" || name == "map-cache" || name == "map-request-source")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Default_()
    :
    map_request_source{YType::str, "map-request-source"}
        ,
    eid_table(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EidTable>())
    , broadcast_underlay(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::BroadcastUnderlay>())
    , flood(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Flood>())
    , database_mapping(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping>())
    , itr(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr>())
    , itr_enable(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable>())
    , etr_enable(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable>())
    , etr(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr>())
    , map_cache_limit(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit>())
    , site_registration(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration>())
    , solicit_map_request(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest>())
    , map_cache(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache>())
{
    eid_table->parent = this;
    broadcast_underlay->parent = this;
    flood->parent = this;
    database_mapping->parent = this;
    itr->parent = this;
    itr_enable->parent = this;
    etr_enable->parent = this;
    etr->parent = this;
    map_cache_limit->parent = this;
    site_registration->parent = this;
    solicit_map_request->parent = this;
    map_cache->parent = this;

    yang_name = "default"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::~Default_()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::has_data() const
{
    if (is_presence_container) return true;
    return map_request_source.is_set
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (broadcast_underlay !=  nullptr && broadcast_underlay->has_data())
	|| (flood !=  nullptr && flood->has_data())
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map_request_source.yfilter)
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (broadcast_underlay !=  nullptr && broadcast_underlay->has_operation())
	|| (flood !=  nullptr && flood->has_operation())
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "broadcast-underlay")
    {
        if(broadcast_underlay == nullptr)
        {
            broadcast_underlay = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::BroadcastUnderlay>();
        }
        return broadcast_underlay;
    }

    if(child_yang_name == "flood")
    {
        if(flood == nullptr)
        {
            flood = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Flood>();
        }
        return flood;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache>();
        }
        return map_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(eid_table != nullptr)
    {
        _children["eid-table"] = eid_table;
    }

    if(broadcast_underlay != nullptr)
    {
        _children["broadcast-underlay"] = broadcast_underlay;
    }

    if(flood != nullptr)
    {
        _children["flood"] = flood;
    }

    if(database_mapping != nullptr)
    {
        _children["database-mapping"] = database_mapping;
    }

    if(itr != nullptr)
    {
        _children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        _children["itr-enable"] = itr_enable;
    }

    if(etr_enable != nullptr)
    {
        _children["etr-enable"] = etr_enable;
    }

    if(etr != nullptr)
    {
        _children["etr"] = etr;
    }

    if(map_cache_limit != nullptr)
    {
        _children["map-cache-limit"] = map_cache_limit;
    }

    if(site_registration != nullptr)
    {
        _children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        _children["solicit-map-request"] = solicit_map_request;
    }

    if(map_cache != nullptr)
    {
        _children["map-cache"] = map_cache;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-request-source")
    {
        map_request_source = value;
        map_request_source.value_namespace = name_space;
        map_request_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-request-source")
    {
        map_request_source.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-table" || name == "broadcast-underlay" || name == "flood" || name == "database-mapping" || name == "itr" || name == "itr-enable" || name == "etr-enable" || name == "etr" || name == "map-cache-limit" || name == "site-registration" || name == "solicit-map-request" || name == "map-cache" || name == "map-request-source")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EidTable::EidTable()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "eid-table"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EidTable::~EidTable()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EidTable::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EidTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EidTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EidTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EidTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EidTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EidTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EidTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EidTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::BroadcastUnderlay::BroadcastUnderlay()
    :
    ipv4_multicast{YType::str, "ipv4-multicast"},
    ipv6_multicast{YType::str, "ipv6-multicast"}
{

    yang_name = "broadcast-underlay"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::BroadcastUnderlay::~BroadcastUnderlay()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::BroadcastUnderlay::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_multicast.is_set
	|| ipv6_multicast.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::BroadcastUnderlay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_multicast.yfilter)
	|| ydk::is_set(ipv6_multicast.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::BroadcastUnderlay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-underlay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::BroadcastUnderlay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_multicast.is_set || is_set(ipv4_multicast.yfilter)) leaf_name_data.push_back(ipv4_multicast.get_name_leafdata());
    if (ipv6_multicast.is_set || is_set(ipv6_multicast.yfilter)) leaf_name_data.push_back(ipv6_multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::BroadcastUnderlay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::BroadcastUnderlay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::BroadcastUnderlay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-multicast")
    {
        ipv4_multicast = value;
        ipv4_multicast.value_namespace = name_space;
        ipv4_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-multicast")
    {
        ipv6_multicast = value;
        ipv6_multicast.value_namespace = name_space;
        ipv6_multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::BroadcastUnderlay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-multicast")
    {
        ipv4_multicast.yfilter = yfilter;
    }
    if(value_path == "ipv6-multicast")
    {
        ipv6_multicast.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::BroadcastUnderlay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-multicast" || name == "ipv6-multicast")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Flood::Flood()
    :
    arp_nd{YType::empty, "arp-nd"},
    unknown_unicast{YType::empty, "unknown-unicast"}
{

    yang_name = "flood"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Flood::~Flood()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Flood::has_data() const
{
    if (is_presence_container) return true;
    return arp_nd.is_set
	|| unknown_unicast.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Flood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arp_nd.yfilter)
	|| ydk::is_set(unknown_unicast.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Flood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Flood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp_nd.is_set || is_set(arp_nd.yfilter)) leaf_name_data.push_back(arp_nd.get_name_leafdata());
    if (unknown_unicast.is_set || is_set(unknown_unicast.yfilter)) leaf_name_data.push_back(unknown_unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Flood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Flood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arp-nd")
    {
        arp_nd = value;
        arp_nd.value_namespace = name_space;
        arp_nd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast")
    {
        unknown_unicast = value;
        unknown_unicast.value_namespace = name_space;
        unknown_unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Flood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arp-nd")
    {
        arp_nd.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast")
    {
        unknown_unicast.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Flood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp-nd" || name == "unknown-unicast")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::DatabaseMapping()
    :
    eid_cont(this, {"eid_prefix"})
    , mac(nullptr) // presence node
    , limit(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eid_cont.len(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return (mac !=  nullptr && mac->has_data())
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.len(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation())
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont>();
        ent_->parent = this;
        eid_cont.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eid_cont.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-cont" || name == "mac" || name == "limit")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"}
        ,
    locator_set_container(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::LocatorSetContainer>())
    , ipv4_addrees(this, {"address"})
    , ipv6_addrees(this, {"address"})
    , ipv4_interface(this, {"name"})
    , ipv6_interface(this, {"name"})
{
    locator_set_container->parent = this;

    yang_name = "eid-cont"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::~EidCont()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_addrees.len(); index++)
    {
        if(ipv4_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.len(); index++)
    {
        if(ipv6_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.len(); index++)
    {
        if(ipv4_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.len(); index++)
    {
        if(ipv6_interface[index]->has_data())
            return true;
    }
    return eid_prefix.is_set
	|| (locator_set_container !=  nullptr && locator_set_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addrees.len(); index++)
    {
        if(ipv4_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.len(); index++)
    {
        if(ipv6_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.len(); index++)
    {
        if(ipv4_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.len(); index++)
    {
        if(ipv6_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| (locator_set_container !=  nullptr && locator_set_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont";
    ADD_KEY_TOKEN(eid_prefix, "eid-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locator-set-container")
    {
        if(locator_set_container == nullptr)
        {
            locator_set_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::LocatorSetContainer>();
        }
        return locator_set_container;
    }

    if(child_yang_name == "ipv4-addrees")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees>();
        ent_->parent = this;
        ipv4_addrees.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6-addrees")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees>();
        ent_->parent = this;
        ipv6_addrees.append(ent_);
        return ent_;
    }

    if(child_yang_name == "IPv4-interface")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface>();
        ent_->parent = this;
        ipv4_interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "IPv6-interface")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface>();
        ent_->parent = this;
        ipv6_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(locator_set_container != nullptr)
    {
        _children["locator-set-container"] = locator_set_container;
    }

    count_ = 0;
    for (auto ent_ : ipv4_addrees.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6_addrees.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
        eid_prefix.value_namespace = name_space;
        eid_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set-container" || name == "ipv4-addrees" || name == "ipv6-addrees" || name == "IPv4-interface" || name == "IPv6-interface" || name == "eid-prefix")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::LocatorSetContainer::LocatorSetContainer()
    :
    locator_set{YType::str, "locator-set"},
    proxy{YType::empty, "proxy"}
{

    yang_name = "locator-set-container"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::LocatorSetContainer::~LocatorSetContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::LocatorSetContainer::has_data() const
{
    if (is_presence_container) return true;
    return locator_set.is_set
	|| proxy.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::LocatorSetContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter)
	|| ydk::is_set(proxy.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::LocatorSetContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-set-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::LocatorSetContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (proxy.is_set || is_set(proxy.yfilter)) leaf_name_data.push_back(proxy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::LocatorSetContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::LocatorSetContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::LocatorSetContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy")
    {
        proxy = value;
        proxy.value_namespace = name_space;
        proxy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::LocatorSetContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
    if(value_path == "proxy")
    {
        proxy.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::LocatorSetContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set" || name == "proxy")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::Ipv4Addrees()
    :
    address{YType::str, "address"}
        ,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv4-addrees"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::~Ipv4Addrees()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addrees";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_mapping_option != nullptr)
    {
        _children["database-mapping-option"] = database_mapping_option;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "address")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "ipv4-addrees"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::Ipv6Addrees()
    :
    address{YType::str, "address"}
        ,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv6-addrees"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::~Ipv6Addrees()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addrees";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_mapping_option != nullptr)
    {
        _children["database-mapping-option"] = database_mapping_option;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "address")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "ipv6-addrees"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::IPv4Interface()
    :
    name{YType::str, "name"}
        ,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv4-interface"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::~IPv4Interface()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv4-interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_mapping_option != nullptr)
    {
        _children["database-mapping-option"] = database_mapping_option;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "IPv4-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::IPv6Interface()
    :
    name{YType::str, "name"}
        ,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv6-interface"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::~IPv6Interface()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6-interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_mapping_option != nullptr)
    {
        _children["database-mapping-option"] = database_mapping_option;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "IPv6-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::Mac()
    :
    locator_set{YType::str, "locator-set"}
{

    yang_name = "mac"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::~Mac()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::has_data() const
{
    if (is_presence_container) return true;
    return locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "limit"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::Itr()
    :
    nmr_ttl{YType::uint16, "nmr-ttl"}
        ,
    map_resolver(this, {"ip_addr"})
{

    yang_name = "itr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::~Itr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_resolver.len(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return nmr_ttl.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.len(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nmr_ttl.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nmr_ttl.is_set || is_set(nmr_ttl.yfilter)) leaf_name_data.push_back(nmr_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver>();
        ent_->parent = this;
        map_resolver.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : map_resolver.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nmr-ttl")
    {
        nmr_ttl = value;
        nmr_ttl.value_namespace = name_space;
        nmr_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nmr-ttl")
    {
        nmr_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver" || name == "nmr-ttl")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "map-resolver"; yang_parent_name = "itr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{

    yang_name = "itr-enable"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::~ItrEnable()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::has_data() const
{
    if (is_presence_container) return true;
    return itr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{

    yang_name = "etr-enable"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::~EtrEnable()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::has_data() const
{
    if (is_presence_container) return true;
    return etr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
        ,
    map_server(this, {"ip_addr"})
    , accept_map_request_mapping(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::~Etr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_server.len(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.len(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(map_cache_ttl.yfilter)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.yfilter)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-server")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer>();
        ent_->parent = this;
        map_server.append(ent_);
        return ent_;
    }

    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : map_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(accept_map_request_mapping != nullptr)
    {
        _children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
        map_cache_ttl.value_namespace = name_space;
        map_cache_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-server" || name == "accept-map-request-mapping" || name == "map-cache-ttl")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
        ,
    key(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::~MapServer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd>())
    , key_0(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0>())
    , key_6(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6>())
    , key_7(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;
    key_7->parent = this;

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::has_data() const
{
    if (is_presence_container) return true;
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_pwd != nullptr)
    {
        _children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        _children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        _children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        _children["key-7"] = key_7;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::has_data() const
{
    if (is_presence_container) return true;
    return ak_0.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-0")
    {
        ak_0.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::has_data() const
{
    if (is_presence_container) return true;
    return ak_6.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-6")
    {
        ak_6.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-7"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::has_data() const
{
    if (is_presence_container) return true;
    return ak_7.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-7")
    {
        ak_7.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{

    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::has_data() const
{
    if (is_presence_container) return true;
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_mappping.yfilter)
	|| ydk::is_set(verify.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.yfilter)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.yfilter)) leaf_name_data.push_back(verify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mappping" || name == "verify")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "map-cache-limit"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::has_data() const
{
    if (is_presence_container) return true;
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::MapCache()
    :
    eid_cont(this, {"eid_prefix"})
{

    yang_name = "map-cache"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::~MapCache()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eid_cont.len(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.len(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont>();
        ent_->parent = this;
        eid_cont.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eid_cont.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-cont")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"}
        ,
    etr_interface_ip(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp>())
{
    etr_interface_ip->parent = this;

    yang_name = "eid-cont"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::~EidCont()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::has_data() const
{
    if (is_presence_container) return true;
    return eid_prefix.is_set
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont";
    ADD_KEY_TOKEN(eid_prefix, "eid-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etr-interface-ip")
    {
        if(etr_interface_ip == nullptr)
        {
            etr_interface_ip = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp>();
        }
        return etr_interface_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(etr_interface_ip != nullptr)
    {
        _children["etr-interface-ip"] = etr_interface_ip;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
        eid_prefix.value_namespace = name_space;
        eid_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip" || name == "eid-prefix")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::EtrInterfaceIp()
    :
    etr_interface_ip_address{YType::str, "etr-interface-ip-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{

    yang_name = "etr-interface-ip"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::~EtrInterfaceIp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::has_data() const
{
    if (is_presence_container) return true;
    return etr_interface_ip_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr_interface_ip_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-interface-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr_interface_ip_address.is_set || is_set(etr_interface_ip_address.yfilter)) leaf_name_data.push_back(etr_interface_ip_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip-address" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::EidTable()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "eid-table"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::~EidTable()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EidTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::BroadcastUnderlay()
    :
    ipv4_multicast{YType::str, "ipv4-multicast"},
    ipv6_multicast{YType::str, "ipv6-multicast"}
{

    yang_name = "broadcast-underlay"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::~BroadcastUnderlay()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_multicast.is_set
	|| ipv6_multicast.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_multicast.yfilter)
	|| ydk::is_set(ipv6_multicast.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-underlay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_multicast.is_set || is_set(ipv4_multicast.yfilter)) leaf_name_data.push_back(ipv4_multicast.get_name_leafdata());
    if (ipv6_multicast.is_set || is_set(ipv6_multicast.yfilter)) leaf_name_data.push_back(ipv6_multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-multicast")
    {
        ipv4_multicast = value;
        ipv4_multicast.value_namespace = name_space;
        ipv4_multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-multicast")
    {
        ipv6_multicast = value;
        ipv6_multicast.value_namespace = name_space;
        ipv6_multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-multicast")
    {
        ipv4_multicast.yfilter = yfilter;
    }
    if(value_path == "ipv6-multicast")
    {
        ipv6_multicast.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::BroadcastUnderlay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-multicast" || name == "ipv6-multicast")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Flood::Flood()
    :
    arp_nd{YType::empty, "arp-nd"},
    unknown_unicast{YType::empty, "unknown-unicast"}
{

    yang_name = "flood"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Flood::~Flood()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Flood::has_data() const
{
    if (is_presence_container) return true;
    return arp_nd.is_set
	|| unknown_unicast.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Flood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arp_nd.yfilter)
	|| ydk::is_set(unknown_unicast.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Flood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Flood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp_nd.is_set || is_set(arp_nd.yfilter)) leaf_name_data.push_back(arp_nd.get_name_leafdata());
    if (unknown_unicast.is_set || is_set(unknown_unicast.yfilter)) leaf_name_data.push_back(unknown_unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Flood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Flood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arp-nd")
    {
        arp_nd = value;
        arp_nd.value_namespace = name_space;
        arp_nd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast")
    {
        unknown_unicast = value;
        unknown_unicast.value_namespace = name_space;
        unknown_unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Flood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arp-nd")
    {
        arp_nd.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast")
    {
        unknown_unicast.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Flood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp-nd" || name == "unknown-unicast")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::DatabaseMapping()
    :
    eid_cont(this, {"eid_prefix"})
    , mac(nullptr) // presence node
    , limit(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eid_cont.len(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return (mac !=  nullptr && mac->has_data())
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.len(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation())
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont>();
        ent_->parent = this;
        eid_cont.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eid_cont.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-cont" || name == "mac" || name == "limit")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"}
        ,
    locator_set_container(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::LocatorSetContainer>())
    , ipv4_addrees(this, {"address"})
    , ipv6_addrees(this, {"address"})
    , ipv4_interface(this, {"name"})
    , ipv6_interface(this, {"name"})
{
    locator_set_container->parent = this;

    yang_name = "eid-cont"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::~EidCont()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_addrees.len(); index++)
    {
        if(ipv4_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.len(); index++)
    {
        if(ipv6_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.len(); index++)
    {
        if(ipv4_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.len(); index++)
    {
        if(ipv6_interface[index]->has_data())
            return true;
    }
    return eid_prefix.is_set
	|| (locator_set_container !=  nullptr && locator_set_container->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addrees.len(); index++)
    {
        if(ipv4_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.len(); index++)
    {
        if(ipv6_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.len(); index++)
    {
        if(ipv4_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.len(); index++)
    {
        if(ipv6_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| (locator_set_container !=  nullptr && locator_set_container->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont";
    ADD_KEY_TOKEN(eid_prefix, "eid-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locator-set-container")
    {
        if(locator_set_container == nullptr)
        {
            locator_set_container = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::LocatorSetContainer>();
        }
        return locator_set_container;
    }

    if(child_yang_name == "ipv4-addrees")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees>();
        ent_->parent = this;
        ipv4_addrees.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6-addrees")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees>();
        ent_->parent = this;
        ipv6_addrees.append(ent_);
        return ent_;
    }

    if(child_yang_name == "IPv4-interface")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface>();
        ent_->parent = this;
        ipv4_interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "IPv6-interface")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface>();
        ent_->parent = this;
        ipv6_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(locator_set_container != nullptr)
    {
        _children["locator-set-container"] = locator_set_container;
    }

    count_ = 0;
    for (auto ent_ : ipv4_addrees.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6_addrees.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
        eid_prefix.value_namespace = name_space;
        eid_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set-container" || name == "ipv4-addrees" || name == "ipv6-addrees" || name == "IPv4-interface" || name == "IPv6-interface" || name == "eid-prefix")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::LocatorSetContainer::LocatorSetContainer()
    :
    locator_set{YType::str, "locator-set"},
    proxy{YType::empty, "proxy"}
{

    yang_name = "locator-set-container"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::LocatorSetContainer::~LocatorSetContainer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::LocatorSetContainer::has_data() const
{
    if (is_presence_container) return true;
    return locator_set.is_set
	|| proxy.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::LocatorSetContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter)
	|| ydk::is_set(proxy.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::LocatorSetContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-set-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::LocatorSetContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (proxy.is_set || is_set(proxy.yfilter)) leaf_name_data.push_back(proxy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::LocatorSetContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::LocatorSetContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::LocatorSetContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy")
    {
        proxy = value;
        proxy.value_namespace = name_space;
        proxy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::LocatorSetContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
    if(value_path == "proxy")
    {
        proxy.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::LocatorSetContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set" || name == "proxy")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::Ipv4Addrees()
    :
    address{YType::str, "address"}
        ,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv4-addrees"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::~Ipv4Addrees()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addrees";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_mapping_option != nullptr)
    {
        _children["database-mapping-option"] = database_mapping_option;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "address")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "ipv4-addrees"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::Ipv6Addrees()
    :
    address{YType::str, "address"}
        ,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv6-addrees"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::~Ipv6Addrees()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addrees";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_mapping_option != nullptr)
    {
        _children["database-mapping-option"] = database_mapping_option;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "address")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "ipv6-addrees"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::IPv4Interface()
    :
    name{YType::str, "name"}
        ,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv4-interface"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::~IPv4Interface()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv4-interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_mapping_option != nullptr)
    {
        _children["database-mapping-option"] = database_mapping_option;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "IPv4-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::IPv6Interface()
    :
    name{YType::str, "name"}
        ,
    database_mapping_option(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv6-interface"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::~IPv6Interface()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6-interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_mapping_option != nullptr)
    {
        _children["database-mapping-option"] = database_mapping_option;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    down{YType::empty, "down"}
{

    yang_name = "database-mapping-option"; yang_parent_name = "IPv6-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| weight.is_set
	|| down.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(down.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "down")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::Mac()
    :
    locator_set{YType::str, "locator-set"}
{

    yang_name = "mac"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::~Mac()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::has_data() const
{
    if (is_presence_container) return true;
    return locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "limit"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::Itr()
    :
    nmr_ttl{YType::uint16, "nmr-ttl"}
        ,
    map_resolver(this, {"ip_addr"})
{

    yang_name = "itr"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::~Itr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_resolver.len(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return nmr_ttl.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.len(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nmr_ttl.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nmr_ttl.is_set || is_set(nmr_ttl.yfilter)) leaf_name_data.push_back(nmr_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver>();
        ent_->parent = this;
        map_resolver.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : map_resolver.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nmr-ttl")
    {
        nmr_ttl = value;
        nmr_ttl.value_namespace = name_space;
        nmr_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nmr-ttl")
    {
        nmr_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver" || name == "nmr-ttl")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "map-resolver"; yang_parent_name = "itr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{

    yang_name = "itr-enable"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::~ItrEnable()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::has_data() const
{
    if (is_presence_container) return true;
    return itr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{

    yang_name = "etr-enable"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::~EtrEnable()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::has_data() const
{
    if (is_presence_container) return true;
    return etr.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
        ,
    map_server(this, {"ip_addr"})
    , accept_map_request_mapping(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::~Etr()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_server.len(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.len(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(map_cache_ttl.yfilter)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.yfilter)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-server")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer>();
        ent_->parent = this;
        map_server.append(ent_);
        return ent_;
    }

    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : map_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(accept_map_request_mapping != nullptr)
    {
        _children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
        map_cache_ttl.value_namespace = name_space;
        map_cache_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-server" || name == "accept-map-request-mapping" || name == "map-cache-ttl")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
        ,
    key(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::~MapServer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd>())
    , key_0(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0>())
    , key_6(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6>())
    , key_7(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;
    key_7->parent = this;

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::has_data() const
{
    if (is_presence_container) return true;
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_pwd != nullptr)
    {
        _children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        _children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        _children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        _children["key-7"] = key_7;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::has_data() const
{
    if (is_presence_container) return true;
    return ak_0.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-0")
    {
        ak_0.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::has_data() const
{
    if (is_presence_container) return true;
    return ak_6.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-6")
    {
        ak_6.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-7"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::has_data() const
{
    if (is_presence_container) return true;
    return ak_7.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-7")
    {
        ak_7.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{

    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::has_data() const
{
    if (is_presence_container) return true;
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_mappping.yfilter)
	|| ydk::is_set(verify.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.yfilter)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.yfilter)) leaf_name_data.push_back(verify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::AcceptMapRequestMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mappping" || name == "verify")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "map-cache-limit"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::has_data() const
{
    if (is_presence_container) return true;
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::MapCache()
    :
    eid_cont(this, {"eid_prefix"})
{

    yang_name = "map-cache"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::~MapCache()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eid_cont.len(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.len(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont>();
        ent_->parent = this;
        eid_cont.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eid_cont.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-cont")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"}
        ,
    etr_interface_ip(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp>())
{
    etr_interface_ip->parent = this;

    yang_name = "eid-cont"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::~EidCont()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::has_data() const
{
    if (is_presence_container) return true;
    return eid_prefix.is_set
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont";
    ADD_KEY_TOKEN(eid_prefix, "eid-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etr-interface-ip")
    {
        if(etr_interface_ip == nullptr)
        {
            etr_interface_ip = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp>();
        }
        return etr_interface_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(etr_interface_ip != nullptr)
    {
        _children["etr-interface-ip"] = etr_interface_ip;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
        eid_prefix.value_namespace = name_space;
        eid_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip" || name == "eid-prefix")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::EtrInterfaceIp()
    :
    etr_interface_ip_address{YType::str, "etr-interface-ip-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{

    yang_name = "etr-interface-ip"; yang_parent_name = "eid-cont"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::~EtrInterfaceIp()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::has_data() const
{
    if (is_presence_container) return true;
    return etr_interface_ip_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr_interface_ip_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-interface-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr_interface_ip_address.is_set || is_set(etr_interface_ip_address.yfilter)) leaf_name_data.push_back(etr_interface_ip_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip-address" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Decapsulation()
    :
    filter(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter>())
{
    filter->parent = this;

    yang_name = "decapsulation"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::~Decapsulation()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::has_data() const
{
    if (is_presence_container) return true;
    return (filter !=  nullptr && filter->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (filter !=  nullptr && filter->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter>();
        }
        return filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(filter != nullptr)
    {
        _children["filter"] = filter;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Filter()
    :
    rloc(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc>())
{
    rloc->parent = this;

    yang_name = "filter"; yang_parent_name = "decapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::~Filter()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::has_data() const
{
    if (is_presence_container) return true;
    return (rloc !=  nullptr && rloc->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (rloc !=  nullptr && rloc->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rloc")
    {
        if(rloc == nullptr)
        {
            rloc = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc>();
        }
        return rloc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rloc != nullptr)
    {
        _children["rloc"] = rloc;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rloc")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Rloc()
    :
    source(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source>())
{
    source->parent = this;

    yang_name = "rloc"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::~Rloc()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rloc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::Source()
    :
    locator_set{YType::str, "locator-set"},
    member{YType::empty, "member"}
{

    yang_name = "source"; yang_parent_name = "rloc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::~Source()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::has_data() const
{
    if (is_presence_container) return true;
    return locator_set.is_set
	|| member.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter)
	|| ydk::is_set(member.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (member.is_set || is_set(member.yfilter)) leaf_name_data.push_back(member.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member")
    {
        member = value;
        member.value_namespace = name_space;
        member.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
    if(value_path == "member")
    {
        member.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set" || name == "member")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DynamicEid()
    :
    name{YType::str, "name"},
    map_notify_group{YType::str, "map-notify-group"}
        ,
    database_mapping(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping>())
    , eid_notify(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify>())
    , map_server(this, {"ip_addr"})
{
    database_mapping->parent = this;
    eid_notify->parent = this;

    yang_name = "dynamic-eid"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::~DynamicEid()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_server.len(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return name.is_set
	|| map_notify_group.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (eid_notify !=  nullptr && eid_notify->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::has_operation() const
{
    for (std::size_t index=0; index<map_server.len(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(map_notify_group.yfilter)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (eid_notify !=  nullptr && eid_notify->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-eid";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (map_notify_group.is_set || is_set(map_notify_group.yfilter)) leaf_name_data.push_back(map_notify_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "eid-notify")
    {
        if(eid_notify == nullptr)
        {
            eid_notify = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify>();
        }
        return eid_notify;
    }

    if(child_yang_name == "map-server")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer>();
        ent_->parent = this;
        map_server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_mapping != nullptr)
    {
        _children["database-mapping"] = database_mapping;
    }

    if(eid_notify != nullptr)
    {
        _children["eid-notify"] = eid_notify;
    }

    count_ = 0;
    for (auto ent_ : map_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-notify-group")
    {
        map_notify_group = value;
        map_notify_group.value_namespace = name_space;
        map_notify_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "map-notify-group")
    {
        map_notify_group.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping" || name == "eid-notify" || name == "map-server" || name == "name" || name == "map-notify-group")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::DatabaseMapping()
    :
    ipv4_prefix(this, {"eid_prefix"})
{

    yang_name = "database-mapping"; yang_parent_name = "dynamic-eid"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_prefix.len(); index++)
    {
        if(ipv4_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<ipv4_prefix.len(); index++)
    {
        if(ipv4_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-prefix")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix>();
        ent_->parent = this;
        ipv4_prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::Ipv4Prefix()
    :
    eid_prefix{YType::str, "eid-prefix"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "ipv4-prefix"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::~Ipv4Prefix()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::has_data() const
{
    if (is_presence_container) return true;
    return eid_prefix.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-prefix";
    ADD_KEY_TOKEN(eid_prefix, "eid-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
        eid_prefix.value_namespace = name_space;
        eid_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::DatabaseMapping::Ipv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-prefix" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::EidNotify()
    :
    authentication_key(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey>())
    , gateway_key(this, {"gateway_ip"})
{
    authentication_key->parent = this;

    yang_name = "eid-notify"; yang_parent_name = "dynamic-eid"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::~EidNotify()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<gateway_key.len(); index++)
    {
        if(gateway_key[index]->has_data())
            return true;
    }
    return (authentication_key !=  nullptr && authentication_key->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::has_operation() const
{
    for (std::size_t index=0; index<gateway_key.len(); index++)
    {
        if(gateway_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (authentication_key !=  nullptr && authentication_key->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-notify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "gateway-key")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey>();
        ent_->parent = this;
        gateway_key.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication_key != nullptr)
    {
        _children["authentication-key"] = authentication_key;
    }

    count_ = 0;
    for (auto ent_ : gateway_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-key" || name == "gateway-key")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::AuthenticationKey()
    :
    unc_pwd{YType::str, "unc-pwd"},
    key_0{YType::str, "key-0"},
    key_6{YType::str, "key-6"},
    key_7{YType::str, "key-7"}
{

    yang_name = "authentication-key"; yang_parent_name = "eid-notify"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| key_0.is_set
	|| key_6.is_set
	|| key_7.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(key_0.yfilter)
	|| ydk::is_set(key_6.yfilter)
	|| ydk::is_set(key_7.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (key_0.is_set || is_set(key_0.yfilter)) leaf_name_data.push_back(key_0.get_name_leafdata());
    if (key_6.is_set || is_set(key_6.yfilter)) leaf_name_data.push_back(key_6.get_name_leafdata());
    if (key_7.is_set || is_set(key_7.yfilter)) leaf_name_data.push_back(key_7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::GatewayKey()
    :
    gateway_ip{YType::str, "gateway-ip"}
        ,
    key(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key>())
{
    key->parent = this;

    yang_name = "gateway-key"; yang_parent_name = "eid-notify"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::~GatewayKey()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::has_data() const
{
    if (is_presence_container) return true;
    return gateway_ip.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gateway_ip.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway-key";
    ADD_KEY_TOKEN(gateway_ip, "gateway-ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gateway_ip.is_set || is_set(gateway_ip.yfilter)) leaf_name_data.push_back(gateway_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gateway-ip")
    {
        gateway_ip = value;
        gateway_ip.value_namespace = name_space;
        gateway_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gateway-ip")
    {
        gateway_ip.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "gateway-ip")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd>())
    , key_0(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0>())
    , key_6(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;

    yang_name = "key"; yang_parent_name = "gateway-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::~Key()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::has_data() const
{
    if (is_presence_container) return true;
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6>();
        }
        return key_6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_pwd != nullptr)
    {
        _children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        _children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        _children["key-6"] = key_6;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::has_data() const
{
    if (is_presence_container) return true;
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::has_data() const
{
    if (is_presence_container) return true;
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
        ,
    key(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "dynamic-eid"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::~MapServer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd>())
    , key_0(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0>())
    , key_6(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6>())
    , key_7(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;
    key_7->parent = this;

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::~Key()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::has_data() const
{
    if (is_presence_container) return true;
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7>();
        }
        return key_7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_pwd != nullptr)
    {
        _children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        _children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        _children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        _children["key-7"] = key_7;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::has_data() const
{
    if (is_presence_container) return true;
    return ak_0.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-0")
    {
        ak_0.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::has_data() const
{
    if (is_presence_container) return true;
    return ak_6.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-6")
    {
        ak_6.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-7"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::has_data() const
{
    if (is_presence_container) return true;
    return ak_7.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-7")
    {
        ak_7.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LocReachAlgorithm()
    :
    rloc_probing{YType::empty, "rloc-probing"}
        ,
    lsb_reports(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports>())
{
    lsb_reports->parent = this;

    yang_name = "loc-reach-algorithm"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::~LocReachAlgorithm()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::has_data() const
{
    if (is_presence_container) return true;
    return rloc_probing.is_set
	|| (lsb_reports !=  nullptr && lsb_reports->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rloc_probing.yfilter)
	|| (lsb_reports !=  nullptr && lsb_reports->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loc-reach-algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rloc_probing.is_set || is_set(rloc_probing.yfilter)) leaf_name_data.push_back(rloc_probing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsb-reports")
    {
        if(lsb_reports == nullptr)
        {
            lsb_reports = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports>();
        }
        return lsb_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsb_reports != nullptr)
    {
        _children["lsb-reports"] = lsb_reports;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rloc-probing")
    {
        rloc_probing = value;
        rloc_probing.value_namespace = name_space;
        rloc_probing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rloc-probing")
    {
        rloc_probing.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsb-reports" || name == "rloc-probing")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::LsbReports()
    :
    do_not_transmit{YType::empty, "do-not-transmit"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "lsb-reports"; yang_parent_name = "loc-reach-algorithm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::~LsbReports()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::has_data() const
{
    if (is_presence_container) return true;
    return do_not_transmit.is_set
	|| ignore.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(do_not_transmit.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsb-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_transmit.is_set || is_set(do_not_transmit.yfilter)) leaf_name_data.push_back(do_not_transmit.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::LocReachAlgorithm::LsbReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-transmit" || name == "ignore")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::MapServer()
    :
    rloc(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc>())
    , site_registration(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration>())
{
    rloc->parent = this;
    site_registration->parent = this;

    yang_name = "map-server"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::~MapServer()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return (rloc !=  nullptr && rloc->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (rloc !=  nullptr && rloc->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rloc")
    {
        if(rloc == nullptr)
        {
            rloc = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc>();
        }
        return rloc;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration>();
        }
        return site_registration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::get_children() const
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

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rloc" || name == "site-registration")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Rloc()
    :
    members(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members>())
{
    members->parent = this;

    yang_name = "rloc"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::~Rloc()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::has_data() const
{
    if (is_presence_container) return true;
    return (members !=  nullptr && members->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::has_operation() const
{
    return is_set(yfilter)
	|| (members !=  nullptr && members->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rloc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members>();
        }
        return members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(members != nullptr)
    {
        _children["members"] = members;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "members")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::Members()
    :
    distribute{YType::empty, "distribute"}
        ,
    modify_discovered(std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered>())
{
    modify_discovered->parent = this;

    yang_name = "members"; yang_parent_name = "rloc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::~Members()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::has_data() const
{
    if (is_presence_container) return true;
    return distribute.is_set
	|| (modify_discovered !=  nullptr && modify_discovered->has_data());
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distribute.yfilter)
	|| (modify_discovered !=  nullptr && modify_discovered->has_operation());
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distribute.is_set || is_set(distribute.yfilter)) leaf_name_data.push_back(distribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "modify-discovered")
    {
        if(modify_discovered == nullptr)
        {
            modify_discovered = std::make_shared<Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered>();
        }
        return modify_discovered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(modify_discovered != nullptr)
    {
        _children["modify-discovered"] = modify_discovered;
    }

    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distribute")
    {
        distribute = value;
        distribute.value_namespace = name_space;
        distribute.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distribute")
    {
        distribute.yfilter = yfilter;
    }
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modify-discovered" || name == "distribute")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::ModifyDiscovered()
    :
    operator_{YType::enumeration, "operator"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "modify-discovered"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::~ModifyDiscovered()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::has_data() const
{
    if (is_presence_container) return true;
    return operator_.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modify-discovered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::InstanceContainer::InstanceList::MapServer::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::Protocol::application {0, "application"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::Protocol::bgp {1, "bgp"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::Protocol::connected {2, "connected"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::Protocol::eigrp {3, "eigrp"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::Protocol::isis {4, "isis"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::Protocol::maximum_prefix {5, "maximum-prefix"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::Protocol::nd {6, "nd"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::Protocol::ospf {7, "ospf"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::Protocol::static_ {8, "static"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ipv6::RouteImport::PrefixListProto::Protocol::rip {9, "rip"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::Default::Service::Ethernet::Etr::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::EidNotify::GatewayKey::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::DynamicEid::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::Operator_::add {0, "add"};
const Enum::YLeaf Native::Router::LispList::InstanceContainer::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::Operator_::override {1, "override"};


}
}

