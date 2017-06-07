
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_99.hpp"
#include "Cisco_IOS_XE_native_100.hpp"
#include "Cisco_IOS_XE_native_102.hpp"
#include "Cisco_IOS_XE_native_101.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis";
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::~Ip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoIgrp()
    :
    route_map(nullptr) // presence node
{
    yang_name = "iso-igrp"; yang_parent_name = "vrf-nm";
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_data())
            return true;
    }
    return (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoIgrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iso-atag")
    {
        for(auto const & c : iso_atag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag>();
        c->parent = this;
        iso_atag.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iso_atag)
    {
        children[c->get_segment_path()] = c;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::IsoAtag()
    :
    iso_atag{YType::str, "iso-atag"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "iso-atag"; yang_parent_name = "iso-igrp";
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::~IsoAtag()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::has_data() const
{
    return iso_atag.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::has_operation() const
{
    return is_set(operation)
	|| is_set(iso_atag.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-atag" <<"[iso-atag='" <<iso_atag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoAtag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_atag.is_set || is_set(iso_atag.operation)) leaf_name_data.push_back(iso_atag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iso-atag")
    {
        iso_atag = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::RouteMap()
    :
    rm_point{YType::str, "rm-point"}
{
    yang_name = "route-map"; yang_parent_name = "iso-igrp";
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::~RouteMap()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::has_data() const
{
    return rm_point.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(rm_point.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rm_point.is_set || is_set(rm_point.operation)) leaf_name_data.push_back(rm_point.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rm-point")
    {
        rm_point = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::Lisp()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp"; yang_parent_name = "vrf-nm";
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::~Lisp()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lisp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::Mobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "mobile"; yang_parent_name = "vrf-nm";
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::~Mobile()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mobile' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Ospfv3()
{
    yang_name = "ospfv3"; yang_parent_name = "vrf-nm";
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::has_data() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "os3-id")
    {
        for(auto const & c : os3_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id>();
        c->parent = this;
        os3_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : os3_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::Os3Id()
    :
    os3_id{YType::uint16, "os3-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "os3-id"; yang_parent_name = "ospfv3";
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::~Os3Id()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::has_data() const
{
    return os3_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::has_operation() const
{
    return is_set(operation)
	|| is_set(os3_id.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os3-id" <<"[os3-id='" <<os3_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Os3Id' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (os3_id.is_set || is_set(os3_id.operation)) leaf_name_data.push_back(os3_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "os3-id")
    {
        os3_id = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "rip"; yang_parent_name = "vrf-nm";
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::~Rip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Static_()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "static"; yang_parent_name = "vrf-nm";
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::~Static_()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "static";
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::~Clns()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "static";
}

Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::~Ip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Global()
    :
    ospf{YType::uint16, "ospf"}
    	,
    application(std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Application>())
	,bgp(std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Bgp>())
	,connected(nullptr) // presence node
	,eigrp(std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Eigrp>())
	,isis(std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Isis_>())
	,iso_igrp(nullptr) // presence node
	,lisp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,ospfv3(std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3>())
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
{
    application->parent = this;

    bgp->parent = this;

    eigrp->parent = this;

    isis->parent = this;

    ospfv3->parent = this;

    yang_name = "global"; yang_parent_name = "vrf";
}

Native::Router::Isis::Redistribute::Vrf::Global::~Global()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::has_data() const
{
    return ospf.is_set
	|| (application !=  nullptr && application->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(ospf.operation)
	|| (application !=  nullptr && application->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospf.is_set || is_set(ospf.operation)) leaf_name_data.push_back(ospf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Isis_>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospf")
    {
        ospf = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Application::Application()
{
    yang_name = "application"; yang_parent_name = "global";
}

Native::Router::Isis::Redistribute::Vrf::Global::Application::~Application()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Application::has_data() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Application::has_operation() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "appname")
    {
        for(auto const & c : appname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname>();
        c->parent = this;
        appname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : appname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Application::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::Appname()
    :
    appname{YType::str, "appname"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "appname"; yang_parent_name = "application";
}

Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::~Appname()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::has_data() const
{
    return appname.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::has_operation() const
{
    return is_set(operation)
	|| is_set(appname.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appname" <<"[appname='" <<appname <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/application/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appname.is_set || is_set(appname.operation)) leaf_name_data.push_back(appname.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "appname")
    {
        appname = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Bgp::Bgp()
    :
    a_lesser_1_period_0_xx_period_yy_greater_{YType::empty, "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_"}
{
    yang_name = "bgp"; yang_parent_name = "global";
}

Native::Router::Isis::Redistribute::Vrf::Global::Bgp::~Bgp()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::has_data() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_data())
            return true;
    }
    return a_lesser_1_period_0_xx_period_yy_greater_.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::has_operation() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(a_lesser_1_period_0_xx_period_yy_greater_.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a_lesser_1_period_0_xx_period_yy_greater_.is_set || is_set(a_lesser_1_period_0_xx_period_yy_greater_.operation)) leaf_name_data.push_back(a_lesser_1_period_0_xx_period_yy_greater_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bp-as-num")
    {
        for(auto const & c : bp_as_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum>();
        c->parent = this;
        bp_as_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bp_as_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_ = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::BpAsNum()
    :
    bp_as_num{YType::str, "bp-as-num"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "bp-as-num"; yang_parent_name = "bgp";
}

Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::~BpAsNum()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::has_data() const
{
    return bp_as_num.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::has_operation() const
{
    return is_set(operation)
	|| is_set(bp_as_num.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp-as-num" <<"[bp-as-num='" <<bp_as_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/bgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bp_as_num.is_set || is_set(bp_as_num.operation)) leaf_name_data.push_back(bp_as_num.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "bp-as-num";
}

Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::~Clns()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "bp-as-num";
}

Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::~Ip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Connected::Connected()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "connected"; yang_parent_name = "global";
}

Native::Router::Isis::Redistribute::Vrf::Global::Connected::~Connected()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Connected::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Connected::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Connected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::Eigrp()
{
    yang_name = "eigrp"; yang_parent_name = "global";
}

Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::~Eigrp()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::has_data() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp-as")
    {
        for(auto const & c : eigrp_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs>();
        c->parent = this;
        eigrp_as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp_as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::EigrpAs()
    :
    eigrp_as{YType::uint16, "eigrp-as"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "eigrp-as"; yang_parent_name = "eigrp";
}

Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::~EigrpAs()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::has_data() const
{
    return eigrp_as.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::has_operation() const
{
    return is_set(operation)
	|| is_set(eigrp_as.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-as" <<"[eigrp-as='" <<eigrp_as <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/eigrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp_as.is_set || is_set(eigrp_as.operation)) leaf_name_data.push_back(eigrp_as.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Isis_()
    :
    ip(nullptr) // presence node
{
    yang_name = "isis"; yang_parent_name = "global";
}

Native::Router::Isis::Redistribute::Vrf::Global::Isis_::~Isis_()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::has_data() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_data())
            return true;
    }
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::has_operation() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Isis_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "isis-atag")
    {
        for(auto const & c : isis_atag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag>();
        c->parent = this;
        isis_atag.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Isis_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    for (auto const & c : isis_atag)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Isis_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::IsisAtag()
    :
    isis_atag{YType::str, "isis-atag"}
    	,
    ip(std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip>())
{
    ip->parent = this;

    yang_name = "isis-atag"; yang_parent_name = "isis";
}

Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::~IsisAtag()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::has_data() const
{
    return isis_atag.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::has_operation() const
{
    return is_set(operation)
	|| is_set(isis_atag.operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-atag" <<"[isis-atag='" <<isis_atag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_atag.is_set || is_set(isis_atag.operation)) leaf_name_data.push_back(isis_atag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "isis-atag")
    {
        isis_atag = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis-atag";
}

Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::~Ip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis";
}

Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::~Ip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoIgrp()
    :
    route_map(nullptr) // presence node
{
    yang_name = "iso-igrp"; yang_parent_name = "global";
}

Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_data())
            return true;
    }
    return (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iso-atag")
    {
        for(auto const & c : iso_atag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag>();
        c->parent = this;
        iso_atag.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iso_atag)
    {
        children[c->get_segment_path()] = c;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::IsoAtag()
    :
    iso_atag{YType::str, "iso-atag"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "iso-atag"; yang_parent_name = "iso-igrp";
}

Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::~IsoAtag()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::has_data() const
{
    return iso_atag.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::has_operation() const
{
    return is_set(operation)
	|| is_set(iso_atag.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-atag" <<"[iso-atag='" <<iso_atag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/iso-igrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_atag.is_set || is_set(iso_atag.operation)) leaf_name_data.push_back(iso_atag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iso-atag")
    {
        iso_atag = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::RouteMap()
    :
    rm_point{YType::str, "rm-point"}
{
    yang_name = "route-map"; yang_parent_name = "iso-igrp";
}

Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::~RouteMap()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::has_data() const
{
    return rm_point.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(rm_point.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/iso-igrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rm_point.is_set || is_set(rm_point.operation)) leaf_name_data.push_back(rm_point.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rm-point")
    {
        rm_point = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Lisp::Lisp()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp"; yang_parent_name = "global";
}

Native::Router::Isis::Redistribute::Vrf::Global::Lisp::~Lisp()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Lisp::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Lisp::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Lisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Lisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Mobile::Mobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "mobile"; yang_parent_name = "global";
}

Native::Router::Isis::Redistribute::Vrf::Global::Mobile::~Mobile()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Mobile::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Mobile::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Mobile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Mobile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Ospfv3()
{
    yang_name = "ospfv3"; yang_parent_name = "global";
}

Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::has_data() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "os3-id")
    {
        for(auto const & c : os3_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id>();
        c->parent = this;
        os3_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : os3_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::Os3Id()
    :
    os3_id{YType::uint16, "os3-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "os3-id"; yang_parent_name = "ospfv3";
}

Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::~Os3Id()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::has_data() const
{
    return os3_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::has_operation() const
{
    return is_set(operation)
	|| is_set(os3_id.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os3-id" <<"[os3-id='" <<os3_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/ospfv3/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (os3_id.is_set || is_set(os3_id.operation)) leaf_name_data.push_back(os3_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "os3-id")
    {
        os3_id = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "rip"; yang_parent_name = "global";
}

Native::Router::Isis::Redistribute::Vrf::Global::Rip::~Rip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Rip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Static_::Static_()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "static"; yang_parent_name = "global";
}

Native::Router::Isis::Redistribute::Vrf::Global::Static_::~Static_()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Static_::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "static";
}

Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::~Clns()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "static";
}

Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::~Ip()
{
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/redistribute/vrf/global/static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::SetAttachedBit::SetAttachedBit()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "set-attached-bit"; yang_parent_name = "isis";
}

Native::Router::Isis::SetAttachedBit::~SetAttachedBit()
{
}

bool Native::Router::Isis::SetAttachedBit::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Isis::SetAttachedBit::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::SetAttachedBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-attached-bit";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SetAttachedBit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SetAttachedBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SetAttachedBit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SetAttachedBit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Snmp::Snmp()
{
    yang_name = "snmp"; yang_parent_name = "isis";
}

Native::Router::Isis::Snmp::~Snmp()
{
}

bool Native::Router::Isis::Snmp::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::Snmp::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Isis::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Snmp::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Snmp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::Snmp::Context::Context()
    :
    name{YType::str, "name"}
    	,
    community(std::make_shared<Native::Router::Isis::Snmp::Context::Community>())
	,user(std::make_shared<Native::Router::Isis::Snmp::Context::User>())
{
    community->parent = this;

    user->parent = this;

    yang_name = "context"; yang_parent_name = "snmp";
}

Native::Router::Isis::Snmp::Context::~Context()
{
}

bool Native::Router::Isis::Snmp::Context::has_data() const
{
    return name.is_set
	|| (community !=  nullptr && community->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::Router::Isis::Snmp::Context::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (community !=  nullptr && community->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Router::Isis::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Snmp::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::Router::Isis::Snmp::Context::Community>();
        }
        return community;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Router::Isis::Snmp::Context::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(community != nullptr)
    {
        children["community"] = community;
    }

    if(user != nullptr)
    {
        children["user"] = user;
    }

    return children;
}

void Native::Router::Isis::Snmp::Context::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Isis::Snmp::Context::Community::Community()
    :
    community_string{YType::str, "community-string"}
    	,
    access(std::make_shared<Native::Router::Isis::Snmp::Context::Community::Access>())
{
    access->parent = this;

    yang_name = "community"; yang_parent_name = "context";
}

Native::Router::Isis::Snmp::Context::Community::~Community()
{
}

bool Native::Router::Isis::Snmp::Context::Community::has_data() const
{
    return community_string.is_set
	|| (access !=  nullptr && access->has_data());
}

bool Native::Router::Isis::Snmp::Context::Community::has_operation() const
{
    return is_set(operation)
	|| is_set(community_string.operation)
	|| (access !=  nullptr && access->has_operation());
}

std::string Native::Router::Isis::Snmp::Context::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Snmp::Context::Community::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Community' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_string.is_set || is_set(community_string.operation)) leaf_name_data.push_back(community_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Snmp::Context::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Isis::Snmp::Context::Community::Access>();
        }
        return access;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Snmp::Context::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    return children;
}

void Native::Router::Isis::Snmp::Context::Community::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-string")
    {
        community_string = value;
    }
}

Native::Router::Isis::Snmp::Context::Community::Access::Access()
    :
    acl_name{YType::str, "acl-name"},
    expanded_acl{YType::uint32, "expanded-acl"},
    ipv6{YType::str, "ipv6"},
    ro{YType::empty, "ro"},
    rw{YType::empty, "rw"},
    standard_acl{YType::uint32, "standard-acl"}
{
    yang_name = "access"; yang_parent_name = "community";
}

Native::Router::Isis::Snmp::Context::Community::Access::~Access()
{
}

bool Native::Router::Isis::Snmp::Context::Community::Access::has_data() const
{
    return acl_name.is_set
	|| expanded_acl.is_set
	|| ipv6.is_set
	|| ro.is_set
	|| rw.is_set
	|| standard_acl.is_set;
}

bool Native::Router::Isis::Snmp::Context::Community::Access::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(expanded_acl.operation)
	|| is_set(ipv6.operation)
	|| is_set(ro.operation)
	|| is_set(rw.operation)
	|| is_set(standard_acl.operation);
}

std::string Native::Router::Isis::Snmp::Context::Community::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Snmp::Context::Community::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Access' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (expanded_acl.is_set || is_set(expanded_acl.operation)) leaf_name_data.push_back(expanded_acl.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (ro.is_set || is_set(ro.operation)) leaf_name_data.push_back(ro.get_name_leafdata());
    if (rw.is_set || is_set(rw.operation)) leaf_name_data.push_back(rw.get_name_leafdata());
    if (standard_acl.is_set || is_set(standard_acl.operation)) leaf_name_data.push_back(standard_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Snmp::Context::Community::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Snmp::Context::Community::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Snmp::Context::Community::Access::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "expanded-acl")
    {
        expanded_acl = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "ro")
    {
        ro = value;
    }
    if(value_path == "rw")
    {
        rw = value;
    }
    if(value_path == "standard-acl")
    {
        standard_acl = value;
    }
}

Native::Router::Isis::Snmp::Context::User::User()
    :
    name{YType::str, "name"}
    	,
    permisssion(std::make_shared<Native::Router::Isis::Snmp::Context::User::Permisssion>())
{
    permisssion->parent = this;

    yang_name = "user"; yang_parent_name = "context";
}

Native::Router::Isis::Snmp::Context::User::~User()
{
}

bool Native::Router::Isis::Snmp::Context::User::has_data() const
{
    return name.is_set
	|| (permisssion !=  nullptr && permisssion->has_data());
}

bool Native::Router::Isis::Snmp::Context::User::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (permisssion !=  nullptr && permisssion->has_operation());
}

std::string Native::Router::Isis::Snmp::Context::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Snmp::Context::User::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'User' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Snmp::Context::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permisssion")
    {
        if(permisssion == nullptr)
        {
            permisssion = std::make_shared<Native::Router::Isis::Snmp::Context::User::Permisssion>();
        }
        return permisssion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Snmp::Context::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permisssion != nullptr)
    {
        children["permisssion"] = permisssion;
    }

    return children;
}

void Native::Router::Isis::Snmp::Context::User::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Isis::Snmp::Context::User::Permisssion::Permisssion()
    :
    credential{YType::empty, "credential"},
    encrypted{YType::empty, "encrypted"}
    	,
    access(std::make_shared<Native::Router::Isis::Snmp::Context::User::Permisssion::Access>())
	,auth(std::make_shared<Native::Router::Isis::Snmp::Context::User::Permisssion::Auth>())
{
    access->parent = this;

    auth->parent = this;

    yang_name = "permisssion"; yang_parent_name = "user";
}

Native::Router::Isis::Snmp::Context::User::Permisssion::~Permisssion()
{
}

bool Native::Router::Isis::Snmp::Context::User::Permisssion::has_data() const
{
    return credential.is_set
	|| encrypted.is_set
	|| (access !=  nullptr && access->has_data())
	|| (auth !=  nullptr && auth->has_data());
}

bool Native::Router::Isis::Snmp::Context::User::Permisssion::has_operation() const
{
    return is_set(operation)
	|| is_set(credential.operation)
	|| is_set(encrypted.operation)
	|| (access !=  nullptr && access->has_operation())
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::Router::Isis::Snmp::Context::User::Permisssion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permisssion";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Snmp::Context::User::Permisssion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permisssion' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credential.is_set || is_set(credential.operation)) leaf_name_data.push_back(credential.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.operation)) leaf_name_data.push_back(encrypted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Snmp::Context::User::Permisssion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Isis::Snmp::Context::User::Permisssion::Access>();
        }
        return access;
    }

    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::Router::Isis::Snmp::Context::User::Permisssion::Auth>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Snmp::Context::User::Permisssion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(auth != nullptr)
    {
        children["auth"] = auth;
    }

    return children;
}

void Native::Router::Isis::Snmp::Context::User::Permisssion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "credential")
    {
        credential = value;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
    }
}

Native::Router::Isis::Snmp::Context::User::Permisssion::Access::Access()
    :
    acl_name{YType::str, "acl-name"},
    ipv6{YType::str, "ipv6"},
    standard_acl{YType::uint32, "standard-acl"}
{
    yang_name = "access"; yang_parent_name = "permisssion";
}

Native::Router::Isis::Snmp::Context::User::Permisssion::Access::~Access()
{
}

bool Native::Router::Isis::Snmp::Context::User::Permisssion::Access::has_data() const
{
    return acl_name.is_set
	|| ipv6.is_set
	|| standard_acl.is_set;
}

bool Native::Router::Isis::Snmp::Context::User::Permisssion::Access::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(ipv6.operation)
	|| is_set(standard_acl.operation);
}

std::string Native::Router::Isis::Snmp::Context::User::Permisssion::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Snmp::Context::User::Permisssion::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Access' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (standard_acl.is_set || is_set(standard_acl.operation)) leaf_name_data.push_back(standard_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Snmp::Context::User::Permisssion::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Snmp::Context::User::Permisssion::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Snmp::Context::User::Permisssion::Access::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "standard-acl")
    {
        standard_acl = value;
    }
}

Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::Auth()
    :
    md5{YType::str, "md5"},
    sha{YType::str, "sha"}
{
    yang_name = "auth"; yang_parent_name = "permisssion";
}

Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::~Auth()
{
}

bool Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::has_data() const
{
    return md5.is_set
	|| sha.is_set;
}

bool Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::has_operation() const
{
    return is_set(operation)
	|| is_set(md5.operation)
	|| is_set(sha.operation);
}

std::string Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.operation)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha.is_set || is_set(sha.operation)) leaf_name_data.push_back(sha.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Snmp::Context::User::Permisssion::Auth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "md5")
    {
        md5 = value;
    }
    if(value_path == "sha")
    {
        sha = value;
    }
}

Native::Router::Isis::SummaryAddress::SummaryAddress()
    :
    ip{YType::str, "ip"},
    mask{YType::str, "mask"}
    	,
    level_1(nullptr) // presence node
	,level_1_2(nullptr) // presence node
	,level_2(nullptr) // presence node
	,metric_tag_container(std::make_shared<Native::Router::Isis::SummaryAddress::MetricTagContainer>())
{
    metric_tag_container->parent = this;

    yang_name = "summary-address"; yang_parent_name = "isis";
}

Native::Router::Isis::SummaryAddress::~SummaryAddress()
{
}

bool Native::Router::Isis::SummaryAddress::has_data() const
{
    return ip.is_set
	|| mask.is_set
	|| (level_1 !=  nullptr && level_1->has_data())
	|| (level_1_2 !=  nullptr && level_1_2->has_data())
	|| (level_2 !=  nullptr && level_2->has_data())
	|| (metric_tag_container !=  nullptr && metric_tag_container->has_data());
}

bool Native::Router::Isis::SummaryAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(mask.operation)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_1_2 !=  nullptr && level_1_2->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation())
	|| (metric_tag_container !=  nullptr && metric_tag_container->has_operation());
}

std::string Native::Router::Isis::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address" <<"[ip='" <<ip <<"']" <<"[mask='" <<mask <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SummaryAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::Isis::SummaryAddress::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-1-2")
    {
        if(level_1_2 == nullptr)
        {
            level_1_2 = std::make_shared<Native::Router::Isis::SummaryAddress::Level12>();
        }
        return level_1_2;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::Isis::SummaryAddress::Level2>();
        }
        return level_2;
    }

    if(child_yang_name == "metric-tag-container")
    {
        if(metric_tag_container == nullptr)
        {
            metric_tag_container = std::make_shared<Native::Router::Isis::SummaryAddress::MetricTagContainer>();
        }
        return metric_tag_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_1_2 != nullptr)
    {
        children["level-1-2"] = level_1_2;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    if(metric_tag_container != nullptr)
    {
        children["metric-tag-container"] = metric_tag_container;
    }

    return children;
}

void Native::Router::Isis::SummaryAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::Router::Isis::SummaryAddress::Level1::Level1()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{
    yang_name = "level-1"; yang_parent_name = "summary-address";
}

Native::Router::Isis::SummaryAddress::Level1::~Level1()
{
}

bool Native::Router::Isis::SummaryAddress::Level1::has_data() const
{
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::Isis::SummaryAddress::Level1::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Isis::SummaryAddress::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SummaryAddress::Level1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SummaryAddress::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SummaryAddress::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SummaryAddress::Level1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Isis::SummaryAddress::Level12::Level12()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{
    yang_name = "level-1-2"; yang_parent_name = "summary-address";
}

Native::Router::Isis::SummaryAddress::Level12::~Level12()
{
}

bool Native::Router::Isis::SummaryAddress::Level12::has_data() const
{
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::Isis::SummaryAddress::Level12::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Isis::SummaryAddress::Level12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1-2";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SummaryAddress::Level12::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level12' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SummaryAddress::Level12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SummaryAddress::Level12::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SummaryAddress::Level12::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Isis::SummaryAddress::Level2::Level2()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{
    yang_name = "level-2"; yang_parent_name = "summary-address";
}

Native::Router::Isis::SummaryAddress::Level2::~Level2()
{
}

bool Native::Router::Isis::SummaryAddress::Level2::has_data() const
{
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::Isis::SummaryAddress::Level2::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Isis::SummaryAddress::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SummaryAddress::Level2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SummaryAddress::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SummaryAddress::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SummaryAddress::Level2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Isis::SummaryAddress::MetricTagContainer::MetricTagContainer()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{
    yang_name = "metric-tag-container"; yang_parent_name = "summary-address";
}

Native::Router::Isis::SummaryAddress::MetricTagContainer::~MetricTagContainer()
{
}

bool Native::Router::Isis::SummaryAddress::MetricTagContainer::has_data() const
{
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::Isis::SummaryAddress::MetricTagContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Isis::SummaryAddress::MetricTagContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-tag-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SummaryAddress::MetricTagContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MetricTagContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SummaryAddress::MetricTagContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SummaryAddress::MetricTagContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SummaryAddress::MetricTagContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Isis::TrafficShare::TrafficShare()
    :
    min(std::make_shared<Native::Router::Isis::TrafficShare::Min>())
{
    min->parent = this;

    yang_name = "traffic-share"; yang_parent_name = "isis";
}

Native::Router::Isis::TrafficShare::~TrafficShare()
{
}

bool Native::Router::Isis::TrafficShare::has_data() const
{
    return (min !=  nullptr && min->has_data());
}

bool Native::Router::Isis::TrafficShare::has_operation() const
{
    return is_set(operation)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Router::Isis::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::TrafficShare::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Router::Isis::TrafficShare::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min != nullptr)
    {
        children["min"] = min;
    }

    return children;
}

void Native::Router::Isis::TrafficShare::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::TrafficShare::Min::Min()
    :
    across_interfaces{YType::empty, "across-interfaces"}
{
    yang_name = "min"; yang_parent_name = "traffic-share";
}

Native::Router::Isis::TrafficShare::Min::~Min()
{
}

bool Native::Router::Isis::TrafficShare::Min::has_data() const
{
    return across_interfaces.is_set;
}

bool Native::Router::Isis::TrafficShare::Min::has_operation() const
{
    return is_set(operation)
	|| is_set(across_interfaces.operation);
}

std::string Native::Router::Isis::TrafficShare::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::TrafficShare::Min::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/traffic-share/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (across_interfaces.is_set || is_set(across_interfaces.operation)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::TrafficShare::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::TrafficShare::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::TrafficShare::Min::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
    }
}

Native::Router::Isis::Advertise::Advertise()
    :
    passive_only{YType::empty, "passive-only"}
{
    yang_name = "advertise"; yang_parent_name = "isis";
}

Native::Router::Isis::Advertise::~Advertise()
{
}

bool Native::Router::Isis::Advertise::has_data() const
{
    return passive_only.is_set;
}

bool Native::Router::Isis::Advertise::has_operation() const
{
    return is_set(operation)
	|| is_set(passive_only.operation);
}

std::string Native::Router::Isis::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Advertise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive_only.is_set || is_set(passive_only.operation)) leaf_name_data.push_back(passive_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Advertise::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "passive-only")
    {
        passive_only = value;
    }
}

Native::Router::Isis::DefaultInformation::DefaultInformation()
    :
    originate(nullptr) // presence node
{
    yang_name = "default-information"; yang_parent_name = "isis";
}

Native::Router::Isis::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Isis::DefaultInformation::has_data() const
{
    return (originate !=  nullptr && originate->has_data());
}

bool Native::Router::Isis::DefaultInformation::has_operation() const
{
    return is_set(operation)
	|| (originate !=  nullptr && originate->has_operation());
}

std::string Native::Router::Isis::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "originate")
    {
        if(originate == nullptr)
        {
            originate = std::make_shared<Native::Router::Isis::DefaultInformation::Originate>();
        }
        return originate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(originate != nullptr)
    {
        children["originate"] = originate;
    }

    return children;
}

void Native::Router::Isis::DefaultInformation::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::DefaultInformation::Originate::Originate()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "originate"; yang_parent_name = "default-information";
}

Native::Router::Isis::DefaultInformation::Originate::~Originate()
{
}

bool Native::Router::Isis::DefaultInformation::Originate::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Isis::DefaultInformation::Originate::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::DefaultInformation::Originate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::DefaultInformation::Originate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/default-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::DefaultInformation::Originate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::DefaultInformation::Originate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::DefaultInformation::Originate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::Metric::Metric()
    :
    metric{YType::uint32, "metric"}
{
    yang_name = "metric"; yang_parent_name = "isis";
}

Native::Router::Isis::Metric::~Metric()
{
}

bool Native::Router::Isis::Metric::has_data() const
{
    for (std::size_t index=0; index<metrics.size(); index++)
    {
        if(metrics[index]->has_data())
            return true;
    }
    return metric.is_set;
}

bool Native::Router::Isis::Metric::has_operation() const
{
    for (std::size_t index=0; index<metrics.size(); index++)
    {
        if(metrics[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(metric.operation);
}

std::string Native::Router::Isis::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metrics")
    {
        for(auto const & c : metrics)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Metric::Metrics>();
        c->parent = this;
        metrics.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metrics)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
}

Native::Router::Isis::Metric::Metrics::Metrics()
    :
    level{YType::enumeration, "level"},
    metric{YType::uint32, "metric"}
{
    yang_name = "metrics"; yang_parent_name = "metric";
}

Native::Router::Isis::Metric::Metrics::~Metrics()
{
}

bool Native::Router::Isis::Metric::Metrics::has_data() const
{
    return level.is_set
	|| metric.is_set;
}

bool Native::Router::Isis::Metric::Metrics::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(metric.operation);
}

std::string Native::Router::Isis::Metric::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Metric::Metrics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Metric::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Metric::Metrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Metric::Metrics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

Native::Router::Isis::PrcInterval::PrcInterval()
    :
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    minimum_wait{YType::uint32, "minimum-wait"}
{
    yang_name = "prc-interval"; yang_parent_name = "isis";
}

Native::Router::Isis::PrcInterval::~PrcInterval()
{
}

bool Native::Router::Isis::PrcInterval::has_data() const
{
    return initial_wait.is_set
	|| interval.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::Isis::PrcInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(initial_wait.operation)
	|| is_set(interval.operation)
	|| is_set(minimum_wait.operation);
}

std::string Native::Router::Isis::PrcInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc-interval";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::PrcInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_wait.is_set || is_set(initial_wait.operation)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.operation)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::PrcInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::PrcInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::PrcInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial-wait")
    {
        initial_wait = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
    }
}

Native::Router::Isis::SetOverloadBit::SetOverloadBit()
    :
    on_startup(std::make_shared<Native::Router::Isis::SetOverloadBit::OnStartup>())
	,suppress(std::make_shared<Native::Router::Isis::SetOverloadBit::Suppress>())
{
    on_startup->parent = this;

    suppress->parent = this;

    yang_name = "set-overload-bit"; yang_parent_name = "isis";
}

Native::Router::Isis::SetOverloadBit::~SetOverloadBit()
{
}

bool Native::Router::Isis::SetOverloadBit::has_data() const
{
    return (on_startup !=  nullptr && on_startup->has_data())
	|| (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::Isis::SetOverloadBit::has_operation() const
{
    return is_set(operation)
	|| (on_startup !=  nullptr && on_startup->has_operation())
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::Isis::SetOverloadBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-overload-bit";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SetOverloadBit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SetOverloadBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Native::Router::Isis::SetOverloadBit::OnStartup>();
        }
        return on_startup;
    }

    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::Isis::SetOverloadBit::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SetOverloadBit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    if(suppress != nullptr)
    {
        children["suppress"] = suppress;
    }

    return children;
}

void Native::Router::Isis::SetOverloadBit::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::SetOverloadBit::OnStartup::OnStartup()
    :
    time(std::make_shared<Native::Router::Isis::SetOverloadBit::OnStartup::Time>())
	,wait_for_bgp(nullptr) // presence node
{
    time->parent = this;

    yang_name = "on-startup"; yang_parent_name = "set-overload-bit";
}

Native::Router::Isis::SetOverloadBit::OnStartup::~OnStartup()
{
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::has_data() const
{
    return (time !=  nullptr && time->has_data())
	|| (wait_for_bgp !=  nullptr && wait_for_bgp->has_data());
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::has_operation() const
{
    return is_set(operation)
	|| (time !=  nullptr && time->has_operation())
	|| (wait_for_bgp !=  nullptr && wait_for_bgp->has_operation());
}

std::string Native::Router::Isis::SetOverloadBit::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SetOverloadBit::OnStartup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/set-overload-bit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SetOverloadBit::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Router::Isis::SetOverloadBit::OnStartup::Time>();
        }
        return time;
    }

    if(child_yang_name == "wait-for-bgp")
    {
        if(wait_for_bgp == nullptr)
        {
            wait_for_bgp = std::make_shared<Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp>();
        }
        return wait_for_bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SetOverloadBit::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    if(wait_for_bgp != nullptr)
    {
        children["wait-for-bgp"] = wait_for_bgp;
    }

    return children;
}

void Native::Router::Isis::SetOverloadBit::OnStartup::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::SetOverloadBit::OnStartup::Time::Time()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"},
    suppress{YType::empty, "suppress"},
    time{YType::uint32, "time"}
{
    yang_name = "time"; yang_parent_name = "on-startup";
}

Native::Router::Isis::SetOverloadBit::OnStartup::Time::~Time()
{
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::Time::has_data() const
{
    return external.is_set
	|| interlevel.is_set
	|| suppress.is_set
	|| time.is_set;
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::Time::has_operation() const
{
    return is_set(operation)
	|| is_set(external.operation)
	|| is_set(interlevel.operation)
	|| is_set(suppress.operation)
	|| is_set(time.operation);
}

std::string Native::Router::Isis::SetOverloadBit::OnStartup::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SetOverloadBit::OnStartup::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/set-overload-bit/on-startup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.operation)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.operation)) leaf_name_data.push_back(interlevel.get_name_leafdata());
    if (suppress.is_set || is_set(suppress.operation)) leaf_name_data.push_back(suppress.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SetOverloadBit::OnStartup::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SetOverloadBit::OnStartup::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SetOverloadBit::OnStartup::Time::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external")
    {
        external = value;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
    }
    if(value_path == "suppress")
    {
        suppress = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
}

Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::WaitForBgp()
    :
    suppress(std::make_shared<Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress>())
{
    suppress->parent = this;

    yang_name = "wait-for-bgp"; yang_parent_name = "on-startup";
}

Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::~WaitForBgp()
{
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::has_data() const
{
    return (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::has_operation() const
{
    return is_set(operation)
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wait-for-bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/set-overload-bit/on-startup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(suppress != nullptr)
    {
        children["suppress"] = suppress;
    }

    return children;
}

void Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::Suppress()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{
    yang_name = "suppress"; yang_parent_name = "wait-for-bgp";
}

Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::~Suppress()
{
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_data() const
{
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_operation() const
{
    return is_set(operation)
	|| is_set(external.operation)
	|| is_set(interlevel.operation);
}

std::string Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/set-overload-bit/on-startup/wait-for-bgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.operation)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.operation)) leaf_name_data.push_back(interlevel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external")
    {
        external = value;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
    }
}

Native::Router::Isis::SetOverloadBit::Suppress::Suppress()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{
    yang_name = "suppress"; yang_parent_name = "set-overload-bit";
}

Native::Router::Isis::SetOverloadBit::Suppress::~Suppress()
{
}

bool Native::Router::Isis::SetOverloadBit::Suppress::has_data() const
{
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::Isis::SetOverloadBit::Suppress::has_operation() const
{
    return is_set(operation)
	|| is_set(external.operation)
	|| is_set(interlevel.operation);
}

std::string Native::Router::Isis::SetOverloadBit::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SetOverloadBit::Suppress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/set-overload-bit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.operation)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.operation)) leaf_name_data.push_back(interlevel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SetOverloadBit::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SetOverloadBit::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SetOverloadBit::Suppress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external")
    {
        external = value;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
    }
}

Native::Router::Isis::SpfInterval::SpfInterval()
    :
    intervals(std::make_shared<Native::Router::Isis::SpfInterval::Intervals>())
{
    intervals->parent = this;

    yang_name = "spf-interval"; yang_parent_name = "isis";
}

Native::Router::Isis::SpfInterval::~SpfInterval()
{
}

bool Native::Router::Isis::SpfInterval::has_data() const
{
    for (std::size_t index=0; index<level_1_2.size(); index++)
    {
        if(level_1_2[index]->has_data())
            return true;
    }
    return (intervals !=  nullptr && intervals->has_data());
}

bool Native::Router::Isis::SpfInterval::has_operation() const
{
    for (std::size_t index=0; index<level_1_2.size(); index++)
    {
        if(level_1_2[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (intervals !=  nullptr && intervals->has_operation());
}

std::string Native::Router::Isis::SpfInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-interval";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SpfInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SpfInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intervals")
    {
        if(intervals == nullptr)
        {
            intervals = std::make_shared<Native::Router::Isis::SpfInterval::Intervals>();
        }
        return intervals;
    }

    if(child_yang_name == "level-1-2")
    {
        for(auto const & c : level_1_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::SpfInterval::Level12>();
        c->parent = this;
        level_1_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SpfInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(intervals != nullptr)
    {
        children["intervals"] = intervals;
    }

    for (auto const & c : level_1_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::SpfInterval::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::SpfInterval::Level12::Level12()
    :
    level{YType::enumeration, "level"},
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    minimum_wait{YType::uint32, "minimum-wait"}
{
    yang_name = "level-1-2"; yang_parent_name = "spf-interval";
}

Native::Router::Isis::SpfInterval::Level12::~Level12()
{
}

bool Native::Router::Isis::SpfInterval::Level12::has_data() const
{
    return level.is_set
	|| initial_wait.is_set
	|| interval.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::Isis::SpfInterval::Level12::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(initial_wait.operation)
	|| is_set(interval.operation)
	|| is_set(minimum_wait.operation);
}

std::string Native::Router::Isis::SpfInterval::Level12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1-2" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SpfInterval::Level12::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/spf-interval/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.operation)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.operation)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SpfInterval::Level12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SpfInterval::Level12::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SpfInterval::Level12::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
    }
}

Native::Router::Isis::SpfInterval::Intervals::Intervals()
    :
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    minimum_wait{YType::uint32, "minimum-wait"}
{
    yang_name = "intervals"; yang_parent_name = "spf-interval";
}

Native::Router::Isis::SpfInterval::Intervals::~Intervals()
{
}

bool Native::Router::Isis::SpfInterval::Intervals::has_data() const
{
    return initial_wait.is_set
	|| interval.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::Isis::SpfInterval::Intervals::has_operation() const
{
    return is_set(operation)
	|| is_set(initial_wait.operation)
	|| is_set(interval.operation)
	|| is_set(minimum_wait.operation);
}

std::string Native::Router::Isis::SpfInterval::Intervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SpfInterval::Intervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/spf-interval/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_wait.is_set || is_set(initial_wait.operation)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.operation)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SpfInterval::Intervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SpfInterval::Intervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SpfInterval::Intervals::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial-wait")
    {
        initial_wait = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
    }
}

Native::Router::Isis::AreaPassword::AreaPassword()
    :
    authenticate{YType::empty, "authenticate"},
    name{YType::str, "name"},
    snp{YType::enumeration, "snp"}
{
    yang_name = "area-password"; yang_parent_name = "isis";
}

Native::Router::Isis::AreaPassword::~AreaPassword()
{
}

bool Native::Router::Isis::AreaPassword::has_data() const
{
    return authenticate.is_set
	|| name.is_set
	|| snp.is_set;
}

bool Native::Router::Isis::AreaPassword::has_operation() const
{
    return is_set(operation)
	|| is_set(authenticate.operation)
	|| is_set(name.operation)
	|| is_set(snp.operation);
}

std::string Native::Router::Isis::AreaPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-password";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AreaPassword::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticate.is_set || is_set(authenticate.operation)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (snp.is_set || is_set(snp.operation)) leaf_name_data.push_back(snp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AreaPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AreaPassword::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AreaPassword::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authenticate")
    {
        authenticate = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "snp")
    {
        snp = value;
    }
}

Native::Router::Isis::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Router::Isis::Authentication::KeyChain>())
	,mode(std::make_shared<Native::Router::Isis::Authentication::Mode>())
	,send_only(nullptr) // presence node
{
    key_chain->parent = this;

    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "isis";
}

Native::Router::Isis::Authentication::~Authentication()
{
}

bool Native::Router::Isis::Authentication::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (send_only !=  nullptr && send_only->has_data());
}

bool Native::Router::Isis::Authentication::has_operation() const
{
    return is_set(operation)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (send_only !=  nullptr && send_only->has_operation());
}

std::string Native::Router::Isis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Router::Isis::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Router::Isis::Authentication::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "send-only")
    {
        if(send_only == nullptr)
        {
            send_only = std::make_shared<Native::Router::Isis::Authentication::SendOnly>();
        }
        return send_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Authentication::get_children() const
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

    if(send_only != nullptr)
    {
        children["send-only"] = send_only;
    }

    return children;
}

void Native::Router::Isis::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::Authentication::Mode::Mode()
    :
    md5(nullptr) // presence node
	,text(nullptr) // presence node
{
    yang_name = "mode"; yang_parent_name = "authentication";
}

Native::Router::Isis::Authentication::Mode::~Mode()
{
}

bool Native::Router::Isis::Authentication::Mode::has_data() const
{
    return (md5 !=  nullptr && md5->has_data())
	|| (text !=  nullptr && text->has_data());
}

bool Native::Router::Isis::Authentication::Mode::has_operation() const
{
    return is_set(operation)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (text !=  nullptr && text->has_operation());
}

std::string Native::Router::Isis::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Authentication::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Router::Isis::Authentication::Mode::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "text")
    {
        if(text == nullptr)
        {
            text = std::make_shared<Native::Router::Isis::Authentication::Mode::Text>();
        }
        return text;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    if(text != nullptr)
    {
        children["text"] = text;
    }

    return children;
}

void Native::Router::Isis::Authentication::Mode::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::Authentication::Mode::Md5::Md5()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "md5"; yang_parent_name = "mode";
}

Native::Router::Isis::Authentication::Mode::Md5::~Md5()
{
}

bool Native::Router::Isis::Authentication::Mode::Md5::has_data() const
{
    return levels.is_set;
}

bool Native::Router::Isis::Authentication::Mode::Md5::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Router::Isis::Authentication::Mode::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Authentication::Mode::Md5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/authentication/mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Authentication::Mode::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Authentication::Mode::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Authentication::Mode::Md5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Router::Isis::Authentication::Mode::Text::Text()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "text"; yang_parent_name = "mode";
}

Native::Router::Isis::Authentication::Mode::Text::~Text()
{
}

bool Native::Router::Isis::Authentication::Mode::Text::has_data() const
{
    return levels.is_set;
}

bool Native::Router::Isis::Authentication::Mode::Text::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Router::Isis::Authentication::Mode::Text::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Authentication::Mode::Text::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/authentication/mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Authentication::Mode::Text::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Authentication::Mode::Text::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Authentication::Mode::Text::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Router::Isis::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{
    yang_name = "key-chain"; yang_parent_name = "authentication";
}

Native::Router::Isis::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Router::Isis::Authentication::KeyChain::has_data() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Router::Isis::Authentication::KeyChain::has_operation() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Router::Isis::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Authentication::KeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain-list")
    {
        for(auto const & c : key_chain_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Authentication::KeyChain::KeyChainList>();
        c->parent = this;
        key_chain_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key_chain_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Authentication::KeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Isis::Authentication::KeyChain::KeyChainList::KeyChainList()
    :
    levels{YType::enumeration, "levels"},
    name{YType::str, "name"}
{
    yang_name = "key-chain-list"; yang_parent_name = "key-chain";
}

Native::Router::Isis::Authentication::KeyChain::KeyChainList::~KeyChainList()
{
}

bool Native::Router::Isis::Authentication::KeyChain::KeyChainList::has_data() const
{
    return levels.is_set
	|| name.is_set;
}

bool Native::Router::Isis::Authentication::KeyChain::KeyChainList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(name.operation);
}

std::string Native::Router::Isis::Authentication::KeyChain::KeyChainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Authentication::KeyChain::KeyChainList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/authentication/key-chain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Authentication::KeyChain::KeyChainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Authentication::KeyChain::KeyChainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Authentication::KeyChain::KeyChainList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Isis::Authentication::SendOnly::SendOnly()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "send-only"; yang_parent_name = "authentication";
}

Native::Router::Isis::Authentication::SendOnly::~SendOnly()
{
}

bool Native::Router::Isis::Authentication::SendOnly::has_data() const
{
    return levels.is_set;
}

bool Native::Router::Isis::Authentication::SendOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Router::Isis::Authentication::SendOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-only";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Authentication::SendOnly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Authentication::SendOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Authentication::SendOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Authentication::SendOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Router::Isis::DistributeList::DistributeList()
    :
    acl_name{YType::str, "acl-name"},
    gateway{YType::str, "gateway"},
    gateway_prefix_in{YType::str, "gateway-prefix-in"},
    in{YType::str, "in"},
    prefix{YType::str, "prefix"},
    route_map{YType::str, "route-map"},
    route_map_in{YType::empty, "route-map-in"}
{
    yang_name = "distribute-list"; yang_parent_name = "isis";
}

Native::Router::Isis::DistributeList::~DistributeList()
{
}

bool Native::Router::Isis::DistributeList::has_data() const
{
    return acl_name.is_set
	|| gateway.is_set
	|| gateway_prefix_in.is_set
	|| in.is_set
	|| prefix.is_set
	|| route_map.is_set
	|| route_map_in.is_set;
}

bool Native::Router::Isis::DistributeList::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(gateway.operation)
	|| is_set(gateway_prefix_in.operation)
	|| is_set(in.operation)
	|| is_set(prefix.operation)
	|| is_set(route_map.operation)
	|| is_set(route_map_in.operation);
}

std::string Native::Router::Isis::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.operation)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (gateway_prefix_in.is_set || is_set(gateway_prefix_in.operation)) leaf_name_data.push_back(gateway_prefix_in.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (route_map_in.is_set || is_set(route_map_in.operation)) leaf_name_data.push_back(route_map_in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::DistributeList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "gateway")
    {
        gateway = value;
    }
    if(value_path == "gateway-prefix-in")
    {
        gateway_prefix_in = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "route-map-in")
    {
        route_map_in = value;
    }
}

Native::Router::Isis::DomainPassword::DomainPassword()
    :
    authenticate{YType::empty, "authenticate"},
    name{YType::str, "name"},
    snp{YType::enumeration, "snp"}
{
    yang_name = "domain-password"; yang_parent_name = "isis";
}

Native::Router::Isis::DomainPassword::~DomainPassword()
{
}

bool Native::Router::Isis::DomainPassword::has_data() const
{
    return authenticate.is_set
	|| name.is_set
	|| snp.is_set;
}

bool Native::Router::Isis::DomainPassword::has_operation() const
{
    return is_set(operation)
	|| is_set(authenticate.operation)
	|| is_set(name.operation)
	|| is_set(snp.operation);
}

std::string Native::Router::Isis::DomainPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-password";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::DomainPassword::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticate.is_set || is_set(authenticate.operation)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (snp.is_set || is_set(snp.operation)) leaf_name_data.push_back(snp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::DomainPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::DomainPassword::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::DomainPassword::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authenticate")
    {
        authenticate = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "snp")
    {
        snp = value;
    }
}

Native::Router::Isis::FastFlood::FastFlood()
    :
    number{YType::uint32, "number"}
{
    yang_name = "fast-flood"; yang_parent_name = "isis";
}

Native::Router::Isis::FastFlood::~FastFlood()
{
}

bool Native::Router::Isis::FastFlood::has_data() const
{
    return number.is_set;
}

bool Native::Router::Isis::FastFlood::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation);
}

std::string Native::Router::Isis::FastFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-flood";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastFlood::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastFlood::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Router::Isis::FastReroute::FastReroute()
    :
    load_sharing(std::make_shared<Native::Router::Isis::FastReroute::LoadSharing>())
	,per_prefix(std::make_shared<Native::Router::Isis::FastReroute::PerPrefix>())
	,remote_lfa(std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa>())
	,tie_break(std::make_shared<Native::Router::Isis::FastReroute::TieBreak>())
{
    load_sharing->parent = this;

    per_prefix->parent = this;

    remote_lfa->parent = this;

    tie_break->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "isis";
}

Native::Router::Isis::FastReroute::~FastReroute()
{
}

bool Native::Router::Isis::FastReroute::has_data() const
{
    return (load_sharing !=  nullptr && load_sharing->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tie_break !=  nullptr && tie_break->has_data());
}

bool Native::Router::Isis::FastReroute::has_operation() const
{
    return is_set(operation)
	|| (load_sharing !=  nullptr && load_sharing->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tie_break !=  nullptr && tie_break->has_operation());
}

std::string Native::Router::Isis::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-sharing")
    {
        if(load_sharing == nullptr)
        {
            load_sharing = std::make_shared<Native::Router::Isis::FastReroute::LoadSharing>();
        }
        return load_sharing;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Native::Router::Isis::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa>();
        }
        return remote_lfa;
    }

    if(child_yang_name == "tie-break")
    {
        if(tie_break == nullptr)
        {
            tie_break = std::make_shared<Native::Router::Isis::FastReroute::TieBreak>();
        }
        return tie_break;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(load_sharing != nullptr)
    {
        children["load-sharing"] = load_sharing;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    if(remote_lfa != nullptr)
    {
        children["remote-lfa"] = remote_lfa;
    }

    if(tie_break != nullptr)
    {
        children["tie-break"] = tie_break;
    }

    return children;
}

void Native::Router::Isis::FastReroute::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::FastReroute::LoadSharing::LoadSharing()
    :
    level_1(nullptr) // presence node
	,level_2(nullptr) // presence node
{
    yang_name = "load-sharing"; yang_parent_name = "fast-reroute";
}

Native::Router::Isis::FastReroute::LoadSharing::~LoadSharing()
{
}

bool Native::Router::Isis::FastReroute::LoadSharing::has_data() const
{
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::Isis::FastReroute::LoadSharing::has_operation() const
{
    return is_set(operation)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::Isis::FastReroute::LoadSharing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-sharing";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastReroute::LoadSharing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::LoadSharing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::Isis::FastReroute::LoadSharing::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::Isis::FastReroute::LoadSharing::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::LoadSharing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    return children;
}

void Native::Router::Isis::FastReroute::LoadSharing::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::FastReroute::LoadSharing::Level1::Level1()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "level-1"; yang_parent_name = "load-sharing";
}

Native::Router::Isis::FastReroute::LoadSharing::Level1::~Level1()
{
}

bool Native::Router::Isis::FastReroute::LoadSharing::Level1::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Isis::FastReroute::LoadSharing::Level1::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Router::Isis::FastReroute::LoadSharing::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastReroute::LoadSharing::Level1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/load-sharing/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::LoadSharing::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::LoadSharing::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastReroute::LoadSharing::Level1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Router::Isis::FastReroute::LoadSharing::Level2::Level2()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "level-2"; yang_parent_name = "load-sharing";
}

Native::Router::Isis::FastReroute::LoadSharing::Level2::~Level2()
{
}

bool Native::Router::Isis::FastReroute::LoadSharing::Level2::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Isis::FastReroute::LoadSharing::Level2::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Router::Isis::FastReroute::LoadSharing::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastReroute::LoadSharing::Level2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/load-sharing/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::LoadSharing::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::LoadSharing::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastReroute::LoadSharing::Level2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Router::Isis::FastReroute::PerPrefix::PerPrefix()
    :
    level_1(std::make_shared<Native::Router::Isis::FastReroute::PerPrefix::Level1>())
	,level_2(std::make_shared<Native::Router::Isis::FastReroute::PerPrefix::Level2>())
{
    level_1->parent = this;

    level_2->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Native::Router::Isis::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Native::Router::Isis::FastReroute::PerPrefix::has_data() const
{
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::Isis::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::Isis::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::Isis::FastReroute::PerPrefix::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::Isis::FastReroute::PerPrefix::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    return children;
}

void Native::Router::Isis::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::FastReroute::PerPrefix::Level1::Level1()
    :
    all{YType::empty, "all"},
    route_map{YType::str, "route-map"}
{
    yang_name = "level-1"; yang_parent_name = "per-prefix";
}

Native::Router::Isis::FastReroute::PerPrefix::Level1::~Level1()
{
}

bool Native::Router::Isis::FastReroute::PerPrefix::Level1::has_data() const
{
    return all.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::FastReroute::PerPrefix::Level1::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::FastReroute::PerPrefix::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastReroute::PerPrefix::Level1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/per-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::PerPrefix::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::PerPrefix::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastReroute::PerPrefix::Level1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::FastReroute::PerPrefix::Level2::Level2()
    :
    all{YType::empty, "all"},
    route_map{YType::str, "route-map"}
{
    yang_name = "level-2"; yang_parent_name = "per-prefix";
}

Native::Router::Isis::FastReroute::PerPrefix::Level2::~Level2()
{
}

bool Native::Router::Isis::FastReroute::PerPrefix::Level2::has_data() const
{
    return all.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::FastReroute::PerPrefix::Level2::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Isis::FastReroute::PerPrefix::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastReroute::PerPrefix::Level2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/per-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::PerPrefix::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::PerPrefix::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastReroute::PerPrefix::Level2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Isis::FastReroute::RemoteLfa::RemoteLfa()
    :
    level_1(std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa::Level1>())
	,level_2(std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa::Level2>())
{
    level_1->parent = this;

    level_2->parent = this;

    yang_name = "remote-lfa"; yang_parent_name = "fast-reroute";
}

Native::Router::Isis::FastReroute::RemoteLfa::~RemoteLfa()
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::has_data() const
{
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::Isis::FastReroute::RemoteLfa::has_operation() const
{
    return is_set(operation)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastReroute::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    return children;
}

void Native::Router::Isis::FastReroute::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::FastReroute::RemoteLfa::Level1::Level1()
    :
    mpls_ldp(nullptr) // presence node
{
    yang_name = "level-1"; yang_parent_name = "remote-lfa";
}

Native::Router::Isis::FastReroute::RemoteLfa::Level1::~Level1()
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::has_data() const
{
    return (mpls_ldp !=  nullptr && mpls_ldp->has_data());
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::has_operation() const
{
    return is_set(operation)
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation());
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastReroute::RemoteLfa::Level1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/remote-lfa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::RemoteLfa::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-ldp")
    {
        if(mpls_ldp == nullptr)
        {
            mpls_ldp = std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp>();
        }
        return mpls_ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::RemoteLfa::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_ldp != nullptr)
    {
        children["mpls-ldp"] = mpls_ldp;
    }

    return children;
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level1::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MplsLdp()
    :
    maximum_metric(nullptr) // presence node
{
    yang_name = "mpls-ldp"; yang_parent_name = "level-1";
}

Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::~MplsLdp()
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::has_data() const
{
    return (maximum_metric !=  nullptr && maximum_metric->has_data());
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::has_operation() const
{
    return is_set(operation)
	|| (maximum_metric !=  nullptr && maximum_metric->has_operation());
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/remote-lfa/level-1/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric")
    {
        if(maximum_metric == nullptr)
        {
            maximum_metric = std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric>();
        }
        return maximum_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_metric != nullptr)
    {
        children["maximum-metric"] = maximum_metric;
    }

    return children;
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::MaximumMetric()
    :
    max_met{YType::uint32, "max-met"}
{
    yang_name = "maximum-metric"; yang_parent_name = "mpls-ldp";
}

Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::has_data() const
{
    return max_met.is_set;
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(max_met.operation);
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/remote-lfa/level-1/mpls-ldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_met.is_set || is_set(max_met.operation)) leaf_name_data.push_back(max_met.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-met")
    {
        max_met = value;
    }
}

Native::Router::Isis::FastReroute::RemoteLfa::Level2::Level2()
    :
    mpls_ldp(nullptr) // presence node
{
    yang_name = "level-2"; yang_parent_name = "remote-lfa";
}

Native::Router::Isis::FastReroute::RemoteLfa::Level2::~Level2()
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::has_data() const
{
    return (mpls_ldp !=  nullptr && mpls_ldp->has_data());
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::has_operation() const
{
    return is_set(operation)
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation());
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastReroute::RemoteLfa::Level2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/remote-lfa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::RemoteLfa::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-ldp")
    {
        if(mpls_ldp == nullptr)
        {
            mpls_ldp = std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp>();
        }
        return mpls_ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::RemoteLfa::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_ldp != nullptr)
    {
        children["mpls-ldp"] = mpls_ldp;
    }

    return children;
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level2::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MplsLdp()
    :
    maximum_metric(nullptr) // presence node
{
    yang_name = "mpls-ldp"; yang_parent_name = "level-2";
}

Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::~MplsLdp()
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::has_data() const
{
    return (maximum_metric !=  nullptr && maximum_metric->has_data());
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::has_operation() const
{
    return is_set(operation)
	|| (maximum_metric !=  nullptr && maximum_metric->has_operation());
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/remote-lfa/level-2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric")
    {
        if(maximum_metric == nullptr)
        {
            maximum_metric = std::make_shared<Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric>();
        }
        return maximum_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_metric != nullptr)
    {
        children["maximum-metric"] = maximum_metric;
    }

    return children;
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::MaximumMetric()
    :
    max_met{YType::uint32, "max-met"}
{
    yang_name = "maximum-metric"; yang_parent_name = "mpls-ldp";
}

Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::has_data() const
{
    return max_met.is_set;
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(max_met.operation);
}

std::string Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/remote-lfa/level-2/mpls-ldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_met.is_set || is_set(max_met.operation)) leaf_name_data.push_back(max_met.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-met")
    {
        max_met = value;
    }
}

Native::Router::Isis::FastReroute::TieBreak::TieBreak()
    :
    level_1(std::make_shared<Native::Router::Isis::FastReroute::TieBreak::Level1>())
	,level_2(std::make_shared<Native::Router::Isis::FastReroute::TieBreak::Level2>())
{
    level_1->parent = this;

    level_2->parent = this;

    yang_name = "tie-break"; yang_parent_name = "fast-reroute";
}

Native::Router::Isis::FastReroute::TieBreak::~TieBreak()
{
}

bool Native::Router::Isis::FastReroute::TieBreak::has_data() const
{
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::Isis::FastReroute::TieBreak::has_operation() const
{
    return is_set(operation)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::Isis::FastReroute::TieBreak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tie-break";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastReroute::TieBreak::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::TieBreak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::Isis::FastReroute::TieBreak::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::Isis::FastReroute::TieBreak::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::TieBreak::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    return children;
}

void Native::Router::Isis::FastReroute::TieBreak::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::FastReroute::TieBreak::Level1::Level1()
    :
    downstream{YType::uint8, "downstream"},
    linecard_disjoint{YType::uint8, "linecard-disjoint"},
    lowest_backup_path_metric{YType::uint8, "lowest-backup-path-metric"},
    node_protecting{YType::uint8, "node-protecting"},
    primary_path{YType::uint8, "primary-path"},
    secondary_path{YType::uint8, "secondary-path"},
    srlg_disjoint{YType::uint8, "srlg-disjoint"}
{
    yang_name = "level-1"; yang_parent_name = "tie-break";
}

Native::Router::Isis::FastReroute::TieBreak::Level1::~Level1()
{
}

bool Native::Router::Isis::FastReroute::TieBreak::Level1::has_data() const
{
    return downstream.is_set
	|| linecard_disjoint.is_set
	|| lowest_backup_path_metric.is_set
	|| node_protecting.is_set
	|| primary_path.is_set
	|| secondary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Native::Router::Isis::FastReroute::TieBreak::Level1::has_operation() const
{
    return is_set(operation)
	|| is_set(downstream.operation)
	|| is_set(linecard_disjoint.operation)
	|| is_set(lowest_backup_path_metric.operation)
	|| is_set(node_protecting.operation)
	|| is_set(primary_path.operation)
	|| is_set(secondary_path.operation)
	|| is_set(srlg_disjoint.operation);
}

std::string Native::Router::Isis::FastReroute::TieBreak::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastReroute::TieBreak::Level1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/tie-break/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (downstream.is_set || is_set(downstream.operation)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (linecard_disjoint.is_set || is_set(linecard_disjoint.operation)) leaf_name_data.push_back(linecard_disjoint.get_name_leafdata());
    if (lowest_backup_path_metric.is_set || is_set(lowest_backup_path_metric.operation)) leaf_name_data.push_back(lowest_backup_path_metric.get_name_leafdata());
    if (node_protecting.is_set || is_set(node_protecting.operation)) leaf_name_data.push_back(node_protecting.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.operation)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (secondary_path.is_set || is_set(secondary_path.operation)) leaf_name_data.push_back(secondary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.operation)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::TieBreak::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::TieBreak::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastReroute::TieBreak::Level1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "downstream")
    {
        downstream = value;
    }
    if(value_path == "linecard-disjoint")
    {
        linecard_disjoint = value;
    }
    if(value_path == "lowest-backup-path-metric")
    {
        lowest_backup_path_metric = value;
    }
    if(value_path == "node-protecting")
    {
        node_protecting = value;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
    }
    if(value_path == "secondary-path")
    {
        secondary_path = value;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
    }
}

Native::Router::Isis::FastReroute::TieBreak::Level2::Level2()
    :
    downstream{YType::uint8, "downstream"},
    linecard_disjoint{YType::uint8, "linecard-disjoint"},
    lowest_backup_path_metric{YType::uint8, "lowest-backup-path-metric"},
    node_protecting{YType::uint8, "node-protecting"},
    primary_path{YType::uint8, "primary-path"},
    secondary_path{YType::uint8, "secondary-path"},
    srlg_disjoint{YType::uint8, "srlg-disjoint"}
{
    yang_name = "level-2"; yang_parent_name = "tie-break";
}

Native::Router::Isis::FastReroute::TieBreak::Level2::~Level2()
{
}

bool Native::Router::Isis::FastReroute::TieBreak::Level2::has_data() const
{
    return downstream.is_set
	|| linecard_disjoint.is_set
	|| lowest_backup_path_metric.is_set
	|| node_protecting.is_set
	|| primary_path.is_set
	|| secondary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Native::Router::Isis::FastReroute::TieBreak::Level2::has_operation() const
{
    return is_set(operation)
	|| is_set(downstream.operation)
	|| is_set(linecard_disjoint.operation)
	|| is_set(lowest_backup_path_metric.operation)
	|| is_set(node_protecting.operation)
	|| is_set(primary_path.operation)
	|| is_set(secondary_path.operation)
	|| is_set(srlg_disjoint.operation);
}

std::string Native::Router::Isis::FastReroute::TieBreak::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::FastReroute::TieBreak::Level2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/fast-reroute/tie-break/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (downstream.is_set || is_set(downstream.operation)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (linecard_disjoint.is_set || is_set(linecard_disjoint.operation)) leaf_name_data.push_back(linecard_disjoint.get_name_leafdata());
    if (lowest_backup_path_metric.is_set || is_set(lowest_backup_path_metric.operation)) leaf_name_data.push_back(lowest_backup_path_metric.get_name_leafdata());
    if (node_protecting.is_set || is_set(node_protecting.operation)) leaf_name_data.push_back(node_protecting.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.operation)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (secondary_path.is_set || is_set(secondary_path.operation)) leaf_name_data.push_back(secondary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.operation)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::FastReroute::TieBreak::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::FastReroute::TieBreak::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::FastReroute::TieBreak::Level2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "downstream")
    {
        downstream = value;
    }
    if(value_path == "linecard-disjoint")
    {
        linecard_disjoint = value;
    }
    if(value_path == "lowest-backup-path-metric")
    {
        lowest_backup_path_metric = value;
    }
    if(value_path == "node-protecting")
    {
        node_protecting = value;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
    }
    if(value_path == "secondary-path")
    {
        secondary_path = value;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
    }
}

Native::Router::Isis::TiLfa::TiLfa()
    :
    level_1(std::make_shared<Native::Router::Isis::TiLfa::Level1>())
	,level_2(nullptr) // presence node
{
    level_1->parent = this;

    yang_name = "ti-lfa"; yang_parent_name = "isis";
}

Native::Router::Isis::TiLfa::~TiLfa()
{
}

bool Native::Router::Isis::TiLfa::has_data() const
{
    return (level_1 !=  nullptr && level_1->has_data())
	|| (level_2 !=  nullptr && level_2->has_data());
}

bool Native::Router::Isis::TiLfa::has_operation() const
{
    return is_set(operation)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation());
}

std::string Native::Router::Isis::TiLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ti-lfa";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::TiLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::TiLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::Isis::TiLfa::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::Isis::TiLfa::Level2>();
        }
        return level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::TiLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    return children;
}

void Native::Router::Isis::TiLfa::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::TiLfa::Level1::Level1()
    :
    maximum_metric(std::make_shared<Native::Router::Isis::TiLfa::Level1::MaximumMetric>())
{
    maximum_metric->parent = this;

    yang_name = "level-1"; yang_parent_name = "ti-lfa";
}

Native::Router::Isis::TiLfa::Level1::~Level1()
{
}

bool Native::Router::Isis::TiLfa::Level1::has_data() const
{
    return (maximum_metric !=  nullptr && maximum_metric->has_data());
}

bool Native::Router::Isis::TiLfa::Level1::has_operation() const
{
    return is_set(operation)
	|| (maximum_metric !=  nullptr && maximum_metric->has_operation());
}

std::string Native::Router::Isis::TiLfa::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::TiLfa::Level1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/ti-lfa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::TiLfa::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric")
    {
        if(maximum_metric == nullptr)
        {
            maximum_metric = std::make_shared<Native::Router::Isis::TiLfa::Level1::MaximumMetric>();
        }
        return maximum_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::TiLfa::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_metric != nullptr)
    {
        children["maximum-metric"] = maximum_metric;
    }

    return children;
}

void Native::Router::Isis::TiLfa::Level1::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::TiLfa::Level1::MaximumMetric::MaximumMetric()
    :
    max_met{YType::uint32, "max-met"}
{
    yang_name = "maximum-metric"; yang_parent_name = "level-1";
}

Native::Router::Isis::TiLfa::Level1::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::Isis::TiLfa::Level1::MaximumMetric::has_data() const
{
    return max_met.is_set;
}

bool Native::Router::Isis::TiLfa::Level1::MaximumMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(max_met.operation);
}

std::string Native::Router::Isis::TiLfa::Level1::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::TiLfa::Level1::MaximumMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/ti-lfa/level-1/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_met.is_set || is_set(max_met.operation)) leaf_name_data.push_back(max_met.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::TiLfa::Level1::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::TiLfa::Level1::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::TiLfa::Level1::MaximumMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-met")
    {
        max_met = value;
    }
}

Native::Router::Isis::TiLfa::Level2::Level2()
    :
    maximum_metric(std::make_shared<Native::Router::Isis::TiLfa::Level2::MaximumMetric>())
{
    maximum_metric->parent = this;

    yang_name = "level-2"; yang_parent_name = "ti-lfa";
}

Native::Router::Isis::TiLfa::Level2::~Level2()
{
}

bool Native::Router::Isis::TiLfa::Level2::has_data() const
{
    return (maximum_metric !=  nullptr && maximum_metric->has_data());
}

bool Native::Router::Isis::TiLfa::Level2::has_operation() const
{
    return is_set(operation)
	|| (maximum_metric !=  nullptr && maximum_metric->has_operation());
}

std::string Native::Router::Isis::TiLfa::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::TiLfa::Level2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/ti-lfa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::TiLfa::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric")
    {
        if(maximum_metric == nullptr)
        {
            maximum_metric = std::make_shared<Native::Router::Isis::TiLfa::Level2::MaximumMetric>();
        }
        return maximum_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::TiLfa::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_metric != nullptr)
    {
        children["maximum-metric"] = maximum_metric;
    }

    return children;
}

void Native::Router::Isis::TiLfa::Level2::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::TiLfa::Level2::MaximumMetric::MaximumMetric()
    :
    max_met{YType::uint32, "max-met"}
{
    yang_name = "maximum-metric"; yang_parent_name = "level-2";
}

Native::Router::Isis::TiLfa::Level2::MaximumMetric::~MaximumMetric()
{
}

bool Native::Router::Isis::TiLfa::Level2::MaximumMetric::has_data() const
{
    return max_met.is_set;
}

bool Native::Router::Isis::TiLfa::Level2::MaximumMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(max_met.operation);
}

std::string Native::Router::Isis::TiLfa::Level2::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::TiLfa::Level2::MaximumMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/ti-lfa/level-2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_met.is_set || is_set(max_met.operation)) leaf_name_data.push_back(max_met.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::TiLfa::Level2::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::TiLfa::Level2::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::TiLfa::Level2::MaximumMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-met")
    {
        max_met = value;
    }
}

Native::Router::Isis::Hello::Hello()
    :
    padding(nullptr) // presence node
{
    yang_name = "hello"; yang_parent_name = "isis";
}

Native::Router::Isis::Hello::~Hello()
{
}

bool Native::Router::Isis::Hello::has_data() const
{
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Router::Isis::Hello::has_operation() const
{
    return is_set(operation)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Router::Isis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Hello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Router::Isis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    return children;
}

void Native::Router::Isis::Hello::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::Hello::Padding::Padding()
    :
    pad_type{YType::enumeration, "pad-type"}
{
    yang_name = "padding"; yang_parent_name = "hello";
}

Native::Router::Isis::Hello::Padding::~Padding()
{
}

bool Native::Router::Isis::Hello::Padding::has_data() const
{
    return pad_type.is_set;
}

bool Native::Router::Isis::Hello::Padding::has_operation() const
{
    return is_set(operation)
	|| is_set(pad_type.operation);
}

std::string Native::Router::Isis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Hello::Padding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/hello/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pad_type.is_set || is_set(pad_type.operation)) leaf_name_data.push_back(pad_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Hello::Padding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pad-type")
    {
        pad_type = value;
    }
}

Native::Router::Isis::Hostname::Hostname()
    :
    dynamic{YType::empty, "dynamic"}
{
    yang_name = "hostname"; yang_parent_name = "isis";
}

Native::Router::Isis::Hostname::~Hostname()
{
}

bool Native::Router::Isis::Hostname::has_data() const
{
    return dynamic.is_set;
}

bool Native::Router::Isis::Hostname::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation);
}

std::string Native::Router::Isis::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Hostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Hostname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
}

Native::Router::Isis::Ispf::Ispf()
    :
    level{YType::enumeration, "level"},
    number{YType::uint32, "number"}
{
    yang_name = "ispf"; yang_parent_name = "isis";
}

Native::Router::Isis::Ispf::~Ispf()
{
}

bool Native::Router::Isis::Ispf::has_data() const
{
    return level.is_set
	|| number.is_set;
}

bool Native::Router::Isis::Ispf::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(number.operation);
}

std::string Native::Router::Isis::Ispf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ispf";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Ispf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Ispf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Ispf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Ispf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Router::Isis::LogAdjacencyChanges::LogAdjacencyChanges()
    :
    all{YType::empty, "all"}
{
    yang_name = "log-adjacency-changes"; yang_parent_name = "isis";
}

Native::Router::Isis::LogAdjacencyChanges::~LogAdjacencyChanges()
{
}

bool Native::Router::Isis::LogAdjacencyChanges::has_data() const
{
    return all.is_set;
}

bool Native::Router::Isis::LogAdjacencyChanges::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Router::Isis::LogAdjacencyChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-adjacency-changes";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::LogAdjacencyChanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::LogAdjacencyChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::LogAdjacencyChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::LogAdjacencyChanges::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Router::Isis::LspFull::LspFull()
    :
    suppress(std::make_shared<Native::Router::Isis::LspFull::Suppress>())
{
    suppress->parent = this;

    yang_name = "lsp-full"; yang_parent_name = "isis";
}

Native::Router::Isis::LspFull::~LspFull()
{
}

bool Native::Router::Isis::LspFull::has_data() const
{
    return (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::Isis::LspFull::has_operation() const
{
    return is_set(operation)
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::Isis::LspFull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-full";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::LspFull::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::LspFull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::Isis::LspFull::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::LspFull::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(suppress != nullptr)
    {
        children["suppress"] = suppress;
    }

    return children;
}

void Native::Router::Isis::LspFull::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::LspFull::Suppress::Suppress()
    :
    none{YType::empty, "none"}
    	,
    external_interlevel_container(std::make_shared<Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer>())
{
    external_interlevel_container->parent = this;

    yang_name = "suppress"; yang_parent_name = "lsp-full";
}

Native::Router::Isis::LspFull::Suppress::~Suppress()
{
}

bool Native::Router::Isis::LspFull::Suppress::has_data() const
{
    return none.is_set
	|| (external_interlevel_container !=  nullptr && external_interlevel_container->has_data());
}

bool Native::Router::Isis::LspFull::Suppress::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation)
	|| (external_interlevel_container !=  nullptr && external_interlevel_container->has_operation());
}

std::string Native::Router::Isis::LspFull::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::LspFull::Suppress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/lsp-full/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::LspFull::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-interlevel-container")
    {
        if(external_interlevel_container == nullptr)
        {
            external_interlevel_container = std::make_shared<Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer>();
        }
        return external_interlevel_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::LspFull::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_interlevel_container != nullptr)
    {
        children["external-interlevel-container"] = external_interlevel_container;
    }

    return children;
}

void Native::Router::Isis::LspFull::Suppress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::ExternalInterlevelContainer()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{
    yang_name = "external-interlevel-container"; yang_parent_name = "suppress";
}

Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::~ExternalInterlevelContainer()
{
}

bool Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::has_data() const
{
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(external.operation)
	|| is_set(interlevel.operation);
}

std::string Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-interlevel-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/lsp-full/suppress/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.operation)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.operation)) leaf_name_data.push_back(interlevel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external")
    {
        external = value;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
    }
}

Native::Router::Isis::LspGenInterval::LspGenInterval()
    :
    intervals(std::make_shared<Native::Router::Isis::LspGenInterval::Intervals>())
	,intervals_levels(std::make_shared<Native::Router::Isis::LspGenInterval::IntervalsLevels>())
{
    intervals->parent = this;

    intervals_levels->parent = this;

    yang_name = "lsp-gen-interval"; yang_parent_name = "isis";
}

Native::Router::Isis::LspGenInterval::~LspGenInterval()
{
}

bool Native::Router::Isis::LspGenInterval::has_data() const
{
    return (intervals !=  nullptr && intervals->has_data())
	|| (intervals_levels !=  nullptr && intervals_levels->has_data());
}

bool Native::Router::Isis::LspGenInterval::has_operation() const
{
    return is_set(operation)
	|| (intervals !=  nullptr && intervals->has_operation())
	|| (intervals_levels !=  nullptr && intervals_levels->has_operation());
}

std::string Native::Router::Isis::LspGenInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-gen-interval";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::LspGenInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::LspGenInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intervals")
    {
        if(intervals == nullptr)
        {
            intervals = std::make_shared<Native::Router::Isis::LspGenInterval::Intervals>();
        }
        return intervals;
    }

    if(child_yang_name == "intervals-levels")
    {
        if(intervals_levels == nullptr)
        {
            intervals_levels = std::make_shared<Native::Router::Isis::LspGenInterval::IntervalsLevels>();
        }
        return intervals_levels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::LspGenInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(intervals != nullptr)
    {
        children["intervals"] = intervals;
    }

    if(intervals_levels != nullptr)
    {
        children["intervals-levels"] = intervals_levels;
    }

    return children;
}

void Native::Router::Isis::LspGenInterval::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::LspGenInterval::Intervals::Intervals()
    :
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    wait{YType::uint32, "wait"}
{
    yang_name = "intervals"; yang_parent_name = "lsp-gen-interval";
}

Native::Router::Isis::LspGenInterval::Intervals::~Intervals()
{
}

bool Native::Router::Isis::LspGenInterval::Intervals::has_data() const
{
    return initial_wait.is_set
	|| interval.is_set
	|| wait.is_set;
}

bool Native::Router::Isis::LspGenInterval::Intervals::has_operation() const
{
    return is_set(operation)
	|| is_set(initial_wait.operation)
	|| is_set(interval.operation)
	|| is_set(wait.operation);
}

std::string Native::Router::Isis::LspGenInterval::Intervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::LspGenInterval::Intervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/lsp-gen-interval/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_wait.is_set || is_set(initial_wait.operation)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (wait.is_set || is_set(wait.operation)) leaf_name_data.push_back(wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::LspGenInterval::Intervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::LspGenInterval::Intervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::LspGenInterval::Intervals::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial-wait")
    {
        initial_wait = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "wait")
    {
        wait = value;
    }
}

Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevels()
    :
    intervals_level_1(std::make_shared<Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1>())
	,intervals_level_2(std::make_shared<Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2>())
{
    intervals_level_1->parent = this;

    intervals_level_2->parent = this;

    yang_name = "intervals-levels"; yang_parent_name = "lsp-gen-interval";
}

Native::Router::Isis::LspGenInterval::IntervalsLevels::~IntervalsLevels()
{
}

bool Native::Router::Isis::LspGenInterval::IntervalsLevels::has_data() const
{
    return (intervals_level_1 !=  nullptr && intervals_level_1->has_data())
	|| (intervals_level_2 !=  nullptr && intervals_level_2->has_data());
}

bool Native::Router::Isis::LspGenInterval::IntervalsLevels::has_operation() const
{
    return is_set(operation)
	|| (intervals_level_1 !=  nullptr && intervals_level_1->has_operation())
	|| (intervals_level_2 !=  nullptr && intervals_level_2->has_operation());
}

std::string Native::Router::Isis::LspGenInterval::IntervalsLevels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals-levels";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::LspGenInterval::IntervalsLevels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/lsp-gen-interval/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::LspGenInterval::IntervalsLevels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intervals-level-1")
    {
        if(intervals_level_1 == nullptr)
        {
            intervals_level_1 = std::make_shared<Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1>();
        }
        return intervals_level_1;
    }

    if(child_yang_name == "intervals-level-2")
    {
        if(intervals_level_2 == nullptr)
        {
            intervals_level_2 = std::make_shared<Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2>();
        }
        return intervals_level_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::LspGenInterval::IntervalsLevels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(intervals_level_1 != nullptr)
    {
        children["intervals-level-1"] = intervals_level_1;
    }

    if(intervals_level_2 != nullptr)
    {
        children["intervals-level-2"] = intervals_level_2;
    }

    return children;
}

void Native::Router::Isis::LspGenInterval::IntervalsLevels::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::IntervalsLevel1()
    :
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    level_1{YType::empty, "level-1"},
    wait{YType::uint32, "wait"}
{
    yang_name = "intervals-level-1"; yang_parent_name = "intervals-levels";
}

Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::~IntervalsLevel1()
{
}

bool Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::has_data() const
{
    return initial_wait.is_set
	|| interval.is_set
	|| level_1.is_set
	|| wait.is_set;
}

bool Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::has_operation() const
{
    return is_set(operation)
	|| is_set(initial_wait.operation)
	|| is_set(interval.operation)
	|| is_set(level_1.operation)
	|| is_set(wait.operation);
}

std::string Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals-level-1";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/lsp-gen-interval/intervals-levels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_wait.is_set || is_set(initial_wait.operation)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (level_1.is_set || is_set(level_1.operation)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (wait.is_set || is_set(wait.operation)) leaf_name_data.push_back(wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial-wait")
    {
        initial_wait = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "level-1")
    {
        level_1 = value;
    }
    if(value_path == "wait")
    {
        wait = value;
    }
}

Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::IntervalsLevel2()
    :
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    level_2{YType::empty, "level-2"},
    wait{YType::uint32, "wait"}
{
    yang_name = "intervals-level-2"; yang_parent_name = "intervals-levels";
}

Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::~IntervalsLevel2()
{
}

bool Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::has_data() const
{
    return initial_wait.is_set
	|| interval.is_set
	|| level_2.is_set
	|| wait.is_set;
}

bool Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::has_operation() const
{
    return is_set(operation)
	|| is_set(initial_wait.operation)
	|| is_set(interval.operation)
	|| is_set(level_2.operation)
	|| is_set(wait.operation);
}

std::string Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals-level-2";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/lsp-gen-interval/intervals-levels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_wait.is_set || is_set(initial_wait.operation)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.operation)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (wait.is_set || is_set(wait.operation)) leaf_name_data.push_back(wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial-wait")
    {
        initial_wait = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
    }
    if(value_path == "wait")
    {
        wait = value;
    }
}

Native::Router::Isis::Microloop::Microloop()
    :
    avoidance(nullptr) // presence node
{
    yang_name = "microloop"; yang_parent_name = "isis";
}

Native::Router::Isis::Microloop::~Microloop()
{
}

bool Native::Router::Isis::Microloop::has_data() const
{
    return (avoidance !=  nullptr && avoidance->has_data());
}

bool Native::Router::Isis::Microloop::has_operation() const
{
    return is_set(operation)
	|| (avoidance !=  nullptr && avoidance->has_operation());
}

std::string Native::Router::Isis::Microloop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Microloop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Microloop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "avoidance")
    {
        if(avoidance == nullptr)
        {
            avoidance = std::make_shared<Native::Router::Isis::Microloop::Avoidance>();
        }
        return avoidance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Microloop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(avoidance != nullptr)
    {
        children["avoidance"] = avoidance;
    }

    return children;
}

void Native::Router::Isis::Microloop::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::Microloop::Avoidance::Avoidance()
    :
    disable{YType::empty, "disable"},
    protected_{YType::empty, "protected"},
    rib_update_delay{YType::uint32, "rib-update-delay"}
{
    yang_name = "avoidance"; yang_parent_name = "microloop";
}

Native::Router::Isis::Microloop::Avoidance::~Avoidance()
{
}

bool Native::Router::Isis::Microloop::Avoidance::has_data() const
{
    return disable.is_set
	|| protected_.is_set
	|| rib_update_delay.is_set;
}

bool Native::Router::Isis::Microloop::Avoidance::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(protected_.operation)
	|| is_set(rib_update_delay.operation);
}

