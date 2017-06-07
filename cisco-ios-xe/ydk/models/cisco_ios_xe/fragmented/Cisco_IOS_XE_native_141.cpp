
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_141.hpp"
#include "Cisco_IOS_XE_native_142.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Router::Ospf::Redistribute::Mobile::Mobile()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Mobile::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "mobile"; yang_parent_name = "redistribute";
}

Native::Router::Ospf::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Ospf::Redistribute::Mobile::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Mobile::has_operation() const
{
    return is_set(operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Mobile::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Mobile::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Mobile::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Mobile::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "mobile";
}

Native::Router::Ospf::Redistribute::Mobile::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Mobile::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Mobile::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Mobile::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Mobile::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Mobile::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Mobile::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Mobile::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Odr::Odr()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Odr::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "odr"; yang_parent_name = "redistribute";
}

Native::Router::Ospf::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Ospf::Redistribute::Odr::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Odr::has_operation() const
{
    return is_set(operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Odr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Odr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Odr::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Odr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Odr::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "odr";
}

Native::Router::Ospf::Redistribute::Odr::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Odr::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Odr::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Odr::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Odr::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Odr::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Odr::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Odr::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Ospf_::Ospf_()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::Ospf::Redistribute::Ospf_::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute";
}

Native::Router::Ospf::Redistribute::Ospf_::~Ospf_()
{
}

