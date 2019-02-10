
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_194.hpp"
#include "Cisco_IOS_XE_native_203.hpp"
#include "Cisco_IOS_XE_native_195.hpp"
#include "Cisco_IOS_XE_native_213.hpp"
#include "Cisco_IOS_XE_native_202.hpp"
#include "Cisco_IOS_XE_native_206.hpp"
#include "Cisco_IOS_XE_native_214.hpp"
#include "Cisco_IOS_XE_native_204.hpp"
#include "Cisco_IOS_XE_native_212.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::Bgp()
    :
    id{YType::str, "id"}
        ,
    map_cache_container(nullptr) // presence node
{

    yang_name = "bgp"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::~Bgp()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::Connected()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "connected"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::~Connected()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::has_data() const
{
    if (is_presence_container) return true;
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
        ,
    map_cache_container(nullptr) // presence node
{

    yang_name = "eigrp"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::~Eigrp()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::Isis()
    :
    id{YType::str, "id"}
        ,
    map_cache_container(nullptr) // presence node
{

    yang_name = "isis"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::~Isis()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::MaximumPrefix()
    :
    number{YType::int32, "number"},
    warning_only{YType::empty, "warning-only"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only1{YType::empty, "warning-only1"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| warning_only.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only1.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold1.yfilter)
	|| ydk::is_set(warning_only1.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.yfilter)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.yfilter)) leaf_name_data.push_back(warning_only1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "warning-only" || name == "threshold" || name == "threshold1" || name == "warning-only1")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
        ,
    map_cache_container(nullptr) // presence node
{

    yang_name = "ospf"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::~Ospf()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::Ospfv3()
    :
    id{YType::uint16, "id"}
        ,
    map_cache_container(nullptr) // presence node
{

    yang_name = "ospfv3"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::Rip()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "rip"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::~Rip()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::has_data() const
{
    if (is_presence_container) return true;
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::Static()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "static"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::~Static()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::has_data() const
{
    if (is_presence_container) return true;
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_cache_container != nullptr)
    {
        _children["map-cache-container"] = map_cache_container;
    }

    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SiteRegistration::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SolicitMapRequest::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::SourceLocator()
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
    atm_subinterface(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-locator"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::~SourceLocator()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::has_data() const
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

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::has_operation() const
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

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-locator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::get_children() const
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

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::SourceLocator::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{

    yang_name = "use-petr"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr::~UsePetr()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr::has_data() const
{
    if (is_presence_container) return true;
    return locator_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr";
    ADD_KEY_TOKEN(locator_address, "locator-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.yfilter)) leaf_name_data.push_back(locator_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-address" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LocReachAlgorithm()
    :
    rloc_probing{YType::empty, "rloc-probing"}
        ,
    lsb_reports(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports>())
{
    lsb_reports->parent = this;

    yang_name = "loc-reach-algorithm"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::~LocReachAlgorithm()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::has_data() const
{
    if (is_presence_container) return true;
    return rloc_probing.is_set
	|| (lsb_reports !=  nullptr && lsb_reports->has_data());
}

bool Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rloc_probing.yfilter)
	|| (lsb_reports !=  nullptr && lsb_reports->has_operation());
}

std::string Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loc-reach-algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rloc_probing.is_set || is_set(rloc_probing.yfilter)) leaf_name_data.push_back(rloc_probing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsb-reports")
    {
        if(lsb_reports == nullptr)
        {
            lsb_reports = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports>();
        }
        return lsb_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsb_reports != nullptr)
    {
        _children["lsb-reports"] = lsb_reports;
    }

    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rloc-probing")
    {
        rloc_probing = value;
        rloc_probing.value_namespace = name_space;
        rloc_probing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rloc-probing")
    {
        rloc_probing.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsb-reports" || name == "rloc-probing")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports::LsbReports()
    :
    do_not_transmit{YType::empty, "do-not-transmit"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "lsb-reports"; yang_parent_name = "loc-reach-algorithm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports::~LsbReports()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports::has_data() const
{
    if (is_presence_container) return true;
    return do_not_transmit.is_set
	|| ignore.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(do_not_transmit.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsb-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_transmit.is_set || is_set(do_not_transmit.yfilter)) leaf_name_data.push_back(do_not_transmit.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-transmit" || name == "ignore")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::LocatorDown::LocatorDown()
    :
    address{YType::str, "address"},
    ipv4_interface{YType::str, "IPv4-interface"},
    ipv6_interface{YType::str, "IPv6-interface"}
{

    yang_name = "locator-down"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::LocatorDown::~LocatorDown()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::LocatorDown::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| ipv4_interface.is_set
	|| ipv6_interface.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::LocatorDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(ipv4_interface.yfilter)
	|| ydk::is_set(ipv6_interface.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::LocatorDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::LocatorDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (ipv4_interface.is_set || is_set(ipv4_interface.yfilter)) leaf_name_data.push_back(ipv4_interface.get_name_leafdata());
    if (ipv6_interface.is_set || is_set(ipv6_interface.yfilter)) leaf_name_data.push_back(ipv6_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::LocatorDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::LocatorDown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::LocatorDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::EidTable::InstanceList::LocatorDown::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::EidTable::InstanceList::LocatorDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "IPv4-interface" || name == "IPv6-interface")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::LocatorTable::LocatorTable()
    :
    vrf_name{YType::str, "vrf-name"},
    default_{YType::empty, "default"},
    vrf{YType::str, "vrf"}
{

    yang_name = "locator-table"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::LocatorTable::~LocatorTable()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::LocatorTable::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| default_.is_set
	|| vrf.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::LocatorTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::LocatorTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::LocatorTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::LocatorTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::LocatorTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::LocatorTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::EidTable::InstanceList::LocatorTable::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::EidTable::InstanceList::LocatorTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "default" || name == "vrf")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::MapRequest::MapRequest()
    :
    itr_rlocs{YType::str, "itr-rlocs"}
{

    yang_name = "map-request"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::MapRequest::has_data() const
{
    if (is_presence_container) return true;
    return itr_rlocs.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::MapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr_rlocs.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::MapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr_rlocs.is_set || is_set(itr_rlocs.yfilter)) leaf_name_data.push_back(itr_rlocs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::MapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr-rlocs")
    {
        itr_rlocs = value;
        itr_rlocs.value_namespace = name_space;
        itr_rlocs.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::MapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr-rlocs")
    {
        itr_rlocs.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::MapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr-rlocs")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::MapServer::MapServer()
    :
    rloc(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc>())
    , site_registration(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration>())
    , nmr(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapServer::Nmr>())
    , session(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapServer::Session>())
{
    rloc->parent = this;
    site_registration->parent = this;
    nmr->parent = this;
    session->parent = this;

    yang_name = "map-server"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return (rloc !=  nullptr && rloc->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (nmr !=  nullptr && nmr->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (rloc !=  nullptr && rloc->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (nmr !=  nullptr && nmr->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string Native::Router::Lisp::EidTable::InstanceList::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rloc")
    {
        if(rloc == nullptr)
        {
            rloc = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc>();
        }
        return rloc;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "nmr")
    {
        if(nmr == nullptr)
        {
            nmr = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapServer::Nmr>();
        }
        return nmr;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapServer::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::MapServer::get_children() const
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

void Native::Router::Lisp::EidTable::InstanceList::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::EidTable::InstanceList::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rloc" || name == "site-registration" || name == "nmr" || name == "session")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Rloc()
    :
    members(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members>())
{
    members->parent = this;

    yang_name = "rloc"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::~Rloc()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::has_data() const
{
    if (is_presence_container) return true;
    return (members !=  nullptr && members->has_data());
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::has_operation() const
{
    return is_set(yfilter)
	|| (members !=  nullptr && members->has_operation());
}

std::string Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rloc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members>();
        }
        return members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(members != nullptr)
    {
        _children["members"] = members;
    }

    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "members")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::Members()
    :
    distribute{YType::empty, "distribute"}
        ,
    modify_discovered(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered>())
{
    modify_discovered->parent = this;

    yang_name = "members"; yang_parent_name = "rloc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::~Members()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::has_data() const
{
    if (is_presence_container) return true;
    return distribute.is_set
	|| (modify_discovered !=  nullptr && modify_discovered->has_data());
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distribute.yfilter)
	|| (modify_discovered !=  nullptr && modify_discovered->has_operation());
}

std::string Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distribute.is_set || is_set(distribute.yfilter)) leaf_name_data.push_back(distribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "modify-discovered")
    {
        if(modify_discovered == nullptr)
        {
            modify_discovered = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered>();
        }
        return modify_discovered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(modify_discovered != nullptr)
    {
        _children["modify-discovered"] = modify_discovered;
    }

    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distribute")
    {
        distribute = value;
        distribute.value_namespace = name_space;
        distribute.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distribute")
    {
        distribute.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modify-discovered" || name == "distribute")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::ModifyDiscovered()
    :
    operator_{YType::enumeration, "operator"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "modify-discovered"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::~ModifyDiscovered()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::has_data() const
{
    if (is_presence_container) return true;
    return operator_.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modify-discovered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::MapServer::Nmr::Nmr()
    :
    non_site_ttl{YType::uint16, "non-site-ttl"}
{

    yang_name = "nmr"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::MapServer::Nmr::~Nmr()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::Nmr::has_data() const
{
    if (is_presence_container) return true;
    return non_site_ttl.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::Nmr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_site_ttl.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::MapServer::Nmr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nmr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::MapServer::Nmr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_site_ttl.is_set || is_set(non_site_ttl.yfilter)) leaf_name_data.push_back(non_site_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::MapServer::Nmr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::MapServer::Nmr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::MapServer::Nmr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-site-ttl")
    {
        non_site_ttl = value;
        non_site_ttl.value_namespace = name_space;
        non_site_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::MapServer::Nmr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-site-ttl")
    {
        non_site_ttl.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::Nmr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-site-ttl")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::MapServer::Session::Session()
    :
    passive_open{YType::str, "passive-open"}
{

    yang_name = "session"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::MapServer::Session::~Session()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::Session::has_data() const
{
    if (is_presence_container) return true;
    return passive_open.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive_open.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::MapServer::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::MapServer::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive_open.is_set || is_set(passive_open.yfilter)) leaf_name_data.push_back(passive_open.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::MapServer::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::MapServer::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::MapServer::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive-open")
    {
        passive_open = value;
        passive_open.value_namespace = name_space;
        passive_open.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::MapServer::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive-open")
    {
        passive_open.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::MapServer::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-open")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe::OtherXtrProbe()
    :
    period{YType::uint16, "period"}
{

    yang_name = "other-xtr-probe"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe::~OtherXtrProbe()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe::has_data() const
{
    if (is_presence_container) return true;
    return period.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "other-xtr-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe::RemoteRlocProbe()
    :
    on_membership_change{YType::empty, "on-membership-change"},
    on_route_change{YType::empty, "on-route-change"}
{

    yang_name = "remote-rloc-probe"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe::~RemoteRlocProbe()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe::has_data() const
{
    if (is_presence_container) return true;
    return on_membership_change.is_set
	|| on_route_change.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on_membership_change.yfilter)
	|| ydk::is_set(on_route_change.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-rloc-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on_membership_change.is_set || is_set(on_membership_change.yfilter)) leaf_name_data.push_back(on_membership_change.get_name_leafdata());
    if (on_route_change.is_set || is_set(on_route_change.yfilter)) leaf_name_data.push_back(on_route_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-membership-change" || name == "on-route-change")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::MapCache::MapCache()
    :
    eid_prefix{YType::str, "eid-prefix"},
    drop{YType::empty, "drop"},
    map_request{YType::empty, "map-request"},
    native_forward{YType::empty, "native-forward"}
        ,
    etr_interface_ip(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp>())
{
    etr_interface_ip->parent = this;

    yang_name = "map-cache"; yang_parent_name = "instance-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::MapCache::has_data() const
{
    if (is_presence_container) return true;
    return eid_prefix.is_set
	|| drop.is_set
	|| map_request.is_set
	|| native_forward.is_set
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_data());
}

bool Native::Router::Lisp::EidTable::InstanceList::MapCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(map_request.yfilter)
	|| ydk::is_set(native_forward.yfilter)
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_operation());
}

std::string Native::Router::Lisp::EidTable::InstanceList::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    ADD_KEY_TOKEN(eid_prefix, "eid-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (map_request.is_set || is_set(map_request.yfilter)) leaf_name_data.push_back(map_request.get_name_leafdata());
    if (native_forward.is_set || is_set(native_forward.yfilter)) leaf_name_data.push_back(native_forward.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etr-interface-ip")
    {
        if(etr_interface_ip == nullptr)
        {
            etr_interface_ip = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp>();
        }
        return etr_interface_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(etr_interface_ip != nullptr)
    {
        _children["etr-interface-ip"] = etr_interface_ip;
    }

    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::EidTable::InstanceList::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::EidTable::InstanceList::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip" || name == "eid-prefix" || name == "drop" || name == "map-request" || name == "native-forward")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp::EtrInterfaceIp()
    :
    etr_interface_ip_address{YType::str, "etr-interface-ip-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{

    yang_name = "etr-interface-ip"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp::~EtrInterfaceIp()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp::has_data() const
{
    if (is_presence_container) return true;
    return etr_interface_ip_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr_interface_ip_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-interface-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr_interface_ip_address.is_set || is_set(etr_interface_ip_address.yfilter)) leaf_name_data.push_back(etr_interface_ip_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip-address" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::Security::Security()
    :
    strong{YType::empty, "strong"}
{

    yang_name = "security"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Router::Lisp::Security::~Security()
{
}

bool Native::Router::Lisp::Security::has_data() const
{
    if (is_presence_container) return true;
    return strong.is_set;
}

bool Native::Router::Lisp::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(strong.yfilter);
}

std::string Native::Router::Lisp::Security::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (strong.is_set || is_set(strong.yfilter)) leaf_name_data.push_back(strong.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "strong")
    {
        strong = value;
        strong.value_namespace = name_space;
        strong.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "strong")
    {
        strong.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "strong")
        return true;
    return false;
}

Native::Router::Lisp::Site::Site()
    :
    sname{YType::str, "sname"},
    description{YType::str, "description"},
    site_id{YType::uint32, "site-id"}
        ,
    default_(std::make_shared<Native::Router::Lisp::Site::Default>())
    , authentication_key(std::make_shared<Native::Router::Lisp::Site::AuthenticationKey>())
    , allowed_locator(std::make_shared<Native::Router::Lisp::Site::AllowedLocator>())
    , eid_prefix(std::make_shared<Native::Router::Lisp::Site::EidPrefix>())
    , eid_record(std::make_shared<Native::Router::Lisp::Site::EidRecord>())
{
    default_->parent = this;
    authentication_key->parent = this;
    allowed_locator->parent = this;
    eid_prefix->parent = this;
    eid_record->parent = this;

    yang_name = "site"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Site::~Site()
{
}

bool Native::Router::Lisp::Site::has_data() const
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

bool Native::Router::Lisp::Site::has_operation() const
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

std::string Native::Router::Lisp::Site::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site";
    ADD_KEY_TOKEN(sname, "sname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sname.is_set || is_set(sname.yfilter)) leaf_name_data.push_back(sname.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (site_id.is_set || is_set(site_id.yfilter)) leaf_name_data.push_back(site_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Lisp::Site::Default>();
        }
        return default_;
    }

    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::Lisp::Site::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "allowed-locator")
    {
        if(allowed_locator == nullptr)
        {
            allowed_locator = std::make_shared<Native::Router::Lisp::Site::AllowedLocator>();
        }
        return allowed_locator;
    }

    if(child_yang_name == "eid-prefix")
    {
        if(eid_prefix == nullptr)
        {
            eid_prefix = std::make_shared<Native::Router::Lisp::Site::EidPrefix>();
        }
        return eid_prefix;
    }

    if(child_yang_name == "eid-record")
    {
        if(eid_record == nullptr)
        {
            eid_record = std::make_shared<Native::Router::Lisp::Site::EidRecord>();
        }
        return eid_record;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::get_children() const
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

void Native::Router::Lisp::Site::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "authentication-key" || name == "allowed-locator" || name == "eid-prefix" || name == "eid-record" || name == "sname" || name == "description" || name == "site-id")
        return true;
    return false;
}

Native::Router::Lisp::Site::Default::Default()
    :
    description{YType::str, "description"},
    site_id{YType::uint32, "site-id"}
        ,
    authentication_key(std::make_shared<Native::Router::Lisp::Site::Default::AuthenticationKey>())
    , allowed_locator(std::make_shared<Native::Router::Lisp::Site::Default::AllowedLocator>())
    , eid_prefix(std::make_shared<Native::Router::Lisp::Site::Default::EidPrefix>())
    , eid_record(std::make_shared<Native::Router::Lisp::Site::Default::EidRecord>())
{
    authentication_key->parent = this;
    allowed_locator->parent = this;
    eid_prefix->parent = this;
    eid_record->parent = this;

    yang_name = "default"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::Default::~Default()
{
}

bool Native::Router::Lisp::Site::Default::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| site_id.is_set
	|| (authentication_key !=  nullptr && authentication_key->has_data())
	|| (allowed_locator !=  nullptr && allowed_locator->has_data())
	|| (eid_prefix !=  nullptr && eid_prefix->has_data())
	|| (eid_record !=  nullptr && eid_record->has_data());
}

bool Native::Router::Lisp::Site::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(site_id.yfilter)
	|| (authentication_key !=  nullptr && authentication_key->has_operation())
	|| (allowed_locator !=  nullptr && allowed_locator->has_operation())
	|| (eid_prefix !=  nullptr && eid_prefix->has_operation())
	|| (eid_record !=  nullptr && eid_record->has_operation());
}

std::string Native::Router::Lisp::Site::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (site_id.is_set || is_set(site_id.yfilter)) leaf_name_data.push_back(site_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::Lisp::Site::Default::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "allowed-locator")
    {
        if(allowed_locator == nullptr)
        {
            allowed_locator = std::make_shared<Native::Router::Lisp::Site::Default::AllowedLocator>();
        }
        return allowed_locator;
    }

    if(child_yang_name == "eid-prefix")
    {
        if(eid_prefix == nullptr)
        {
            eid_prefix = std::make_shared<Native::Router::Lisp::Site::Default::EidPrefix>();
        }
        return eid_prefix;
    }

    if(child_yang_name == "eid-record")
    {
        if(eid_record == nullptr)
        {
            eid_record = std::make_shared<Native::Router::Lisp::Site::Default::EidRecord>();
        }
        return eid_record;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::Default::get_children() const
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

void Native::Router::Lisp::Site::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::Default::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-key" || name == "allowed-locator" || name == "eid-prefix" || name == "eid-record" || name == "description" || name == "site-id")
        return true;
    return false;
}

Native::Router::Lisp::Site::Default::AuthenticationKey::AuthenticationKey()
    :
    unc_pwd{YType::str, "unc-pwd"},
    key_0{YType::str, "key-0"},
    key_6{YType::str, "key-6"},
    key_7{YType::str, "key-7"}
{

    yang_name = "authentication-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::Default::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::Lisp::Site::Default::AuthenticationKey::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| key_0.is_set
	|| key_6.is_set
	|| key_7.is_set;
}

bool Native::Router::Lisp::Site::Default::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(key_0.yfilter)
	|| ydk::is_set(key_6.yfilter)
	|| ydk::is_set(key_7.yfilter);
}

std::string Native::Router::Lisp::Site::Default::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::Default::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (key_0.is_set || is_set(key_0.yfilter)) leaf_name_data.push_back(key_0.get_name_leafdata());
    if (key_6.is_set || is_set(key_6.yfilter)) leaf_name_data.push_back(key_6.get_name_leafdata());
    if (key_7.is_set || is_set(key_7.yfilter)) leaf_name_data.push_back(key_7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::Default::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::Default::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Site::Default::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::Default::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::Default::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::Lisp::Site::Default::AllowedLocator::AllowedLocator()
    :
    ls_ipv4{YType::str, "ls-ipv4"},
    ls_ipv6{YType::str, "ls-ipv6"}
        ,
    list(std::make_shared<Native::Router::Lisp::Site::Default::AllowedLocator::List>())
{
    list->parent = this;

    yang_name = "allowed-locator"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::Default::AllowedLocator::~AllowedLocator()
{
}

bool Native::Router::Lisp::Site::Default::AllowedLocator::has_data() const
{
    if (is_presence_container) return true;
    return ls_ipv4.is_set
	|| ls_ipv6.is_set
	|| (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Site::Default::AllowedLocator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ls_ipv4.yfilter)
	|| ydk::is_set(ls_ipv6.yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Site::Default::AllowedLocator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowed-locator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::Default::AllowedLocator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ls_ipv4.is_set || is_set(ls_ipv4.yfilter)) leaf_name_data.push_back(ls_ipv4.get_name_leafdata());
    if (ls_ipv6.is_set || is_set(ls_ipv6.yfilter)) leaf_name_data.push_back(ls_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::Default::AllowedLocator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Site::Default::AllowedLocator::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::Default::AllowedLocator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    return _children;
}

void Native::Router::Lisp::Site::Default::AllowedLocator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::Default::AllowedLocator::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::Default::AllowedLocator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "ls-ipv4" || name == "ls-ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Site::Default::AllowedLocator::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "allowed-locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::Default::AllowedLocator::List::~List()
{
}

bool Native::Router::Lisp::Site::Default::AllowedLocator::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Site::Default::AllowedLocator::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Lisp::Site::Default::AllowedLocator::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::Default::AllowedLocator::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::Default::AllowedLocator::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::Default::AllowedLocator::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Site::Default::AllowedLocator::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::Default::AllowedLocator::List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::Default::AllowedLocator::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Site::Default::EidPrefix::EidPrefix()
    :
    any_mac{YType::empty, "any-mac"}
        ,
    prefixes(this, {"prefix"})
    , instance_id(this, {"id"})
{

    yang_name = "eid-prefix"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::Default::EidPrefix::~EidPrefix()
{
}

bool Native::Router::Lisp::Site::Default::EidPrefix::has_data() const
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

bool Native::Router::Lisp::Site::Default::EidPrefix::has_operation() const
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

std::string Native::Router::Lisp::Site::Default::EidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::Default::EidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::Default::EidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Site::Default::EidPrefix::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    if(child_yang_name == "instance-id")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Site::Default::EidPrefix::InstanceId>();
        ent_->parent = this;
        instance_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::Default::EidPrefix::get_children() const
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

void Native::Router::Lisp::Site::Default::EidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-mac")
    {
        any_mac = value;
        any_mac.value_namespace = name_space;
        any_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Site::Default::EidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-mac")
    {
        any_mac.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Site::Default::EidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "instance-id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::Lisp::Site::Default::EidPrefix::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "eid-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::Default::EidPrefix::Prefixes::~Prefixes()
{
}

bool Native::Router::Lisp::Site::Default::EidPrefix::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::Lisp::Site::Default::EidPrefix::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::Lisp::Site::Default::EidPrefix::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::Default::EidPrefix::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::Default::EidPrefix::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::Default::EidPrefix::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Site::Default::EidPrefix::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::Default::EidPrefix::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::Default::EidPrefix::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::InstanceId()
    :
    id{YType::uint32, "id"},
    any_mac{YType::empty, "any-mac"}
        ,
    prefixes(this, {"prefix"})
{

    yang_name = "instance-id"; yang_parent_name = "eid-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::~InstanceId()
{
}

bool Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::has_data() const
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

bool Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::has_operation() const
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

std::string Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::get_children() const
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

void Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "instance-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::Prefixes::~Prefixes()
{
}

bool Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::Default::EidPrefix::InstanceId::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::Lisp::Site::Default::EidRecord::EidRecord()
    :
    any_mac{YType::empty, "any-mac"}
        ,
    prefixes(this, {"prefix"})
    , instance_id(this, {"id"})
{

    yang_name = "eid-record"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::Default::EidRecord::~EidRecord()
{
}

bool Native::Router::Lisp::Site::Default::EidRecord::has_data() const
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

bool Native::Router::Lisp::Site::Default::EidRecord::has_operation() const
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

std::string Native::Router::Lisp::Site::Default::EidRecord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-record";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::Default::EidRecord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::Default::EidRecord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Site::Default::EidRecord::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    if(child_yang_name == "instance-id")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Site::Default::EidRecord::InstanceId>();
        ent_->parent = this;
        instance_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::Default::EidRecord::get_children() const
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

void Native::Router::Lisp::Site::Default::EidRecord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-mac")
    {
        any_mac = value;
        any_mac.value_namespace = name_space;
        any_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Site::Default::EidRecord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-mac")
    {
        any_mac.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Site::Default::EidRecord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "instance-id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::Lisp::Site::Default::EidRecord::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "eid-record"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::Default::EidRecord::Prefixes::~Prefixes()
{
}

bool Native::Router::Lisp::Site::Default::EidRecord::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::Lisp::Site::Default::EidRecord::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::Lisp::Site::Default::EidRecord::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::Default::EidRecord::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::Default::EidRecord::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::Default::EidRecord::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Site::Default::EidRecord::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::Default::EidRecord::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::Default::EidRecord::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::Lisp::Site::Default::EidRecord::InstanceId::InstanceId()
    :
    id{YType::uint32, "id"},
    any_mac{YType::empty, "any-mac"}
        ,
    prefixes(this, {"prefix"})
{

    yang_name = "instance-id"; yang_parent_name = "eid-record"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::Default::EidRecord::InstanceId::~InstanceId()
{
}

bool Native::Router::Lisp::Site::Default::EidRecord::InstanceId::has_data() const
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

bool Native::Router::Lisp::Site::Default::EidRecord::InstanceId::has_operation() const
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

std::string Native::Router::Lisp::Site::Default::EidRecord::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::Default::EidRecord::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::Default::EidRecord::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Site::Default::EidRecord::InstanceId::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::Default::EidRecord::InstanceId::get_children() const
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

void Native::Router::Lisp::Site::Default::EidRecord::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::Default::EidRecord::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::Default::EidRecord::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::Lisp::Site::Default::EidRecord::InstanceId::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "instance-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::Default::EidRecord::InstanceId::Prefixes::~Prefixes()
{
}

bool Native::Router::Lisp::Site::Default::EidRecord::InstanceId::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::Lisp::Site::Default::EidRecord::InstanceId::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::Lisp::Site::Default::EidRecord::InstanceId::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::Default::EidRecord::InstanceId::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::Default::EidRecord::InstanceId::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::Default::EidRecord::InstanceId::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Site::Default::EidRecord::InstanceId::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::Default::EidRecord::InstanceId::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::Default::EidRecord::InstanceId::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::Lisp::Site::AuthenticationKey::AuthenticationKey()
    :
    unc_pwd{YType::str, "unc-pwd"},
    key_0{YType::str, "key-0"},
    key_6{YType::str, "key-6"},
    key_7{YType::str, "key-7"}
{

    yang_name = "authentication-key"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::Lisp::Site::AuthenticationKey::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| key_0.is_set
	|| key_6.is_set
	|| key_7.is_set;
}

bool Native::Router::Lisp::Site::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(key_0.yfilter)
	|| ydk::is_set(key_6.yfilter)
	|| ydk::is_set(key_7.yfilter);
}

std::string Native::Router::Lisp::Site::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (key_0.is_set || is_set(key_0.yfilter)) leaf_name_data.push_back(key_0.get_name_leafdata());
    if (key_6.is_set || is_set(key_6.yfilter)) leaf_name_data.push_back(key_6.get_name_leafdata());
    if (key_7.is_set || is_set(key_7.yfilter)) leaf_name_data.push_back(key_7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Site::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::Lisp::Site::AllowedLocator::AllowedLocator()
    :
    ls_ipv4{YType::str, "ls-ipv4"},
    ls_ipv6{YType::str, "ls-ipv6"}
        ,
    list(std::make_shared<Native::Router::Lisp::Site::AllowedLocator::List>())
{
    list->parent = this;

    yang_name = "allowed-locator"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::AllowedLocator::~AllowedLocator()
{
}

bool Native::Router::Lisp::Site::AllowedLocator::has_data() const
{
    if (is_presence_container) return true;
    return ls_ipv4.is_set
	|| ls_ipv6.is_set
	|| (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Site::AllowedLocator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ls_ipv4.yfilter)
	|| ydk::is_set(ls_ipv6.yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Site::AllowedLocator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowed-locator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::AllowedLocator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ls_ipv4.is_set || is_set(ls_ipv4.yfilter)) leaf_name_data.push_back(ls_ipv4.get_name_leafdata());
    if (ls_ipv6.is_set || is_set(ls_ipv6.yfilter)) leaf_name_data.push_back(ls_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::AllowedLocator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Site::AllowedLocator::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::AllowedLocator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    return _children;
}

void Native::Router::Lisp::Site::AllowedLocator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::AllowedLocator::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::AllowedLocator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "ls-ipv4" || name == "ls-ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Site::AllowedLocator::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "allowed-locator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::AllowedLocator::List::~List()
{
}

bool Native::Router::Lisp::Site::AllowedLocator::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Site::AllowedLocator::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Lisp::Site::AllowedLocator::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::AllowedLocator::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::AllowedLocator::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::AllowedLocator::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Site::AllowedLocator::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::AllowedLocator::List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::AllowedLocator::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Site::EidPrefix::EidPrefix()
    :
    any_mac{YType::empty, "any-mac"}
        ,
    prefixes(this, {"prefix"})
    , instance_id(this, {"id"})
{

    yang_name = "eid-prefix"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::EidPrefix::~EidPrefix()
{
}

bool Native::Router::Lisp::Site::EidPrefix::has_data() const
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

bool Native::Router::Lisp::Site::EidPrefix::has_operation() const
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

std::string Native::Router::Lisp::Site::EidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::EidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::EidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Site::EidPrefix::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    if(child_yang_name == "instance-id")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Site::EidPrefix::InstanceId>();
        ent_->parent = this;
        instance_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::EidPrefix::get_children() const
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

void Native::Router::Lisp::Site::EidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-mac")
    {
        any_mac = value;
        any_mac.value_namespace = name_space;
        any_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Site::EidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-mac")
    {
        any_mac.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Site::EidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "instance-id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::Lisp::Site::EidPrefix::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "eid-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::EidPrefix::Prefixes::~Prefixes()
{
}

bool Native::Router::Lisp::Site::EidPrefix::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::Lisp::Site::EidPrefix::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::Lisp::Site::EidPrefix::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::EidPrefix::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::EidPrefix::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::EidPrefix::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Site::EidPrefix::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::EidPrefix::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::EidPrefix::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::Lisp::Site::EidPrefix::InstanceId::InstanceId()
    :
    id{YType::uint32, "id"},
    any_mac{YType::empty, "any-mac"}
        ,
    prefixes(this, {"prefix"})
{

    yang_name = "instance-id"; yang_parent_name = "eid-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::EidPrefix::InstanceId::~InstanceId()
{
}

bool Native::Router::Lisp::Site::EidPrefix::InstanceId::has_data() const
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

bool Native::Router::Lisp::Site::EidPrefix::InstanceId::has_operation() const
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

std::string Native::Router::Lisp::Site::EidPrefix::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::EidPrefix::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::EidPrefix::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::EidPrefix::InstanceId::get_children() const
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

void Native::Router::Lisp::Site::EidPrefix::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::EidPrefix::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::EidPrefix::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "instance-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes::~Prefixes()
{
}

bool Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::Lisp::Site::EidRecord::EidRecord()
    :
    any_mac{YType::empty, "any-mac"}
        ,
    prefixes(this, {"prefix"})
    , instance_id(this, {"id"})
{

    yang_name = "eid-record"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::EidRecord::~EidRecord()
{
}

bool Native::Router::Lisp::Site::EidRecord::has_data() const
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

bool Native::Router::Lisp::Site::EidRecord::has_operation() const
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

std::string Native::Router::Lisp::Site::EidRecord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-record";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::EidRecord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::EidRecord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Site::EidRecord::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    if(child_yang_name == "instance-id")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Site::EidRecord::InstanceId>();
        ent_->parent = this;
        instance_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::EidRecord::get_children() const
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

void Native::Router::Lisp::Site::EidRecord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-mac")
    {
        any_mac = value;
        any_mac.value_namespace = name_space;
        any_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Site::EidRecord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-mac")
    {
        any_mac.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Site::EidRecord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "instance-id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::Lisp::Site::EidRecord::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "eid-record"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::EidRecord::Prefixes::~Prefixes()
{
}

bool Native::Router::Lisp::Site::EidRecord::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::Lisp::Site::EidRecord::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::Lisp::Site::EidRecord::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::EidRecord::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::EidRecord::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::EidRecord::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Site::EidRecord::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::EidRecord::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::EidRecord::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::Lisp::Site::EidRecord::InstanceId::InstanceId()
    :
    id{YType::uint32, "id"},
    any_mac{YType::empty, "any-mac"}
        ,
    prefixes(this, {"prefix"})
{

    yang_name = "instance-id"; yang_parent_name = "eid-record"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::EidRecord::InstanceId::~InstanceId()
{
}

bool Native::Router::Lisp::Site::EidRecord::InstanceId::has_data() const
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

bool Native::Router::Lisp::Site::EidRecord::InstanceId::has_operation() const
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

std::string Native::Router::Lisp::Site::EidRecord::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::EidRecord::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (any_mac.is_set || is_set(any_mac.yfilter)) leaf_name_data.push_back(any_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::EidRecord::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::EidRecord::InstanceId::get_children() const
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

void Native::Router::Lisp::Site::EidRecord::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::EidRecord::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::EidRecord::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "id" || name == "any-mac")
        return true;
    return false;
}

Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes::Prefixes()
    :
    prefix{YType::str, "prefix"},
    accept_more_specifics{YType::empty, "accept-more-specifics"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "prefixes"; yang_parent_name = "instance-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes::~Prefixes()
{
}

bool Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| accept_more_specifics.is_set
	|| route_tag.is_set;
}

bool Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(accept_more_specifics.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (accept_more_specifics.is_set || is_set(accept_more_specifics.yfilter)) leaf_name_data.push_back(accept_more_specifics.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "accept-more-specifics" || name == "route-tag")
        return true;
    return false;
}

Native::Router::Lisp::Syslog::Syslog()
    :
    verbose{YType::empty, "verbose"}
        ,
    session(std::make_shared<Native::Router::Lisp::Syslog::Session>())
{
    session->parent = this;

    yang_name = "syslog"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Syslog::~Syslog()
{
}

bool Native::Router::Lisp::Syslog::has_data() const
{
    if (is_presence_container) return true;
    return verbose.is_set
	|| (session !=  nullptr && session->has_data());
}

bool Native::Router::Lisp::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(verbose.yfilter)
	|| (session !=  nullptr && session->has_operation());
}

std::string Native::Router::Lisp::Syslog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (verbose.is_set || is_set(verbose.yfilter)) leaf_name_data.push_back(verbose.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Native::Router::Lisp::Syslog::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    return _children;
}

void Native::Router::Lisp::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "verbose")
    {
        verbose = value;
        verbose.value_namespace = name_space;
        verbose.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "verbose")
    {
        verbose.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "verbose")
        return true;
    return false;
}

Native::Router::Lisp::Syslog::Session::Session()
    :
    changes{YType::empty, "changes"}
{

    yang_name = "session"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Syslog::Session::~Session()
{
}

bool Native::Router::Lisp::Syslog::Session::has_data() const
{
    if (is_presence_container) return true;
    return changes.is_set;
}

bool Native::Router::Lisp::Syslog::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(changes.yfilter);
}

std::string Native::Router::Lisp::Syslog::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/syslog/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Syslog::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Syslog::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (changes.is_set || is_set(changes.yfilter)) leaf_name_data.push_back(changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Syslog::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Syslog::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Syslog::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "changes")
    {
        changes = value;
        changes.value_namespace = name_space;
        changes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Syslog::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "changes")
    {
        changes.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Syslog::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "changes")
        return true;
    return false;
}

Native::Router::LispList::LispList()
    :
    lisp{YType::uint16, "lisp"},
    disable_ttl_propagate{YType::empty, "disable-ttl-propagate"},
    site_id{YType::uint32, "site-id"}
        ,
    default_(std::make_shared<Native::Router::LispList::Default>())
    , service(nullptr) // presence node
    , encapsulation(std::make_shared<Native::Router::LispList::Encapsulation>())
    , locator_set(this, {"name"})
    , locator(std::make_shared<Native::Router::LispList::Locator>())
    , locator_scope(this, {"name"})
    , prefix_list(this, {"name"})
    , instance_container(std::make_shared<Native::Router::LispList::InstanceContainer>())
    , alt(std::make_shared<Native::Router::LispList::Alt>())
    , control_packet(std::make_shared<Native::Router::LispList::ControlPacket>())
    , ddt(nullptr) // presence node
    , decapsulation(std::make_shared<Native::Router::LispList::Decapsulation>())
    , etr(std::make_shared<Native::Router::LispList::Etr>())
    , ipv4(std::make_shared<Native::Router::LispList::Ipv4>())
    , ipv6(std::make_shared<Native::Router::LispList::Ipv6>())
    , loc_reach_algorithm(std::make_shared<Native::Router::LispList::LocReachAlgorithm>())
    , locator_down(std::make_shared<Native::Router::LispList::LocatorDown>())
    , locator_table(std::make_shared<Native::Router::LispList::LocatorTable>())
    , map_request(std::make_shared<Native::Router::LispList::MapRequest>())
    , map_server(std::make_shared<Native::Router::LispList::MapServer>())
    , other_xtr_probe(std::make_shared<Native::Router::LispList::OtherXtrProbe>())
    , remote_rloc_probe(std::make_shared<Native::Router::LispList::RemoteRlocProbe>())
    , eid_table(std::make_shared<Native::Router::LispList::EidTable>())
    , security(nullptr) // presence node
    , site(this, {"sname"})
    , syslog(std::make_shared<Native::Router::LispList::Syslog>())
{
    default_->parent = this;
    encapsulation->parent = this;
    locator->parent = this;
    instance_container->parent = this;
    alt->parent = this;
    control_packet->parent = this;
    decapsulation->parent = this;
    etr->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    loc_reach_algorithm->parent = this;
    locator_down->parent = this;
    locator_table->parent = this;
    map_request->parent = this;
    map_server->parent = this;
    other_xtr_probe->parent = this;
    remote_rloc_probe->parent = this;
    eid_table->parent = this;
    syslog->parent = this;

    yang_name = "lisp-list"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::LispList::~LispList()
{
}

bool Native::Router::LispList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locator_set.len(); index++)
    {
        if(locator_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<locator_scope.len(); index++)
    {
        if(locator_scope[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<site.len(); index++)
    {
        if(site[index]->has_data())
            return true;
    }
    return lisp.is_set
	|| disable_ttl_propagate.is_set
	|| site_id.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (locator !=  nullptr && locator->has_data())
	|| (instance_container !=  nullptr && instance_container->has_data())
	|| (alt !=  nullptr && alt->has_data())
	|| (control_packet !=  nullptr && control_packet->has_data())
	|| (ddt !=  nullptr && ddt->has_data())
	|| (decapsulation !=  nullptr && decapsulation->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_data())
	|| (locator_down !=  nullptr && locator_down->has_data())
	|| (locator_table !=  nullptr && locator_table->has_data())
	|| (map_request !=  nullptr && map_request->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_data())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_data())
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (security !=  nullptr && security->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Native::Router::LispList::has_operation() const
{
    for (std::size_t index=0; index<locator_set.len(); index++)
    {
        if(locator_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<locator_scope.len(); index++)
    {
        if(locator_scope[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<site.len(); index++)
    {
        if(site[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(disable_ttl_propagate.yfilter)
	|| ydk::is_set(site_id.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (locator !=  nullptr && locator->has_operation())
	|| (instance_container !=  nullptr && instance_container->has_operation())
	|| (alt !=  nullptr && alt->has_operation())
	|| (control_packet !=  nullptr && control_packet->has_operation())
	|| (ddt !=  nullptr && ddt->has_operation())
	|| (decapsulation !=  nullptr && decapsulation->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_operation())
	|| (locator_down !=  nullptr && locator_down->has_operation())
	|| (locator_table !=  nullptr && locator_table->has_operation())
	|| (map_request !=  nullptr && map_request->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_operation())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_operation())
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (security !=  nullptr && security->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Native::Router::LispList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::LispList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp-list";
    ADD_KEY_TOKEN(lisp, "lisp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (disable_ttl_propagate.is_set || is_set(disable_ttl_propagate.yfilter)) leaf_name_data.push_back(disable_ttl_propagate.get_name_leafdata());
    if (site_id.is_set || is_set(site_id.yfilter)) leaf_name_data.push_back(site_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::LispList::Default>();
        }
        return default_;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Router::LispList::Service>();
        }
        return service;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Router::LispList::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "locator-set")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::LocatorSet>();
        ent_->parent = this;
        locator_set.append(ent_);
        return ent_;
    }

    if(child_yang_name == "locator")
    {
        if(locator == nullptr)
        {
            locator = std::make_shared<Native::Router::LispList::Locator>();
        }
        return locator;
    }

    if(child_yang_name == "locator-scope")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::LocatorScope>();
        ent_->parent = this;
        locator_scope.append(ent_);
        return ent_;
    }

    if(child_yang_name == "prefix-list")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::PrefixList>();
        ent_->parent = this;
        prefix_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "instance-container")
    {
        if(instance_container == nullptr)
        {
            instance_container = std::make_shared<Native::Router::LispList::InstanceContainer>();
        }
        return instance_container;
    }

    if(child_yang_name == "alt")
    {
        if(alt == nullptr)
        {
            alt = std::make_shared<Native::Router::LispList::Alt>();
        }
        return alt;
    }

    if(child_yang_name == "control-packet")
    {
        if(control_packet == nullptr)
        {
            control_packet = std::make_shared<Native::Router::LispList::ControlPacket>();
        }
        return control_packet;
    }

    if(child_yang_name == "ddt")
    {
        if(ddt == nullptr)
        {
            ddt = std::make_shared<Native::Router::LispList::Ddt>();
        }
        return ddt;
    }

    if(child_yang_name == "decapsulation")
    {
        if(decapsulation == nullptr)
        {
            decapsulation = std::make_shared<Native::Router::LispList::Decapsulation>();
        }
        return decapsulation;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::LispList::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::LispList::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::LispList::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "loc-reach-algorithm")
    {
        if(loc_reach_algorithm == nullptr)
        {
            loc_reach_algorithm = std::make_shared<Native::Router::LispList::LocReachAlgorithm>();
        }
        return loc_reach_algorithm;
    }

    if(child_yang_name == "locator-down")
    {
        if(locator_down == nullptr)
        {
            locator_down = std::make_shared<Native::Router::LispList::LocatorDown>();
        }
        return locator_down;
    }

    if(child_yang_name == "locator-table")
    {
        if(locator_table == nullptr)
        {
            locator_table = std::make_shared<Native::Router::LispList::LocatorTable>();
        }
        return locator_table;
    }

    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::LispList::MapRequest>();
        }
        return map_request;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::LispList::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "other-xtr-probe")
    {
        if(other_xtr_probe == nullptr)
        {
            other_xtr_probe = std::make_shared<Native::Router::LispList::OtherXtrProbe>();
        }
        return other_xtr_probe;
    }

    if(child_yang_name == "remote-rloc-probe")
    {
        if(remote_rloc_probe == nullptr)
        {
            remote_rloc_probe = std::make_shared<Native::Router::LispList::RemoteRlocProbe>();
        }
        return remote_rloc_probe;
    }

    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::LispList::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Router::LispList::Security>();
        }
        return security;
    }

    if(child_yang_name == "site")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Site>();
        ent_->parent = this;
        site.append(ent_);
        return ent_;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::Router::LispList::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(service != nullptr)
    {
        _children["service"] = service;
    }

    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    count_ = 0;
    for (auto ent_ : locator_set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(locator != nullptr)
    {
        _children["locator"] = locator;
    }

    count_ = 0;
    for (auto ent_ : locator_scope.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : prefix_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(instance_container != nullptr)
    {
        _children["instance-container"] = instance_container;
    }

    if(alt != nullptr)
    {
        _children["alt"] = alt;
    }

    if(control_packet != nullptr)
    {
        _children["control-packet"] = control_packet;
    }

    if(ddt != nullptr)
    {
        _children["ddt"] = ddt;
    }

    if(decapsulation != nullptr)
    {
        _children["decapsulation"] = decapsulation;
    }

    if(etr != nullptr)
    {
        _children["etr"] = etr;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(loc_reach_algorithm != nullptr)
    {
        _children["loc-reach-algorithm"] = loc_reach_algorithm;
    }

    if(locator_down != nullptr)
    {
        _children["locator-down"] = locator_down;
    }

    if(locator_table != nullptr)
    {
        _children["locator-table"] = locator_table;
    }

    if(map_request != nullptr)
    {
        _children["map-request"] = map_request;
    }

    if(map_server != nullptr)
    {
        _children["map-server"] = map_server;
    }

    if(other_xtr_probe != nullptr)
    {
        _children["other-xtr-probe"] = other_xtr_probe;
    }

    if(remote_rloc_probe != nullptr)
    {
        _children["remote-rloc-probe"] = remote_rloc_probe;
    }

    if(eid_table != nullptr)
    {
        _children["eid-table"] = eid_table;
    }

    if(security != nullptr)
    {
        _children["security"] = security;
    }

    count_ = 0;
    for (auto ent_ : site.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(syslog != nullptr)
    {
        _children["syslog"] = syslog;
    }

    return _children;
}

void Native::Router::LispList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lisp")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate = value;
        disable_ttl_propagate.value_namespace = name_space;
        disable_ttl_propagate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-id")
    {
        site_id = value;
        site_id.value_namespace = name_space;
        site_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lisp")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate.yfilter = yfilter;
    }
    if(value_path == "site-id")
    {
        site_id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "service" || name == "encapsulation" || name == "locator-set" || name == "locator" || name == "locator-scope" || name == "prefix-list" || name == "instance-container" || name == "alt" || name == "control-packet" || name == "ddt" || name == "decapsulation" || name == "etr" || name == "ipv4" || name == "ipv6" || name == "loc-reach-algorithm" || name == "locator-down" || name == "locator-table" || name == "map-request" || name == "map-server" || name == "other-xtr-probe" || name == "remote-rloc-probe" || name == "eid-table" || name == "security" || name == "site" || name == "syslog" || name == "lisp" || name == "disable-ttl-propagate" || name == "site-id")
        return true;
    return false;
}

Native::Router::LispList::Default::Default()
    :
    disable_ttl_propagate{YType::empty, "disable-ttl-propagate"},
    site_id{YType::uint32, "site-id"}
        ,
    service(nullptr) // presence node
    , encapsulation(std::make_shared<Native::Router::LispList::Default::Encapsulation>())
    , locator_set(this, {"name"})
    , locator(std::make_shared<Native::Router::LispList::Default::Locator>())
    , locator_scope(this, {"name"})
    , prefix_list(this, {"name"})
    , instance_container(std::make_shared<Native::Router::LispList::Default::InstanceContainer>())
    , alt(std::make_shared<Native::Router::LispList::Default::Alt>())
    , control_packet(std::make_shared<Native::Router::LispList::Default::ControlPacket>())
    , ddt(nullptr) // presence node
    , decapsulation(std::make_shared<Native::Router::LispList::Default::Decapsulation>())
    , etr(std::make_shared<Native::Router::LispList::Default::Etr>())
    , ipv4(std::make_shared<Native::Router::LispList::Default::Ipv4>())
    , ipv6(std::make_shared<Native::Router::LispList::Default::Ipv6>())
    , loc_reach_algorithm(std::make_shared<Native::Router::LispList::Default::LocReachAlgorithm>())
    , locator_down(std::make_shared<Native::Router::LispList::Default::LocatorDown>())
    , locator_table(std::make_shared<Native::Router::LispList::Default::LocatorTable>())
    , map_request(std::make_shared<Native::Router::LispList::Default::MapRequest>())
    , map_server(std::make_shared<Native::Router::LispList::Default::MapServer>())
    , other_xtr_probe(std::make_shared<Native::Router::LispList::Default::OtherXtrProbe>())
    , remote_rloc_probe(std::make_shared<Native::Router::LispList::Default::RemoteRlocProbe>())
    , eid_table(std::make_shared<Native::Router::LispList::Default::EidTable>())
    , security(nullptr) // presence node
    , site(this, {"sname"})
    , syslog(std::make_shared<Native::Router::LispList::Default::Syslog>())
{
    encapsulation->parent = this;
    locator->parent = this;
    instance_container->parent = this;
    alt->parent = this;
    control_packet->parent = this;
    decapsulation->parent = this;
    etr->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    loc_reach_algorithm->parent = this;
    locator_down->parent = this;
    locator_table->parent = this;
    map_request->parent = this;
    map_server->parent = this;
    other_xtr_probe->parent = this;
    remote_rloc_probe->parent = this;
    eid_table->parent = this;
    syslog->parent = this;

    yang_name = "default"; yang_parent_name = "lisp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::~Default()
{
}

bool Native::Router::LispList::Default::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locator_set.len(); index++)
    {
        if(locator_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<locator_scope.len(); index++)
    {
        if(locator_scope[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<site.len(); index++)
    {
        if(site[index]->has_data())
            return true;
    }
    return disable_ttl_propagate.is_set
	|| site_id.is_set
	|| (service !=  nullptr && service->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (locator !=  nullptr && locator->has_data())
	|| (instance_container !=  nullptr && instance_container->has_data())
	|| (alt !=  nullptr && alt->has_data())
	|| (control_packet !=  nullptr && control_packet->has_data())
	|| (ddt !=  nullptr && ddt->has_data())
	|| (decapsulation !=  nullptr && decapsulation->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_data())
	|| (locator_down !=  nullptr && locator_down->has_data())
	|| (locator_table !=  nullptr && locator_table->has_data())
	|| (map_request !=  nullptr && map_request->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_data())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_data())
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (security !=  nullptr && security->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Native::Router::LispList::Default::has_operation() const
{
    for (std::size_t index=0; index<locator_set.len(); index++)
    {
        if(locator_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<locator_scope.len(); index++)
    {
        if(locator_scope[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<site.len(); index++)
    {
        if(site[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(disable_ttl_propagate.yfilter)
	|| ydk::is_set(site_id.yfilter)
	|| (service !=  nullptr && service->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (locator !=  nullptr && locator->has_operation())
	|| (instance_container !=  nullptr && instance_container->has_operation())
	|| (alt !=  nullptr && alt->has_operation())
	|| (control_packet !=  nullptr && control_packet->has_operation())
	|| (ddt !=  nullptr && ddt->has_operation())
	|| (decapsulation !=  nullptr && decapsulation->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_operation())
	|| (locator_down !=  nullptr && locator_down->has_operation())
	|| (locator_table !=  nullptr && locator_table->has_operation())
	|| (map_request !=  nullptr && map_request->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_operation())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_operation())
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (security !=  nullptr && security->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Native::Router::LispList::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_ttl_propagate.is_set || is_set(disable_ttl_propagate.yfilter)) leaf_name_data.push_back(disable_ttl_propagate.get_name_leafdata());
    if (site_id.is_set || is_set(site_id.yfilter)) leaf_name_data.push_back(site_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Router::LispList::Default::Service>();
        }
        return service;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Router::LispList::Default::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "locator-set")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::LocatorSet>();
        ent_->parent = this;
        locator_set.append(ent_);
        return ent_;
    }

    if(child_yang_name == "locator")
    {
        if(locator == nullptr)
        {
            locator = std::make_shared<Native::Router::LispList::Default::Locator>();
        }
        return locator;
    }

    if(child_yang_name == "locator-scope")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::LocatorScope>();
        ent_->parent = this;
        locator_scope.append(ent_);
        return ent_;
    }

    if(child_yang_name == "prefix-list")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::PrefixList>();
        ent_->parent = this;
        prefix_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "instance-container")
    {
        if(instance_container == nullptr)
        {
            instance_container = std::make_shared<Native::Router::LispList::Default::InstanceContainer>();
        }
        return instance_container;
    }

    if(child_yang_name == "alt")
    {
        if(alt == nullptr)
        {
            alt = std::make_shared<Native::Router::LispList::Default::Alt>();
        }
        return alt;
    }

    if(child_yang_name == "control-packet")
    {
        if(control_packet == nullptr)
        {
            control_packet = std::make_shared<Native::Router::LispList::Default::ControlPacket>();
        }
        return control_packet;
    }

    if(child_yang_name == "ddt")
    {
        if(ddt == nullptr)
        {
            ddt = std::make_shared<Native::Router::LispList::Default::Ddt>();
        }
        return ddt;
    }

    if(child_yang_name == "decapsulation")
    {
        if(decapsulation == nullptr)
        {
            decapsulation = std::make_shared<Native::Router::LispList::Default::Decapsulation>();
        }
        return decapsulation;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::LispList::Default::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::LispList::Default::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::LispList::Default::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "loc-reach-algorithm")
    {
        if(loc_reach_algorithm == nullptr)
        {
            loc_reach_algorithm = std::make_shared<Native::Router::LispList::Default::LocReachAlgorithm>();
        }
        return loc_reach_algorithm;
    }

    if(child_yang_name == "locator-down")
    {
        if(locator_down == nullptr)
        {
            locator_down = std::make_shared<Native::Router::LispList::Default::LocatorDown>();
        }
        return locator_down;
    }

    if(child_yang_name == "locator-table")
    {
        if(locator_table == nullptr)
        {
            locator_table = std::make_shared<Native::Router::LispList::Default::LocatorTable>();
        }
        return locator_table;
    }

    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::LispList::Default::MapRequest>();
        }
        return map_request;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::LispList::Default::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "other-xtr-probe")
    {
        if(other_xtr_probe == nullptr)
        {
            other_xtr_probe = std::make_shared<Native::Router::LispList::Default::OtherXtrProbe>();
        }
        return other_xtr_probe;
    }

    if(child_yang_name == "remote-rloc-probe")
    {
        if(remote_rloc_probe == nullptr)
        {
            remote_rloc_probe = std::make_shared<Native::Router::LispList::Default::RemoteRlocProbe>();
        }
        return remote_rloc_probe;
    }

    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::LispList::Default::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Router::LispList::Default::Security>();
        }
        return security;
    }

    if(child_yang_name == "site")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::Site>();
        ent_->parent = this;
        site.append(ent_);
        return ent_;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::Router::LispList::Default::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service != nullptr)
    {
        _children["service"] = service;
    }

    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    count_ = 0;
    for (auto ent_ : locator_set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(locator != nullptr)
    {
        _children["locator"] = locator;
    }

    count_ = 0;
    for (auto ent_ : locator_scope.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : prefix_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(instance_container != nullptr)
    {
        _children["instance-container"] = instance_container;
    }

    if(alt != nullptr)
    {
        _children["alt"] = alt;
    }

    if(control_packet != nullptr)
    {
        _children["control-packet"] = control_packet;
    }

    if(ddt != nullptr)
    {
        _children["ddt"] = ddt;
    }

    if(decapsulation != nullptr)
    {
        _children["decapsulation"] = decapsulation;
    }

    if(etr != nullptr)
    {
        _children["etr"] = etr;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(loc_reach_algorithm != nullptr)
    {
        _children["loc-reach-algorithm"] = loc_reach_algorithm;
    }

    if(locator_down != nullptr)
    {
        _children["locator-down"] = locator_down;
    }

    if(locator_table != nullptr)
    {
        _children["locator-table"] = locator_table;
    }

    if(map_request != nullptr)
    {
        _children["map-request"] = map_request;
    }

    if(map_server != nullptr)
    {
        _children["map-server"] = map_server;
    }

    if(other_xtr_probe != nullptr)
    {
        _children["other-xtr-probe"] = other_xtr_probe;
    }

    if(remote_rloc_probe != nullptr)
    {
        _children["remote-rloc-probe"] = remote_rloc_probe;
    }

    if(eid_table != nullptr)
    {
        _children["eid-table"] = eid_table;
    }

    if(security != nullptr)
    {
        _children["security"] = security;
    }

    count_ = 0;
    for (auto ent_ : site.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(syslog != nullptr)
    {
        _children["syslog"] = syslog;
    }

    return _children;
}

void Native::Router::LispList::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate = value;
        disable_ttl_propagate.value_namespace = name_space;
        disable_ttl_propagate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-id")
    {
        site_id = value;
        site_id.value_namespace = name_space;
        site_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate.yfilter = yfilter;
    }
    if(value_path == "site-id")
    {
        site_id.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service" || name == "encapsulation" || name == "locator-set" || name == "locator" || name == "locator-scope" || name == "prefix-list" || name == "instance-container" || name == "alt" || name == "control-packet" || name == "ddt" || name == "decapsulation" || name == "etr" || name == "ipv4" || name == "ipv6" || name == "loc-reach-algorithm" || name == "locator-down" || name == "locator-table" || name == "map-request" || name == "map-server" || name == "other-xtr-probe" || name == "remote-rloc-probe" || name == "eid-table" || name == "security" || name == "site" || name == "syslog" || name == "disable-ttl-propagate" || name == "site-id")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Service()
    :
    ipv4(nullptr) // presence node
    , ipv6(nullptr) // presence node
    , ethernet(nullptr) // presence node
{

    yang_name = "service"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::Default::Service::~Service()
{
}

bool Native::Router::LispList::Default::Service::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data());
}

bool Native::Router::LispList::Default::Service::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Native::Router::LispList::Default::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::LispList::Default::Service::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::LispList::Default::Service::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Router::LispList::Default::Service::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::get_children() const
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

    if(ethernet != nullptr)
    {
        _children["ethernet"] = ethernet;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "ethernet")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Ipv4()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"},
    map_request_source{YType::str, "map-request-source"}
        ,
    default_(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_>())
    , database_mapping(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping>())
    , itr(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Itr>())
    , itr_enable(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::ItrEnable>())
    , etr_enable(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::EtrEnable>())
    , etr(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Etr>())
    , map_cache_limit(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapCacheLimit>())
    , map_resolver(nullptr) // presence node
    , map_server(nullptr) // presence node
    , site_registration(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::SiteRegistration>())
    , solicit_map_request(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::SolicitMapRequest>())
    , distance(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Distance>())
    , map_cache(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapCache>())
    , map_cache_persistent(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapCachePersistent>())
    , proxy_itr(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::ProxyItr>())
    , route_export(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::RouteExport>())
    , use_petr(this, {"locator_address"})
    , import(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Import>())
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
    import->parent = this;

    yang_name = "ipv4"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::Default::Service::Ipv4::~Ipv4()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<use_petr.len(); index++)
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
	|| (route_export !=  nullptr && route_export->has_data())
	|| (import !=  nullptr && import->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<use_petr.len(); index++)
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
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (import !=  nullptr && import->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.yfilter)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "use-petr")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::UsePetr>();
        ent_->parent = this;
        use_petr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Import>();
        }
        return import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
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

    if(map_resolver != nullptr)
    {
        _children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        _children["map-server"] = map_server;
    }

    if(site_registration != nullptr)
    {
        _children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        _children["solicit-map-request"] = solicit_map_request;
    }

    if(distance != nullptr)
    {
        _children["distance"] = distance;
    }

    if(map_cache != nullptr)
    {
        _children["map-cache"] = map_cache;
    }

    if(map_cache_persistent != nullptr)
    {
        _children["map-cache-persistent"] = map_cache_persistent;
    }

    if(proxy_itr != nullptr)
    {
        _children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        _children["route-export"] = route_export;
    }

    count_ = 0;
    for (auto ent_ : use_petr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(import != nullptr)
    {
        _children["import"] = import;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "database-mapping" || name == "itr" || name == "itr-enable" || name == "etr-enable" || name == "etr" || name == "map-cache-limit" || name == "map-resolver" || name == "map-server" || name == "site-registration" || name == "solicit-map-request" || name == "distance" || name == "map-cache" || name == "map-cache-persistent" || name == "proxy-itr" || name == "route-export" || name == "use-petr" || name == "import" || name == "encapsulation" || name == "proxy-etr" || name == "sgt" || name == "map-request-source")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Default_()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"},
    map_request_source{YType::str, "map-request-source"}
        ,
    database_mapping(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping>())
    , itr(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Itr>())
    , itr_enable(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::ItrEnable>())
    , etr_enable(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::EtrEnable>())
    , etr(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Etr>())
    , map_cache_limit(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapCacheLimit>())
    , map_resolver(nullptr) // presence node
    , map_server(nullptr) // presence node
    , site_registration(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::SiteRegistration>())
    , solicit_map_request(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::SolicitMapRequest>())
    , distance(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Distance>())
    , map_cache(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache>())
    , map_cache_persistent(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapCachePersistent>())
    , proxy_itr(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::ProxyItr>())
    , route_export(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::RouteExport>())
    , use_petr(this, {"locator_address"})
    , import(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Import>())
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
    import->parent = this;

    yang_name = "default"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::~Default_()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<use_petr.len(); index++)
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
	|| (route_export !=  nullptr && route_export->has_data())
	|| (import !=  nullptr && import->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::has_operation() const
{
    for (std::size_t index=0; index<use_petr.len(); index++)
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
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (import !=  nullptr && import->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.yfilter)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "use-petr")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr>();
        ent_->parent = this;
        use_petr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Import>();
        }
        return import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
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

    if(map_resolver != nullptr)
    {
        _children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        _children["map-server"] = map_server;
    }

    if(site_registration != nullptr)
    {
        _children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        _children["solicit-map-request"] = solicit_map_request;
    }

    if(distance != nullptr)
    {
        _children["distance"] = distance;
    }

    if(map_cache != nullptr)
    {
        _children["map-cache"] = map_cache;
    }

    if(map_cache_persistent != nullptr)
    {
        _children["map-cache-persistent"] = map_cache_persistent;
    }

    if(proxy_itr != nullptr)
    {
        _children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        _children["route-export"] = route_export;
    }

    count_ = 0;
    for (auto ent_ : use_petr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(import != nullptr)
    {
        _children["import"] = import;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping" || name == "itr" || name == "itr-enable" || name == "etr-enable" || name == "etr" || name == "map-cache-limit" || name == "map-resolver" || name == "map-server" || name == "site-registration" || name == "solicit-map-request" || name == "distance" || name == "map-cache" || name == "map-cache-persistent" || name == "proxy-itr" || name == "route-export" || name == "use-petr" || name == "import" || name == "encapsulation" || name == "proxy-etr" || name == "sgt" || name == "map-request-source")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::has_data() const
{
    if (is_presence_container) return true;
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "limit"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::Itr()
    :
    nmr_ttl{YType::uint16, "nmr-ttl"}
        ,
    map_resolver(this, {"ip_addr"})
{

    yang_name = "itr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::~Itr()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_resolver.len(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return nmr_ttl.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.len(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nmr_ttl.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nmr_ttl.is_set || is_set(nmr_ttl.yfilter)) leaf_name_data.push_back(nmr_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::MapResolver>();
        ent_->parent = this;
        map_resolver.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::get_children() const
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nmr-ttl")
    {
        nmr_ttl = value;
        nmr_ttl.value_namespace = name_space;
        nmr_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nmr-ttl")
    {
        nmr_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver" || name == "nmr-ttl")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "map-resolver"; yang_parent_name = "itr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::MapResolver::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{

    yang_name = "itr-enable"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::ItrEnable::~ItrEnable()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::ItrEnable::has_data() const
{
    if (is_presence_container) return true;
    return itr.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::ItrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{

    yang_name = "etr-enable"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::EtrEnable::~EtrEnable()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::EtrEnable::has_data() const
{
    if (is_presence_container) return true;
    return etr.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::EtrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
        ,
    map_server(this, {"ip_addr"})
    , accept_map_request_mapping(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::~Etr()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::has_data() const
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::has_operation() const
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

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.yfilter)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-server")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer>();
        ent_->parent = this;
        map_server.append(ent_);
        return ent_;
    }

    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::get_children() const
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
        map_cache_ttl.value_namespace = name_space;
        map_cache_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-server" || name == "accept-map-request-mapping" || name == "map-cache-ttl")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
        ,
    key(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::~MapServer()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd>())
    , key_0(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0>())
    , key_6(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6>())
    , key_7(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;
    key_7->parent = this;

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::has_data() const
{
    if (is_presence_container) return true;
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::get_children() const
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::has_data() const
{
    if (is_presence_container) return true;
    return ak_0.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::has_data() const
{
    if (is_presence_container) return true;
    return ak_6.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-7"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::has_data() const
{
    if (is_presence_container) return true;
    return ak_7.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{

    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::has_data() const
{
    if (is_presence_container) return true;
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_mappping.yfilter)
	|| ydk::is_set(verify.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.yfilter)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.yfilter)) leaf_name_data.push_back(verify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mappping" || name == "verify")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "map-cache-limit"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapCacheLimit::has_data() const
{
    if (is_presence_container) return true;
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::MapCacheLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::~MapResolver()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::has_data() const
{
    if (is_presence_container) return true;
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_request != nullptr)
    {
        _children["map-request"] = map_request;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-request")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::has_data() const
{
    if (is_presence_container) return true;
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(validate != nullptr)
    {
        _children["validate"] = validate;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List>())
    , registered(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;
    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::has_data() const
{
    if (is_presence_container) return true;
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    if(registered != nullptr)
    {
        _children["registered"] = registered;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "registered")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    if (is_presence_container) return true;
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "registered"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::~MapServer()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_register != nullptr)
    {
        _children["map-register"] = map_register;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-register")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::has_data() const
{
    if (is_presence_container) return true;
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(validate != nullptr)
    {
        _children["validate"] = validate;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::has_data() const
{
    if (is_presence_container) return true;
    return allowed_locator.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allowed_locator.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.yfilter)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
        allowed_locator.value_namespace = name_space;
        allowed_locator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowed-locator")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::SiteRegistration::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::SolicitMapRequest::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{

    yang_name = "distance"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Distance::~Distance()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Distance::has_data() const
{
    if (is_presence_container) return true;
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alt.yfilter)
	|| ydk::is_set(away.yfilter)
	|| ydk::is_set(dyn_eid.yfilter)
	|| ydk::is_set(site_registrations.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.yfilter)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.yfilter)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.yfilter)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::Distance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alt" || name == "away" || name == "dyn-eid" || name == "site-registrations")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
        ,
    away_eids(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::~MapCache()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::has_data() const
{
    if (is_presence_container) return true;
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registration.yfilter)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.yfilter)) leaf_name_data.push_back(site_registration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::AwayEids>();
        }
        return away_eids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(away_eids != nullptr)
    {
        _children["away-eids"] = away_eids;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
        site_registration.value_namespace = name_space;
        site_registration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registration")
    {
        site_registration.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "away-eids" || name == "site-registration")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{

    yang_name = "away-eids"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::AwayEids::has_data() const
{
    if (is_presence_container) return true;
    return send_map_request.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::AwayEids::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_map_request.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::AwayEids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.yfilter)) leaf_name_data.push_back(send_map_request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::AwayEids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
        send_map_request.value_namespace = name_space;
        send_map_request.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::AwayEids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-map-request")
    {
        send_map_request.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapCache::AwayEids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-map-request")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "map-cache-persistent"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapCachePersistent::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapCachePersistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::MapCachePersistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapCachePersistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::MapCachePersistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::MapCachePersistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "proxy-itr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::ProxyItr::~ProxyItr()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::ProxyItr::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::ProxyItr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::ProxyItr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::ProxyItr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::ProxyItr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::ProxyItr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "ipv6-addr")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::RouteExport::RouteExport()
    :
    site_registrations{YType::empty, "site-registrations"},
    away_eids{YType::empty, "away-eids"}
{

    yang_name = "route-export"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::RouteExport::~RouteExport()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::RouteExport::has_data() const
{
    if (is_presence_container) return true;
    return site_registrations.is_set
	|| away_eids.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::RouteExport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registrations.yfilter)
	|| ydk::is_set(away_eids.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::RouteExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());
    if (away_eids.is_set || is_set(away_eids.yfilter)) leaf_name_data.push_back(away_eids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::RouteExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::RouteExport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::RouteExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registrations" || name == "away-eids")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
        ,
    priority(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::~UsePetr()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::has_data() const
{
    if (is_presence_container) return true;
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_address.yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr";
    ADD_KEY_TOKEN(locator_address, "locator-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.yfilter)) leaf_name_data.push_back(locator_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
        locator_address.value_namespace = name_space;
        locator_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-address")
    {
        locator_address.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "locator-address")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{

    yang_name = "priority"; yang_parent_name = "use-petr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::Priority::~Priority()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::Priority::has_data() const
{
    if (is_presence_container) return true;
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_value.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.yfilter)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::Priority::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Default_::UsePetr::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-value" || name == "weight")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Import()
    :
    database(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Database>())
{
    database->parent = this;

    yang_name = "import"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Import::~Import()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Import::has_data() const
{
    if (is_presence_container) return true;
    return (database !=  nullptr && database->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Import::has_operation() const
{
    return is_set(yfilter)
	|| (database !=  nullptr && database->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Database>();
        }
        return database;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database != nullptr)
    {
        _children["database"] = database;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Database::Database()
    :
    site_registration{YType::empty, "site-registration"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "database"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Database::~Database()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Database::has_data() const
{
    if (is_presence_container) return true;
    return site_registration.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Database::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registration.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.yfilter)) leaf_name_data.push_back(site_registration.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
        site_registration.value_namespace = name_space;
        site_registration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registration")
    {
        site_registration.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::Default_::Import::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registration" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::has_data() const
{
    if (is_presence_container) return true;
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "limit"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::Limit::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Itr::Itr()
    :
    nmr_ttl{YType::uint16, "nmr-ttl"}
        ,
    map_resolver(this, {"ip_addr"})
{

    yang_name = "itr"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Itr::~Itr()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Itr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_resolver.len(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return nmr_ttl.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.len(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nmr_ttl.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Itr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nmr_ttl.is_set || is_set(nmr_ttl.yfilter)) leaf_name_data.push_back(nmr_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Itr::MapResolver>();
        ent_->parent = this;
        map_resolver.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Itr::get_children() const
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

void Native::Router::LispList::Default::Service::Ipv4::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nmr-ttl")
    {
        nmr_ttl = value;
        nmr_ttl.value_namespace = name_space;
        nmr_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nmr-ttl")
    {
        nmr_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver" || name == "nmr-ttl")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "map-resolver"; yang_parent_name = "itr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Itr::MapResolver::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Itr::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{

    yang_name = "itr-enable"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::ItrEnable::~ItrEnable()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::ItrEnable::has_data() const
{
    if (is_presence_container) return true;
    return itr.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::ItrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{

    yang_name = "etr-enable"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::EtrEnable::~EtrEnable()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::EtrEnable::has_data() const
{
    if (is_presence_container) return true;
    return etr.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::EtrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
        ,
    map_server(this, {"ip_addr"})
    , accept_map_request_mapping(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Etr::~Etr()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Etr::has_data() const
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

bool Native::Router::LispList::Default::Service::Ipv4::Etr::has_operation() const
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

std::string Native::Router::LispList::Default::Service::Ipv4::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Etr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.yfilter)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-server")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer>();
        ent_->parent = this;
        map_server.append(ent_);
        return ent_;
    }

    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Etr::get_children() const
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

void Native::Router::LispList::Default::Service::Ipv4::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
        map_cache_ttl.value_namespace = name_space;
        map_cache_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-server" || name == "accept-map-request-mapping" || name == "map-cache-ttl")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
        ,
    key(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::~MapServer()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd>())
    , key_0(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0>())
    , key_6(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6>())
    , key_7(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;
    key_7->parent = this;

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::has_data() const
{
    if (is_presence_container) return true;
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::get_children() const
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

void Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0::has_data() const
{
    if (is_presence_container) return true;
    return ak_0.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6::has_data() const
{
    if (is_presence_container) return true;
    return ak_6.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-7"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7::has_data() const
{
    if (is_presence_container) return true;
    return ak_7.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{

    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Etr::AcceptMapRequestMapping::has_data() const
{
    if (is_presence_container) return true;
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_mappping.yfilter)
	|| ydk::is_set(verify.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Etr::AcceptMapRequestMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.yfilter)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.yfilter)) leaf_name_data.push_back(verify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Etr::AcceptMapRequestMapping::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Etr::AcceptMapRequestMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mappping" || name == "verify")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "map-cache-limit"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapCacheLimit::has_data() const
{
    if (is_presence_container) return true;
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::MapCacheLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::Default::Service::Ipv4::MapResolver::~MapResolver()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::has_data() const
{
    if (is_presence_container) return true;
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_request != nullptr)
    {
        _children["map-request"] = map_request;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-request")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::has_data() const
{
    if (is_presence_container) return true;
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(validate != nullptr)
    {
        _children["validate"] = validate;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List>())
    , registered(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;
    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::has_data() const
{
    if (is_presence_container) return true;
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    if(registered != nullptr)
    {
        _children["registered"] = registered;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "registered")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    if (is_presence_container) return true;
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "registered"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::Default::Service::Ipv4::MapServer::~MapServer()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_register != nullptr)
    {
        _children["map-register"] = map_register;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-register")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::has_data() const
{
    if (is_presence_container) return true;
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(validate != nullptr)
    {
        _children["validate"] = validate;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Source::has_data() const
{
    if (is_presence_container) return true;
    return allowed_locator.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allowed_locator.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.yfilter)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
        allowed_locator.value_namespace = name_space;
        allowed_locator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::MapServer::MapRegister::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowed-locator")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::SiteRegistration::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::SolicitMapRequest::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{

    yang_name = "distance"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Distance::~Distance()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Distance::has_data() const
{
    if (is_presence_container) return true;
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alt.yfilter)
	|| ydk::is_set(away.yfilter)
	|| ydk::is_set(dyn_eid.yfilter)
	|| ydk::is_set(site_registrations.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.yfilter)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.yfilter)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.yfilter)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::Distance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alt" || name == "away" || name == "dyn-eid" || name == "site-registrations")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
        ,
    away_eids(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::MapCache::~MapCache()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapCache::has_data() const
{
    if (is_presence_container) return true;
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::MapCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registration.yfilter)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.yfilter)) leaf_name_data.push_back(site_registration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::MapCache::AwayEids>();
        }
        return away_eids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(away_eids != nullptr)
    {
        _children["away-eids"] = away_eids;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
        site_registration.value_namespace = name_space;
        site_registration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registration")
    {
        site_registration.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "away-eids" || name == "site-registration")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{

    yang_name = "away-eids"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapCache::AwayEids::has_data() const
{
    if (is_presence_container) return true;
    return send_map_request.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::MapCache::AwayEids::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_map_request.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::MapCache::AwayEids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.yfilter)) leaf_name_data.push_back(send_map_request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::MapCache::AwayEids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
        send_map_request.value_namespace = name_space;
        send_map_request.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::MapCache::AwayEids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-map-request")
    {
        send_map_request.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::MapCache::AwayEids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-map-request")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "map-cache-persistent"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::MapCachePersistent::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::MapCachePersistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::MapCachePersistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::MapCachePersistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::MapCachePersistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::MapCachePersistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "proxy-itr"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::ProxyItr::~ProxyItr()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::ProxyItr::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::ProxyItr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::ProxyItr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::ProxyItr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::ProxyItr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::ProxyItr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "ipv6-addr")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::RouteExport::RouteExport()
    :
    site_registrations{YType::empty, "site-registrations"},
    away_eids{YType::empty, "away-eids"}
{

    yang_name = "route-export"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::RouteExport::~RouteExport()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::RouteExport::has_data() const
{
    if (is_presence_container) return true;
    return site_registrations.is_set
	|| away_eids.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::RouteExport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registrations.yfilter)
	|| ydk::is_set(away_eids.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::RouteExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());
    if (away_eids.is_set || is_set(away_eids.yfilter)) leaf_name_data.push_back(away_eids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::RouteExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::RouteExport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::RouteExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registrations" || name == "away-eids")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
        ,
    priority(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::UsePetr::~UsePetr()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::UsePetr::has_data() const
{
    if (is_presence_container) return true;
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::UsePetr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_address.yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr";
    ADD_KEY_TOKEN(locator_address, "locator-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::UsePetr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.yfilter)) leaf_name_data.push_back(locator_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::UsePetr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
        locator_address.value_namespace = name_space;
        locator_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::UsePetr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-address")
    {
        locator_address.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::UsePetr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "locator-address")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{

    yang_name = "priority"; yang_parent_name = "use-petr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::UsePetr::Priority::~Priority()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::UsePetr::Priority::has_data() const
{
    if (is_presence_container) return true;
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::UsePetr::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_value.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::UsePetr::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.yfilter)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::UsePetr::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv4::UsePetr::Priority::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv4::UsePetr::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-value" || name == "weight")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Import::Import()
    :
    database(std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Import::Database>())
{
    database->parent = this;

    yang_name = "import"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Import::~Import()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Import::has_data() const
{
    if (is_presence_container) return true;
    return (database !=  nullptr && database->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv4::Import::has_operation() const
{
    return is_set(yfilter)
	|| (database !=  nullptr && database->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv4::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Native::Router::LispList::Default::Service::Ipv4::Import::Database>();
        }
        return database;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database != nullptr)
    {
        _children["database"] = database;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::LispList::Default::Service::Ipv4::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv4::Import::Database::Database()
    :
    site_registration{YType::empty, "site-registration"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "database"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::LispList::Default::Service::Ipv4::Import::Database::~Database()
{
}

bool Native::Router::LispList::Default::Service::Ipv4::Import::Database::has_data() const
{
    if (is_presence_container) return true;
    return site_registration.is_set
	|| locator_set.is_set;
}

bool Native::Router::LispList::Default::Service::Ipv4::Import::Database::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registration.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::LispList::Default::Service::Ipv4::Import::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv4::Import::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.yfilter)) leaf_name_data.push_back(site_registration.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv4::Import::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv4::Import::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::LispList::Default::Service::Ipv4::Import::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
        site_registration.value_namespace = name_space;
        site_registration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::LispList::Default::Service::Ipv4::Import::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registration")
    {
        site_registration.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::LispList::Default::Service::Ipv4::Import::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registration" || name == "locator-set")
        return true;
    return false;
}

Native::Router::LispList::Default::Service::Ipv6::Ipv6()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"},
    map_request_source{YType::str, "map-request-source"}
        ,
    default_(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_>())
    , database_mapping(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping>())
    , itr(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Itr>())
    , itr_enable(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::ItrEnable>())
    , etr_enable(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::EtrEnable>())
    , etr(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Etr>())
    , map_cache_limit(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapCacheLimit>())
    , map_resolver(nullptr) // presence node
    , map_server(nullptr) // presence node
    , site_registration(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::SiteRegistration>())
    , solicit_map_request(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::SolicitMapRequest>())
    , distance(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Distance>())
    , map_cache(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapCache>())
    , map_cache_persistent(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapCachePersistent>())
    , proxy_itr(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::ProxyItr>())
    , route_export(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::RouteExport>())
    , use_petr(this, {"locator_address"})
    , import(std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Import>())
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
    import->parent = this;

    yang_name = "ipv6"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::LispList::Default::Service::Ipv6::~Ipv6()
{
}

bool Native::Router::LispList::Default::Service::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<use_petr.len(); index++)
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
	|| (route_export !=  nullptr && route_export->has_data())
	|| (import !=  nullptr && import->has_data());
}

bool Native::Router::LispList::Default::Service::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<use_petr.len(); index++)
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
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (import !=  nullptr && import->has_operation());
}

std::string Native::Router::LispList::Default::Service::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::LispList::Default::Service::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.yfilter)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::LispList::Default::Service::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "use-petr")
    {
        auto ent_ = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::UsePetr>();
        ent_->parent = this;
        use_petr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Router::LispList::Default::Service::Ipv6::Import>();
        }
        return import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::LispList::Default::Service::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
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

    if(map_resolver != nullptr)
    {
        _children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        _children["map-server"] = map_server;
    }

    if(site_registration != nullptr)
    {
        _children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        _children["solicit-map-request"] = solicit_map_request;
    }

    if(distance != nullptr)
    {
        _children["distance"] = distance;
    }

    if(map_cache != nullptr)
    {
        _children["map-cache"] = map_cache;
    }

    if(map_cache_persistent != nullptr)
    {
        _children["map-cache-persistent"] = map_cache_persistent;
    }

    if(proxy_itr != nullptr)
    {
        _children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        _children["route-export"] = route_export;
    }

    count_ = 0;
    for (auto ent_ : use_petr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(import != nullptr)
    {
        _children["import"] = import;
    }

    return _children;
}

void Native::Router::LispList::Default::Service::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::LispList::Default::Service::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::LispList::Default::Service::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "database-mapping" || name == "itr" || name == "itr-enable" || name == "etr-enable" || name == "etr" || name == "map-cache-limit" || name == "map-resolver" || name == "map-server" || name == "site-registration" || name == "solicit-map-request" || name == "distance" || name == "map-cache" || name == "map-cache-persistent" || name == "proxy-itr" || name == "route-export" || name == "use-petr" || name == "import" || name == "encapsulation" || name == "proxy-etr" || name == "sgt" || name == "map-request-source")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::Operator_::add {0, "add"};
const Enum::YLeaf Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::Operator_::override {1, "override"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Encapsulation::lisp {0, "lisp"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Encapsulation::vxlan {1, "vxlan"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Default_::Encapsulation::lisp {0, "lisp"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Default_::Encapsulation::vxlan {1, "vxlan"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv4::Etr::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv6::Encapsulation::lisp {0, "lisp"};
const Enum::YLeaf Native::Router::LispList::Default::Service::Ipv6::Encapsulation::vxlan {1, "vxlan"};


}
}