std::string Native::Router::Isis::Microloop::Avoidance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avoidance";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Microloop::Avoidance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/microloop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.operation)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.operation)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Microloop::Avoidance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Microloop::Avoidance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Microloop::Avoidance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "protected")
    {
        protected_ = value;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay = value;
    }
}

Native::Router::Isis::Mpls::Mpls()
    :
    ldp(std::make_shared<Native::Router::Isis::Mpls::Ldp>())
	,traffic_eng(std::make_shared<Native::Router::Isis::Mpls::TrafficEng>())
{
    ldp->parent = this;

    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "isis";
}

Native::Router::Isis::Mpls::~Mpls()
{
}

bool Native::Router::Isis::Mpls::has_data() const
{
    return (ldp !=  nullptr && ldp->has_data())
	|| (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Router::Isis::Mpls::has_operation() const
{
    return is_set(operation)
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Router::Isis::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::Router::Isis::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Router::Isis::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::Router::Isis::Mpls::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::Mpls::Ldp::Ldp()
    :
    sync{YType::empty, "sync"},
    sync_igp_shortcuts{YType::empty, "sync-igp-shortcuts"}
    	,
    autoconfig(nullptr) // presence node
{
    yang_name = "ldp"; yang_parent_name = "mpls";
}

Native::Router::Isis::Mpls::Ldp::~Ldp()
{
}

bool Native::Router::Isis::Mpls::Ldp::has_data() const
{
    return sync.is_set
	|| sync_igp_shortcuts.is_set
	|| (autoconfig !=  nullptr && autoconfig->has_data());
}

bool Native::Router::Isis::Mpls::Ldp::has_operation() const
{
    return is_set(operation)
	|| is_set(sync.operation)
	|| is_set(sync_igp_shortcuts.operation)
	|| (autoconfig !=  nullptr && autoconfig->has_operation());
}

std::string Native::Router::Isis::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Mpls::Ldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync.is_set || is_set(sync.operation)) leaf_name_data.push_back(sync.get_name_leafdata());
    if (sync_igp_shortcuts.is_set || is_set(sync_igp_shortcuts.operation)) leaf_name_data.push_back(sync_igp_shortcuts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Router::Isis::Mpls::Ldp::Autoconfig>();
        }
        return autoconfig;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoconfig != nullptr)
    {
        children["autoconfig"] = autoconfig;
    }

    return children;
}

