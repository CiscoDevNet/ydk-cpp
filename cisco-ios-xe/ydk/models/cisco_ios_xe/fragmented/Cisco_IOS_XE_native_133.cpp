
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_133.hpp"
#include "Cisco_IOS_XE_native_134.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "eigrp";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Eigrp::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::Isis()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "isis"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::~Isis()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "isis";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Isis::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only{YType::empty, "warning-only"},
    warning_only1{YType::empty, "warning-only1"}
{
    yang_name = "maximum-prefix"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::has_data() const
{
    return number.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only.is_set
	|| warning_only1.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold1.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(warning_only1.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.yfilter)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.yfilter)) leaf_name_data.push_back(warning_only1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "threshold1")
    {
        threshold1 = value;
        threshold1.value_namespace = name_space;
        threshold1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only1")
    {
        warning_only1 = value;
        warning_only1.value_namespace = name_space;
        warning_only1.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold1")
    {
        threshold1.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "warning-only1")
    {
        warning_only1.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "threshold" || name == "threshold1" || name == "warning-only" || name == "warning-only1")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::Nd()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "nd"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::~Nd()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "nd";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Nd::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "ospf"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::~Ospf()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "ospf";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Ospf::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::Static_()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "static"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::~Static_()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "static";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Static_::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "rip"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::~Rip()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "rip";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::RouteImport::MapCache::Rip::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "default";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::has_data() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        for(auto const & c : eid_cont)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont>();
        c->parent = this;
        eid_cont.push_back(c);
        return c;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eid_cont)
    {
        children[c->get_segment_path()] = c;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-cont" || name == "limit")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"},
    auto_discover_rlocs{YType::empty, "auto-discover-rlocs"},
    locator_set{YType::str, "locator-set"}
{
    yang_name = "eid-cont"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::~EidCont()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::has_data() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_data())
            return true;
    }
    return eid_prefix.is_set
	|| auto_discover_rlocs.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| ydk::is_set(auto_discover_rlocs.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidCont' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (auto_discover_rlocs.is_set || is_set(auto_discover_rlocs.yfilter)) leaf_name_data.push_back(auto_discover_rlocs.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addrees")
    {
        for(auto const & c : ipv4_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees>();
        c->parent = this;
        ipv4_addrees.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv4-interface")
    {
        for(auto const & c : ipv4_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface>();
        c->parent = this;
        ipv4_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-addrees")
    {
        for(auto const & c : ipv6_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees>();
        c->parent = this;
        ipv6_addrees.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv6-interface")
    {
        for(auto const & c : ipv6_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface>();
        c->parent = this;
        ipv6_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_interface)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
    if(value_path == "auto-discover-rlocs")
    {
        auto_discover_rlocs.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addrees" || name == "IPv4-interface" || name == "ipv6-addrees" || name == "IPv6-interface" || name == "eid-prefix" || name == "auto-discover-rlocs" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::Ipv4Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv4-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::~Ipv4Addrees()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "address")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv4-addrees";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::Ipv6Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv6-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::~Ipv6Addrees()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "address")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv6-addrees";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::Ipv4Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv4-interface"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::~Ipv4Interface()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv4-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "IPv4-interface";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::Ipv6Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv6-interface"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::~Ipv6Interface()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "IPv6-interface";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "limit"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EidTable::EidTable()
    :
    default_{YType::empty, "default"},
    vrf{YType::str, "vrf"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "eid-table"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EidTable::~EidTable()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EidTable::has_data() const
{
    return default_.is_set
	|| vrf.is_set
	|| vrf_name.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EidTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EidTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-table";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EidTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EidTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EidTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EidTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EidTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EidTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "vrf" || name == "vrf-name")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::Itr()
{
    yang_name = "itr"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::~Itr()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Itr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        for(auto const & c : map_resolver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "map-resolver"; yang_parent_name = "itr";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapResolver' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{
    yang_name = "itr-enable"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ItrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ItrEnable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{
    yang_name = "etr-enable"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EtrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtrEnable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::~Etr()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::has_operation() const
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

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Etr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.yfilter)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
        map_cache_ttl.value_namespace = name_space;
        map_cache_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-map-request-mapping" || name == "map-server" || name == "map-cache-ttl")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapServer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-0" || name == "key-6" || name == "key-7" || name == "key-pwd")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(unc_pwd.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyPwd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-function" || name == "unc-pwd")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-7"; yang_parent_name = "key";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key7' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{
    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_mappping.yfilter)
	|| ydk::is_set(verify.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcceptMapRequestMapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.yfilter)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.yfilter)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::AcceptMapRequestMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mappping" || name == "verify")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "map-cache-limit"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheLimit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "site-registration"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SiteRegistration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiteRegistration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{
    yang_name = "solicit-map-request"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SolicitMapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SolicitMapRequest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::Alt()
{
    yang_name = "alt"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::~Alt()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::has_data() const
{
    for (std::size_t index=0; index<summary_route.size(); index++)
    {
        if(summary_route[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::has_operation() const
{
    for (std::size_t index=0; index<summary_route.size(); index++)
    {
        if(summary_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alt";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Alt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-route")
    {
        for(auto const & c : summary_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::SummaryRoute>();
        c->parent = this;
        summary_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : summary_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-route")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::SummaryRoute::SummaryRoute()
    :
    eid_prefix{YType::str, "eid-prefix"},
    route_tag{YType::uint32, "route-tag"}
{
    yang_name = "summary-route"; yang_parent_name = "alt";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::SummaryRoute::~SummaryRoute()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::SummaryRoute::has_data() const
{
    return eid_prefix.is_set
	|| route_tag.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::SummaryRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::SummaryRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-route" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::SummaryRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryRoute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::SummaryRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::SummaryRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::SummaryRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
        eid_prefix.value_namespace = name_space;
        eid_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::SummaryRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Alt::SummaryRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-prefix" || name == "route-tag")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{
    yang_name = "distance"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Distance::~Distance()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Distance::has_data() const
{
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alt.yfilter)
	|| ydk::is_set(away.yfilter)
	|| ydk::is_set(dyn_eid.yfilter)
	|| ydk::is_set(site_registrations.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.yfilter)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.yfilter)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.yfilter)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Distance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alt" || name == "away" || name == "dyn-eid" || name == "site-registrations")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
    	,
    away_eids(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::has_data() const
{
    for (std::size_t index=0; index<eid_interface.size(); index++)
    {
        if(eid_interface[index]->has_data())
            return true;
    }
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::has_operation() const
{
    for (std::size_t index=0; index<eid_interface.size(); index++)
    {
        if(eid_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(site_registration.yfilter)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.yfilter)) leaf_name_data.push_back(site_registration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::AwayEids>();
        }
        return away_eids;
    }

    if(child_yang_name == "eid-interface")
    {
        for(auto const & c : eid_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface>();
        c->parent = this;
        eid_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(away_eids != nullptr)
    {
        children["away-eids"] = away_eids;
    }

    for (auto const & c : eid_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
        site_registration.value_namespace = name_space;
        site_registration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registration")
    {
        site_registration.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "away-eids" || name == "eid-interface" || name == "site-registration")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::EidInterface()
    :
    eid_prefix{YType::str, "eid-prefix"},
    drop{YType::empty, "drop"},
    map_request{YType::empty, "map-request"},
    native_forward{YType::empty, "native-forward"}
    	,
    etr_interface_ip(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp>())
{
    etr_interface_ip->parent = this;

    yang_name = "eid-interface"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::~EidInterface()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::has_data() const
{
    return eid_prefix.is_set
	|| drop.is_set
	|| map_request.is_set
	|| native_forward.is_set
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(map_request.yfilter)
	|| ydk::is_set(native_forward.yfilter)
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-interface" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidInterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (map_request.is_set || is_set(map_request.yfilter)) leaf_name_data.push_back(map_request.get_name_leafdata());
    if (native_forward.is_set || is_set(native_forward.yfilter)) leaf_name_data.push_back(native_forward.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etr-interface-ip")
    {
        if(etr_interface_ip == nullptr)
        {
            etr_interface_ip = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp>();
        }
        return etr_interface_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(etr_interface_ip != nullptr)
    {
        children["etr-interface-ip"] = etr_interface_ip;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip" || name == "eid-prefix" || name == "drop" || name == "map-request" || name == "native-forward")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp::EtrInterfaceIp()
    :
    etr_interface_ip_address{YType::str, "etr-interface-ip-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "etr-interface-ip"; yang_parent_name = "eid-interface";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp::~EtrInterfaceIp()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp::has_data() const
{
    return etr_interface_ip_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr_interface_ip_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-interface-ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtrInterfaceIp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr_interface_ip_address.is_set || is_set(etr_interface_ip_address.yfilter)) leaf_name_data.push_back(etr_interface_ip_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::EidInterface::EtrInterfaceIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip-address" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{
    yang_name = "away-eids"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::AwayEids::has_data() const
{
    return send_map_request.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::AwayEids::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_map_request.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::AwayEids::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AwayEids' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.yfilter)) leaf_name_data.push_back(send_map_request.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::AwayEids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
        send_map_request.value_namespace = name_space;
        send_map_request.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::AwayEids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-map-request")
    {
        send_map_request.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCache::AwayEids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-map-request")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "map-cache-persistent"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCachePersistent::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCachePersistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCachePersistent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCachePersistent' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCachePersistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCachePersistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::MapCachePersistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{
    yang_name = "proxy-itr"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ProxyItr::~ProxyItr()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ProxyItr::has_data() const
{
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ProxyItr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ProxyItr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProxyItr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ProxyItr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ProxyItr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::ProxyItr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "ipv6-addr")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteExport::RouteExport()
    :
    away_eids{YType::empty, "away-eids"},
    site_registrations{YType::empty, "site-registrations"}
{
    yang_name = "route-export"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteExport::~RouteExport()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteExport::has_data() const
{
    return away_eids.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteExport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(away_eids.yfilter)
	|| ydk::is_set(site_registrations.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteExport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteExport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (away_eids.is_set || is_set(away_eids.yfilter)) leaf_name_data.push_back(away_eids.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "away-eids")
    {
        away_eids = value;
        away_eids.value_namespace = name_space;
        away_eids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteExport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "away-eids")
    {
        away_eids.yfilter = yfilter;
    }
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "away-eids" || name == "site-registrations")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
    	,
    priority(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::~UsePetr()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::has_data() const
{
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_address.yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr" <<"[locator-address='" <<locator_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsePetr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.yfilter)) leaf_name_data.push_back(locator_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
        locator_address.value_namespace = name_space;
        locator_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-address")
    {
        locator_address.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "locator-address")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{
    yang_name = "priority"; yang_parent_name = "use-petr";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::Priority::~Priority()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::Priority::has_data() const
{
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_value.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.yfilter)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::Priority::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::UsePetr::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-value" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::RouteImport()
    :
    database(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database>())
	,map_cache(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache>())
{
    database->parent = this;

    map_cache->parent = this;

    yang_name = "route-import"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::~RouteImport()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::has_data() const
{
    return (database !=  nullptr && database->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::has_operation() const
{
    return is_set(yfilter)
	|| (database !=  nullptr && database->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database>();
        }
        return database;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache>();
        }
        return map_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database" || name == "map-cache")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Database()
    :
    application(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application>())
	,connected(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected>())
	,isis(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis>())
	,maximum_prefix(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::MaximumPrefix>())
	,nd(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd>())
	,static_(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_>())
{
    application->parent = this;

    connected->parent = this;

    isis->parent = this;

    maximum_prefix->parent = this;

    nd->parent = this;

    static_->parent = this;

    yang_name = "database"; yang_parent_name = "route-import";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::~Database()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
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

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Database' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected>();
        }
        return connected;
    }

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
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        for(auto const & c : rip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rip)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "maximum-prefix" || name == "nd" || name == "ospf" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::Application()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "application"; yang_parent_name = "database";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::~Application()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "application";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set" || name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::Bgp()
    :
    id{YType::str, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "bgp"; yang_parent_name = "database";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::~Bgp()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "bgp";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set" || name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::Connected()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "connected"; yang_parent_name = "database";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::~Connected()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connected' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "connected";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set" || name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "eigrp"; yang_parent_name = "database";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::~Eigrp()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "eigrp";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set" || name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::Isis()
    :
    process_id{YType::str, "process-id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "isis"; yang_parent_name = "database";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::~Isis()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::has_data() const
{
    return process_id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "process-id")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "isis";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set" || name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only{YType::empty, "warning-only"},
    warning_only1{YType::empty, "warning-only1"}
{
    yang_name = "maximum-prefix"; yang_parent_name = "database";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::MaximumPrefix::has_data() const
{
    return number.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only.is_set
	|| warning_only1.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold1.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(warning_only1.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::MaximumPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.yfilter)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.yfilter)) leaf_name_data.push_back(warning_only1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "threshold1")
    {
        threshold1 = value;
        threshold1.value_namespace = name_space;
        threshold1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only1")
    {
        warning_only1 = value;
        warning_only1.value_namespace = name_space;
        warning_only1.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold1")
    {
        threshold1.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "warning-only1")
    {
        warning_only1.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "threshold" || name == "threshold1" || name == "warning-only" || name == "warning-only1")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::Nd()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "nd"; yang_parent_name = "database";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::~Nd()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "nd";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set" || name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "ospf"; yang_parent_name = "database";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::~Ospf()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "ospf";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set" || name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::Static_()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "static"; yang_parent_name = "database";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::~Static_()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "static";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set" || name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "rip"; yang_parent_name = "database";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::~Rip()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::LispIpRouteImport()
    :
    locator_set{YType::str, "locator-set"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp-ip-route-import"; yang_parent_name = "rip";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::has_data() const
{
    return locator_set.is_set
	|| route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispIpRouteImport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set" || name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::MapCache()
    :
    application(nullptr) // presence node
	,connected(nullptr) // presence node
	,isis(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis>())
	,maximum_prefix(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::MaximumPrefix>())
	,nd(nullptr) // presence node
	,static_(nullptr) // presence node
{
    isis->parent = this;

    maximum_prefix->parent = this;

    yang_name = "map-cache"; yang_parent_name = "route-import";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
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

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected>();
        }
        return connected;
    }

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
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        for(auto const & c : rip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rip)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "maximum-prefix" || name == "nd" || name == "ospf" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::Application()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "application"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::~Application()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "application";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::Bgp()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "bgp"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::~Bgp()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "bgp";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::Connected()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "connected"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::~Connected()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connected' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "connected";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "eigrp"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::~Eigrp()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "eigrp";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::Isis()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "isis"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::~Isis()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "isis";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only{YType::empty, "warning-only"},
    warning_only1{YType::empty, "warning-only1"}
{
    yang_name = "maximum-prefix"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::has_data() const
{
    return number.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only.is_set
	|| warning_only1.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold1.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(warning_only1.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.yfilter)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.yfilter)) leaf_name_data.push_back(warning_only1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "threshold1")
    {
        threshold1 = value;
        threshold1.value_namespace = name_space;
        threshold1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only1")
    {
        warning_only1 = value;
        warning_only1.value_namespace = name_space;
        warning_only1.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold1")
    {
        threshold1.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "warning-only1")
    {
        warning_only1.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "threshold" || name == "threshold1" || name == "warning-only" || name == "warning-only1")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::Nd()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "nd"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::~Nd()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "nd";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "ospf"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::~Ospf()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "ospf";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::Static_()
    :
    map_cache_container(nullptr) // presence node
{
    yang_name = "static"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::~Static_()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "static";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{
    yang_name = "rip"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::~Rip()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "map-cache-container"; yang_parent_name = "rip";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::has_data() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        for(auto const & c : eid_cont)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont>();
        c->parent = this;
        eid_cont.push_back(c);
        return c;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eid_cont)
    {
        children[c->get_segment_path()] = c;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-cont" || name == "limit")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"},
    auto_discover_rlocs{YType::empty, "auto-discover-rlocs"},
    locator_set{YType::str, "locator-set"}
{
    yang_name = "eid-cont"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::~EidCont()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::has_data() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_data())
            return true;
    }
    return eid_prefix.is_set
	|| auto_discover_rlocs.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| ydk::is_set(auto_discover_rlocs.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidCont' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (auto_discover_rlocs.is_set || is_set(auto_discover_rlocs.yfilter)) leaf_name_data.push_back(auto_discover_rlocs.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addrees")
    {
        for(auto const & c : ipv4_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees>();
        c->parent = this;
        ipv4_addrees.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv4-interface")
    {
        for(auto const & c : ipv4_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface>();
        c->parent = this;
        ipv4_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-addrees")
    {
        for(auto const & c : ipv6_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees>();
        c->parent = this;
        ipv6_addrees.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv6-interface")
    {
        for(auto const & c : ipv6_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface>();
        c->parent = this;
        ipv6_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_interface)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
    if(value_path == "auto-discover-rlocs")
    {
        auto_discover_rlocs.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addrees" || name == "IPv4-interface" || name == "ipv6-addrees" || name == "IPv6-interface" || name == "eid-prefix" || name == "auto-discover-rlocs" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::Ipv4Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv4-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::~Ipv4Addrees()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "address")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv4-addrees";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::Ipv6Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv6-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::~Ipv6Addrees()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "address")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv6-addrees";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::Ipv4Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv4-interface"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::~Ipv4Interface()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv4-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "IPv4-interface";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::Ipv6Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv6-interface"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::~Ipv6Interface()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "IPv6-interface";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "limit"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Ethernet()
    :
    map_request_source{YType::str, "map-request-source"}
    	,
    broadcast_underlay(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::BroadcastUnderlay>())
	,database_mapping(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping>())
	,default_(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__>())
	,eid_table(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EidTable>())
	,etr(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EtrEnable>())
	,itr(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::ItrEnable>())
	,map_cache(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCacheLimit>())
	,site_registration(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::SolicitMapRequest>())
{
    broadcast_underlay->parent = this;

    database_mapping->parent = this;

    default_->parent = this;

    eid_table->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache->parent = this;

    map_cache_limit->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "ethernet"; yang_parent_name = "service";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::~Ethernet()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::has_data() const
{
    return map_request_source.is_set
	|| (broadcast_underlay !=  nullptr && broadcast_underlay->has_data())
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map_request_source.yfilter)
	|| (broadcast_underlay !=  nullptr && broadcast_underlay->has_operation())
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-underlay")
    {
        if(broadcast_underlay == nullptr)
        {
            broadcast_underlay = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::BroadcastUnderlay>();
        }
        return broadcast_underlay;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__>();
        }
        return default_;
    }

    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast_underlay != nullptr)
    {
        children["broadcast-underlay"] = broadcast_underlay;
    }

    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(eid_table != nullptr)
    {
        children["eid-table"] = eid_table;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-request-source")
    {
        map_request_source = value;
        map_request_source.value_namespace = name_space;
        map_request_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-request-source")
    {
        map_request_source.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-underlay" || name == "database-mapping" || name == "default" || name == "eid-table" || name == "etr" || name == "etr-enable" || name == "itr" || name == "itr-enable" || name == "map-cache" || name == "map-cache-limit" || name == "site-registration" || name == "solicit-map-request" || name == "map-request-source")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Default__()
    :
    map_request_source{YType::str, "map-request-source"}
    	,
    broadcast_underlay(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::BroadcastUnderlay>())
	,database_mapping(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping>())
	,eid_table(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EidTable>())
	,etr(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EtrEnable>())
	,itr(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::ItrEnable>())
	,map_cache(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCacheLimit>())
	,site_registration(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SolicitMapRequest>())
{
    broadcast_underlay->parent = this;

    database_mapping->parent = this;

    eid_table->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache->parent = this;

    map_cache_limit->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "default"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::~Default__()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::has_data() const
{
    return map_request_source.is_set
	|| (broadcast_underlay !=  nullptr && broadcast_underlay->has_data())
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map_request_source.yfilter)
	|| (broadcast_underlay !=  nullptr && broadcast_underlay->has_operation())
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default__' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-underlay")
    {
        if(broadcast_underlay == nullptr)
        {
            broadcast_underlay = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::BroadcastUnderlay>();
        }
        return broadcast_underlay;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast_underlay != nullptr)
    {
        children["broadcast-underlay"] = broadcast_underlay;
    }

    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(eid_table != nullptr)
    {
        children["eid-table"] = eid_table;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-request-source")
    {
        map_request_source = value;
        map_request_source.value_namespace = name_space;
        map_request_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-request-source")
    {
        map_request_source.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-underlay" || name == "database-mapping" || name == "eid-table" || name == "etr" || name == "etr-enable" || name == "itr" || name == "itr-enable" || name == "map-cache" || name == "map-cache-limit" || name == "site-registration" || name == "solicit-map-request" || name == "map-request-source")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EidTable::EidTable()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "eid-table"; yang_parent_name = "default";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EidTable::~EidTable()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EidTable::has_data() const
{
    return vlan.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EidTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EidTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-table";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EidTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EidTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EidTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EidTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EidTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EidTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::BroadcastUnderlay::BroadcastUnderlay()
    :
    ipv4_multicast{YType::str, "ipv4-multicast"},
    ipv6_multicast{YType::str, "ipv6-multicast"}
{
    yang_name = "broadcast-underlay"; yang_parent_name = "default";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::BroadcastUnderlay::~BroadcastUnderlay()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::BroadcastUnderlay::has_data() const
{
    return ipv4_multicast.is_set
	|| ipv6_multicast.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::BroadcastUnderlay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_multicast.yfilter)
	|| ydk::is_set(ipv6_multicast.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::BroadcastUnderlay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-underlay";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::BroadcastUnderlay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BroadcastUnderlay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_multicast.is_set || is_set(ipv4_multicast.yfilter)) leaf_name_data.push_back(ipv4_multicast.get_name_leafdata());
    if (ipv6_multicast.is_set || is_set(ipv6_multicast.yfilter)) leaf_name_data.push_back(ipv6_multicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::BroadcastUnderlay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::BroadcastUnderlay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::BroadcastUnderlay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::BroadcastUnderlay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::BroadcastUnderlay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-multicast" || name == "ipv6-multicast")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit>())
	,mac(nullptr) // presence node
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "default";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::has_data() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return (limit !=  nullptr && limit->has_data())
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation())
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        for(auto const & c : eid_cont)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont>();
        c->parent = this;
        eid_cont.push_back(c);
        return c;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eid_cont)
    {
        children[c->get_segment_path()] = c;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-cont" || name == "limit" || name == "mac")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"},
    locator_set{YType::str, "locator-set"}
{
    yang_name = "eid-cont"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::~EidCont()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::has_data() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_data())
            return true;
    }
    return eid_prefix.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidCont' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addrees")
    {
        for(auto const & c : ipv4_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees>();
        c->parent = this;
        ipv4_addrees.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv4-interface")
    {
        for(auto const & c : ipv4_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface>();
        c->parent = this;
        ipv4_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-addrees")
    {
        for(auto const & c : ipv6_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees>();
        c->parent = this;
        ipv6_addrees.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv6-interface")
    {
        for(auto const & c : ipv6_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface>();
        c->parent = this;
        ipv6_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_interface)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addrees" || name == "IPv4-interface" || name == "ipv6-addrees" || name == "IPv6-interface" || name == "eid-prefix" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::Ipv4Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv4-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::~Ipv4Addrees()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "address")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv4-addrees";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::Ipv6Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv6-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::~Ipv6Addrees()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "address")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv6-addrees";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::Ipv4Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv4-interface"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::~Ipv4Interface()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv4-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "IPv4-interface";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::Ipv6Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv6-interface"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::~Ipv6Interface()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "IPv6-interface";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Mac::Mac()
    :
    locator_set{YType::str, "locator-set"}
{
    yang_name = "mac"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Mac::~Mac()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Mac::has_data() const
{
    return locator_set.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "limit"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::Itr()
{
    yang_name = "itr"; yang_parent_name = "default";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::~Itr()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Itr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        for(auto const & c : map_resolver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "map-resolver"; yang_parent_name = "itr";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapResolver' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{
    yang_name = "itr-enable"; yang_parent_name = "default";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::ItrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ItrEnable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{
    yang_name = "etr-enable"; yang_parent_name = "default";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EtrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtrEnable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "default";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::~Etr()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::has_operation() const
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

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Etr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.yfilter)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
        map_cache_ttl.value_namespace = name_space;
        map_cache_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-map-request-mapping" || name == "map-server" || name == "map-cache-ttl")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapServer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-0" || name == "key-6" || name == "key-7" || name == "key-pwd")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(unc_pwd.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyPwd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-function" || name == "unc-pwd")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-7"; yang_parent_name = "key";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key7' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{
    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_mappping.yfilter)
	|| ydk::is_set(verify.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcceptMapRequestMapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.yfilter)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.yfilter)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mappping" || name == "verify")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "map-cache-limit"; yang_parent_name = "default";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCacheLimit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "site-registration"; yang_parent_name = "default";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SiteRegistration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiteRegistration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{
    yang_name = "solicit-map-request"; yang_parent_name = "default";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SolicitMapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SolicitMapRequest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::MapCache()
{
    yang_name = "map-cache"; yang_parent_name = "default";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::has_data() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        for(auto const & c : eid_cont)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont>();
        c->parent = this;
        eid_cont.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eid_cont)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-cont")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"}
    	,
    etr_interface_ip(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp>())
{
    etr_interface_ip->parent = this;

    yang_name = "eid-cont"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::~EidCont()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::has_data() const
{
    return eid_prefix.is_set
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| (etr_interface_ip !=  nullptr && etr_interface_ip->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidCont' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "etr-interface-ip")
    {
        if(etr_interface_ip == nullptr)
        {
            etr_interface_ip = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp>();
        }
        return etr_interface_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(etr_interface_ip != nullptr)
    {
        children["etr-interface-ip"] = etr_interface_ip;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix = value;
        eid_prefix.value_namespace = name_space;
        eid_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eid-prefix")
    {
        eid_prefix.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip" || name == "eid-prefix")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::EtrInterfaceIp()
    :
    etr_interface_ip_address{YType::str, "etr-interface-ip-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "etr-interface-ip"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::~EtrInterfaceIp()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::has_data() const
{
    return etr_interface_ip_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr_interface_ip_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-interface-ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtrInterfaceIp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr_interface_ip_address.is_set || is_set(etr_interface_ip_address.yfilter)) leaf_name_data.push_back(etr_interface_ip_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr-interface-ip-address" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EidTable::EidTable()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "eid-table"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EidTable::~EidTable()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EidTable::has_data() const
{
    return vlan.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EidTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EidTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-table";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EidTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidTable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EidTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EidTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EidTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EidTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EidTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::BroadcastUnderlay::BroadcastUnderlay()
    :
    ipv4_multicast{YType::str, "ipv4-multicast"},
    ipv6_multicast{YType::str, "ipv6-multicast"}
{
    yang_name = "broadcast-underlay"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::BroadcastUnderlay::~BroadcastUnderlay()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::BroadcastUnderlay::has_data() const
{
    return ipv4_multicast.is_set
	|| ipv6_multicast.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::BroadcastUnderlay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_multicast.yfilter)
	|| ydk::is_set(ipv6_multicast.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::BroadcastUnderlay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-underlay";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::BroadcastUnderlay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BroadcastUnderlay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_multicast.is_set || is_set(ipv4_multicast.yfilter)) leaf_name_data.push_back(ipv4_multicast.get_name_leafdata());
    if (ipv6_multicast.is_set || is_set(ipv6_multicast.yfilter)) leaf_name_data.push_back(ipv6_multicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::BroadcastUnderlay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::BroadcastUnderlay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::BroadcastUnderlay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::BroadcastUnderlay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::BroadcastUnderlay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-multicast" || name == "ipv6-multicast")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Limit>())
	,mac(nullptr) // presence node
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::has_data() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_data())
            return true;
    }
    return (limit !=  nullptr && limit->has_data())
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::has_operation() const
{
    for (std::size_t index=0; index<eid_cont.size(); index++)
    {
        if(eid_cont[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation())
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMapping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eid-cont")
    {
        for(auto const & c : eid_cont)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont>();
        c->parent = this;
        eid_cont.push_back(c);
        return c;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eid_cont)
    {
        children[c->get_segment_path()] = c;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eid-cont" || name == "limit" || name == "mac")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::EidCont()
    :
    eid_prefix{YType::str, "eid-prefix"},
    locator_set{YType::str, "locator-set"}
{
    yang_name = "eid-cont"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::~EidCont()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::has_data() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_data())
            return true;
    }
    return eid_prefix.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addrees.size(); index++)
    {
        if(ipv4_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_interface.size(); index++)
    {
        if(ipv4_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_addrees.size(); index++)
    {
        if(ipv6_addrees[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_interface.size(); index++)
    {
        if(ipv6_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(eid_prefix.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-cont" <<"[eid-prefix='" <<eid_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EidCont' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eid_prefix.is_set || is_set(eid_prefix.yfilter)) leaf_name_data.push_back(eid_prefix.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addrees")
    {
        for(auto const & c : ipv4_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees>();
        c->parent = this;
        ipv4_addrees.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv4-interface")
    {
        for(auto const & c : ipv4_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface>();
        c->parent = this;
        ipv4_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-addrees")
    {
        for(auto const & c : ipv6_addrees)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees>();
        c->parent = this;
        ipv6_addrees.push_back(c);
        return c;
    }

    if(child_yang_name == "IPv6-interface")
    {
        for(auto const & c : ipv6_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface>();
        c->parent = this;
        ipv6_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4_interface)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_addrees)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addrees" || name == "IPv4-interface" || name == "ipv6-addrees" || name == "IPv6-interface" || name == "eid-prefix" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::Ipv4Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv4-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::~Ipv4Addrees()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "address")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv4-addrees";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::Ipv6Addrees()
    :
    address{YType::str, "address"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "ipv6-addrees"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::~Ipv6Addrees()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::has_data() const
{
    return address.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addrees" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Addrees' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "address")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "ipv6-addrees";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::Ipv4Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv4-interface"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::~Ipv4Interface()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv4-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "IPv4-interface";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::Ipv6Interface()
    :
    name{YType::str, "name"}
    	,
    database_mapping_option(std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption>())
{
    database_mapping_option->parent = this;

    yang_name = "IPv6-interface"; yang_parent_name = "eid-cont";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::~Ipv6Interface()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::has_data() const
{
    return name.is_set
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_data());
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (database_mapping_option !=  nullptr && database_mapping_option->has_operation());
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPv6-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping-option")
    {
        if(database_mapping_option == nullptr)
        {
            database_mapping_option = std::make_shared<Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption>();
        }
        return database_mapping_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping_option != nullptr)
    {
        children["database-mapping-option"] = database_mapping_option;
    }

    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping-option" || name == "name")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::DatabaseMappingOption()
    :
    down{YType::empty, "down"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{
    yang_name = "database-mapping-option"; yang_parent_name = "IPv6-interface";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::~DatabaseMappingOption()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_data() const
{
    return down.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping-option";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseMappingOption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
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

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Mac::Mac()
    :
    locator_set{YType::str, "locator-set"}
{
    yang_name = "mac"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Mac::~Mac()
{
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Mac::has_data() const
{
    return locator_set.is_set;
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6::Etr::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};


}
}
