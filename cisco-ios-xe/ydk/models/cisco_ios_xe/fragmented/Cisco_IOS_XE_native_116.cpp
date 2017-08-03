
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_116.hpp"
#include "Cisco_IOS_XE_native_117.hpp"
#include "Cisco_IOS_XE_native_118.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

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
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(route_map.yfilter);
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

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


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

void Native::Router::Isis::FastReroute::PerPrefix::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::FastReroute::PerPrefix::Level2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::FastReroute::PerPrefix::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "route-map")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Router::Isis::FastReroute::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::FastReroute::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-2")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Router::Isis::FastReroute::RemoteLfa::Level1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-ldp")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-metric")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(max_met.yfilter);
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

    if (max_met.is_set || is_set(max_met.yfilter)) leaf_name_data.push_back(max_met.get_name_leafdata());


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

void Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-met")
    {
        max_met = value;
        max_met.value_namespace = name_space;
        max_met.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-met")
    {
        max_met.yfilter = yfilter;
    }
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-met")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Router::Isis::FastReroute::RemoteLfa::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-ldp")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-metric")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(max_met.yfilter);
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

    if (max_met.is_set || is_set(max_met.yfilter)) leaf_name_data.push_back(max_met.get_name_leafdata());


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

void Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-met")
    {
        max_met = value;
        max_met.value_namespace = name_space;
        max_met.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-met")
    {
        max_met.yfilter = yfilter;
    }
}

bool Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-met")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Router::Isis::FastReroute::TieBreak::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::FastReroute::TieBreak::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::FastReroute::TieBreak::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-2")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(linecard_disjoint.yfilter)
	|| ydk::is_set(lowest_backup_path_metric.yfilter)
	|| ydk::is_set(node_protecting.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(secondary_path.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter);
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

    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (linecard_disjoint.is_set || is_set(linecard_disjoint.yfilter)) leaf_name_data.push_back(linecard_disjoint.get_name_leafdata());
    if (lowest_backup_path_metric.is_set || is_set(lowest_backup_path_metric.yfilter)) leaf_name_data.push_back(lowest_backup_path_metric.get_name_leafdata());
    if (node_protecting.is_set || is_set(node_protecting.yfilter)) leaf_name_data.push_back(node_protecting.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (secondary_path.is_set || is_set(secondary_path.yfilter)) leaf_name_data.push_back(secondary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());


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

void Native::Router::Isis::FastReroute::TieBreak::Level1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linecard-disjoint")
    {
        linecard_disjoint = value;
        linecard_disjoint.value_namespace = name_space;
        linecard_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowest-backup-path-metric")
    {
        lowest_backup_path_metric = value;
        lowest_backup_path_metric.value_namespace = name_space;
        lowest_backup_path_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protecting")
    {
        node_protecting = value;
        node_protecting.value_namespace = name_space;
        node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-path")
    {
        secondary_path = value;
        secondary_path.value_namespace = name_space;
        secondary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::FastReroute::TieBreak::Level1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "linecard-disjoint")
    {
        linecard_disjoint.yfilter = yfilter;
    }
    if(value_path == "lowest-backup-path-metric")
    {
        lowest_backup_path_metric.yfilter = yfilter;
    }
    if(value_path == "node-protecting")
    {
        node_protecting.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "secondary-path")
    {
        secondary_path.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
}

bool Native::Router::Isis::FastReroute::TieBreak::Level1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "downstream" || name == "linecard-disjoint" || name == "lowest-backup-path-metric" || name == "node-protecting" || name == "primary-path" || name == "secondary-path" || name == "srlg-disjoint")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(linecard_disjoint.yfilter)
	|| ydk::is_set(lowest_backup_path_metric.yfilter)
	|| ydk::is_set(node_protecting.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(secondary_path.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter);
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

    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (linecard_disjoint.is_set || is_set(linecard_disjoint.yfilter)) leaf_name_data.push_back(linecard_disjoint.get_name_leafdata());
    if (lowest_backup_path_metric.is_set || is_set(lowest_backup_path_metric.yfilter)) leaf_name_data.push_back(lowest_backup_path_metric.get_name_leafdata());
    if (node_protecting.is_set || is_set(node_protecting.yfilter)) leaf_name_data.push_back(node_protecting.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (secondary_path.is_set || is_set(secondary_path.yfilter)) leaf_name_data.push_back(secondary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());


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

void Native::Router::Isis::FastReroute::TieBreak::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linecard-disjoint")
    {
        linecard_disjoint = value;
        linecard_disjoint.value_namespace = name_space;
        linecard_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowest-backup-path-metric")
    {
        lowest_backup_path_metric = value;
        lowest_backup_path_metric.value_namespace = name_space;
        lowest_backup_path_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protecting")
    {
        node_protecting = value;
        node_protecting.value_namespace = name_space;
        node_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-path")
    {
        secondary_path = value;
        secondary_path.value_namespace = name_space;
        secondary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::FastReroute::TieBreak::Level2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "linecard-disjoint")
    {
        linecard_disjoint.yfilter = yfilter;
    }
    if(value_path == "lowest-backup-path-metric")
    {
        lowest_backup_path_metric.yfilter = yfilter;
    }
    if(value_path == "node-protecting")
    {
        node_protecting.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "secondary-path")
    {
        secondary_path.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
}

bool Native::Router::Isis::FastReroute::TieBreak::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "downstream" || name == "linecard-disjoint" || name == "lowest-backup-path-metric" || name == "node-protecting" || name == "primary-path" || name == "secondary-path" || name == "srlg-disjoint")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Router::Isis::TiLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::TiLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::TiLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-2")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Router::Isis::TiLfa::Level1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::TiLfa::Level1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::TiLfa::Level1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-metric")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(max_met.yfilter);
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

    if (max_met.is_set || is_set(max_met.yfilter)) leaf_name_data.push_back(max_met.get_name_leafdata());


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

void Native::Router::Isis::TiLfa::Level1::MaximumMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-met")
    {
        max_met = value;
        max_met.value_namespace = name_space;
        max_met.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::TiLfa::Level1::MaximumMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-met")
    {
        max_met.yfilter = yfilter;
    }
}

bool Native::Router::Isis::TiLfa::Level1::MaximumMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-met")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Router::Isis::TiLfa::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::TiLfa::Level2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::TiLfa::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-metric")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(max_met.yfilter);
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

    if (max_met.is_set || is_set(max_met.yfilter)) leaf_name_data.push_back(max_met.get_name_leafdata());


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

void Native::Router::Isis::TiLfa::Level2::MaximumMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-met")
    {
        max_met = value;
        max_met.value_namespace = name_space;
        max_met.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::TiLfa::Level2::MaximumMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-met")
    {
        max_met.yfilter = yfilter;
    }
}

bool Native::Router::Isis::TiLfa::Level2::MaximumMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-met")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Router::Isis::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padding")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(pad_type.yfilter);
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

    if (pad_type.is_set || is_set(pad_type.yfilter)) leaf_name_data.push_back(pad_type.get_name_leafdata());


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

void Native::Router::Isis::Hello::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pad-type")
    {
        pad_type = value;
        pad_type.value_namespace = name_space;
        pad_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Hello::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pad-type")
    {
        pad_type.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Hello::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pad-type")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter);
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

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());


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

void Native::Router::Isis::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(number.yfilter);
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

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());


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

void Native::Router::Isis::Ispf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Ispf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Ispf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "number")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
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

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());


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

void Native::Router::Isis::LogAdjacencyChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::LogAdjacencyChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Isis::LogAdjacencyChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Router::Isis::LspFull::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::LspFull::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::LspFull::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
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

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());


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

void Native::Router::Isis::LspFull::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::LspFull::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Router::Isis::LspFull::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-interlevel-container" || name == "none")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
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

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());


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

void Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
        interlevel.value_namespace = name_space;
        interlevel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "interlevel")
    {
        interlevel.yfilter = yfilter;
    }
}