void Native::Router::Isis::Mpls::Ldp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sync")
    {
        sync = value;
    }
    if(value_path == "sync-igp-shortcuts")
    {
        sync_igp_shortcuts = value;
    }
}

Native::Router::Isis::Mpls::Ldp::Autoconfig::Autoconfig()
    :
    level_1{YType::empty, "level-1"},
    level_2{YType::empty, "level-2"}
{
    yang_name = "autoconfig"; yang_parent_name = "ldp";
}

Native::Router::Isis::Mpls::Ldp::Autoconfig::~Autoconfig()
{
}

bool Native::Router::Isis::Mpls::Ldp::Autoconfig::has_data() const
{
    return level_1.is_set
	|| level_2.is_set;
}

bool Native::Router::Isis::Mpls::Ldp::Autoconfig::has_operation() const
{
    return is_set(operation)
	|| is_set(level_1.operation)
	|| is_set(level_2.operation);
}

std::string Native::Router::Isis::Mpls::Ldp::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconfig";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Mpls::Ldp::Autoconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/mpls/ldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_1.is_set || is_set(level_1.operation)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.operation)) leaf_name_data.push_back(level_2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Mpls::Ldp::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Mpls::Ldp::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Mpls::Ldp::Autoconfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level-1")
    {
        level_1 = value;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
    }
}