bool Native::Router::Ospf::Redistribute::Ospf_::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospf::Redistribute::Ospf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation)
	|| is_set(vrf.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Ospf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Ospf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospf::Redistribute::Ospf_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Ospf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Router::Ospf::Redistribute::Ospf_::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{
    yang_name = "match"; yang_parent_name = "ospf";
}

Native::Router::Ospf::Redistribute::Ospf_::Match::~Match()
{
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::has_operation() const
{
    return is_set(operation)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Ospf_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Ospf_::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospf_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospf::Redistribute::Ospf_::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospf::Redistribute::Ospf_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospf_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Ospf_::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "internal"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Internal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Ospf_::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "external"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Ospf_::Match::External::~External()
{
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::External::has_operation() const
{
    return is_set(operation)
	|| is_set(external_routes.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Ospf_::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Ospf_::Match::External::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'External' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.operation)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospf_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospf_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Ospf_::Match::External::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "nssa-external"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_external_routes.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssaExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.operation)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Ospfv3::Ospfv3()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
    	,
    match(std::make_shared<Native::Router::Ospf::Redistribute::Ospfv3::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "redistribute";
}

Native::Router::Ospf::Redistribute::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Ospf::Redistribute::Ospfv3::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospf::Redistribute::Ospfv3::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Ospfv3::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospf::Redistribute::Ospfv3::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Ospfv3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{
    yang_name = "match"; yang_parent_name = "ospfv3";
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::~Match()
{
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::has_operation() const
{
    return is_set(operation)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Ospfv3::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Ospfv3::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospfv3::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospf::Redistribute::Ospfv3::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospfv3::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Ospfv3::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "internal"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::~Internal()
{
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Internal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "external"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::External::~External()
{
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::External::has_operation() const
{
    return is_set(operation)
	|| is_set(external_routes.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Ospfv3::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Ospfv3::Match::External::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'External' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.operation)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospfv3::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospfv3::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Ospfv3::Match::External::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "nssa-external"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_external_routes.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssaExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.operation)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Rip::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "rip"; yang_parent_name = "redistribute";
}

Native::Router::Ospf::Redistribute::Rip::~Rip()
{
}

bool Native::Router::Ospf::Redistribute::Rip::has_data() const
{
    return id.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Rip::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Rip::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::Ospf::Redistribute::Rip::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "rip";
}

Native::Router::Ospf::Redistribute::Rip::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Rip::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Rip::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Rip::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Rip::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Rip::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Static_::Static_()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Static_::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "redistribute";
}

Native::Router::Ospf::Redistribute::Static_::~Static_()
{
}

bool Native::Router::Ospf::Redistribute::Static_::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Static_::has_operation() const
{
    return is_set(operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Static_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Static_::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Static_::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "static";
}

Native::Router::Ospf::Redistribute::Static_::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Static_::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Static_::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Static_::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Static_::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Static_::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Static_::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Static_::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"}
    	,
    threshold_warning_only_container(std::make_shared<Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer>())
{
    threshold_warning_only_container->parent = this;

    yang_name = "maximum-prefix"; yang_parent_name = "redistribute";
}

Native::Router::Ospf::Redistribute::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Ospf::Redistribute::MaximumPrefix::has_data() const
{
    return number.is_set
	|| (threshold_warning_only_container !=  nullptr && threshold_warning_only_container->has_data());
}

bool Native::Router::Ospf::Redistribute::MaximumPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (threshold_warning_only_container !=  nullptr && threshold_warning_only_container->has_operation());
}

std::string Native::Router::Ospf::Redistribute::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::MaximumPrefix::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-warning-only-container")
    {
        if(threshold_warning_only_container == nullptr)
        {
            threshold_warning_only_container = std::make_shared<Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer>();
        }
        return threshold_warning_only_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold_warning_only_container != nullptr)
    {
        children["threshold-warning-only-container"] = threshold_warning_only_container;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::MaximumPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::ThresholdWarningOnlyContainer()
    :
    threshold{YType::uint32, "threshold"},
    warning_only{YType::empty, "warning-only"}
{
    yang_name = "threshold-warning-only-container"; yang_parent_name = "maximum-prefix";
}

Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::~ThresholdWarningOnlyContainer()
{
}

bool Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::has_data() const
{
    return threshold.is_set
	|| warning_only.is_set;
}

bool Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| is_set(warning_only.operation);
}

std::string Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-warning-only-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThresholdWarningOnlyContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Vrf()
    :
    global(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global>())
{
    global->parent = this;

    yang_name = "vrf"; yang_parent_name = "redistribute";
}

Native::Router::Ospf::Redistribute::Vrf::~Vrf()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::has_data() const
{
    for (std::size_t index=0; index<non_global_vrf.size(); index++)
    {
        if(non_global_vrf[index]->has_data())
            return true;
    }
    return (global !=  nullptr && global->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::has_operation() const
{
    for (std::size_t index=0; index<non_global_vrf.size(); index++)
    {
        if(non_global_vrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global>();
        }
        return global;
    }

    if(child_yang_name == "non-global-vrf")
    {
        for(auto const & c : non_global_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf>();
        c->parent = this;
        non_global_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    for (auto const & c : non_global_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::NonGlobalVrf()
    :
    name{YType::str, "name"}
    	,
    connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,lisp(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp>())
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,static_(nullptr) // presence node
{
    lisp->parent = this;

    yang_name = "non-global-vrf"; yang_parent_name = "vrf";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::~NonGlobalVrf()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
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
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return name.is_set
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
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
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-global-vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonGlobalVrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        for(auto const & c : application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application>();
        c->parent = this;
        application.push_back(c);
        return c;
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
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected>();
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
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr>();
        }
        return odr;
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
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        for(auto const & c : ospfv3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3>();
        c->parent = this;
        ospfv3.push_back(c);
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
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application)
    {
        children[c->get_segment_path()] = c;
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

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3)
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

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::Application()
    :
    name{YType::str, "name"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "application"; yang_parent_name = "non-global-vrf";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::~Application()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::has_data() const
{
    return name.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "application";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "bgp"; yang_parent_name = "non-global-vrf";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::~Bgp()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-number='" <<as_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::get_entity_path(Entity* ancestor) const
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

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "bgp";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::Connected()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "connected"; yang_parent_name = "non-global-vrf";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::~Connected()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::has_operation() const
{
    return is_set(operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "connected";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::Eigrp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "eigrp"; yang_parent_name = "non-global-vrf";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::~Eigrp()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::get_entity_path(Entity* ancestor) const
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

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "eigrp";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::Isis()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis"; yang_parent_name = "non-global-vrf";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::~Isis()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(isis_level_routes.operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::get_entity_path(Entity* ancestor) const
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

    if (isis_level_routes.is_set || is_set(isis_level_routes.operation)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        for(auto const & c : isis_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_area)
    {
        children[c->get_segment_path()] = c;
    }

    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(isis_level_routes.operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisArea' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (isis_level_routes.is_set || is_set(isis_level_routes.operation)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "isis-area";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "isis";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrp()
    :
    route_map{YType::str, "route-map"}
    	,
    area_tag_route_map_container(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer>())
	,iso_igrp_container(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer>())
{
    area_tag_route_map_container->parent = this;

    iso_igrp_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "non-global-vrf";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::has_data() const
{
    return route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::get_entity_path(Entity* ancestor) const
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

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    if(child_yang_name == "iso-igrp-container")
    {
        if(iso_igrp_container == nullptr)
        {
            iso_igrp_container = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer>();
        }
        return iso_igrp_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_tag_route_map_container != nullptr)
    {
        children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    if(iso_igrp_container != nullptr)
    {
        children["iso-igrp-container"] = iso_igrp_container;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{
    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(area_tag.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaTagRouteMapContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.operation)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::IsoIgrpContainer()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "iso-igrp-container"; yang_parent_name = "iso-igrp";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::~IsoIgrpContainer()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoIgrpContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::Lisp()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "lisp"; yang_parent_name = "non-global-vrf";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::~Lisp()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::has_operation() const
{
    return is_set(operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "lisp";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::Mobile()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "mobile"; yang_parent_name = "non-global-vrf";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::~Mobile()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::has_operation() const
{
    return is_set(operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "mobile";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::Odr()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "odr"; yang_parent_name = "non-global-vrf";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::~Odr()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::has_operation() const
{
    return is_set(operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Odr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "odr";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Ospf_()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "non-global-vrf";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::~Ospf_()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation)
	|| is_set(vrf.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{
    yang_name = "match"; yang_parent_name = "ospf";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::~Match()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::has_operation() const
{
    return is_set(operation)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "internal"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Internal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "external"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::~External()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::has_operation() const
{
    return is_set(operation)
	|| is_set(external_routes.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'External' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.operation)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "nssa-external"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_external_routes.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssaExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.operation)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Ospfv3()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
    	,
    match(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "non-global-vrf";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{
    yang_name = "match"; yang_parent_name = "ospfv3";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::~Match()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::has_operation() const
{
    return is_set(operation)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "internal"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::~Internal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Internal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "external"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::~External()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::has_operation() const
{
    return is_set(operation)
	|| is_set(external_routes.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'External' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.operation)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "nssa-external"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_external_routes.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssaExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.operation)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "rip"; yang_parent_name = "non-global-vrf";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::~Rip()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::has_data() const
{
    return id.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "rip";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::Static_()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "non-global-vrf";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::~Static_()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::has_operation() const
{
    return is_set(operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "static";
}

Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Global()
    :
    connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,lisp(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Lisp>())
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,static_(nullptr) // presence node
{
    lisp->parent = this;

    yang_name = "global"; yang_parent_name = "vrf";
}

Native::Router::Ospf::Redistribute::Vrf::Global::~Global()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
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
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
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
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        for(auto const & c : application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Application>();
        c->parent = this;
        application.push_back(c);
        return c;
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
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Connected>();
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
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Odr>();
        }
        return odr;
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
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        for(auto const & c : ospfv3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3>();
        c->parent = this;
        ospfv3.push_back(c);
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
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application)
    {
        children[c->get_segment_path()] = c;
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

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3)
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

void Native::Router::Ospf::Redistribute::Vrf::Global::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Vrf::Global::Application::Application()
    :
    name{YType::str, "name"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "application"; yang_parent_name = "global";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Application::~Application()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Application::has_data() const
{
    return name.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Application::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Application::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Application::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "application";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "bgp"; yang_parent_name = "global";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::~Bgp()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-number='" <<as_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::get_entity_path(Entity* ancestor) const
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

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "bgp";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Connected::Connected()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "connected"; yang_parent_name = "global";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Connected::~Connected()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Connected::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Connected::has_operation() const
{
    return is_set(operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Connected::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Connected::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "connected";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::Eigrp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "eigrp"; yang_parent_name = "global";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::~Eigrp()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::get_entity_path(Entity* ancestor) const
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

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "eigrp";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::Isis()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis"; yang_parent_name = "global";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::~Isis()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(isis_level_routes.operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Isis::get_entity_path(Entity* ancestor) const
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

    if (isis_level_routes.is_set || is_set(isis_level_routes.operation)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        for(auto const & c : isis_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_area)
    {
        children[c->get_segment_path()] = c;
    }

    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(isis_level_routes.operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisArea' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (isis_level_routes.is_set || is_set(isis_level_routes.operation)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "isis-area";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "isis";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrp()
    :
    route_map{YType::str, "route-map"}
    	,
    area_tag_route_map_container(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer>())
	,iso_igrp_container(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer>())
{
    area_tag_route_map_container->parent = this;

    iso_igrp_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "global";
}

Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::has_data() const
{
    return route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::get_entity_path(Entity* ancestor) const
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

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    if(child_yang_name == "iso-igrp-container")
    {
        if(iso_igrp_container == nullptr)
        {
            iso_igrp_container = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer>();
        }
        return iso_igrp_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_tag_route_map_container != nullptr)
    {
        children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    if(iso_igrp_container != nullptr)
    {
        children["iso-igrp-container"] = iso_igrp_container;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{
    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp";
}

Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(area_tag.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaTagRouteMapContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.operation)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::IsoIgrpContainer()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "iso-igrp-container"; yang_parent_name = "iso-igrp";
}

Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::~IsoIgrpContainer()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoIgrpContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::Lisp()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "lisp"; yang_parent_name = "global";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::~Lisp()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::has_operation() const
{
    return is_set(operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "lisp";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::Mobile()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "mobile"; yang_parent_name = "global";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::~Mobile()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::has_operation() const
{
    return is_set(operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "mobile";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Odr::Odr()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "odr"; yang_parent_name = "global";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Odr::~Odr()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Odr::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Odr::has_operation() const
{
    return is_set(operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Odr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Odr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Odr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "odr";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Ospf_()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "global";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::~Ospf_()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation)
	|| is_set(vrf.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{
    yang_name = "match"; yang_parent_name = "ospf";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::~Match()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::has_operation() const
{
    return is_set(operation)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "internal"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Internal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "external"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::~External()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::has_operation() const
{
    return is_set(operation)
	|| is_set(external_routes.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'External' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.operation)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "nssa-external"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_external_routes.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssaExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.operation)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Ospfv3()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
    	,
    match(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "global";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{
    yang_name = "match"; yang_parent_name = "ospfv3";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::~Match()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::has_operation() const
{
    return is_set(operation)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "internal"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::~Internal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Internal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "external"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::~External()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::has_operation() const
{
    return is_set(operation)
	|| is_set(external_routes.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'External' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.operation)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "nssa-external"; yang_parent_name = "match";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_external_routes.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssaExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.operation)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "rip"; yang_parent_name = "global";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Rip::~Rip()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Rip::has_data() const
{
    return id.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Rip::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "rip";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::Redistribute::Vrf::Global::Static_::Static_()
    :
    redist_options(std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "global";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Static_::~Static_()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static_::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static_::has_operation() const
{
    return is_set(operation)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Static_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{
    yang_name = "redist-options"; yang_parent_name = "static";
}

Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_only.operation)
	|| is_set(route_map.operation)
	|| is_set(subnets.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.operation)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "subnets")
    {
        subnets = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::Ospf::DistributeList::DistributeList()
{
    yang_name = "distribute-list"; yang_parent_name = "ospf";
}

Native::Router::Ospf::DistributeList::~DistributeList()
{
}

bool Native::Router::Ospf::DistributeList::has_data() const
{
    for (std::size_t index=0; index<accesslist.size(); index++)
    {
        if(accesslist[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<accesslist_ifname.size(); index++)
    {
        if(accesslist_ifname[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<accesslist_prefix_gateway.size(); index++)
    {
        if(accesslist_prefix_gateway[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<accesslist_prefix_gateway_ifname.size(); index++)
    {
        if(accesslist_prefix_gateway_ifname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Ospf::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<accesslist.size(); index++)
    {
        if(accesslist[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<accesslist_ifname.size(); index++)
    {
        if(accesslist_ifname[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<accesslist_prefix_gateway.size(); index++)
    {
        if(accesslist_prefix_gateway[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<accesslist_prefix_gateway_ifname.size(); index++)
    {
        if(accesslist_prefix_gateway_ifname[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Ospf::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accesslist")
    {
        for(auto const & c : accesslist)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::DistributeList::Accesslist>();
        c->parent = this;
        accesslist.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-ifname")
    {
        for(auto const & c : accesslist_ifname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::DistributeList::AccesslistIfname>();
        c->parent = this;
        accesslist_ifname.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-prefix-gateway")
    {
        for(auto const & c : accesslist_prefix_gateway)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::DistributeList::AccesslistPrefixGateway>();
        c->parent = this;
        accesslist_prefix_gateway.push_back(c);
        return c;
    }

    if(child_yang_name == "accesslist-prefix-gateway-ifname")
    {
        for(auto const & c : accesslist_prefix_gateway_ifname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname>();
        c->parent = this;
        accesslist_prefix_gateway_ifname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : accesslist)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : accesslist_ifname)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : accesslist_prefix_gateway)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : accesslist_prefix_gateway_ifname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospf::DistributeList::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::DistributeList::Accesslist::Accesslist()
    :
    in_out{YType::enumeration, "in-out"}
{
    yang_name = "accesslist"; yang_parent_name = "distribute-list";
}

Native::Router::Ospf::DistributeList::Accesslist::~Accesslist()
{
}

bool Native::Router::Ospf::DistributeList::Accesslist::has_data() const
{
    return in_out.is_set;
}

bool Native::Router::Ospf::DistributeList::Accesslist::has_operation() const
{
    return is_set(operation)
	|| is_set(in_out.operation);
}

std::string Native::Router::Ospf::DistributeList::Accesslist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist" <<"[in-out='" <<in_out <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::DistributeList::Accesslist::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Accesslist' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.operation)) leaf_name_data.push_back(in_out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::DistributeList::Accesslist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::DistributeList::Accesslist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::DistributeList::Accesslist::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-out")
    {
        in_out = value;
    }
}

Native::Router::Ospf::DistributeList::AccesslistIfname::AccesslistIfname()
    :
    in_out{YType::enumeration, "in-out"},
    interface{YType::str, "interface"},
    interface_routing_id{YType::uint8, "interface-routing-id"},
    isis_tag{YType::str, "isis-tag"},
    vrf{YType::str, "vrf"}
{
    yang_name = "accesslist-ifname"; yang_parent_name = "distribute-list";
}

Native::Router::Ospf::DistributeList::AccesslistIfname::~AccesslistIfname()
{
}

bool Native::Router::Ospf::DistributeList::AccesslistIfname::has_data() const
{
    return in_out.is_set
	|| interface.is_set
	|| interface_routing_id.is_set
	|| isis_tag.is_set
	|| vrf.is_set;
}

bool Native::Router::Ospf::DistributeList::AccesslistIfname::has_operation() const
{
    return is_set(operation)
	|| is_set(in_out.operation)
	|| is_set(interface.operation)
	|| is_set(interface_routing_id.operation)
	|| is_set(isis_tag.operation)
	|| is_set(vrf.operation);
}

std::string Native::Router::Ospf::DistributeList::AccesslistIfname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-ifname" <<"[in-out='" <<in_out <<"']" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::DistributeList::AccesslistIfname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccesslistIfname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.operation)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_routing_id.is_set || is_set(interface_routing_id.operation)) leaf_name_data.push_back(interface_routing_id.get_name_leafdata());
    if (isis_tag.is_set || is_set(isis_tag.operation)) leaf_name_data.push_back(isis_tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::DistributeList::AccesslistIfname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::DistributeList::AccesslistIfname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::DistributeList::AccesslistIfname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-out")
    {
        in_out = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-routing-id")
    {
        interface_routing_id = value;
    }
    if(value_path == "isis-tag")
    {
        isis_tag = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::AccesslistPrefixGateway()
    :
    in_out{YType::enumeration, "in-out"},
    name{YType::str, "name"},
    prefix_gateway{YType::enumeration, "prefix-gateway"}
{
    yang_name = "accesslist-prefix-gateway"; yang_parent_name = "distribute-list";
}

Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::~AccesslistPrefixGateway()
{
}

bool Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::has_data() const
{
    return in_out.is_set
	|| name.is_set
	|| prefix_gateway.is_set;
}

bool Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::has_operation() const
{
    return is_set(operation)
	|| is_set(in_out.operation)
	|| is_set(name.operation)
	|| is_set(prefix_gateway.operation);
}

std::string Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-prefix-gateway" <<"[in-out='" <<in_out <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccesslistPrefixGateway' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.operation)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (prefix_gateway.is_set || is_set(prefix_gateway.operation)) leaf_name_data.push_back(prefix_gateway.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-out")
    {
        in_out = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "prefix-gateway")
    {
        prefix_gateway = value;
    }
}

Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::AccesslistPrefixGatewayIfname()
    :
    in_out{YType::enumeration, "in-out"},
    interface{YType::str, "interface"},
    interface_routing_id{YType::uint8, "interface-routing-id"},
    isis_tag{YType::str, "isis-tag"},
    name{YType::str, "name"},
    prefix_gateway{YType::enumeration, "prefix-gateway"},
    vrf{YType::str, "vrf"}
{
    yang_name = "accesslist-prefix-gateway-ifname"; yang_parent_name = "distribute-list";
}

Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::~AccesslistPrefixGatewayIfname()
{
}

bool Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::has_data() const
{
    return in_out.is_set
	|| interface.is_set
	|| interface_routing_id.is_set
	|| isis_tag.is_set
	|| name.is_set
	|| prefix_gateway.is_set
	|| vrf.is_set;
}

bool Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::has_operation() const
{
    return is_set(operation)
	|| is_set(in_out.operation)
	|| is_set(interface.operation)
	|| is_set(interface_routing_id.operation)
	|| is_set(isis_tag.operation)
	|| is_set(name.operation)
	|| is_set(prefix_gateway.operation)
	|| is_set(vrf.operation);
}

std::string Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslist-prefix-gateway-ifname" <<"[in-out='" <<in_out <<"']" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccesslistPrefixGatewayIfname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.operation)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_routing_id.is_set || is_set(interface_routing_id.operation)) leaf_name_data.push_back(interface_routing_id.get_name_leafdata());
    if (isis_tag.is_set || is_set(isis_tag.operation)) leaf_name_data.push_back(isis_tag.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (prefix_gateway.is_set || is_set(prefix_gateway.operation)) leaf_name_data.push_back(prefix_gateway.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-out")
    {
        in_out = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-routing-id")
    {
        interface_routing_id = value;
    }
    if(value_path == "isis-tag")
    {
        isis_tag = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "prefix-gateway")
    {
        prefix_gateway = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Router::Ospf::DomainId::DomainId()
    :
    ip_format{YType::str, "ip-format"},
    null{YType::empty, "Null"}
    	,
    ip_format_secondary(std::make_shared<Native::Router::Ospf::DomainId::IpFormatSecondary>())
	,type(std::make_shared<Native::Router::Ospf::DomainId::Type>())
{
    ip_format_secondary->parent = this;

    type->parent = this;

    yang_name = "domain-id"; yang_parent_name = "ospf";
}

Native::Router::Ospf::DomainId::~DomainId()
{
}

bool Native::Router::Ospf::DomainId::has_data() const
{
    return ip_format.is_set
	|| null.is_set
	|| (ip_format_secondary !=  nullptr && ip_format_secondary->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Native::Router::Ospf::DomainId::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_format.operation)
	|| is_set(null.operation)
	|| (ip_format_secondary !=  nullptr && ip_format_secondary->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Router::Ospf::DomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-id";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::DomainId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_format.is_set || is_set(ip_format.operation)) leaf_name_data.push_back(ip_format.get_name_leafdata());
    if (null.is_set || is_set(null.operation)) leaf_name_data.push_back(null.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::DomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-format-secondary")
    {
        if(ip_format_secondary == nullptr)
        {
            ip_format_secondary = std::make_shared<Native::Router::Ospf::DomainId::IpFormatSecondary>();
        }
        return ip_format_secondary;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Router::Ospf::DomainId::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::DomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_format_secondary != nullptr)
    {
        children["ip-format-secondary"] = ip_format_secondary;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Router::Ospf::DomainId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-format")
    {
        ip_format = value;
    }
    if(value_path == "Null")
    {
        null = value;
    }
}

Native::Router::Ospf::DomainId::IpFormatSecondary::IpFormatSecondary()
    :
    ip{YType::str, "ip"},
    secondary{YType::empty, "secondary"}
{
    yang_name = "ip-format-secondary"; yang_parent_name = "domain-id";
}

Native::Router::Ospf::DomainId::IpFormatSecondary::~IpFormatSecondary()
{
}

bool Native::Router::Ospf::DomainId::IpFormatSecondary::has_data() const
{
    return ip.is_set
	|| secondary.is_set;
}

bool Native::Router::Ospf::DomainId::IpFormatSecondary::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(secondary.operation);
}

std::string Native::Router::Ospf::DomainId::IpFormatSecondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-format-secondary";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::DomainId::IpFormatSecondary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpFormatSecondary' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.operation)) leaf_name_data.push_back(secondary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::DomainId::IpFormatSecondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::DomainId::IpFormatSecondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::DomainId::IpFormatSecondary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "secondary")
    {
        secondary = value;
    }
}

Native::Router::Ospf::DomainId::Type::Type()
    :
    type_leaf{YType::enumeration, "type-leaf"},
    value_{YType::str, "value"}
{
    yang_name = "type"; yang_parent_name = "domain-id";
}

Native::Router::Ospf::DomainId::Type::~Type()
{
}

bool Native::Router::Ospf::DomainId::Type::has_data() const
{
    return type_leaf.is_set
	|| value_.is_set;
}

bool Native::Router::Ospf::DomainId::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(type_leaf.operation)
	|| is_set(value_.operation);
}

std::string Native::Router::Ospf::DomainId::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::DomainId::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type_leaf.is_set || is_set(type_leaf.operation)) leaf_name_data.push_back(type_leaf.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::DomainId::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::DomainId::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::DomainId::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type-leaf")
    {
        type_leaf = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Router::Ospf::FastReroute::FastReroute()
    :
    keep_all_paths{YType::empty, "keep-all-paths"}
    	,
    per_prefix(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix>())
{
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "ospf";
}

Native::Router::Ospf::FastReroute::~FastReroute()
{
}

bool Native::Router::Ospf::FastReroute::has_data() const
{
    return keep_all_paths.is_set
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Native::Router::Ospf::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(keep_all_paths.operation)
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Native::Router::Ospf::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keep_all_paths.is_set || is_set(keep_all_paths.operation)) leaf_name_data.push_back(keep_all_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Native::Router::Ospf::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keep-all-paths")
    {
        keep_all_paths = value;
    }
}

Native::Router::Ospf::FastReroute::PerPrefix::PerPrefix()
    :
    enable(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::Enable>())
	,remote_lfa(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa>())
	,tie_break(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak>())
{
    enable->parent = this;

    remote_lfa->parent = this;

    tie_break->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Native::Router::Ospf::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::has_data() const
{
    return (enable !=  nullptr && enable->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data())
	|| (tie_break !=  nullptr && tie_break->has_data());
}

bool Native::Router::Ospf::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| (enable !=  nullptr && enable->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation())
	|| (tie_break !=  nullptr && tie_break->has_operation());
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa == nullptr)
        {
            remote_lfa = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa>();
        }
        return remote_lfa;
    }

    if(child_yang_name == "tie-break")
    {
        if(tie_break == nullptr)
        {
            tie_break = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak>();
        }
        return tie_break;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable != nullptr)
    {
        children["enable"] = enable;
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

void Native::Router::Ospf::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::FastReroute::PerPrefix::Enable::Enable()
    :
    area{YType::str, "area"},
    prefix_priority{YType::enumeration, "prefix-priority"}
{
    yang_name = "enable"; yang_parent_name = "per-prefix";
}

Native::Router::Ospf::FastReroute::PerPrefix::Enable::~Enable()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::Enable::has_data() const
{
    return area.is_set
	|| prefix_priority.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::Enable::has_operation() const
{
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(prefix_priority.operation);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::FastReroute::PerPrefix::Enable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Enable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix_priority.is_set || is_set(prefix_priority.operation)) leaf_name_data.push_back(prefix_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::Enable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "prefix-priority")
    {
        prefix_priority = value;
    }
}

Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::RemoteLfa()
    :
    area{YType::str, "area"},
    maximum_cost{YType::uint32, "maximum-cost"},
    tunnel{YType::enumeration, "tunnel"}
{
    yang_name = "remote-lfa"; yang_parent_name = "per-prefix";
}

Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::~RemoteLfa()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::has_data() const
{
    return area.is_set
	|| maximum_cost.is_set
	|| tunnel.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::has_operation() const
{
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(maximum_cost.operation)
	|| is_set(tunnel.operation);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (maximum_cost.is_set || is_set(maximum_cost.operation)) leaf_name_data.push_back(maximum_cost.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "maximum-cost")
    {
        maximum_cost = value;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
    }
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::TieBreak()
    :
    broadcast_interface_disjoint(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint>())
	,downstream(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream>())
	,linecard_disjoint(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint>())
	,lowest_metric(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric>())
	,node_protecting(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting>())
	,primary_path(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath>())
	,secondary_path(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath>())
	,srlg(std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg>())
{
    broadcast_interface_disjoint->parent = this;

    downstream->parent = this;

    linecard_disjoint->parent = this;

    lowest_metric->parent = this;

    node_protecting->parent = this;

    primary_path->parent = this;

    secondary_path->parent = this;

    srlg->parent = this;

    yang_name = "tie-break"; yang_parent_name = "per-prefix";
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::~TieBreak()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::has_data() const
{
    return (broadcast_interface_disjoint !=  nullptr && broadcast_interface_disjoint->has_data())
	|| (downstream !=  nullptr && downstream->has_data())
	|| (linecard_disjoint !=  nullptr && linecard_disjoint->has_data())
	|| (lowest_metric !=  nullptr && lowest_metric->has_data())
	|| (node_protecting !=  nullptr && node_protecting->has_data())
	|| (primary_path !=  nullptr && primary_path->has_data())
	|| (secondary_path !=  nullptr && secondary_path->has_data())
	|| (srlg !=  nullptr && srlg->has_data());
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::has_operation() const
{
    return is_set(operation)
	|| (broadcast_interface_disjoint !=  nullptr && broadcast_interface_disjoint->has_operation())
	|| (downstream !=  nullptr && downstream->has_operation())
	|| (linecard_disjoint !=  nullptr && linecard_disjoint->has_operation())
	|| (lowest_metric !=  nullptr && lowest_metric->has_operation())
	|| (node_protecting !=  nullptr && node_protecting->has_operation())
	|| (primary_path !=  nullptr && primary_path->has_operation())
	|| (secondary_path !=  nullptr && secondary_path->has_operation())
	|| (srlg !=  nullptr && srlg->has_operation());
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tie-break";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TieBreak' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-interface-disjoint")
    {
        if(broadcast_interface_disjoint == nullptr)
        {
            broadcast_interface_disjoint = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint>();
        }
        return broadcast_interface_disjoint;
    }

    if(child_yang_name == "downstream")
    {
        if(downstream == nullptr)
        {
            downstream = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream>();
        }
        return downstream;
    }

    if(child_yang_name == "linecard-disjoint")
    {
        if(linecard_disjoint == nullptr)
        {
            linecard_disjoint = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint>();
        }
        return linecard_disjoint;
    }

    if(child_yang_name == "lowest-metric")
    {
        if(lowest_metric == nullptr)
        {
            lowest_metric = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric>();
        }
        return lowest_metric;
    }

    if(child_yang_name == "node-protecting")
    {
        if(node_protecting == nullptr)
        {
            node_protecting = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting>();
        }
        return node_protecting;
    }

    if(child_yang_name == "primary-path")
    {
        if(primary_path == nullptr)
        {
            primary_path = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath>();
        }
        return primary_path;
    }

    if(child_yang_name == "secondary-path")
    {
        if(secondary_path == nullptr)
        {
            secondary_path = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath>();
        }
        return secondary_path;
    }

    if(child_yang_name == "srlg")
    {
        if(srlg == nullptr)
        {
            srlg = std::make_shared<Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg>();
        }
        return srlg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast_interface_disjoint != nullptr)
    {
        children["broadcast-interface-disjoint"] = broadcast_interface_disjoint;
    }

    if(downstream != nullptr)
    {
        children["downstream"] = downstream;
    }

    if(linecard_disjoint != nullptr)
    {
        children["linecard-disjoint"] = linecard_disjoint;
    }

    if(lowest_metric != nullptr)
    {
        children["lowest-metric"] = lowest_metric;
    }

    if(node_protecting != nullptr)
    {
        children["node-protecting"] = node_protecting;
    }

    if(primary_path != nullptr)
    {
        children["primary-path"] = primary_path;
    }

    if(secondary_path != nullptr)
    {
        children["secondary-path"] = secondary_path;
    }

    if(srlg != nullptr)
    {
        children["srlg"] = srlg;
    }

    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::BroadcastInterfaceDisjoint()
    :
    index_{YType::uint8, "index"},
    required{YType::empty, "required"}
{
    yang_name = "broadcast-interface-disjoint"; yang_parent_name = "tie-break";
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::~BroadcastInterfaceDisjoint()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::has_data() const
{
    return index_.is_set
	|| required.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(required.operation);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-interface-disjoint";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BroadcastInterfaceDisjoint' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (required.is_set || is_set(required.operation)) leaf_name_data.push_back(required.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "required")
    {
        required = value;
    }
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::Downstream()
    :
    index_{YType::uint8, "index"},
    required{YType::empty, "required"}
{
    yang_name = "downstream"; yang_parent_name = "tie-break";
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::~Downstream()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::has_data() const
{
    return index_.is_set
	|| required.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(required.operation);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "downstream";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Downstream' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (required.is_set || is_set(required.operation)) leaf_name_data.push_back(required.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "required")
    {
        required = value;
    }
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::LinecardDisjoint()
    :
    index_{YType::uint8, "index"},
    required{YType::empty, "required"}
{
    yang_name = "linecard-disjoint"; yang_parent_name = "tie-break";
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::~LinecardDisjoint()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::has_data() const
{
    return index_.is_set
	|| required.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(required.operation);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "linecard-disjoint";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinecardDisjoint' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (required.is_set || is_set(required.operation)) leaf_name_data.push_back(required.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "required")
    {
        required = value;
    }
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::LowestMetric()
    :
    index_{YType::uint8, "index"},
    required{YType::empty, "required"}
{
    yang_name = "lowest-metric"; yang_parent_name = "tie-break";
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::~LowestMetric()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::has_data() const
{
    return index_.is_set
	|| required.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(required.operation);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lowest-metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowestMetric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (required.is_set || is_set(required.operation)) leaf_name_data.push_back(required.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "required")
    {
        required = value;
    }
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::NodeProtecting()
    :
    index_{YType::uint8, "index"},
    required{YType::empty, "required"}
{
    yang_name = "node-protecting"; yang_parent_name = "tie-break";
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::~NodeProtecting()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::has_data() const
{
    return index_.is_set
	|| required.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(required.operation);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-protecting";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeProtecting' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (required.is_set || is_set(required.operation)) leaf_name_data.push_back(required.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "required")
    {
        required = value;
    }
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::PrimaryPath()
    :
    index_{YType::uint8, "index"},
    required{YType::empty, "required"}
{
    yang_name = "primary-path"; yang_parent_name = "tie-break";
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::~PrimaryPath()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::has_data() const
{
    return index_.is_set
	|| required.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(required.operation);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrimaryPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (required.is_set || is_set(required.operation)) leaf_name_data.push_back(required.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "required")
    {
        required = value;
    }
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::SecondaryPath()
    :
    index_{YType::uint8, "index"},
    required{YType::empty, "required"}
{
    yang_name = "secondary-path"; yang_parent_name = "tie-break";
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::~SecondaryPath()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::has_data() const
{
    return index_.is_set
	|| required.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(required.operation);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (required.is_set || is_set(required.operation)) leaf_name_data.push_back(required.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "required")
    {
        required = value;
    }
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::Srlg()
    :
    index_{YType::uint8, "index"},
    required{YType::empty, "required"}
{
    yang_name = "srlg"; yang_parent_name = "tie-break";
}

Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::~Srlg()
{
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::has_data() const
{
    return index_.is_set
	|| required.is_set;
}

bool Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(required.operation);
}

std::string Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Srlg' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (required.is_set || is_set(required.operation)) leaf_name_data.push_back(required.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "required")
    {
        required = value;
    }
}

Native::Router::Ospf::GracefulRestart::GracefulRestart()
    :
    disable{YType::empty, "disable"},
    restart_interval{YType::uint16, "restart-interval"}
    	,
    helper(nullptr) // presence node
{
    yang_name = "graceful-restart"; yang_parent_name = "ospf";
}

Native::Router::Ospf::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Ospf::GracefulRestart::has_data() const
{
    return disable.is_set
	|| restart_interval.is_set
	|| (helper !=  nullptr && helper->has_data());
}

bool Native::Router::Ospf::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(restart_interval.operation)
	|| (helper !=  nullptr && helper->has_operation());
}

std::string Native::Router::Ospf::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (restart_interval.is_set || is_set(restart_interval.operation)) leaf_name_data.push_back(restart_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper")
    {
        if(helper == nullptr)
        {
            helper = std::make_shared<Native::Router::Ospf::GracefulRestart::Helper>();
        }
        return helper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(helper != nullptr)
    {
        children["helper"] = helper;
    }

    return children;
}

void Native::Router::Ospf::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "restart-interval")
    {
        restart_interval = value;
    }
}

Native::Router::Ospf::GracefulRestart::Helper::Helper()
    :
    disable{YType::empty, "disable"},
    strict_lsa_checking{YType::empty, "strict-lsa-checking"}
{
    yang_name = "helper"; yang_parent_name = "graceful-restart";
}

Native::Router::Ospf::GracefulRestart::Helper::~Helper()
{
}

bool Native::Router::Ospf::GracefulRestart::Helper::has_data() const
{
    return disable.is_set
	|| strict_lsa_checking.is_set;
}

bool Native::Router::Ospf::GracefulRestart::Helper::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(strict_lsa_checking.operation);
}

std::string Native::Router::Ospf::GracefulRestart::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::GracefulRestart::Helper::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Helper' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (strict_lsa_checking.is_set || is_set(strict_lsa_checking.operation)) leaf_name_data.push_back(strict_lsa_checking.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::GracefulRestart::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::GracefulRestart::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::GracefulRestart::Helper::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "strict-lsa-checking")
    {
        strict_lsa_checking = value;
    }
}

Native::Router::Ospf::Ignore::Ignore()
    :
    lsa(std::make_shared<Native::Router::Ospf::Ignore::Lsa>())
{
    lsa->parent = this;

    yang_name = "ignore"; yang_parent_name = "ospf";
}

Native::Router::Ospf::Ignore::~Ignore()
{
}

bool Native::Router::Ospf::Ignore::has_data() const
{
    return (lsa !=  nullptr && lsa->has_data());
}

bool Native::Router::Ospf::Ignore::has_operation() const
{
    return is_set(operation)
	|| (lsa !=  nullptr && lsa->has_operation());
}

std::string Native::Router::Ospf::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Ignore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ignore' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Native::Router::Ospf::Ignore::Lsa>();
        }
        return lsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    return children;
}

void Native::Router::Ospf::Ignore::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Ignore::Lsa::Lsa()
    :
    mospf{YType::empty, "mospf"}
{
    yang_name = "lsa"; yang_parent_name = "ignore";
}

Native::Router::Ospf::Ignore::Lsa::~Lsa()
{
}

bool Native::Router::Ospf::Ignore::Lsa::has_data() const
{
    return mospf.is_set;
}

bool Native::Router::Ospf::Ignore::Lsa::has_operation() const
{
    return is_set(operation)
	|| is_set(mospf.operation);
}

std::string Native::Router::Ospf::Ignore::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Ignore::Lsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsa' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mospf.is_set || is_set(mospf.operation)) leaf_name_data.push_back(mospf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Ignore::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Ignore::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Ignore::Lsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mospf")
    {
        mospf = value;
    }
}

Native::Router::Ospf::Limit::Limit()
    :
    retransmissions(std::make_shared<Native::Router::Ospf::Limit::Retransmissions>())
{
    retransmissions->parent = this;

    yang_name = "limit"; yang_parent_name = "ospf";
}

Native::Router::Ospf::Limit::~Limit()
{
}

bool Native::Router::Ospf::Limit::has_data() const
{
    return (retransmissions !=  nullptr && retransmissions->has_data());
}

bool Native::Router::Ospf::Limit::has_operation() const
{
    return is_set(operation)
	|| (retransmissions !=  nullptr && retransmissions->has_operation());
}

std::string Native::Router::Ospf::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Limit::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmissions")
    {
        if(retransmissions == nullptr)
        {
            retransmissions = std::make_shared<Native::Router::Ospf::Limit::Retransmissions>();
        }
        return retransmissions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(retransmissions != nullptr)
    {
        children["retransmissions"] = retransmissions;
    }

    return children;
}

void Native::Router::Ospf::Limit::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Limit::Retransmissions::Retransmissions()
    :
    dc{YType::str, "dc"},
    non_dc{YType::str, "non-dc"}
{
    yang_name = "retransmissions"; yang_parent_name = "limit";
}

Native::Router::Ospf::Limit::Retransmissions::~Retransmissions()
{
}

bool Native::Router::Ospf::Limit::Retransmissions::has_data() const
{
    return dc.is_set
	|| non_dc.is_set;
}

bool Native::Router::Ospf::Limit::Retransmissions::has_operation() const
{
    return is_set(operation)
	|| is_set(dc.operation)
	|| is_set(non_dc.operation);
}

std::string Native::Router::Ospf::Limit::Retransmissions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmissions";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Limit::Retransmissions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Retransmissions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dc.is_set || is_set(dc.operation)) leaf_name_data.push_back(dc.get_name_leafdata());
    if (non_dc.is_set || is_set(non_dc.operation)) leaf_name_data.push_back(non_dc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Limit::Retransmissions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Limit::Retransmissions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Limit::Retransmissions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dc")
    {
        dc = value;
    }
    if(value_path == "non-dc")
    {
        non_dc = value;
    }
}

Native::Router::Ospf::LocalRibCriteria::LocalRibCriteria()
    :
    forwarding_address{YType::empty, "forwarding-address"},
    inter_area_summary{YType::empty, "inter-area-summary"},
    nssa_translation{YType::empty, "nssa-translation"}
{
    yang_name = "local-rib-criteria"; yang_parent_name = "ospf";
}

Native::Router::Ospf::LocalRibCriteria::~LocalRibCriteria()
{
}

bool Native::Router::Ospf::LocalRibCriteria::has_data() const
{
    return forwarding_address.is_set
	|| inter_area_summary.is_set
	|| nssa_translation.is_set;
}

bool Native::Router::Ospf::LocalRibCriteria::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarding_address.operation)
	|| is_set(inter_area_summary.operation)
	|| is_set(nssa_translation.operation);
}

std::string Native::Router::Ospf::LocalRibCriteria::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-rib-criteria";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::LocalRibCriteria::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalRibCriteria' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (inter_area_summary.is_set || is_set(inter_area_summary.operation)) leaf_name_data.push_back(inter_area_summary.get_name_leafdata());
    if (nssa_translation.is_set || is_set(nssa_translation.operation)) leaf_name_data.push_back(nssa_translation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::LocalRibCriteria::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::LocalRibCriteria::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::LocalRibCriteria::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
    if(value_path == "inter-area-summary")
    {
        inter_area_summary = value;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation = value;
    }
}

Native::Router::Ospf::Microloop::Microloop()
    :
    avoidance(nullptr) // presence node
{
    yang_name = "microloop"; yang_parent_name = "ospf";
}

Native::Router::Ospf::Microloop::~Microloop()
{
}

bool Native::Router::Ospf::Microloop::has_data() const
{
    return (avoidance !=  nullptr && avoidance->has_data());
}

bool Native::Router::Ospf::Microloop::has_operation() const
{
    return is_set(operation)
	|| (avoidance !=  nullptr && avoidance->has_operation());
}

std::string Native::Router::Ospf::Microloop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Microloop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Microloop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Microloop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "avoidance")
    {
        if(avoidance == nullptr)
        {
            avoidance = std::make_shared<Native::Router::Ospf::Microloop::Avoidance>();
        }
        return avoidance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Microloop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(avoidance != nullptr)
    {
        children["avoidance"] = avoidance;
    }

    return children;
}

void Native::Router::Ospf::Microloop::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Microloop::Avoidance::Avoidance()
    :
    disable{YType::empty, "disable"},
    protected_{YType::empty, "protected"},
    rib_update_delay{YType::uint32, "rib-update-delay"}
{
    yang_name = "avoidance"; yang_parent_name = "microloop";
}

Native::Router::Ospf::Microloop::Avoidance::~Avoidance()
{
}

bool Native::Router::Ospf::Microloop::Avoidance::has_data() const
{
    return disable.is_set
	|| protected_.is_set
	|| rib_update_delay.is_set;
}

bool Native::Router::Ospf::Microloop::Avoidance::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(protected_.operation)
	|| is_set(rib_update_delay.operation);
}

std::string Native::Router::Ospf::Microloop::Avoidance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avoidance";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Microloop::Avoidance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Avoidance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::Ospf::Microloop::Avoidance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Microloop::Avoidance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Microloop::Avoidance::set_value(const std::string & value_path, std::string value)
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

Native::Router::Ospf::Mpls::Mpls()
    :
    ldp(std::make_shared<Native::Router::Ospf::Mpls::Ldp>())
	,traffic_eng(std::make_shared<Native::Router::Ospf::Mpls::TrafficEng>())
{
    ldp->parent = this;

    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "ospf";
}

Native::Router::Ospf::Mpls::~Mpls()
{
}

bool Native::Router::Ospf::Mpls::has_data() const
{
    return (ldp !=  nullptr && ldp->has_data())
	|| (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Router::Ospf::Mpls::has_operation() const
{
    return is_set(operation)
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Router::Ospf::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::Router::Ospf::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::get_children() const
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

void Native::Router::Ospf::Mpls::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Mpls::Ldp::Ldp()
    :
    autoconfig(nullptr) // presence node
	,sync(nullptr) // presence node
{
    yang_name = "ldp"; yang_parent_name = "mpls";
}

Native::Router::Ospf::Mpls::Ldp::~Ldp()
{
}

bool Native::Router::Ospf::Mpls::Ldp::has_data() const
{
    return (autoconfig !=  nullptr && autoconfig->has_data())
	|| (sync !=  nullptr && sync->has_data());
}

bool Native::Router::Ospf::Mpls::Ldp::has_operation() const
{
    return is_set(operation)
	|| (autoconfig !=  nullptr && autoconfig->has_operation())
	|| (sync !=  nullptr && sync->has_operation());
}

std::string Native::Router::Ospf::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Mpls::Ldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ldp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Router::Ospf::Mpls::Ldp::Autoconfig>();
        }
        return autoconfig;
    }

    if(child_yang_name == "sync")
    {
        if(sync == nullptr)
        {
            sync = std::make_shared<Native::Router::Ospf::Mpls::Ldp::Sync>();
        }
        return sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoconfig != nullptr)
    {
        children["autoconfig"] = autoconfig;
    }

    if(sync != nullptr)
    {
        children["sync"] = sync;
    }

    return children;
}

void Native::Router::Ospf::Mpls::Ldp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Mpls::Ldp::Autoconfig::Autoconfig()
    :
    area{YType::str, "area"}
{
    yang_name = "autoconfig"; yang_parent_name = "ldp";
}

Native::Router::Ospf::Mpls::Ldp::Autoconfig::~Autoconfig()
{
}

bool Native::Router::Ospf::Mpls::Ldp::Autoconfig::has_data() const
{
    return area.is_set;
}

bool Native::Router::Ospf::Mpls::Ldp::Autoconfig::has_operation() const
{
    return is_set(operation)
	|| is_set(area.operation);
}

std::string Native::Router::Ospf::Mpls::Ldp::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconfig";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Mpls::Ldp::Autoconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autoconfig' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::Ldp::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::Ldp::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Mpls::Ldp::Autoconfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
}

Native::Router::Ospf::Mpls::Ldp::Sync::Sync()
{
    yang_name = "sync"; yang_parent_name = "ldp";
}

Native::Router::Ospf::Mpls::Ldp::Sync::~Sync()
{
}

bool Native::Router::Ospf::Mpls::Ldp::Sync::has_data() const
{
    return false;
}

bool Native::Router::Ospf::Mpls::Ldp::Sync::has_operation() const
{
    return is_set(operation);
}

std::string Native::Router::Ospf::Mpls::Ldp::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Mpls::Ldp::Sync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sync' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::Ldp::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::Ldp::Sync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Mpls::Ldp::Sync::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Mpls::TrafficEng::TrafficEng()
    :
    area{YType::str, "area"},
    multicast_intact{YType::empty, "multicast-intact"}
    	,
    autoroute_exclude(std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude>())
	,interface(std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::Interface>())
	,mesh_group_container(std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer>())
	,router_id(std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId>())
{
    autoroute_exclude->parent = this;

    interface->parent = this;

    mesh_group_container->parent = this;

    router_id->parent = this;

    yang_name = "traffic-eng"; yang_parent_name = "mpls";
}

Native::Router::Ospf::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Router::Ospf::Mpls::TrafficEng::has_data() const
{
    return area.is_set
	|| multicast_intact.is_set
	|| (autoroute_exclude !=  nullptr && autoroute_exclude->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (mesh_group_container !=  nullptr && mesh_group_container->has_data())
	|| (router_id !=  nullptr && router_id->has_data());
}

bool Native::Router::Ospf::Mpls::TrafficEng::has_operation() const
{
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(multicast_intact.operation)
	|| (autoroute_exclude !=  nullptr && autoroute_exclude->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (mesh_group_container !=  nullptr && mesh_group_container->has_operation())
	|| (router_id !=  nullptr && router_id->has_operation());
}

std::string Native::Router::Ospf::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Mpls::TrafficEng::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficEng' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (multicast_intact.is_set || is_set(multicast_intact.operation)) leaf_name_data.push_back(multicast_intact.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoroute-exclude")
    {
        if(autoroute_exclude == nullptr)
        {
            autoroute_exclude = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude>();
        }
        return autoroute_exclude;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "mesh-group-container")
    {
        if(mesh_group_container == nullptr)
        {
            mesh_group_container = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer>();
        }
        return mesh_group_container;
    }

    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::RouterId>();
        }
        return router_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoroute_exclude != nullptr)
    {
        children["autoroute-exclude"] = autoroute_exclude;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(mesh_group_container != nullptr)
    {
        children["mesh-group-container"] = mesh_group_container;
    }

    if(router_id != nullptr)
    {
        children["router-id"] = router_id;
    }

    return children;
}

void Native::Router::Ospf::Mpls::TrafficEng::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "multicast-intact")
    {
        multicast_intact = value;
    }
}

Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::AutorouteExclude()
    :
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "autoroute-exclude"; yang_parent_name = "traffic-eng";
}

Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::~AutorouteExclude()
{
}

bool Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::has_data() const
{
    return prefix_list.is_set;
}

bool Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list.operation);
}

std::string Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute-exclude";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutorouteExclude' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Native::Router::Ospf::Mpls::TrafficEng::Interface::Interface()
    :
    area{YType::uint32, "area"},
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "interface"; yang_parent_name = "traffic-eng";
}

Native::Router::Ospf::Mpls::TrafficEng::Interface::~Interface()
{
}

bool Native::Router::Ospf::Mpls::TrafficEng::Interface::has_data() const
{
    return area.is_set
	|| id.is_set
	|| name.is_set;
}

bool Native::Router::Ospf::Mpls::TrafficEng::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string Native::Router::Ospf::Mpls::TrafficEng::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Mpls::TrafficEng::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::TrafficEng::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::TrafficEng::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Mpls::TrafficEng::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::MeshGroupContainer()
    :
    id{YType::uint32, "id"},
    interface{YType::str, "interface"},
    mesh_group{YType::uint32, "mesh-group"}
{
    yang_name = "mesh-group-container"; yang_parent_name = "traffic-eng";
}

Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::~MeshGroupContainer()
{
}

bool Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    return id.is_set
	|| interface.is_set
	|| mesh_group.is_set;
}

bool Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(interface.operation)
	|| is_set(mesh_group.operation);
}

std::string Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MeshGroupContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.operation)) leaf_name_data.push_back(mesh_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "mesh-group")
    {
        mesh_group = value;
    }
}

Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::Area::Area()
    :
    id{YType::str, "id"}
{
    yang_name = "area"; yang_parent_name = "mesh-group-container";
}

Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::Area::~Area()
{
}

bool Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::Area::has_data() const
{
    return id.is_set;
}

bool Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::Area::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation);
}

std::string Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::Area::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Area' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::Area::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::Ospf::Mpls::TrafficEng::RouterId::RouterId()
    :
    id{YType::uint32, "id"},
    interface{YType::str, "interface"}
{
    yang_name = "router-id"; yang_parent_name = "traffic-eng";
}

Native::Router::Ospf::Mpls::TrafficEng::RouterId::~RouterId()
{
}

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::has_data() const
{
    return id.is_set
	|| interface.is_set;
}

bool Native::Router::Ospf::Mpls::TrafficEng::RouterId::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(interface.operation);
}

std::string Native::Router::Ospf::Mpls::TrafficEng::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Mpls::TrafficEng::RouterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouterId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Mpls::TrafficEng::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Mpls::TrafficEng::RouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Mpls::TrafficEng::RouterId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Router::Ospf::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"},
    cost{YType::uint32, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint32, "priority"}
    	,
    database_filter(std::make_shared<Native::Router::Ospf::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ospf";
}

Native::Router::Ospf::Neighbor::~Neighbor()
{
}

bool Native::Router::Ospf::Neighbor::has_data() const
{
    return ip.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Router::Ospf::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(cost.operation)
	|| is_set(poll_interval.operation)
	|| is_set(priority.operation)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Router::Ospf::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Router::Ospf::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Router::Ospf::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Router::Ospf::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all(std::make_shared<Native::Router::Ospf::Neighbor::DatabaseFilter::All>())
{
    all->parent = this;

    yang_name = "database-filter"; yang_parent_name = "neighbor";
}

Native::Router::Ospf::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Router::Ospf::Neighbor::DatabaseFilter::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Ospf::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Ospf::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Neighbor::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Ospf::Neighbor::DatabaseFilter::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Router::Ospf::Neighbor::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Neighbor::DatabaseFilter::All::All()
    :
    out{YType::empty, "out"}
{
    yang_name = "all"; yang_parent_name = "database-filter";
}

Native::Router::Ospf::Neighbor::DatabaseFilter::All::~All()
{
}

bool Native::Router::Ospf::Neighbor::DatabaseFilter::All::has_data() const
{
    return out.is_set;
}

bool Native::Router::Ospf::Neighbor::DatabaseFilter::All::has_operation() const
{
    return is_set(operation)
	|| is_set(out.operation);
}

std::string Native::Router::Ospf::Neighbor::DatabaseFilter::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Neighbor::DatabaseFilter::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Neighbor::DatabaseFilter::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Neighbor::DatabaseFilter::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Neighbor::DatabaseFilter::All::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Router::Ospf::Network::Network()
    :
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    area{YType::str, "area"}
{
    yang_name = "network"; yang_parent_name = "ospf";
}

Native::Router::Ospf::Network::~Network()
{
}

bool Native::Router::Ospf::Network::has_data() const
{
    return ip.is_set
	|| mask.is_set
	|| area.is_set;
}

bool Native::Router::Ospf::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(mask.operation)
	|| is_set(area.operation);
}

std::string Native::Router::Ospf::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[ip='" <<ip <<"']" <<"[mask='" <<mask <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "area")
    {
        area = value;
    }
}

Native::Router::Ospf::Nsf::Nsf()
    :
    cisco(nullptr) // presence node
	,ietf(std::make_shared<Native::Router::Ospf::Nsf::Ietf>())
{
    ietf->parent = this;

    yang_name = "nsf"; yang_parent_name = "ospf";
}

Native::Router::Ospf::Nsf::~Nsf()
{
}

bool Native::Router::Ospf::Nsf::has_data() const
{
    return (cisco !=  nullptr && cisco->has_data())
	|| (ietf !=  nullptr && ietf->has_data());
}

bool Native::Router::Ospf::Nsf::has_operation() const
{
    return is_set(operation)
	|| (cisco !=  nullptr && cisco->has_operation())
	|| (ietf !=  nullptr && ietf->has_operation());
}

std::string Native::Router::Ospf::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nsf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco")
    {
        if(cisco == nullptr)
        {
            cisco = std::make_shared<Native::Router::Ospf::Nsf::Cisco>();
        }
        return cisco;
    }

    if(child_yang_name == "ietf")
    {
        if(ietf == nullptr)
        {
            ietf = std::make_shared<Native::Router::Ospf::Nsf::Ietf>();
        }
        return ietf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco != nullptr)
    {
        children["cisco"] = cisco;
    }

    if(ietf != nullptr)
    {
        children["ietf"] = ietf;
    }

    return children;
}

void Native::Router::Ospf::Nsf::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Nsf::Cisco::Cisco()
    :
    helper(nullptr) // presence node
{
    yang_name = "cisco"; yang_parent_name = "nsf";
}

Native::Router::Ospf::Nsf::Cisco::~Cisco()
{
}

bool Native::Router::Ospf::Nsf::Cisco::has_data() const
{
    return (helper !=  nullptr && helper->has_data());
}

bool Native::Router::Ospf::Nsf::Cisco::has_operation() const
{
    return is_set(operation)
	|| (helper !=  nullptr && helper->has_operation());
}

std::string Native::Router::Ospf::Nsf::Cisco::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Nsf::Cisco::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cisco' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Nsf::Cisco::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper")
    {
        if(helper == nullptr)
        {
            helper = std::make_shared<Native::Router::Ospf::Nsf::Cisco::Helper>();
        }
        return helper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Nsf::Cisco::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(helper != nullptr)
    {
        children["helper"] = helper;
    }

    return children;
}

void Native::Router::Ospf::Nsf::Cisco::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Nsf::Cisco::Helper::Helper()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "helper"; yang_parent_name = "cisco";
}

Native::Router::Ospf::Nsf::Cisco::Helper::~Helper()
{
}

bool Native::Router::Ospf::Nsf::Cisco::Helper::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Ospf::Nsf::Cisco::Helper::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Router::Ospf::Nsf::Cisco::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Nsf::Cisco::Helper::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Helper' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::Ospf::Nsf::Cisco::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Nsf::Cisco::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Nsf::Cisco::Helper::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Router::Ospf::Nsf::Ietf::Ietf()
    :
    helper(nullptr) // presence node
{
    yang_name = "ietf"; yang_parent_name = "nsf";
}

Native::Router::Ospf::Nsf::Ietf::~Ietf()
{
}

bool Native::Router::Ospf::Nsf::Ietf::has_data() const
{
    return (helper !=  nullptr && helper->has_data());
}

bool Native::Router::Ospf::Nsf::Ietf::has_operation() const
{
    return is_set(operation)
	|| (helper !=  nullptr && helper->has_operation());
}

std::string Native::Router::Ospf::Nsf::Ietf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Nsf::Ietf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ietf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Nsf::Ietf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper")
    {
        if(helper == nullptr)
        {
            helper = std::make_shared<Native::Router::Ospf::Nsf::Ietf::Helper>();
        }
        return helper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Nsf::Ietf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(helper != nullptr)
    {
        children["helper"] = helper;
    }

    return children;
}

void Native::Router::Ospf::Nsf::Ietf::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Nsf::Ietf::Helper::Helper()
    :
    disable{YType::empty, "disable"},
    strict_lsa_checking{YType::empty, "strict-lsa-checking"}
{
    yang_name = "helper"; yang_parent_name = "ietf";
}

Native::Router::Ospf::Nsf::Ietf::Helper::~Helper()
{
}

bool Native::Router::Ospf::Nsf::Ietf::Helper::has_data() const
{
    return disable.is_set
	|| strict_lsa_checking.is_set;
}

bool Native::Router::Ospf::Nsf::Ietf::Helper::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(strict_lsa_checking.operation);
}

std::string Native::Router::Ospf::Nsf::Ietf::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Nsf::Ietf::Helper::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Helper' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (strict_lsa_checking.is_set || is_set(strict_lsa_checking.operation)) leaf_name_data.push_back(strict_lsa_checking.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::Nsf::Ietf::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Nsf::Ietf::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Nsf::Ietf::Helper::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "strict-lsa-checking")
    {
        strict_lsa_checking = value;
    }
}

Native::Router::Ospf::PrefixPriority::PrefixPriority()
    :
    high{YType::empty, "high"},
    route_map{YType::str, "route-map"}
{
    yang_name = "prefix-priority"; yang_parent_name = "ospf";
}

Native::Router::Ospf::PrefixPriority::~PrefixPriority()
{
}

bool Native::Router::Ospf::PrefixPriority::has_data() const
{
    return high.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospf::PrefixPriority::has_operation() const
{
    return is_set(operation)
	|| is_set(high.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Ospf::PrefixPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-priority";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::PrefixPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixPriority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::PrefixPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::PrefixPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::PrefixPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Ospf::ProcessMinTime::ProcessMinTime()
    :
    percent{YType::uint32, "percent"}
{
    yang_name = "process-min-time"; yang_parent_name = "ospf";
}

Native::Router::Ospf::ProcessMinTime::~ProcessMinTime()
{
}

bool Native::Router::Ospf::ProcessMinTime::has_data() const
{
    return percent.is_set;
}

bool Native::Router::Ospf::ProcessMinTime::has_operation() const
{
    return is_set(operation)
	|| is_set(percent.operation);
}

std::string Native::Router::Ospf::ProcessMinTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-min-time";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::ProcessMinTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessMinTime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Ospf::ProcessMinTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::ProcessMinTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::ProcessMinTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "percent")
    {
        percent = value;
    }
}

Native::Router::Ospf::Snmp::Snmp()
{
    yang_name = "snmp"; yang_parent_name = "ospf";
}

Native::Router::Ospf::Snmp::~Snmp()
{
}

bool Native::Router::Ospf::Snmp::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Ospf::Snmp::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Ospf::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Snmp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Ospf::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Ospf::Snmp::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospf::Snmp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Ospf::Snmp::Context::Context()
    :
    name{YType::str, "name"}
    	,
    community(std::make_shared<Native::Router::Ospf::Snmp::Context::Community>())
	,user(std::make_shared<Native::Router::Ospf::Snmp::Context::User>())
{
    community->parent = this;

    user->parent = this;

    yang_name = "context"; yang_parent_name = "snmp";
}

Native::Router::Ospf::Snmp::Context::~Context()
{
}

bool Native::Router::Ospf::Snmp::Context::has_data() const
{
    return name.is_set
	|| (community !=  nullptr && community->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::Router::Ospf::Snmp::Context::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (community !=  nullptr && community->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Router::Ospf::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Snmp::Context::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Ospf::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::Router::Ospf::Snmp::Context::Community>();
        }
        return community;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Router::Ospf::Snmp::Context::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Snmp::Context::get_children() const
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

void Native::Router::Ospf::Snmp::Context::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Ospf::Snmp::Context::Community::Community()
    :
    community_string{YType::str, "community-string"}
    	,
    access(std::make_shared<Native::Router::Ospf::Snmp::Context::Community::Access>())
{
    access->parent = this;

    yang_name = "community"; yang_parent_name = "context";
}

Native::Router::Ospf::Snmp::Context::Community::~Community()
{
}

bool Native::Router::Ospf::Snmp::Context::Community::has_data() const
{
    return community_string.is_set
	|| (access !=  nullptr && access->has_data());
}

bool Native::Router::Ospf::Snmp::Context::Community::has_operation() const
{
    return is_set(operation)
	|| is_set(community_string.operation)
	|| (access !=  nullptr && access->has_operation());
}

std::string Native::Router::Ospf::Snmp::Context::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Snmp::Context::Community::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Ospf::Snmp::Context::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Ospf::Snmp::Context::Community::Access>();
        }
        return access;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Snmp::Context::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    return children;
}

void Native::Router::Ospf::Snmp::Context::Community::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-string")
    {
        community_string = value;
    }
}

Native::Router::Ospf::Snmp::Context::Community::Access::Access()
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

Native::Router::Ospf::Snmp::Context::Community::Access::~Access()
{
}

bool Native::Router::Ospf::Snmp::Context::Community::Access::has_data() const
{
    return acl_name.is_set
	|| expanded_acl.is_set
	|| ipv6.is_set
	|| ro.is_set
	|| rw.is_set
	|| standard_acl.is_set;
}

bool Native::Router::Ospf::Snmp::Context::Community::Access::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(expanded_acl.operation)
	|| is_set(ipv6.operation)
	|| is_set(ro.operation)
	|| is_set(rw.operation)
	|| is_set(standard_acl.operation);
}

std::string Native::Router::Ospf::Snmp::Context::Community::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Snmp::Context::Community::Access::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Ospf::Snmp::Context::Community::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Snmp::Context::Community::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospf::Snmp::Context::Community::Access::set_value(const std::string & value_path, std::string value)
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

Native::Router::Ospf::Snmp::Context::User::User()
    :
    name{YType::str, "name"}
    	,
    permisssion(std::make_shared<Native::Router::Ospf::Snmp::Context::User::Permisssion>())
{
    permisssion->parent = this;

    yang_name = "user"; yang_parent_name = "context";
}

Native::Router::Ospf::Snmp::Context::User::~User()
{
}

bool Native::Router::Ospf::Snmp::Context::User::has_data() const
{
    return name.is_set
	|| (permisssion !=  nullptr && permisssion->has_data());
}

bool Native::Router::Ospf::Snmp::Context::User::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (permisssion !=  nullptr && permisssion->has_operation());
}

std::string Native::Router::Ospf::Snmp::Context::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Snmp::Context::User::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Ospf::Snmp::Context::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permisssion")
    {
        if(permisssion == nullptr)
        {
            permisssion = std::make_shared<Native::Router::Ospf::Snmp::Context::User::Permisssion>();
        }
        return permisssion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Snmp::Context::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permisssion != nullptr)
    {
        children["permisssion"] = permisssion;
    }

    return children;
}

void Native::Router::Ospf::Snmp::Context::User::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Ospf::Snmp::Context::User::Permisssion::Permisssion()
    :
    credential{YType::empty, "credential"},
    encrypted{YType::empty, "encrypted"}
    	,
    access(std::make_shared<Native::Router::Ospf::Snmp::Context::User::Permisssion::Access>())
	,auth(std::make_shared<Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth>())
{
    access->parent = this;

    auth->parent = this;

    yang_name = "permisssion"; yang_parent_name = "user";
}

Native::Router::Ospf::Snmp::Context::User::Permisssion::~Permisssion()
{
}

bool Native::Router::Ospf::Snmp::Context::User::Permisssion::has_data() const
{
    return credential.is_set
	|| encrypted.is_set
	|| (access !=  nullptr && access->has_data())
	|| (auth !=  nullptr && auth->has_data());
}

bool Native::Router::Ospf::Snmp::Context::User::Permisssion::has_operation() const
{
    return is_set(operation)
	|| is_set(credential.operation)
	|| is_set(encrypted.operation)
	|| (access !=  nullptr && access->has_operation())
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::Router::Ospf::Snmp::Context::User::Permisssion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permisssion";

    return path_buffer.str();

}

const EntityPath Native::Router::Ospf::Snmp::Context::User::Permisssion::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::Ospf::Snmp::Context::User::Permisssion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Ospf::Snmp::Context::User::Permisssion::Access>();
        }
        return access;
    }

    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospf::Snmp::Context::User::Permisssion::get_children() const
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

void Native::Router::Ospf::Snmp::Context::User::Permisssion::set_value(const std::string & value_path, std::string value)
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

const Enum::YLeaf Native::Router::Ospf::Redistribute::Mobile::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Mobile::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Odr::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Odr::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::External::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::External::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::External::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::External::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Rip::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Rip::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Static_::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Static_::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisLevelRoutesEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisLevelRoutesEnum::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisLevelRoutesEnum::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutesEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutesEnum::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutesEnum::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisLevelRoutesEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisLevelRoutesEnum::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisLevelRoutesEnum::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::IsisLevelRoutesEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::IsisLevelRoutesEnum::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::IsisLevelRoutesEnum::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::MetricTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::MetricTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::PrefixGatewayEnum::prefix {0, "prefix"};
const Enum::YLeaf Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::PrefixGatewayEnum::gateway {1, "gateway"};
const Enum::YLeaf Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::PrefixGatewayEnum::route_map {2, "route-map"};

const Enum::YLeaf Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::PrefixGatewayEnum::prefix {0, "prefix"};
const Enum::YLeaf Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::PrefixGatewayEnum::gateway {1, "gateway"};
const Enum::YLeaf Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::PrefixGatewayEnum::route_map {2, "route-map"};

const Enum::YLeaf Native::Router::Ospf::DomainId::Type::TypeLeafEnum::Y_0005 {0, "0005"};
const Enum::YLeaf Native::Router::Ospf::DomainId::Type::TypeLeafEnum::Y_0105 {1, "0105"};
const Enum::YLeaf Native::Router::Ospf::DomainId::Type::TypeLeafEnum::Y_0205 {2, "0205"};
const Enum::YLeaf Native::Router::Ospf::DomainId::Type::TypeLeafEnum::Y_8005 {3, "8005"};

const Enum::YLeaf Native::Router::Ospf::FastReroute::PerPrefix::Enable::PrefixPriorityEnum::high {0, "high"};
const Enum::YLeaf Native::Router::Ospf::FastReroute::PerPrefix::Enable::PrefixPriorityEnum::low {1, "low"};

const Enum::YLeaf Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::TunnelEnum::mpls_ldp {0, "mpls-ldp"};


}
}