bool Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "interlevel")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Router::Isis::LspGenInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::LspGenInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::LspGenInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intervals" || name == "intervals-levels")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(wait.yfilter);
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

    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());


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

void Native::Router::Isis::LspGenInterval::Intervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::LspGenInterval::Intervals::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::LspGenInterval::Intervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial-wait" || name == "interval" || name == "wait")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Router::Isis::LspGenInterval::IntervalsLevels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::LspGenInterval::IntervalsLevels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::LspGenInterval::IntervalsLevels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intervals-level-1" || name == "intervals-level-2")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(wait.yfilter);
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

    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());


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

void Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-1")
    {
        level_1 = value;
        level_1.value_namespace = name_space;
        level_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "level-1")
    {
        level_1.yfilter = yfilter;
    }
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial-wait" || name == "interval" || name == "level-1" || name == "wait")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(level_2.yfilter)
	|| ydk::is_set(wait.yfilter);
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

    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());


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

void Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
        level_2.value_namespace = name_space;
        level_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "level-2")
    {
        level_2.yfilter = yfilter;
    }
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial-wait" || name == "interval" || name == "level-2" || name == "wait")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Router::Isis::Microloop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Microloop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Microloop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avoidance")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(protected_.yfilter)
	|| ydk::is_set(rib_update_delay.yfilter);
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

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.yfilter)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());


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

void Native::Router::Isis::Microloop::Avoidance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay = value;
        rib_update_delay.value_namespace = name_space;
        rib_update_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Microloop::Avoidance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Microloop::Avoidance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "protected" || name == "rib-update-delay")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Router::Isis::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp" || name == "traffic-eng")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(sync.yfilter)
	|| ydk::is_set(sync_igp_shortcuts.yfilter)
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

    if (sync.is_set || is_set(sync.yfilter)) leaf_name_data.push_back(sync.get_name_leafdata());
    if (sync_igp_shortcuts.is_set || is_set(sync_igp_shortcuts.yfilter)) leaf_name_data.push_back(sync_igp_shortcuts.get_name_leafdata());


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

void Native::Router::Isis::Mpls::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync")
    {
        sync = value;
        sync.value_namespace = name_space;
        sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-igp-shortcuts")
    {
        sync_igp_shortcuts = value;
        sync_igp_shortcuts.value_namespace = name_space;
        sync_igp_shortcuts.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Mpls::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync")
    {
        sync.yfilter = yfilter;
    }
    if(value_path == "sync-igp-shortcuts")
    {
        sync_igp_shortcuts.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Mpls::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoconfig" || name == "sync" || name == "sync-igp-shortcuts")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(level_2.yfilter);
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

    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());


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

void Native::Router::Isis::Mpls::Ldp::Autoconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-1")
    {
        level_1 = value;
        level_1.value_namespace = name_space;
        level_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
        level_2.value_namespace = name_space;
        level_2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Mpls::Ldp::Autoconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-1")
    {
        level_1.yfilter = yfilter;
    }
    if(value_path == "level-2")
    {
        level_2.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Mpls::Ldp::Autoconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-2")
        return true;
    return false;
}

Native::Router::Isis::Mpls::TrafficEng::TrafficEng()
    :
    level_1{YType::empty, "level-1"},
    level_2{YType::empty, "level-2"},
    multicast_intact{YType::empty, "multicast-intact"}
    	,
    router_id(std::make_shared<Native::Router::Isis::Mpls::TrafficEng::RouterId>())
	,scanner(std::make_shared<Native::Router::Isis::Mpls::TrafficEng::Scanner>())
{
    router_id->parent = this;

    scanner->parent = this;

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
    return is_set(yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(level_2.yfilter)
	|| ydk::is_set(multicast_intact.yfilter)
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

    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (multicast_intact.is_set || is_set(multicast_intact.yfilter)) leaf_name_data.push_back(multicast_intact.get_name_leafdata());


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

void Native::Router::Isis::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level-1")
    {
        level_1 = value;
        level_1.value_namespace = name_space;
        level_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
        level_2.value_namespace = name_space;
        level_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-intact")
    {
        multicast_intact = value;
        multicast_intact.value_namespace = name_space;
        multicast_intact.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level-1")
    {
        level_1.yfilter = yfilter;
    }
    if(value_path == "level-2")
    {
        level_2.yfilter = yfilter;
    }
    if(value_path == "multicast-intact")
    {
        multicast_intact.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "scanner" || name == "level-1" || name == "level-2" || name == "multicast-intact")
        return true;
    return false;
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

void Native::Router::Isis::Mpls::TrafficEng::RouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Isis::Mpls::TrafficEng::RouterId::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Isis::Mpls::TrafficEng::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
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

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());


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

void Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
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

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


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

void Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
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

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());


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

void Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
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

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());


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

void Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(max_flash.yfilter);
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

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (max_flash.is_set || is_set(max_flash.yfilter)) leaf_name_data.push_back(max_flash.get_name_leafdata());


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

void Native::Router::Isis::Mpls::TrafficEng::Scanner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flash")
    {
        max_flash = value;
        max_flash.value_namespace = name_space;
        max_flash.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Mpls::TrafficEng::Scanner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "max-flash")
    {
        max_flash.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Mpls::TrafficEng::Scanner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "max-flash")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
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

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());


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

void Native::Router::Isis::Net::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Net::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Net::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(cisco.yfilter)
	|| ydk::is_set(ietf.yfilter)
	|| ydk::is_set(interval.yfilter)
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

    if (cisco.is_set || is_set(cisco.yfilter)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


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

void Native::Router::Isis::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco")
    {
        cisco = value;
        cisco.value_namespace = name_space;
        cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco")
    {
        cisco.yfilter = yfilter;
    }
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "cisco" || name == "ietf" || name == "interval")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(wait.yfilter);
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

    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());


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

void Native::Router::Isis::Nsf::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Nsf::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Nsf::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(avoidance.yfilter);
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

    if (avoidance.is_set || is_set(avoidance.yfilter)) leaf_name_data.push_back(avoidance.get_name_leafdata());


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

void Native::Router::Isis::Partition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avoidance")
    {
        avoidance = value;
        avoidance.value_namespace = name_space;
        avoidance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Partition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avoidance")
    {
        avoidance.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Partition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avoidance")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(interface.yfilter);
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

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());


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

void Native::Router::Isis::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::Isis::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "interface")
        return true;
    return false;
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
    return is_set(yfilter);
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

void Native::Router::Isis::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-interface")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
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

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());


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

void Native::Router::Isis::Disable::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Disable::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Disable::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter);
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

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());


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