Native::Router::Isis::Mpls::TrafficEng::TrafficEng()
    :
    level_1{YType::empty, "level-1"},
    level_2{YType::empty, "level-2"},
    multicast_intact{YType::empty, "multicast-intact"}
    	,
    router_id(std::make_shared<Native::Router::Isis::Mpls::TrafficEng::RouterId>())
	,scanner(nullptr) // presence node
{
    router_id->parent = this;

    yang_name = "traffic-eng"; yang_parent_name = "mpls";
}

Native::Router::Isis::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Router::Isis::Mpls::TrafficEng::has_data() const
{
    return level_1.is_set
	|| level_2.is_set
	|| multicast_intact.is_set
	|| (router_id !=  nullptr && router_id->has_data())
	|| (scanner !=  nullptr && scanner->has_data());
}

bool Native::Router::Isis::Mpls::TrafficEng::has_operation() const
{
    return is_set(operation)
	|| is_set(level_1.operation)
	|| is_set(level_2.operation)
	|| is_set(multicast_intact.operation)
	|| (router_id !=  nullptr && router_id->has_operation())
	|| (scanner !=  nullptr && scanner->has_operation());
}

std::string Native::Router::Isis::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Mpls::TrafficEng::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_1.is_set || is_set(level_1.operation)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.operation)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (multicast_intact.is_set || is_set(multicast_intact.operation)) leaf_name_data.push_back(multicast_intact.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Native::Router::Isis::Mpls::TrafficEng::RouterId>();
        }
        return router_id;
    }

    if(child_yang_name == "scanner")
    {
        if(scanner == nullptr)
        {
            scanner = std::make_shared<Native::Router::Isis::Mpls::TrafficEng::Scanner>();
        }
        return scanner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(router_id != nullptr)
    {
        children["router-id"] = router_id;
    }

    if(scanner != nullptr)
    {
        children["scanner"] = scanner;
    }

    return children;
}

void Native::Router::Isis::Mpls::TrafficEng::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level-1")
    {
        level_1 = value;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
    }
    if(value_path == "multicast-intact")
    {
        multicast_intact = value;
    }
}

Native::Router::Isis::Mpls::TrafficEng::RouterId::RouterId()
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
    lisp{YType::uint16, "LISP"},
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
    atm_acrsubinterface(std::make_shared<Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "router-id"; yang_parent_name = "traffic-eng";
}

Native::Router::Isis::Mpls::TrafficEng::RouterId::~RouterId()
{
}

bool Native::Router::Isis::Mpls::TrafficEng::RouterId::has_data() const
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

bool Native::Router::Isis::Mpls::TrafficEng::RouterId::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::Isis::Mpls::TrafficEng::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Mpls::TrafficEng::RouterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/mpls/traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Mpls::TrafficEng::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Mpls::TrafficEng::RouterId::get_children() const
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

void Native::Router::Isis::Mpls::TrafficEng::RouterId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "router-id";
}

Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/mpls/traffic-eng/router-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "router-id";
}

Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/mpls/traffic-eng/router-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "router-id";
}

Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::~LispSubinterface()
{
}

bool Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/mpls/traffic-eng/router-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "router-id";
}

Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/mpls/traffic-eng/router-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Router::Isis::Mpls::TrafficEng::Scanner::Scanner()
    :
    interval{YType::uint32, "interval"},
    max_flash{YType::uint32, "max-flash"}
{
    yang_name = "scanner"; yang_parent_name = "traffic-eng";
}