void Native::Router::Isis::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mpls.yfilter)
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

    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());


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

void Native::Router::Isis::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
}

bool Native::Router::Isis::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-map" || name == "mpls")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(advertise_local.yfilter)
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

    if (advertise_local.is_set || is_set(advertise_local.yfilter)) leaf_name_data.push_back(advertise_local.get_name_leafdata());


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

void Native::Router::Isis::SegmentRouting::PrefixSidMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-local")
    {
        advertise_local = value;
        advertise_local.value_namespace = name_space;
        advertise_local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::SegmentRouting::PrefixSidMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-local")
    {
        advertise_local.yfilter = yfilter;
    }
}

bool Native::Router::Isis::SegmentRouting::PrefixSidMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "advertise-local")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
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

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


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

void Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
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

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


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

void Native::Router::Isis::Skeptical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Skeptical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Skeptical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(external_metrics.yfilter);
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

    if (external_metrics.is_set || is_set(external_metrics.yfilter)) leaf_name_data.push_back(external_metrics.get_name_leafdata());


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

void Native::Router::Isis::Use::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-metrics")
    {
        external_metrics = value;
        external_metrics.value_namespace = name_space;
        external_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Use::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-metrics")
    {
        external_metrics.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Use::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-metrics")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(all_interfaces.yfilter)
	|| ydk::is_set(check_ctrl_plane_failure.yfilter);
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

    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());
    if (check_ctrl_plane_failure.is_set || is_set(check_ctrl_plane_failure.yfilter)) leaf_name_data.push_back(check_ctrl_plane_failure.get_name_leafdata());


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

void Native::Router::Isis::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "check-ctrl-plane-failure")
    {
        check_ctrl_plane_failure = value;
        check_ctrl_plane_failure.value_namespace = name_space;
        check_ctrl_plane_failure.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
    if(value_path == "check-ctrl-plane-failure")
    {
        check_ctrl_plane_failure.yfilter = yfilter;
    }
}

bool Native::Router::Isis::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-interfaces" || name == "check-ctrl-plane-failure")
        return true;
    return false;
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
    return is_set(yfilter);
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