Native::Router::Isis::Mpls::TrafficEng::Scanner::~Scanner()
{
}

bool Native::Router::Isis::Mpls::TrafficEng::Scanner::has_data() const
{
    return interval.is_set
	|| max_flash.is_set;
}

bool Native::Router::Isis::Mpls::TrafficEng::Scanner::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(max_flash.operation);
}

std::string Native::Router::Isis::Mpls::TrafficEng::Scanner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scanner";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Mpls::TrafficEng::Scanner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/mpls/traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (max_flash.is_set || is_set(max_flash.operation)) leaf_name_data.push_back(max_flash.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Mpls::TrafficEng::Scanner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Mpls::TrafficEng::Scanner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Mpls::TrafficEng::Scanner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "max-flash")
    {
        max_flash = value;
    }
}

Native::Router::Isis::Net::Net()
    :
    tag{YType::str, "tag"}
{
    yang_name = "net"; yang_parent_name = "isis";
}

Native::Router::Isis::Net::~Net()
{
}

bool Native::Router::Isis::Net::has_data() const
{
    return tag.is_set;
}

bool Native::Router::Isis::Net::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Isis::Net::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net" <<"[tag='" <<tag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Net::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Net::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Net::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Net::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Isis::Nsf::Nsf()
    :
    cisco{YType::empty, "cisco"},
    ietf{YType::empty, "ietf"},
    interval{YType::uint16, "interval"}
    	,
    interface(std::make_shared<Native::Router::Isis::Nsf::Interface>())
{
    interface->parent = this;

    yang_name = "nsf"; yang_parent_name = "isis";
}

Native::Router::Isis::Nsf::~Nsf()
{
}

bool Native::Router::Isis::Nsf::has_data() const
{
    return cisco.is_set
	|| ietf.is_set
	|| interval.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::Isis::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(cisco.operation)
	|| is_set(ietf.operation)
	|| is_set(interval.operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::Isis::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.operation)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (ietf.is_set || is_set(ietf.operation)) leaf_name_data.push_back(ietf.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::Isis::Nsf::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Router::Isis::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cisco")
    {
        cisco = value;
    }
    if(value_path == "ietf")
    {
        ietf = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::Isis::Nsf::Interface::Interface()
    :
    wait{YType::uint8, "wait"}
{
    yang_name = "interface"; yang_parent_name = "nsf";
}

Native::Router::Isis::Nsf::Interface::~Interface()
{
}

bool Native::Router::Isis::Nsf::Interface::has_data() const
{
    return wait.is_set;
}

bool Native::Router::Isis::Nsf::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(wait.operation);
}

std::string Native::Router::Isis::Nsf::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Nsf::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/nsf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait.is_set || is_set(wait.operation)) leaf_name_data.push_back(wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Nsf::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Nsf::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Nsf::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "wait")
    {
        wait = value;
    }
}

Native::Router::Isis::Partition::Partition()
    :
    avoidance{YType::empty, "avoidance"}
{
    yang_name = "partition"; yang_parent_name = "isis";
}

Native::Router::Isis::Partition::~Partition()
{
}

bool Native::Router::Isis::Partition::has_data() const
{
    return avoidance.is_set;
}

bool Native::Router::Isis::Partition::has_operation() const
{
    return is_set(operation)
	|| is_set(avoidance.operation);
}

std::string Native::Router::Isis::Partition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partition";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Partition::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avoidance.is_set || is_set(avoidance.operation)) leaf_name_data.push_back(avoidance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Partition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Partition::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Partition::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "avoidance")
    {
        avoidance = value;
    }
}

Native::Router::Isis::PassiveInterface::PassiveInterface()
    :
    default_{YType::empty, "default"},
    interface{YType::str, "interface"}
{
    yang_name = "passive-interface"; yang_parent_name = "isis";
}

Native::Router::Isis::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Isis::PassiveInterface::has_data() const
{
    return default_.is_set
	|| interface.is_set;
}

bool Native::Router::Isis::PassiveInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(interface.operation);
}

std::string Native::Router::Isis::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::PassiveInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::PassiveInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Router::Isis::Disable::Disable()
{
    yang_name = "disable"; yang_parent_name = "isis";
}

Native::Router::Isis::Disable::~Disable()
{
}

bool Native::Router::Isis::Disable::has_data() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::Disable::has_operation() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Isis::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Disable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "passive-interface")
    {
        for(auto const & c : passive_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Disable::PassiveInterface>();
        c->parent = this;
        passive_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : passive_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::Disable::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Isis::Disable::PassiveInterface::PassiveInterface()
    :
    interface{YType::str, "interface"}
{
    yang_name = "passive-interface"; yang_parent_name = "disable";
}

Native::Router::Isis::Disable::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Isis::Disable::PassiveInterface::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Isis::Disable::PassiveInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Native::Router::Isis::Disable::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Disable::PassiveInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/disable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Disable::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Disable::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Disable::PassiveInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Router::Isis::Protocol::Protocol()
    :
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "protocol"; yang_parent_name = "isis";
}

Native::Router::Isis::Protocol::~Protocol()
{
}

bool Native::Router::Isis::Protocol::has_data() const
{
    return shutdown.is_set;
}

bool Native::Router::Isis::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(shutdown.operation);
}

std::string Native::Router::Isis::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Router::Isis::SegmentRouting::SegmentRouting()
    :
    mpls{YType::empty, "mpls"}
    	,
    prefix_sid_map(std::make_shared<Native::Router::Isis::SegmentRouting::PrefixSidMap>())
{
    prefix_sid_map->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "isis";
}

Native::Router::Isis::SegmentRouting::~SegmentRouting()
{
}

bool Native::Router::Isis::SegmentRouting::has_data() const
{
    return mpls.is_set
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_data());
}

bool Native::Router::Isis::SegmentRouting::has_operation() const
{
    return is_set(operation)
	|| is_set(mpls.operation)
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_operation());
}

std::string Native::Router::Isis::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SegmentRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.operation)) leaf_name_data.push_back(mpls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-map")
    {
        if(prefix_sid_map == nullptr)
        {
            prefix_sid_map = std::make_shared<Native::Router::Isis::SegmentRouting::PrefixSidMap>();
        }
        return prefix_sid_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_sid_map != nullptr)
    {
        children["prefix-sid-map"] = prefix_sid_map;
    }

    return children;
}

void Native::Router::Isis::SegmentRouting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls")
    {
        mpls = value;
    }
}

Native::Router::Isis::SegmentRouting::PrefixSidMap::PrefixSidMap()
    :
    advertise_local{YType::empty, "advertise-local"}
    	,
    receive(nullptr) // presence node
{
    yang_name = "prefix-sid-map"; yang_parent_name = "segment-routing";
}

Native::Router::Isis::SegmentRouting::PrefixSidMap::~PrefixSidMap()
{
}

bool Native::Router::Isis::SegmentRouting::PrefixSidMap::has_data() const
{
    return advertise_local.is_set
	|| (receive !=  nullptr && receive->has_data());
}

bool Native::Router::Isis::SegmentRouting::PrefixSidMap::has_operation() const
{
    return is_set(operation)
	|| is_set(advertise_local.operation)
	|| (receive !=  nullptr && receive->has_operation());
}

std::string Native::Router::Isis::SegmentRouting::PrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SegmentRouting::PrefixSidMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/segment-routing/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_local.is_set || is_set(advertise_local.operation)) leaf_name_data.push_back(advertise_local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SegmentRouting::PrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive>();
        }
        return receive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SegmentRouting::PrefixSidMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    return children;
}

void Native::Router::Isis::SegmentRouting::PrefixSidMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-local")
    {
        advertise_local = value;
    }
}

Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive::Receive()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "receive"; yang_parent_name = "prefix-sid-map";
}

Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive::~Receive()
{
}

bool Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/segment-routing/prefix-sid-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Router::Isis::Skeptical::Skeptical()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "skeptical"; yang_parent_name = "isis";
}

Native::Router::Isis::Skeptical::~Skeptical()
{
}

bool Native::Router::Isis::Skeptical::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Isis::Skeptical::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::Isis::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Skeptical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Skeptical::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::Isis::Use::Use()
    :
    external_metrics{YType::empty, "external-metrics"}
{
    yang_name = "use"; yang_parent_name = "isis";
}

Native::Router::Isis::Use::~Use()
{
}

bool Native::Router::Isis::Use::has_data() const
{
    return external_metrics.is_set;
}

bool Native::Router::Isis::Use::has_operation() const
{
    return is_set(operation)
	|| is_set(external_metrics.operation);
}

std::string Native::Router::Isis::Use::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Use::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_metrics.is_set || is_set(external_metrics.operation)) leaf_name_data.push_back(external_metrics.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Use::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Use::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Use::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-metrics")
    {
        external_metrics = value;
    }
}

Native::Router::Isis::Bfd::Bfd()
    :
    all_interfaces{YType::empty, "all-interfaces"},
    check_ctrl_plane_failure{YType::empty, "check-ctrl-plane-failure"}
{
    yang_name = "bfd"; yang_parent_name = "isis";
}

Native::Router::Isis::Bfd::~Bfd()
{
}

bool Native::Router::Isis::Bfd::has_data() const
{
    return all_interfaces.is_set
	|| check_ctrl_plane_failure.is_set;
}

bool Native::Router::Isis::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(all_interfaces.operation)
	|| is_set(check_ctrl_plane_failure.operation);
}

std::string Native::Router::Isis::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.operation)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());
    if (check_ctrl_plane_failure.is_set || is_set(check_ctrl_plane_failure.operation)) leaf_name_data.push_back(check_ctrl_plane_failure.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
    }
    if(value_path == "check-ctrl-plane-failure")
    {
        check_ctrl_plane_failure = value;
    }
}

Native::Router::IsisContainer::IsisContainer()
{
    yang_name = "isis-container"; yang_parent_name = "router";
}

Native::Router::IsisContainer::~IsisContainer()
{
}