void Native::Router::IsisContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(adjacency_check.yfilter)
	|| ydk::is_set(help.yfilter)
	|| ydk::is_set(ignore_lsp_errors.yfilter)
	|| ydk::is_set(is_type.yfilter)
	|| ydk::is_set(lsp_mtu.yfilter)
	|| ydk::is_set(lsp_refresh_interval.yfilter)
	|| ydk::is_set(max_area_addresses.yfilter)
	|| ydk::is_set(max_lsp_lifetime.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(update_queue_depth.yfilter)
	|| ydk::is_set(vrf.yfilter)
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

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (adjacency_check.is_set || is_set(adjacency_check.yfilter)) leaf_name_data.push_back(adjacency_check.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());
    if (ignore_lsp_errors.is_set || is_set(ignore_lsp_errors.yfilter)) leaf_name_data.push_back(ignore_lsp_errors.get_name_leafdata());
    if (is_type.is_set || is_set(is_type.yfilter)) leaf_name_data.push_back(is_type.get_name_leafdata());
    if (lsp_mtu.is_set || is_set(lsp_mtu.yfilter)) leaf_name_data.push_back(lsp_mtu.get_name_leafdata());
    if (lsp_refresh_interval.is_set || is_set(lsp_refresh_interval.yfilter)) leaf_name_data.push_back(lsp_refresh_interval.get_name_leafdata());
    if (max_area_addresses.is_set || is_set(max_area_addresses.yfilter)) leaf_name_data.push_back(max_area_addresses.get_name_leafdata());
    if (max_lsp_lifetime.is_set || is_set(max_lsp_lifetime.yfilter)) leaf_name_data.push_back(max_lsp_lifetime.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (update_queue_depth.is_set || is_set(update_queue_depth.yfilter)) leaf_name_data.push_back(update_queue_depth.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


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

void Native::Router::IsisContainer::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
        area_tag.value_namespace = name_space;
        area_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-check")
    {
        adjacency_check = value;
        adjacency_check.value_namespace = name_space;
        adjacency_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-lsp-errors")
    {
        ignore_lsp_errors = value;
        ignore_lsp_errors.value_namespace = name_space;
        ignore_lsp_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-type")
    {
        is_type = value;
        is_type.value_namespace = name_space;
        is_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mtu")
    {
        lsp_mtu = value;
        lsp_mtu.value_namespace = name_space;
        lsp_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval = value;
        lsp_refresh_interval.value_namespace = name_space;
        lsp_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses = value;
        max_area_addresses.value_namespace = name_space;
        max_area_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsp-lifetime")
    {
        max_lsp_lifetime = value;
        max_lsp_lifetime.value_namespace = name_space;
        max_lsp_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-queue-depth")
    {
        update_queue_depth = value;
        update_queue_depth.value_namespace = name_space;
        update_queue_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-tag")
    {
        area_tag.yfilter = yfilter;
    }
    if(value_path == "adjacency-check")
    {
        adjacency_check.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
    if(value_path == "ignore-lsp-errors")
    {
        ignore_lsp_errors.yfilter = yfilter;
    }
    if(value_path == "is-type")
    {
        is_type.yfilter = yfilter;
    }
    if(value_path == "lsp-mtu")
    {
        lsp_mtu.yfilter = yfilter;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses.yfilter = yfilter;
    }
    if(value_path == "max-lsp-lifetime")
    {
        max_lsp_lifetime.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "update-queue-depth")
    {
        update_queue_depth.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "advertise" || name == "area-password" || name == "authentication" || name == "bfd" || name == "default-information" || name == "disable" || name == "distance" || name == "distribute-list" || name == "domain-password" || name == "fast-flood" || name == "fast-reroute" || name == "hello" || name == "hostname" || name == "ip" || name == "ispf" || name == "log-adjacency-changes" || name == "lsp-full" || name == "lsp-gen-interval" || name == "metric" || name == "metric-style" || name == "microloop" || name == "mpls" || name == "net" || name == "nsf" || name == "partition" || name == "passive-interface" || name == "prc-interval" || name == "protocol" || name == "redistribute" || name == "segment-routing" || name == "set-attached-bit" || name == "set-overload-bit" || name == "skeptical" || name == "snmp" || name == "spf-interval" || name == "summary-address" || name == "ti-lfa" || name == "traffic-share" || name == "use" || name == "area-tag" || name == "adjacency-check" || name == "help" || name == "ignore-lsp-errors" || name == "is-type" || name == "lsp-mtu" || name == "lsp-refresh-interval" || name == "max-area-addresses" || name == "max-lsp-lifetime" || name == "maximum-paths" || name == "priority" || name == "router-id" || name == "update-queue-depth" || name == "vrf")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Router::IsisContainer::Isis::MetricStyle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::MetricStyle::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::MetricStyle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "narrow" || name == "transition" || name == "wide")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(narrow_wide.yfilter)
	|| ydk::is_set(transition.yfilter);
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

    if (narrow_wide.is_set || is_set(narrow_wide.yfilter)) leaf_name_data.push_back(narrow_wide.get_name_leafdata());
    if (transition.is_set || is_set(transition.yfilter)) leaf_name_data.push_back(transition.get_name_leafdata());


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

void Native::Router::IsisContainer::Isis::MetricStyle::Narrow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "narrow-wide")
    {
        narrow_wide = value;
        narrow_wide.value_namespace = name_space;
        narrow_wide.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transition")
    {
        transition = value;
        transition.value_namespace = name_space;
        transition.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::MetricStyle::Narrow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "narrow-wide")
    {
        narrow_wide.yfilter = yfilter;
    }
    if(value_path == "transition")
    {
        transition.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::MetricStyle::Narrow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "narrow-wide" || name == "transition")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(transition.yfilter);
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

    if (transition.is_set || is_set(transition.yfilter)) leaf_name_data.push_back(transition.get_name_leafdata());


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

void Native::Router::IsisContainer::Isis::MetricStyle::Transition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transition")
    {
        transition = value;
        transition.value_namespace = name_space;
        transition.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::MetricStyle::Transition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transition")
    {
        transition.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::MetricStyle::Transition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transition")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(narrow_wide.yfilter)
	|| ydk::is_set(transition.yfilter);
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

    if (narrow_wide.is_set || is_set(narrow_wide.yfilter)) leaf_name_data.push_back(narrow_wide.get_name_leafdata());
    if (transition.is_set || is_set(transition.yfilter)) leaf_name_data.push_back(transition.get_name_leafdata());


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

void Native::Router::IsisContainer::Isis::MetricStyle::Wide::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "narrow-wide")
    {
        narrow_wide = value;
        narrow_wide.value_namespace = name_space;
        narrow_wide.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transition")
    {
        transition = value;
        transition.value_namespace = name_space;
        transition.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::MetricStyle::Wide::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "narrow-wide")
    {
        narrow_wide.yfilter = yfilter;
    }
    if(value_path == "transition")
    {
        transition.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::MetricStyle::Wide::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "narrow-wide" || name == "transition")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Router::IsisContainer::Isis::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(help.yfilter)
	|| ydk::is_set(unicast_multicast.yfilter)
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

    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());
    if (unicast_multicast.is_set || is_set(unicast_multicast.yfilter)) leaf_name_data.push_back(unicast_multicast.get_name_leafdata());


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

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-multicast")
    {
        unicast_multicast = value;
        unicast_multicast.value_namespace = name_space;
        unicast_multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
    if(value_path == "unicast-multicast")
    {
        unicast_multicast.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp" || name == "topology" || name == "help" || name == "unicast-multicast")
        return true;
    return false;
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
    return is_set(yfilter);
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

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


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

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community" || name == "user" || name == "name")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Community()
    :
    community_string{YType::str, "community-string"}
    	,
    access(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access>())
{
    access->parent = this;

    yang_name = "community"; yang_parent_name = "context";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::~Community()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::has_data() const
{
    return community_string.is_set
	|| (access !=  nullptr && access->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_string.yfilter)
	|| (access !=  nullptr && access->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::get_entity_path(Entity* ancestor) const
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

    if (community_string.is_set || is_set(community_string.yfilter)) leaf_name_data.push_back(community_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access>();
        }
        return access;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-string")
    {
        community_string = value;
        community_string.value_namespace = name_space;
        community_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-string")
    {
        community_string.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "community-string")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::Access()
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

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::~Access()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::has_data() const
{
    return acl_name.is_set
	|| expanded_acl.is_set
	|| ipv6.is_set
	|| ro.is_set
	|| rw.is_set
	|| standard_acl.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(expanded_acl.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(ro.yfilter)
	|| ydk::is_set(rw.yfilter)
	|| ydk::is_set(standard_acl.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::get_entity_path(Entity* ancestor) const
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

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (expanded_acl.is_set || is_set(expanded_acl.yfilter)) leaf_name_data.push_back(expanded_acl.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (ro.is_set || is_set(ro.yfilter)) leaf_name_data.push_back(ro.get_name_leafdata());
    if (rw.is_set || is_set(rw.yfilter)) leaf_name_data.push_back(rw.get_name_leafdata());
    if (standard_acl.is_set || is_set(standard_acl.yfilter)) leaf_name_data.push_back(standard_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-acl")
    {
        expanded_acl = value;
        expanded_acl.value_namespace = name_space;
        expanded_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ro")
    {
        ro = value;
        ro.value_namespace = name_space;
        ro.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rw")
    {
        rw = value;
        rw.value_namespace = name_space;
        rw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standard-acl")
    {
        standard_acl = value;
        standard_acl.value_namespace = name_space;
        standard_acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "expanded-acl")
    {
        expanded_acl.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "ro")
    {
        ro.yfilter = yfilter;
    }
    if(value_path == "rw")
    {
        rw.yfilter = yfilter;
    }
    if(value_path == "standard-acl")
    {
        standard_acl.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "expanded-acl" || name == "ipv6" || name == "ro" || name == "rw" || name == "standard-acl")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::User()
    :
    name{YType::str, "name"}
    	,
    permisssion(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion>())
{
    permisssion->parent = this;

    yang_name = "user"; yang_parent_name = "context";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::~User()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::has_data() const
{
    return name.is_set
	|| (permisssion !=  nullptr && permisssion->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (permisssion !=  nullptr && permisssion->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permisssion")
    {
        if(permisssion == nullptr)
        {
            permisssion = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion>();
        }
        return permisssion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permisssion != nullptr)
    {
        children["permisssion"] = permisssion;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permisssion" || name == "name")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Permisssion()
    :
    credential{YType::empty, "credential"},
    encrypted{YType::empty, "encrypted"}
    	,
    access(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access>())
	,auth(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth>())
{
    access->parent = this;

    auth->parent = this;

    yang_name = "permisssion"; yang_parent_name = "user";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::~Permisssion()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::has_data() const
{
    return credential.is_set
	|| encrypted.is_set
	|| (access !=  nullptr && access->has_data())
	|| (auth !=  nullptr && auth->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(credential.yfilter)
	|| ydk::is_set(encrypted.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permisssion";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::get_entity_path(Entity* ancestor) const
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

    if (credential.is_set || is_set(credential.yfilter)) leaf_name_data.push_back(credential.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access>();
        }
        return access;
    }

    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::get_children() const
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

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "credential")
    {
        credential = value;
        credential.value_namespace = name_space;
        credential.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
        encrypted.value_namespace = name_space;
        encrypted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "credential")
    {
        credential.yfilter = yfilter;
    }
    if(value_path == "encrypted")
    {
        encrypted.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "auth" || name == "credential" || name == "encrypted")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::Access()
    :
    acl_name{YType::str, "acl-name"},
    ipv6{YType::str, "ipv6"},
    standard_acl{YType::uint32, "standard-acl"}
{
    yang_name = "access"; yang_parent_name = "permisssion";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::~Access()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::has_data() const
{
    return acl_name.is_set
	|| ipv6.is_set
	|| standard_acl.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(standard_acl.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::get_entity_path(Entity* ancestor) const
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

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (standard_acl.is_set || is_set(standard_acl.yfilter)) leaf_name_data.push_back(standard_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standard-acl")
    {
        standard_acl = value;
        standard_acl.value_namespace = name_space;
        standard_acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "standard-acl")
    {
        standard_acl.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "ipv6" || name == "standard-acl")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::Auth()
    :
    md5{YType::str, "md5"},
    sha{YType::str, "sha"}
{
    yang_name = "auth"; yang_parent_name = "permisssion";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::~Auth()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::has_data() const
{
    return md5.is_set
	|| sha.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::get_entity_path(Entity* ancestor) const
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

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha.is_set || is_set(sha.yfilter)) leaf_name_data.push_back(sha.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha")
    {
        sha = value;
        sha.value_namespace = name_space;
        sha.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha")
    {
        sha.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Topology()
    :
    name{YType::str, "name"},
    help{YType::empty, "help"},
    ignore_attached_bit{YType::empty, "ignore-attached-bit"},
    maximum_paths{YType::uint32, "maximum-paths"},
    priority{YType::uint8, "priority"},
    tid{YType::uint32, "tid"}
    	,
    advertise(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Advertise>())
	,default_information(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::DefaultInformation>())
	,ip(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip>())
	,metric(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Metric>())
	,prc_interval(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::PrcInterval>())
	,redistribute(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute>())
	,set_attached_bit(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit>())
	,set_overload_bit(nullptr) // presence node
	,snmp(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp>())
	,spf_interval(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SpfInterval>())
	,traffic_share(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::TrafficShare>())
{
    advertise->parent = this;

    default_information->parent = this;

    ip->parent = this;

    metric->parent = this;

    prc_interval->parent = this;

    redistribute->parent = this;

    set_attached_bit->parent = this;

    snmp->parent = this;

    spf_interval->parent = this;

    traffic_share->parent = this;

    yang_name = "topology"; yang_parent_name = "ipv4";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::~Topology()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::has_data() const
{
    for (std::size_t index=0; index<distance.size(); index++)
    {
        if(distance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<summary_address.size(); index++)
    {
        if(summary_address[index]->has_data())
            return true;
    }
    return name.is_set
	|| help.is_set
	|| ignore_attached_bit.is_set
	|| maximum_paths.is_set
	|| priority.is_set
	|| tid.is_set
	|| (advertise !=  nullptr && advertise->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (prc_interval !=  nullptr && prc_interval->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (set_attached_bit !=  nullptr && set_attached_bit->has_data())
	|| (set_overload_bit !=  nullptr && set_overload_bit->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (spf_interval !=  nullptr && spf_interval->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::has_operation() const
{
    for (std::size_t index=0; index<distance.size(); index++)
    {
        if(distance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<summary_address.size(); index++)
    {
        if(summary_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(help.yfilter)
	|| ydk::is_set(ignore_attached_bit.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(tid.yfilter)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (prc_interval !=  nullptr && prc_interval->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (set_attached_bit !=  nullptr && set_attached_bit->has_operation())
	|| (set_overload_bit !=  nullptr && set_overload_bit->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (spf_interval !=  nullptr && spf_interval->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());
    if (ignore_attached_bit.is_set || is_set(ignore_attached_bit.yfilter)) leaf_name_data.push_back(ignore_attached_bit.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (tid.is_set || is_set(tid.yfilter)) leaf_name_data.push_back(tid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::DefaultInformation>();
        }
        return default_information;
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance>();
        c->parent = this;
        distance.push_back(c);
        return c;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "prc-interval")
    {
        if(prc_interval == nullptr)
        {
            prc_interval = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::PrcInterval>();
        }
        return prc_interval;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "set-attached-bit")
    {
        if(set_attached_bit == nullptr)
        {
            set_attached_bit = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit>();
        }
        return set_attached_bit;
    }

    if(child_yang_name == "set-overload-bit")
    {
        if(set_overload_bit == nullptr)
        {
            set_overload_bit = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit>();
        }
        return set_overload_bit;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "spf-interval")
    {
        if(spf_interval == nullptr)
        {
            spf_interval = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SpfInterval>();
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress>();
        c->parent = this;
        summary_address.push_back(c);
        return c;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::TrafficShare>();
        }
        return traffic_share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    for (auto const & c : distance)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(prc_interval != nullptr)
    {
        children["prc-interval"] = prc_interval;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(set_attached_bit != nullptr)
    {
        children["set-attached-bit"] = set_attached_bit;
    }

    if(set_overload_bit != nullptr)
    {
        children["set-overload-bit"] = set_overload_bit;
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

    if(traffic_share != nullptr)
    {
        children["traffic-share"] = traffic_share;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-attached-bit")
    {
        ignore_attached_bit = value;
        ignore_attached_bit.value_namespace = name_space;
        ignore_attached_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tid")
    {
        tid = value;
        tid.value_namespace = name_space;
        tid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
    if(value_path == "ignore-attached-bit")
    {
        ignore_attached_bit.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "tid")
    {
        tid.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "default-information" || name == "distance" || name == "ip" || name == "metric" || name == "prc-interval" || name == "redistribute" || name == "set-attached-bit" || name == "set-overload-bit" || name == "snmp" || name == "spf-interval" || name == "summary-address" || name == "traffic-share" || name == "name" || name == "help" || name == "ignore-attached-bit" || name == "maximum-paths" || name == "priority" || name == "tid")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::Distance()
    :
    number{YType::uint8, "number"},
    clns{YType::empty, "clns"},
    ip{YType::empty, "ip"}
{
    yang_name = "distance"; yang_parent_name = "topology";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::~Distance()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::has_data() const
{
    for (std::size_t index=0; index<ip_list.size(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return number.is_set
	|| clns.is_set
	|| ip.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::has_operation() const
{
    for (std::size_t index=0; index<ip_list.size(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(clns.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (clns.is_set || is_set(clns.yfilter)) leaf_name_data.push_back(clns.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-list")
    {
        for(auto const & c : ip_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList>();
        c->parent = this;
        ip_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clns")
    {
        clns = value;
        clns.value_namespace = name_space;
        clns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "clns")
    {
        clns.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-list" || name == "number" || name == "clns" || name == "ip")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::IpList()
    :
    ip{YType::str, "ip"}
{
    yang_name = "ip-list"; yang_parent_name = "distance";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::~IpList()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::has_data() const
{
    for (std::size_t index=0; index<wildcard_bits.size(); index++)
    {
        if(wildcard_bits[index]->has_data())
            return true;
    }
    return ip.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::has_operation() const
{
    for (std::size_t index=0; index<wildcard_bits.size(); index++)
    {
        if(wildcard_bits[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-list" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wildcard-bits")
    {
        for(auto const & c : wildcard_bits)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits>();
        c->parent = this;
        wildcard_bits.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : wildcard_bits)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wildcard-bits" || name == "ip")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::WildcardBits()
    :
    w_bits{YType::str, "w-bits"},
    access_list{YType::str, "access-list"}
{
    yang_name = "wildcard-bits"; yang_parent_name = "ip-list";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::~WildcardBits()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::has_data() const
{
    return w_bits.is_set
	|| access_list.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(w_bits.yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wildcard-bits" <<"[w-bits='" <<w_bits <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WildcardBits' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (w_bits.is_set || is_set(w_bits.yfilter)) leaf_name_data.push_back(w_bits.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "w-bits")
    {
        w_bits = value;
        w_bits.value_namespace = name_space;
        w_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "w-bits")
    {
        w_bits.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "w-bits" || name == "access-list")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Ip()
    :
    route(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route>())
{
    route->parent = this;

    yang_name = "ip"; yang_parent_name = "topology";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Route()
    :
    priority(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority>())
{
    priority->parent = this;

    yang_name = "route"; yang_parent_name = "ip";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::~Route()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::Priority()
    :
    high(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High>())
{
    high->parent = this;

    yang_name = "priority"; yang_parent_name = "route";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::~Priority()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::has_data() const
{
    return (high !=  nullptr && high->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::has_operation() const
{
    return is_set(yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::High()
    :
    tag{YType::uint32, "tag"}
{
    yang_name = "high"; yang_parent_name = "priority";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::~High()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::has_data() const
{
    return tag.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Redistribute()
    :
    bgp(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp>())
	,connected(nullptr) // presence node
	,isis(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_>())
	,iso_igrp(nullptr) // presence node
	,lisp(nullptr) // presence node
	,maximum_prefix(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix>())
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
	,vrf(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf>())
{
    bgp->parent = this;

    isis->parent = this;

    maximum_prefix->parent = this;

    vrf->parent = this;

    yang_name = "redistribute"; yang_parent_name = "topology";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::~Redistribute()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
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
    return (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
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
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application>();
        c->parent = this;
        application.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected>();
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr>();
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf>();
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3>();
        c->parent = this;
        ospfv3.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_>();
        }
        return static_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application)
    {
        children[c->get_segment_path()] = c;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
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

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
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

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "maximum-prefix" || name == "mobile" || name == "odr" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static" || name == "vrf")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::Application()
    :
    name{YType::str, "name"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "application"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::~Application()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::has_data() const
{
    return name.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "bgp"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::has_data() const
{
    return as_number.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::get_entity_path(Entity* ancestor) const
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

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::get_children() const
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

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "as-number" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "bgp";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::~Clns()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "bgp";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::Connected()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "connected"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::~Connected()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::uint32, "as-number"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "eigrp"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::has_data() const
{
    return as_number.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::get_entity_path(Entity* ancestor) const
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

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Isis_()
{
    yang_name = "isis"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::~Isis_()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<isis_redistribute.size(); index++)
    {
        if(isis_redistribute[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<isis_redistribute.size(); index++)
    {
        if(isis_redistribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        for(auto const & c : ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    if(child_yang_name == "isis-redistribute")
    {
        for(auto const & c : isis_redistribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute>();
        c->parent = this;
        isis_redistribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : isis_redistribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "isis-redistribute")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::IsisRedistribute()
    :
    area_tag{YType::str, "area-tag"}
    	,
    ip(nullptr) // presence node
{
    yang_name = "isis-redistribute"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::~IsisRedistribute()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::has_data() const
{
    return area_tag.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-redistribute" <<"[area-tag='" <<area_tag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisRedistribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
        area_tag.value_namespace = name_space;
        area_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-tag")
    {
        area_tag.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "area-tag")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis-redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::Ip()
    :
    isis_redist_levels1{YType::enumeration, "isis-redist-levels1"},
    isis_redist_levels2{YType::enumeration, "isis-redist-levels2"},
    distribute_list{YType::uint32, "distribute-list"},
    into{YType::empty, "into"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::has_data() const
{
    return isis_redist_levels1.is_set
	|| isis_redist_levels2.is_set
	|| distribute_list.is_set
	|| into.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_redist_levels1.yfilter)
	|| ydk::is_set(isis_redist_levels2.yfilter)
	|| ydk::is_set(distribute_list.yfilter)
	|| ydk::is_set(into.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[isis-redist-levels1='" <<isis_redist_levels1 <<"']" <<"[isis-redist-levels2='" <<isis_redist_levels2 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::get_entity_path(Entity* ancestor) const
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

    if (isis_redist_levels1.is_set || is_set(isis_redist_levels1.yfilter)) leaf_name_data.push_back(isis_redist_levels1.get_name_leafdata());
    if (isis_redist_levels2.is_set || is_set(isis_redist_levels2.yfilter)) leaf_name_data.push_back(isis_redist_levels2.get_name_leafdata());
    if (distribute_list.is_set || is_set(distribute_list.yfilter)) leaf_name_data.push_back(distribute_list.get_name_leafdata());
    if (into.is_set || is_set(into.yfilter)) leaf_name_data.push_back(into.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-redist-levels1")
    {
        isis_redist_levels1 = value;
        isis_redist_levels1.value_namespace = name_space;
        isis_redist_levels1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-redist-levels2")
    {
        isis_redist_levels2 = value;
        isis_redist_levels2.value_namespace = name_space;
        isis_redist_levels2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distribute-list")
    {
        distribute_list = value;
        distribute_list.value_namespace = name_space;
        distribute_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "into")
    {
        into = value;
        into.value_namespace = name_space;
        into.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-redist-levels1")
    {
        isis_redist_levels1.yfilter = yfilter;
    }
    if(value_path == "isis-redist-levels2")
    {
        isis_redist_levels2.yfilter = yfilter;
    }
    if(value_path == "distribute-list")
    {
        distribute_list.yfilter = yfilter;
    }
    if(value_path == "into")
    {
        into.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-redist-levels1" || name == "isis-redist-levels2" || name == "distribute-list" || name == "into" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::IsoIgrp()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    area_tag_route_map_container(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer>())
{
    area_tag_route_map_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_tag_route_map_container != nullptr)
    {
        children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag-route-map-container" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{
    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_entity_path(Entity* ancestor) const
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

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
        area_tag.value_namespace = name_space;
        area_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-tag")
    {
        area_tag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::Lisp()
    :
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::has_data() const
{
    return include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::get_entity_path(Entity* ancestor) const
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

    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-connected" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"},
    threshold_value{YType::uint32, "threshold-value"},
    warning_only{YType::empty, "warning-only"},
    withdraw{YType::empty, "withdraw"}
{
    yang_name = "maximum-prefix"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::has_data() const
{
    return number.is_set
	|| threshold_value.is_set
	|| warning_only.is_set
	|| withdraw.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(withdraw.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::get_entity_path(Entity* ancestor) const
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
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (withdraw.is_set || is_set(withdraw.yfilter)) leaf_name_data.push_back(withdraw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw")
    {
        withdraw = value;
        withdraw.value_namespace = name_space;
        withdraw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "withdraw")
    {
        withdraw.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "threshold-value" || name == "warning-only" || name == "withdraw")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::Mobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "mobile"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::Odr()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "odr"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::~Odr()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Ospf()
    :
    process_id{YType::uint32, "process-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::~Ospf()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::has_data() const
{
    return process_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[process-id='" <<process_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::get_entity_path(Entity* ancestor) const
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

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "process-id" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map" || name == "vrf")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{
    yang_name = "match"; yang_parent_name = "ospf";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::~Match()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::get_children() const
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

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::Internal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "internal"; yang_parent_name = "match";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "external"; yang_parent_name = "match";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::~External()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::get_entity_path(Entity* ancestor) const
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

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    route_map{YType::str, "route-map"}
{
    yang_name = "nssa-external"; yang_parent_name = "match";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Ospfv3()
    :
    process_id{YType::uint32, "process-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::~Ospfv3()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::has_data() const
{
    return process_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[process-id='" <<process_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::get_entity_path(Entity* ancestor) const
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

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "process-id" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map" || name == "vrf")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{
    yang_name = "match"; yang_parent_name = "ospfv3";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::~Match()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::get_children() const
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

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::Internal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "internal"; yang_parent_name = "match";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::~Internal()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "external"; yang_parent_name = "match";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::~External()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::has_data() const
{
    return external_routes.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::get_entity_path(Entity* ancestor) const
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

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::NssaExternal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    route_map{YType::str, "route-map"}
{
    yang_name = "nssa-external"; yang_parent_name = "match";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "rip"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::~Rip()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Static_()
    :
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "static"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::~Static_()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::has_data() const
{
    return (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::get_children() const
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

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "static";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::~Clns()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "static";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Vrf()
    :
    global(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global>())
{
    global->parent = this;

    yang_name = "vrf"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::~Vrf()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrf_nm.size(); index++)
    {
        if(vrf_nm[index]->has_data())
            return true;
    }
    return (global !=  nullptr && global->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf_nm.size(); index++)
    {
        if(vrf_nm[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global>();
        }
        return global;
    }

    if(child_yang_name == "vrf-nm")
    {
        for(auto const & c : vrf_nm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm>();
        c->parent = this;
        vrf_nm.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    for (auto const & c : vrf_nm)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "vrf-nm")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::VrfNm()
    :
    vrf_nm{YType::str, "vrf-nm"},
    ospf{YType::uint16, "ospf"}
    	,
    application(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application>())
	,bgp(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp>())
	,connected(nullptr) // presence node
	,eigrp(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp>())
	,isis(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_>())
	,iso_igrp(nullptr) // presence node
	,lisp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,ospfv3(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3>())
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
{
    application->parent = this;

    bgp->parent = this;

    eigrp->parent = this;

    isis->parent = this;

    ospfv3->parent = this;

    yang_name = "vrf-nm"; yang_parent_name = "vrf";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::~VrfNm()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::has_data() const
{
    return vrf_nm.is_set
	|| ospf.is_set
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

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_nm.yfilter)
	|| ydk::is_set(ospf.yfilter)
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

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-nm" <<"[vrf-nm='" <<vrf_nm <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_nm.is_set || is_set(vrf_nm.yfilter)) leaf_name_data.push_back(vrf_nm.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::get_children() const
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

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-nm")
    {
        vrf_nm = value;
        vrf_nm.value_namespace = name_space;
        vrf_nm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-nm")
    {
        vrf_nm.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "ospfv3" || name == "rip" || name == "static" || name == "vrf-nm" || name == "ospf")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Application()
{
    yang_name = "application"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::~Application()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::has_data() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::has_operation() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname>();
        c->parent = this;
        appname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : appname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appname")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::Appname()
    :
    appname{YType::str, "appname"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "appname"; yang_parent_name = "application";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::~Appname()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::has_data() const
{
    return appname.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appname.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appname" <<"[appname='" <<appname <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Appname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appname.is_set || is_set(appname.yfilter)) leaf_name_data.push_back(appname.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "appname")
    {
        appname = value;
        appname.value_namespace = name_space;
        appname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "appname")
    {
        appname.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appname" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::Bgp()
    :
    a_lesser_1_period_0_xx_period_yy_greater_{YType::empty, "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_"}
{
    yang_name = "bgp"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::~Bgp()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::has_data() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_data())
            return true;
    }
    return a_lesser_1_period_0_xx_period_yy_greater_.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::has_operation() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(a_lesser_1_period_0_xx_period_yy_greater_.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::get_entity_path(Entity* ancestor) const
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

    if (a_lesser_1_period_0_xx_period_yy_greater_.is_set || is_set(a_lesser_1_period_0_xx_period_yy_greater_.yfilter)) leaf_name_data.push_back(a_lesser_1_period_0_xx_period_yy_greater_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum>();
        c->parent = this;
        bp_as_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bp_as_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_ = value;
        a_lesser_1_period_0_xx_period_yy_greater_.value_namespace = name_space;
        a_lesser_1_period_0_xx_period_yy_greater_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bp-as-num" || name == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::BpAsNum()
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

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::~BpAsNum()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::has_data() const
{
    return bp_as_num.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bp_as_num.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp-as-num" <<"[bp-as-num='" <<bp_as_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BpAsNum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bp_as_num.is_set || is_set(bp_as_num.yfilter)) leaf_name_data.push_back(bp_as_num.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_children() const
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

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num = value;
        bp_as_num.value_namespace = name_space;
        bp_as_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "bp-as-num" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "bp-as-num";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::~Clns()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "bp-as-num";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::Connected()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "connected"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::~Connected()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::Eigrp()
{
    yang_name = "eigrp"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::~Eigrp()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::has_data() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs>();
        c->parent = this;
        eigrp_as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp_as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-as")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::EigrpAs()
    :
    eigrp_as{YType::uint16, "eigrp-as"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "eigrp-as"; yang_parent_name = "eigrp";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::~EigrpAs()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::has_data() const
{
    return eigrp_as.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp_as.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-as" <<"[eigrp-as='" <<eigrp_as <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EigrpAs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp_as.is_set || is_set(eigrp_as.yfilter)) leaf_name_data.push_back(eigrp_as.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as = value;
        eigrp_as.value_namespace = name_space;
        eigrp_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-as" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Isis_()
    :
    ip(nullptr) // presence node
{
    yang_name = "isis"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::~Isis_()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::has_data() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_data())
            return true;
    }
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::has_operation() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip>();
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag>();
        c->parent = this;
        isis_atag.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::get_children() const
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

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "isis-atag")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::IsisAtag()
    :
    isis_atag{YType::str, "isis-atag"}
    	,
    ip(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip>())
{
    ip->parent = this;

    yang_name = "isis-atag"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::~IsisAtag()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::has_data() const
{
    return isis_atag.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_atag.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-atag" <<"[isis-atag='" <<isis_atag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisAtag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_atag.is_set || is_set(isis_atag.yfilter)) leaf_name_data.push_back(isis_atag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-atag")
    {
        isis_atag = value;
        isis_atag.value_namespace = name_space;
        isis_atag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-atag")
    {
        isis_atag.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "isis-atag")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis-atag";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoIgrp()
    :
    route_map(nullptr) // presence node
{
    yang_name = "iso-igrp"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_data())
            return true;
    }
    return (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag>();
        c->parent = this;
        iso_atag.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::get_children() const
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

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iso-atag" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::IsoAtag()
    :
    iso_atag{YType::str, "iso-atag"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "iso-atag"; yang_parent_name = "iso-igrp";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::~IsoAtag()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::has_data() const
{
    return iso_atag.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iso_atag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-atag" <<"[iso-atag='" <<iso_atag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_entity_path(Entity* ancestor) const
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

    if (iso_atag.is_set || is_set(iso_atag.yfilter)) leaf_name_data.push_back(iso_atag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iso-atag")
    {
        iso_atag = value;
        iso_atag.value_namespace = name_space;
        iso_atag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iso-atag")
    {
        iso_atag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iso-atag" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::RouteMap()
    :
    rm_point{YType::str, "rm-point"}
{
    yang_name = "route-map"; yang_parent_name = "iso-igrp";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::~RouteMap()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::has_data() const
{
    return rm_point.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rm_point.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_entity_path(Entity* ancestor) const
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

    if (rm_point.is_set || is_set(rm_point.yfilter)) leaf_name_data.push_back(rm_point.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rm-point")
    {
        rm_point = value;
        rm_point.value_namespace = name_space;
        rm_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rm-point")
    {
        rm_point.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rm-point")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::Lisp()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::~Lisp()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::Mobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "mobile"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::~Mobile()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Ospfv3()
{
    yang_name = "ospfv3"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::~Ospfv3()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::has_data() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id>();
        c->parent = this;
        os3_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : os3_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os3-id")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::Os3Id()
    :
    os3_id{YType::uint16, "os3-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "os3-id"; yang_parent_name = "ospfv3";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::~Os3Id()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::has_data() const
{
    return os3_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(os3_id.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os3-id" <<"[os3-id='" <<os3_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_entity_path(Entity* ancestor) const
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

    if (os3_id.is_set || is_set(os3_id.yfilter)) leaf_name_data.push_back(os3_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "os3-id")
    {
        os3_id = value;
        os3_id.value_namespace = name_space;
        os3_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "os3-id")
    {
        os3_id.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os3-id" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "rip"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::~Rip()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Static_()
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

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::~Static_()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::get_children() const
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

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "static";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::~Clns()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "static";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Global()
    :
    ospf{YType::uint16, "ospf"}
    	,
    application(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application>())
	,bgp(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp>())
	,connected(nullptr) // presence node
	,eigrp(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp>())
	,isis(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_>())
	,iso_igrp(nullptr) // presence node
	,lisp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,ospfv3(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3>())
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

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::~Global()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::has_data() const
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

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospf.yfilter)
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

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::get_entity_path(Entity* ancestor) const
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

    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::get_children() const
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

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "ospfv3" || name == "rip" || name == "static" || name == "ospf")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Application()
{
    yang_name = "application"; yang_parent_name = "global";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::~Application()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::has_data() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::has_operation() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname>();
        c->parent = this;
        appname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : appname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appname")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::Appname()
    :
    appname{YType::str, "appname"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "appname"; yang_parent_name = "application";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::~Appname()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::has_data() const
{
    return appname.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appname.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appname" <<"[appname='" <<appname <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Appname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appname.is_set || is_set(appname.yfilter)) leaf_name_data.push_back(appname.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "appname")
    {
        appname = value;
        appname.value_namespace = name_space;
        appname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "appname")
    {
        appname.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appname" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::Bgp()
    :
    a_lesser_1_period_0_xx_period_yy_greater_{YType::empty, "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_"}
{
    yang_name = "bgp"; yang_parent_name = "global";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::~Bgp()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::has_data() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_data())
            return true;
    }
    return a_lesser_1_period_0_xx_period_yy_greater_.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::has_operation() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(a_lesser_1_period_0_xx_period_yy_greater_.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::get_entity_path(Entity* ancestor) const
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

    if (a_lesser_1_period_0_xx_period_yy_greater_.is_set || is_set(a_lesser_1_period_0_xx_period_yy_greater_.yfilter)) leaf_name_data.push_back(a_lesser_1_period_0_xx_period_yy_greater_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum>();
        c->parent = this;
        bp_as_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bp_as_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_ = value;
        a_lesser_1_period_0_xx_period_yy_greater_.value_namespace = name_space;
        a_lesser_1_period_0_xx_period_yy_greater_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bp-as-num" || name == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::BpAsNum()
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

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::~BpAsNum()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::has_data() const
{
    return bp_as_num.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bp_as_num.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp-as-num" <<"[bp-as-num='" <<bp_as_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BpAsNum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bp_as_num.is_set || is_set(bp_as_num.yfilter)) leaf_name_data.push_back(bp_as_num.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::get_children() const
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

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num = value;
        bp_as_num.value_namespace = name_space;
        bp_as_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "bp-as-num" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "bp-as-num";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::~Clns()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "bp-as-num";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::Connected()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "connected"; yang_parent_name = "global";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::~Connected()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::Eigrp()
{
    yang_name = "eigrp"; yang_parent_name = "global";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::~Eigrp()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::has_data() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs>();
        c->parent = this;
        eigrp_as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp_as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-as")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::EigrpAs()
    :
    eigrp_as{YType::uint16, "eigrp-as"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "eigrp-as"; yang_parent_name = "eigrp";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::~EigrpAs()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::has_data() const
{
    return eigrp_as.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp_as.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-as" <<"[eigrp-as='" <<eigrp_as <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EigrpAs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp_as.is_set || is_set(eigrp_as.yfilter)) leaf_name_data.push_back(eigrp_as.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as = value;
        eigrp_as.value_namespace = name_space;
        eigrp_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-as" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Isis_()
    :
    ip(nullptr) // presence node
{
    yang_name = "isis"; yang_parent_name = "global";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::~Isis_()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::has_data() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_data())
            return true;
    }
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::has_operation() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip>();
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
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag>();
        c->parent = this;
        isis_atag.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::get_children() const
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

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "isis-atag")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::IsisAtag()
    :
    isis_atag{YType::str, "isis-atag"}
    	,
    ip(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip>())
{
    ip->parent = this;

    yang_name = "isis-atag"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::~IsisAtag()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::has_data() const
{
    return isis_atag.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_atag.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-atag" <<"[isis-atag='" <<isis_atag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisAtag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_atag.is_set || is_set(isis_atag.yfilter)) leaf_name_data.push_back(isis_atag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-atag")
    {
        isis_atag = value;
        isis_atag.value_namespace = name_space;
        isis_atag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-atag")
    {
        isis_atag.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "isis-atag")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis-atag";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Isis::Hello::Padding::PadType::multi_point {0, "multi-point"};
const Enum::YLeaf Native::Router::Isis::Hello::Padding::PadType::point_to_point {1, "point-to-point"};

const Enum::YLeaf Native::Router::Isis::Ispf::Level::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::Ispf::Level::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Router::Isis::Ispf::Level::level_2 {2, "level-2"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::IsType::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::IsType::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::IsType::level_2_only {2, "level-2-only"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::UnicastMulticast::unicast {0, "unicast"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::UnicastMulticast::multicast {1, "multicast"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels1::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels1::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels2::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels2::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};


}
}