bool Native::Router::IsisContainer::has_data() const
{
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::has_operation() const
{
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::IsisContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:isis-container";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        for(auto const & c : isis)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis>();
        c->parent = this;
        isis.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Isis()
    :
    area_tag{YType::str, "area-tag"},
    adjacency_check{YType::empty, "adjacency-check"},
    help{YType::empty, "help"},
    ignore_lsp_errors{YType::empty, "ignore-lsp-errors"},
    is_type{YType::enumeration, "is-type"},
    lsp_mtu{YType::uint32, "lsp-mtu"},
    lsp_refresh_interval{YType::uint32, "lsp-refresh-interval"},
    max_area_addresses{YType::uint32, "max-area-addresses"},
    max_lsp_lifetime{YType::uint32, "max-lsp-lifetime"},
    maximum_paths{YType::uint32, "maximum-paths"},
    priority{YType::uint8, "priority"},
    router_id{YType::str, "router-id"},
    update_queue_depth{YType::uint32, "update-queue-depth"},
    vrf{YType::str, "vrf"}
    	,
    address_family(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily>())
	,advertise(std::make_shared<Native::Router::IsisContainer::Isis::Advertise>())
	,area_password(std::make_shared<Native::Router::IsisContainer::Isis::AreaPassword>())
	,authentication(std::make_shared<Native::Router::IsisContainer::Isis::Authentication>())
	,bfd(std::make_shared<Native::Router::IsisContainer::Isis::Bfd>())
	,default_information(std::make_shared<Native::Router::IsisContainer::Isis::DefaultInformation>())
	,disable(std::make_shared<Native::Router::IsisContainer::Isis::Disable>())
	,distribute_list(std::make_shared<Native::Router::IsisContainer::Isis::DistributeList>())
	,domain_password(std::make_shared<Native::Router::IsisContainer::Isis::DomainPassword>())
	,fast_flood(nullptr) // presence node
	,fast_reroute(std::make_shared<Native::Router::IsisContainer::Isis::FastReroute>())
	,hello(std::make_shared<Native::Router::IsisContainer::Isis::Hello>())
	,hostname(std::make_shared<Native::Router::IsisContainer::Isis::Hostname>())
	,ip(std::make_shared<Native::Router::IsisContainer::Isis::Ip>())
	,ispf(std::make_shared<Native::Router::IsisContainer::Isis::Ispf>())
	,log_adjacency_changes(nullptr) // presence node
	,lsp_full(std::make_shared<Native::Router::IsisContainer::Isis::LspFull>())
	,lsp_gen_interval(std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval>())
	,metric(std::make_shared<Native::Router::IsisContainer::Isis::Metric>())
	,metric_style(std::make_shared<Native::Router::IsisContainer::Isis::MetricStyle>())
	,microloop(std::make_shared<Native::Router::IsisContainer::Isis::Microloop>())
	,mpls(std::make_shared<Native::Router::IsisContainer::Isis::Mpls>())
	,nsf(std::make_shared<Native::Router::IsisContainer::Isis::Nsf>())
	,partition(std::make_shared<Native::Router::IsisContainer::Isis::Partition>())
	,passive_interface(std::make_shared<Native::Router::IsisContainer::Isis::PassiveInterface>())
	,prc_interval(std::make_shared<Native::Router::IsisContainer::Isis::PrcInterval>())
	,protocol(std::make_shared<Native::Router::IsisContainer::Isis::Protocol>())
	,redistribute(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute>())
	,segment_routing(std::make_shared<Native::Router::IsisContainer::Isis::SegmentRouting>())
	,set_attached_bit(std::make_shared<Native::Router::IsisContainer::Isis::SetAttachedBit>())
	,set_overload_bit(nullptr) // presence node
	,skeptical(std::make_shared<Native::Router::IsisContainer::Isis::Skeptical>())
	,snmp(std::make_shared<Native::Router::IsisContainer::Isis::Snmp>())
	,spf_interval(std::make_shared<Native::Router::IsisContainer::Isis::SpfInterval>())
	,ti_lfa(std::make_shared<Native::Router::IsisContainer::Isis::TiLfa>())
	,traffic_share(std::make_shared<Native::Router::IsisContainer::Isis::TrafficShare>())
	,use(std::make_shared<Native::Router::IsisContainer::Isis::Use>())
{
    address_family->parent = this;

    advertise->parent = this;

    area_password->parent = this;

    authentication->parent = this;

    bfd->parent = this;

    default_information->parent = this;

    disable->parent = this;

    distribute_list->parent = this;

    domain_password->parent = this;

    fast_reroute->parent = this;

    hello->parent = this;

    hostname->parent = this;

    ip->parent = this;

    ispf->parent = this;

    lsp_full->parent = this;

    lsp_gen_interval->parent = this;

    metric->parent = this;

    metric_style->parent = this;

    microloop->parent = this;

    mpls->parent = this;

    nsf->parent = this;

    partition->parent = this;

    passive_interface->parent = this;

    prc_interval->parent = this;

    protocol->parent = this;

    redistribute->parent = this;

    segment_routing->parent = this;

    set_attached_bit->parent = this;

    skeptical->parent = this;

    snmp->parent = this;

    spf_interval->parent = this;

    ti_lfa->parent = this;

    traffic_share->parent = this;

    use->parent = this;

    yang_name = "isis"; yang_parent_name = "isis-container";
}

Native::Router::IsisContainer::Isis::~Isis()
{
}

bool Native::Router::IsisContainer::Isis::has_data() const
{
    for (std::size_t index=0; index<distance.size(); index++)
    {
        if(distance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<net.size(); index++)
    {
        if(net[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<summary_address.size(); index++)
    {
        if(summary_address[index]->has_data())
            return true;
    }
    return area_tag.is_set
	|| adjacency_check.is_set
	|| help.is_set
	|| ignore_lsp_errors.is_set
	|| is_type.is_set
	|| lsp_mtu.is_set
	|| lsp_refresh_interval.is_set
	|| max_area_addresses.is_set
	|| max_lsp_lifetime.is_set
	|| maximum_paths.is_set
	|| priority.is_set
	|| router_id.is_set
	|| update_queue_depth.is_set
	|| vrf.is_set
	|| (address_family !=  nullptr && address_family->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (area_password !=  nullptr && area_password->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (disable !=  nullptr && disable->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (domain_password !=  nullptr && domain_password->has_data())
	|| (fast_flood !=  nullptr && fast_flood->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ispf !=  nullptr && ispf->has_data())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_data())
	|| (lsp_full !=  nullptr && lsp_full->has_data())
	|| (lsp_gen_interval !=  nullptr && lsp_gen_interval->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (metric_style !=  nullptr && metric_style->has_data())
	|| (microloop !=  nullptr && microloop->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (partition !=  nullptr && partition->has_data())
	|| (passive_interface !=  nullptr && passive_interface->has_data())
	|| (prc_interval !=  nullptr && prc_interval->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (set_attached_bit !=  nullptr && set_attached_bit->has_data())
	|| (set_overload_bit !=  nullptr && set_overload_bit->has_data())
	|| (skeptical !=  nullptr && skeptical->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (spf_interval !=  nullptr && spf_interval->has_data())
	|| (ti_lfa !=  nullptr && ti_lfa->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data())
	|| (use !=  nullptr && use->has_data());
}

bool Native::Router::IsisContainer::Isis::has_operation() const
{
    for (std::size_t index=0; index<distance.size(); index++)
    {
        if(distance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<net.size(); index++)
    {
        if(net[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<summary_address.size(); index++)
    {
        if(summary_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area_tag.operation)
	|| is_set(adjacency_check.operation)
	|| is_set(help.operation)
	|| is_set(ignore_lsp_errors.operation)
	|| is_set(is_type.operation)
	|| is_set(lsp_mtu.operation)
	|| is_set(lsp_refresh_interval.operation)
	|| is_set(max_area_addresses.operation)
	|| is_set(max_lsp_lifetime.operation)
	|| is_set(maximum_paths.operation)
	|| is_set(priority.operation)
	|| is_set(router_id.operation)
	|| is_set(update_queue_depth.operation)
	|| is_set(vrf.operation)
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (area_password !=  nullptr && area_password->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (disable !=  nullptr && disable->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (domain_password !=  nullptr && domain_password->has_operation())
	|| (fast_flood !=  nullptr && fast_flood->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ispf !=  nullptr && ispf->has_operation())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_operation())
	|| (lsp_full !=  nullptr && lsp_full->has_operation())
	|| (lsp_gen_interval !=  nullptr && lsp_gen_interval->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (metric_style !=  nullptr && metric_style->has_operation())
	|| (microloop !=  nullptr && microloop->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (partition !=  nullptr && partition->has_operation())
	|| (passive_interface !=  nullptr && passive_interface->has_operation())
	|| (prc_interval !=  nullptr && prc_interval->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (set_attached_bit !=  nullptr && set_attached_bit->has_operation())
	|| (set_overload_bit !=  nullptr && set_overload_bit->has_operation())
	|| (skeptical !=  nullptr && skeptical->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (spf_interval !=  nullptr && spf_interval->has_operation())
	|| (ti_lfa !=  nullptr && ti_lfa->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation())
	|| (use !=  nullptr && use->has_operation());
}

std::string Native::Router::IsisContainer::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis" <<"[area-tag='" <<area_tag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis-container/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.operation)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (adjacency_check.is_set || is_set(adjacency_check.operation)) leaf_name_data.push_back(adjacency_check.get_name_leafdata());
    if (help.is_set || is_set(help.operation)) leaf_name_data.push_back(help.get_name_leafdata());
    if (ignore_lsp_errors.is_set || is_set(ignore_lsp_errors.operation)) leaf_name_data.push_back(ignore_lsp_errors.get_name_leafdata());
    if (is_type.is_set || is_set(is_type.operation)) leaf_name_data.push_back(is_type.get_name_leafdata());
    if (lsp_mtu.is_set || is_set(lsp_mtu.operation)) leaf_name_data.push_back(lsp_mtu.get_name_leafdata());
    if (lsp_refresh_interval.is_set || is_set(lsp_refresh_interval.operation)) leaf_name_data.push_back(lsp_refresh_interval.get_name_leafdata());
    if (max_area_addresses.is_set || is_set(max_area_addresses.operation)) leaf_name_data.push_back(max_area_addresses.get_name_leafdata());
    if (max_lsp_lifetime.is_set || is_set(max_lsp_lifetime.operation)) leaf_name_data.push_back(max_lsp_lifetime.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (update_queue_depth.is_set || is_set(update_queue_depth.operation)) leaf_name_data.push_back(update_queue_depth.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Router::IsisContainer::Isis::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "area-password")
    {
        if(area_password == nullptr)
        {
            area_password = std::make_shared<Native::Router::IsisContainer::Isis::AreaPassword>();
        }
        return area_password;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::IsisContainer::Isis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::IsisContainer::Isis::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::IsisContainer::Isis::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Native::Router::IsisContainer::Isis::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "distance")
    {
        for(auto const & c : distance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Distance>();
        c->parent = this;
        distance.push_back(c);
        return c;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::IsisContainer::Isis::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "domain-password")
    {
        if(domain_password == nullptr)
        {
            domain_password = std::make_shared<Native::Router::IsisContainer::Isis::DomainPassword>();
        }
        return domain_password;
    }

    if(child_yang_name == "fast-flood")
    {
        if(fast_flood == nullptr)
        {
            fast_flood = std::make_shared<Native::Router::IsisContainer::Isis::FastFlood>();
        }
        return fast_flood;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Router::IsisContainer::Isis::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Router::IsisContainer::Isis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Router::IsisContainer::Isis::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ispf")
    {
        if(ispf == nullptr)
        {
            ispf = std::make_shared<Native::Router::IsisContainer::Isis::Ispf>();
        }
        return ispf;
    }

    if(child_yang_name == "log-adjacency-changes")
    {
        if(log_adjacency_changes == nullptr)
        {
            log_adjacency_changes = std::make_shared<Native::Router::IsisContainer::Isis::LogAdjacencyChanges>();
        }
        return log_adjacency_changes;
    }

    if(child_yang_name == "lsp-full")
    {
        if(lsp_full == nullptr)
        {
            lsp_full = std::make_shared<Native::Router::IsisContainer::Isis::LspFull>();
        }
        return lsp_full;
    }

    if(child_yang_name == "lsp-gen-interval")
    {
        if(lsp_gen_interval == nullptr)
        {
            lsp_gen_interval = std::make_shared<Native::Router::IsisContainer::Isis::LspGenInterval>();
        }
        return lsp_gen_interval;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::IsisContainer::Isis::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "metric-style")
    {
        if(metric_style == nullptr)
        {
            metric_style = std::make_shared<Native::Router::IsisContainer::Isis::MetricStyle>();
        }
        return metric_style;
    }

    if(child_yang_name == "microloop")
    {
        if(microloop == nullptr)
        {
            microloop = std::make_shared<Native::Router::IsisContainer::Isis::Microloop>();
        }
        return microloop;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Router::IsisContainer::Isis::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "net")
    {
        for(auto const & c : net)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Net>();
        c->parent = this;
        net.push_back(c);
        return c;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Native::Router::IsisContainer::Isis::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "partition")
    {
        if(partition == nullptr)
        {
            partition = std::make_shared<Native::Router::IsisContainer::Isis::Partition>();
        }
        return partition;
    }

    if(child_yang_name == "passive-interface")
    {
        if(passive_interface == nullptr)
        {
            passive_interface = std::make_shared<Native::Router::IsisContainer::Isis::PassiveInterface>();
        }
        return passive_interface;
    }

    if(child_yang_name == "prc-interval")
    {
        if(prc_interval == nullptr)
        {
            prc_interval = std::make_shared<Native::Router::IsisContainer::Isis::PrcInterval>();
        }
        return prc_interval;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Router::IsisContainer::Isis::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Router::IsisContainer::Isis::SegmentRouting>();
        }
        return segment_routing;
    }

    if(child_yang_name == "set-attached-bit")
    {
        if(set_attached_bit == nullptr)
        {
            set_attached_bit = std::make_shared<Native::Router::IsisContainer::Isis::SetAttachedBit>();
        }
        return set_attached_bit;
    }

    if(child_yang_name == "set-overload-bit")
    {
        if(set_overload_bit == nullptr)
        {
            set_overload_bit = std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit>();
        }
        return set_overload_bit;
    }

    if(child_yang_name == "skeptical")
    {
        if(skeptical == nullptr)
        {
            skeptical = std::make_shared<Native::Router::IsisContainer::Isis::Skeptical>();
        }
        return skeptical;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::IsisContainer::Isis::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "spf-interval")
    {
        if(spf_interval == nullptr)
        {
            spf_interval = std::make_shared<Native::Router::IsisContainer::Isis::SpfInterval>();
        }
        return spf_interval;
    }

    if(child_yang_name == "summary-address")
    {
        for(auto const & c : summary_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::SummaryAddress>();
        c->parent = this;
        summary_address.push_back(c);
        return c;
    }

    if(child_yang_name == "ti-lfa")
    {
        if(ti_lfa == nullptr)
        {
            ti_lfa = std::make_shared<Native::Router::IsisContainer::Isis::TiLfa>();
        }
        return ti_lfa;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::IsisContainer::Isis::TrafficShare>();
        }
        return traffic_share;
    }

    if(child_yang_name == "use")
    {
        if(use == nullptr)
        {
            use = std::make_shared<Native::Router::IsisContainer::Isis::Use>();
        }
        return use;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(area_password != nullptr)
    {
        children["area-password"] = area_password;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(disable != nullptr)
    {
        children["disable"] = disable;
    }

    for (auto const & c : distance)
    {
        children[c->get_segment_path()] = c;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(domain_password != nullptr)
    {
        children["domain-password"] = domain_password;
    }

    if(fast_flood != nullptr)
    {
        children["fast-flood"] = fast_flood;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ispf != nullptr)
    {
        children["ispf"] = ispf;
    }

    if(log_adjacency_changes != nullptr)
    {
        children["log-adjacency-changes"] = log_adjacency_changes;
    }

    if(lsp_full != nullptr)
    {
        children["lsp-full"] = lsp_full;
    }

    if(lsp_gen_interval != nullptr)
    {
        children["lsp-gen-interval"] = lsp_gen_interval;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(metric_style != nullptr)
    {
        children["metric-style"] = metric_style;
    }

    if(microloop != nullptr)
    {
        children["microloop"] = microloop;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    for (auto const & c : net)
    {
        children[c->get_segment_path()] = c;
    }

    if(nsf != nullptr)
    {
        children["nsf"] = nsf;
    }

    if(partition != nullptr)
    {
        children["partition"] = partition;
    }

    if(passive_interface != nullptr)
    {
        children["passive-interface"] = passive_interface;
    }

    if(prc_interval != nullptr)
    {
        children["prc-interval"] = prc_interval;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    if(set_attached_bit != nullptr)
    {
        children["set-attached-bit"] = set_attached_bit;
    }

    if(set_overload_bit != nullptr)
    {
        children["set-overload-bit"] = set_overload_bit;
    }

    if(skeptical != nullptr)
    {
        children["skeptical"] = skeptical;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(spf_interval != nullptr)
    {
        children["spf-interval"] = spf_interval;
    }

    for (auto const & c : summary_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(ti_lfa != nullptr)
    {
        children["ti-lfa"] = ti_lfa;
    }

    if(traffic_share != nullptr)
    {
        children["traffic-share"] = traffic_share;
    }

    if(use != nullptr)
    {
        children["use"] = use;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
    }
    if(value_path == "adjacency-check")
    {
        adjacency_check = value;
    }
    if(value_path == "help")
    {
        help = value;
    }
    if(value_path == "ignore-lsp-errors")
    {
        ignore_lsp_errors = value;
    }
    if(value_path == "is-type")
    {
        is_type = value;
    }
    if(value_path == "lsp-mtu")
    {
        lsp_mtu = value;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval = value;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses = value;
    }
    if(value_path == "max-lsp-lifetime")
    {
        max_lsp_lifetime = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "update-queue-depth")
    {
        update_queue_depth = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Router::IsisContainer::Isis::MetricStyle::MetricStyle()
    :
    narrow(nullptr) // presence node
	,transition(nullptr) // presence node
	,wide(nullptr) // presence node
{
    yang_name = "metric-style"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::MetricStyle::~MetricStyle()
{
}

bool Native::Router::IsisContainer::Isis::MetricStyle::has_data() const
{
    return (narrow !=  nullptr && narrow->has_data())
	|| (transition !=  nullptr && transition->has_data())
	|| (wide !=  nullptr && wide->has_data());
}

bool Native::Router::IsisContainer::Isis::MetricStyle::has_operation() const
{
    return is_set(operation)
	|| (narrow !=  nullptr && narrow->has_operation())
	|| (transition !=  nullptr && transition->has_operation())
	|| (wide !=  nullptr && wide->has_operation());
}

std::string Native::Router::IsisContainer::Isis::MetricStyle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-style";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::MetricStyle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MetricStyle' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::MetricStyle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "narrow")
    {
        if(narrow == nullptr)
        {
            narrow = std::make_shared<Native::Router::IsisContainer::Isis::MetricStyle::Narrow>();
        }
        return narrow;
    }

    if(child_yang_name == "transition")
    {
        if(transition == nullptr)
        {
            transition = std::make_shared<Native::Router::IsisContainer::Isis::MetricStyle::Transition>();
        }
        return transition;
    }

    if(child_yang_name == "wide")
    {
        if(wide == nullptr)
        {
            wide = std::make_shared<Native::Router::IsisContainer::Isis::MetricStyle::Wide>();
        }
        return wide;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::MetricStyle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(narrow != nullptr)
    {
        children["narrow"] = narrow;
    }

    if(transition != nullptr)
    {
        children["transition"] = transition;
    }

    if(wide != nullptr)
    {
        children["wide"] = wide;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::MetricStyle::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::MetricStyle::Narrow::Narrow()
    :
    narrow_wide{YType::enumeration, "narrow-wide"},
    transition{YType::enumeration, "transition"}
{
    yang_name = "narrow"; yang_parent_name = "metric-style";
}

Native::Router::IsisContainer::Isis::MetricStyle::Narrow::~Narrow()
{
}

bool Native::Router::IsisContainer::Isis::MetricStyle::Narrow::has_data() const
{
    return narrow_wide.is_set
	|| transition.is_set;
}

bool Native::Router::IsisContainer::Isis::MetricStyle::Narrow::has_operation() const
{
    return is_set(operation)
	|| is_set(narrow_wide.operation)
	|| is_set(transition.operation);
}

std::string Native::Router::IsisContainer::Isis::MetricStyle::Narrow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "narrow";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::MetricStyle::Narrow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Narrow' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (narrow_wide.is_set || is_set(narrow_wide.operation)) leaf_name_data.push_back(narrow_wide.get_name_leafdata());
    if (transition.is_set || is_set(transition.operation)) leaf_name_data.push_back(transition.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::MetricStyle::Narrow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::MetricStyle::Narrow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::MetricStyle::Narrow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "narrow-wide")
    {
        narrow_wide = value;
    }
    if(value_path == "transition")
    {
        transition = value;
    }
}

Native::Router::IsisContainer::Isis::MetricStyle::Transition::Transition()
    :
    transition{YType::enumeration, "transition"}
{
    yang_name = "transition"; yang_parent_name = "metric-style";
}

Native::Router::IsisContainer::Isis::MetricStyle::Transition::~Transition()
{
}

bool Native::Router::IsisContainer::Isis::MetricStyle::Transition::has_data() const
{
    return transition.is_set;
}

bool Native::Router::IsisContainer::Isis::MetricStyle::Transition::has_operation() const
{
    return is_set(operation)
	|| is_set(transition.operation);
}

std::string Native::Router::IsisContainer::Isis::MetricStyle::Transition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transition";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::MetricStyle::Transition::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transition' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transition.is_set || is_set(transition.operation)) leaf_name_data.push_back(transition.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::MetricStyle::Transition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::MetricStyle::Transition::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::MetricStyle::Transition::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transition")
    {
        transition = value;
    }
}

Native::Router::IsisContainer::Isis::MetricStyle::Wide::Wide()
    :
    narrow_wide{YType::enumeration, "narrow-wide"},
    transition{YType::enumeration, "transition"}
{
    yang_name = "wide"; yang_parent_name = "metric-style";
}

Native::Router::IsisContainer::Isis::MetricStyle::Wide::~Wide()
{
}

bool Native::Router::IsisContainer::Isis::MetricStyle::Wide::has_data() const
{
    return narrow_wide.is_set
	|| transition.is_set;
}

bool Native::Router::IsisContainer::Isis::MetricStyle::Wide::has_operation() const
{
    return is_set(operation)
	|| is_set(narrow_wide.operation)
	|| is_set(transition.operation);
}

std::string Native::Router::IsisContainer::Isis::MetricStyle::Wide::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wide";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::MetricStyle::Wide::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wide' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (narrow_wide.is_set || is_set(narrow_wide.operation)) leaf_name_data.push_back(narrow_wide.get_name_leafdata());
    if (transition.is_set || is_set(transition.operation)) leaf_name_data.push_back(transition.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::MetricStyle::Wide::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::MetricStyle::Wide::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::MetricStyle::Wide::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "narrow-wide")
    {
        narrow_wide = value;
    }
    if(value_path == "transition")
    {
        transition = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::AddressFamily()
    :
    ipv4(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4>())
	,ipv6(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6>())
{
    ipv4->parent = this;

    ipv6->parent = this;

    yang_name = "address-family"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::AddressFamily::~AddressFamily()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamily' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::get_children() const
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

void Native::Router::IsisContainer::Isis::AddressFamily::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Ipv4()
    :
    help{YType::empty, "help"},
    unicast_multicast{YType::enumeration, "unicast-multicast"}
    	,
    snmp(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp>())
{
    snmp->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address-family";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return help.is_set
	|| unicast_multicast.is_set
	|| (snmp !=  nullptr && snmp->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(help.operation)
	|| is_set(unicast_multicast.operation)
	|| (snmp !=  nullptr && snmp->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (help.is_set || is_set(help.operation)) leaf_name_data.push_back(help.get_name_leafdata());
    if (unicast_multicast.is_set || is_set(unicast_multicast.operation)) leaf_name_data.push_back(unicast_multicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "help")
    {
        help = value;
    }
    if(value_path == "unicast-multicast")
    {
        unicast_multicast = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Snmp()
{
    yang_name = "snmp"; yang_parent_name = "ipv4";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::~Snmp()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Snmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Context()
    :
    name{YType::str, "name"}
    	,
    community(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community>())
	,user(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User>())
{
    community->parent = this;

    user->parent = this;

    yang_name = "context"; yang_parent_name = "snmp";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::~Context()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::has_data() const
{
    return name.is_set
	|| (community !=  nullptr && community->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (community !=  nullptr && community->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Context' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community>();
        }
        return community;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(community != nullptr)
    {
        children["community"] = community;
    }

    if(user != nullptr)
    {
        children["user"] = user;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Connected::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Connected::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Connected::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Connected::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Lisp::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Lisp::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Lisp::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Lisp::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Mobile::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Mobile::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Mobile::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Mobile::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Rip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Rip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Rip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Rip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::Metric::Metrics::LevelEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::Metric::Metrics::LevelEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::Isis::SpfInterval::Level12::LevelEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::SpfInterval::Level12::LevelEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::Isis::AreaPassword::SnpEnum::send_only {0, "send-only"};
const Enum::YLeaf Native::Router::Isis::AreaPassword::SnpEnum::validate {1, "validate"};

const Enum::YLeaf Native::Router::Isis::DomainPassword::SnpEnum::send_only {0, "send-only"};
const Enum::YLeaf Native::Router::Isis::DomainPassword::SnpEnum::validate {1, "validate"};

const Enum::YLeaf Native::Router::Isis::Hello::Padding::PadTypeEnum::multi_point {0, "multi-point"};
const Enum::YLeaf Native::Router::Isis::Hello::Padding::PadTypeEnum::point_to_point {1, "point-to-point"};

const Enum::YLeaf Native::Router::Isis::Ispf::LevelEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::Ispf::LevelEnum::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Router::Isis::Ispf::LevelEnum::level_2 {2, "level-2"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::IsTypeEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::IsTypeEnum::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::IsTypeEnum::level_2_only {2, "level-2-only"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::UnicastMulticastEnum::unicast {0, "unicast"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::UnicastMulticastEnum::multicast {1, "multicast"};


}
}

