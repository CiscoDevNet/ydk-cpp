
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_85.hpp"
#include "Cisco_IOS_XE_native_86.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::BfdReversePath()
    :
    binding_label{YType::uint32, "binding-label"}
{

    yang_name = "bfd-reverse-path"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::~BfdReversePath()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::has_data() const
{
    return binding_label.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(binding_label.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-label")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::Lockdown()
    :
    sticky{YType::empty, "sticky"}
{

    yang_name = "lockdown"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::~Lockdown()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::has_data() const
{
    return sticky.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sticky.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lockdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sticky")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::PathSelection()
    :
    metric{YType::enumeration, "metric"}
    	,
    invalidation(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation>())
	,segment_routing(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting>())
{
    invalidation->parent = this;
    segment_routing->parent = this;

    yang_name = "path-selection"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::~PathSelection()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::has_data() const
{
    return metric.is_set
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::get_children() const
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

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "segment-routing" || name == "metric")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::Invalidation()
    :
    drop{YType::empty, "drop"},
    value_{YType::int32, "value"}
{

    yang_name = "invalidation"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::~Invalidation()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::has_data() const
{
    return drop.is_set
	|| value_.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop" || name == "value")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::SegmentRouting()
    :
    adjacency{YType::enumeration, "adjacency"}
{

    yang_name = "segment-routing"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::~SegmentRouting()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::has_data() const
{
    return adjacency.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency.is_set || is_set(adjacency.yfilter)) leaf_name_data.push_back(adjacency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency")
    {
        adjacency = value;
        adjacency.value_namespace = name_space;
        adjacency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency")
    {
        adjacency.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::Pce()
    :
    disjoint_path(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath>())
{
    disjoint_path->parent = this;

    yang_name = "pce"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::~Pce()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::has_data() const
{
    return (disjoint_path !=  nullptr && disjoint_path->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::has_operation() const
{
    return is_set(yfilter)
	|| (disjoint_path !=  nullptr && disjoint_path->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disjoint-path")
    {
        if(disjoint_path == nullptr)
        {
            disjoint_path = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath>();
        }
        return disjoint_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disjoint_path != nullptr)
    {
        children["disjoint-path"] = disjoint_path;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disjoint-path")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::DisjointPath()
    :
    group_id{YType::uint32, "group-id"},
    source{YType::str, "source"},
    type{YType::enumeration, "type"}
{

    yang_name = "disjoint-path"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::~DisjointPath()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::has_data() const
{
    return group_id.is_set
	|| source.is_set
	|| type.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disjoint-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id" || name == "source" || name == "type")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::Priority()
    :
    hold_priority{YType::uint8, "hold-priority"},
    setup_priority{YType::uint8, "setup-priority"}
{

    yang_name = "priority"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::~Priority()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(setup_priority.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "setup-priority")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::Protection()
    :
    fast_reroute(nullptr) // presence node
{

    yang_name = "protection"; yang_parent_name = "mpls-te-mode-config-lsp-attr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::~Protection()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::has_data() const
{
    return (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::has_operation() const
{
    return is_set(yfilter)
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-reroute")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::FastReroute()
    :
    bw_protect{YType::empty, "bw-protect"}
{

    yang_name = "fast-reroute"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::~FastReroute()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::has_data() const
{
    return bw_protect.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw_protect.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_protect.is_set || is_set(bw_protect.yfilter)) leaf_name_data.push_back(bw_protect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw-protect")
    {
        bw_protect = value;
        bw_protect.value_namespace = name_space;
        bw_protect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw-protect")
    {
        bw_protect.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-protect")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::PathOption()
    :
    list(std::make_shared<Native::Mpls::TrafficEng::PathOption::List>())
{
    list->parent = this;

    yang_name = "path-option"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::PathOption::~PathOption()
{
}

bool Native::Mpls::TrafficEng::PathOption::has_data() const
{
    return (list !=  nullptr && list->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Mpls::TrafficEng::PathOption::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::List()
{

    yang_name = "list"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::PathOption::List::~List()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::has_data() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::PathOption::List::has_operation() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-option/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathOption::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        for(auto const & c : identifier)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier>();
        c->parent = this;
        identifier.push_back(c);
        return c;
    }

    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : identifier)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathOption::List::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathOption::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::Identifier()
    :
    pol_num{YType::uint16, "pol-num"}
{

    yang_name = "identifier"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::~Identifier()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return pol_num.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pol_num.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-option/list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier" <<"[pol-num='" <<pol_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pol_num.is_set || is_set(pol_num.yfilter)) leaf_name_data.push_back(pol_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_>();
        c->parent = this;
        path_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pol-num")
    {
        pol_num = value;
        pol_num.value_namespace = name_space;
        pol_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pol-num")
    {
        pol_num.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option" || name == "pol-num")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::PathOption_()
    :
    po_num{YType::uint16, "po-num"}
    	,
    explicit_(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_>())
{
    explicit_->parent = this;

    yang_name = "path-option"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::~PathOption_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::has_data() const
{
    return po_num.is_set
	|| (explicit_ !=  nullptr && explicit_->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(po_num.yfilter)
	|| (explicit_ !=  nullptr && explicit_->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option" <<"[po-num='" <<po_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (po_num.is_set || is_set(po_num.yfilter)) leaf_name_data.push_back(po_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit")
    {
        if(explicit_ == nullptr)
        {
            explicit_ = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_>();
        }
        return explicit_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(explicit_ != nullptr)
    {
        children["explicit"] = explicit_;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "po-num")
    {
        po_num = value;
        po_num.value_namespace = name_space;
        po_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "po-num")
    {
        po_num.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit" || name == "po-num")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Explicit_()
    :
    identifier(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_>())
	,name(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name>())
{
    identifier->parent = this;
    name->parent = this;

    yang_name = "explicit"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::~Explicit_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::has_data() const
{
    return (identifier !=  nullptr && identifier->has_data())
	|| (name !=  nullptr && name->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::has_operation() const
{
    return is_set(yfilter)
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (name !=  nullptr && name->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_>();
        }
        return identifier;
    }

    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name>();
        }
        return name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(name != nullptr)
    {
        children["name"] = name;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::Identifier_()
    :
    pnum{YType::uint16, "pnum"},
    verbatim{YType::empty, "verbatim"}
{

    yang_name = "identifier"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::~Identifier_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::has_data() const
{
    return pnum.is_set
	|| verbatim.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pnum.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pnum.is_set || is_set(pnum.yfilter)) leaf_name_data.push_back(pnum.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pnum")
    {
        pnum = value;
        pnum.value_namespace = name_space;
        pnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pnum")
    {
        pnum.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pnum" || name == "verbatim")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::Name()
    :
    pname{YType::str, "pname"},
    verbatim{YType::empty, "verbatim"}
{

    yang_name = "name"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::~Name()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::has_data() const
{
    return pname.is_set
	|| verbatim.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pname.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pname.is_set || is_set(pname.yfilter)) leaf_name_data.push_back(pname.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pname")
    {
        pname = value;
        pname.value_namespace = name_space;
        pname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pname")
    {
        pname.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pname" || name == "verbatim")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::Name()
    :
    pol_name{YType::str, "pol-name"}
{

    yang_name = "name"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::~Name()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return pol_name.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pol_name.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-option/list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[pol-name='" <<pol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pol_name.is_set || is_set(pol_name.yfilter)) leaf_name_data.push_back(pol_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_>();
        c->parent = this;
        path_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pol-name")
    {
        pol_name = value;
        pol_name.value_namespace = name_space;
        pol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pol-name")
    {
        pol_name.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option" || name == "pol-name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::PathOption_()
    :
    po_num{YType::uint16, "po-num"}
    	,
    explicit_(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_>())
{
    explicit_->parent = this;

    yang_name = "path-option"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::~PathOption_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::has_data() const
{
    return po_num.is_set
	|| (explicit_ !=  nullptr && explicit_->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(po_num.yfilter)
	|| (explicit_ !=  nullptr && explicit_->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option" <<"[po-num='" <<po_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (po_num.is_set || is_set(po_num.yfilter)) leaf_name_data.push_back(po_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit")
    {
        if(explicit_ == nullptr)
        {
            explicit_ = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_>();
        }
        return explicit_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(explicit_ != nullptr)
    {
        children["explicit"] = explicit_;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "po-num")
    {
        po_num = value;
        po_num.value_namespace = name_space;
        po_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "po-num")
    {
        po_num.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit" || name == "po-num")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Explicit_()
    :
    identifier(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier>())
	,name(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_>())
{
    identifier->parent = this;
    name->parent = this;

    yang_name = "explicit"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::~Explicit_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::has_data() const
{
    return (identifier !=  nullptr && identifier->has_data())
	|| (name !=  nullptr && name->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::has_operation() const
{
    return is_set(yfilter)
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (name !=  nullptr && name->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_>();
        }
        return name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(name != nullptr)
    {
        children["name"] = name;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::Identifier()
    :
    pnum{YType::uint16, "pnum"},
    verbatim{YType::empty, "verbatim"}
{

    yang_name = "identifier"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::~Identifier()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::has_data() const
{
    return pnum.is_set
	|| verbatim.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pnum.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pnum.is_set || is_set(pnum.yfilter)) leaf_name_data.push_back(pnum.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pnum")
    {
        pnum = value;
        pnum.value_namespace = name_space;
        pnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pnum")
    {
        pnum.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pnum" || name == "verbatim")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::Name_()
    :
    pname{YType::str, "pname"},
    verbatim{YType::empty, "verbatim"}
{

    yang_name = "name"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::~Name_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::has_data() const
{
    return pname.is_set
	|| verbatim.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pname.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pname.is_set || is_set(pname.yfilter)) leaf_name_data.push_back(pname.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pname")
    {
        pname = value;
        pname.value_namespace = name_space;
        pname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pname")
    {
        pname.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pname" || name == "verbatim")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathSelection::PathSelection()
    :
    metric{YType::enumeration, "metric"},
    tiebreaker{YType::enumeration, "tiebreaker"}
    	,
    invalidation(std::make_shared<Native::Mpls::TrafficEng::PathSelection::Invalidation>())
	,overload(std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload>())
{
    invalidation->parent = this;
    overload->parent = this;

    yang_name = "path-selection"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::PathSelection::~PathSelection()
{
}

bool Native::Mpls::TrafficEng::PathSelection::has_data() const
{
    return metric.is_set
	|| tiebreaker.is_set
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (overload !=  nullptr && overload->has_data());
}

bool Native::Mpls::TrafficEng::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (overload !=  nullptr && overload->has_operation());
}

std::string Native::Mpls::TrafficEng::PathSelection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<Native::Mpls::TrafficEng::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    if(child_yang_name == "overload")
    {
        if(overload == nullptr)
        {
            overload = std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload>();
        }
        return overload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    if(overload != nullptr)
    {
        children["overload"] = overload;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Mpls::TrafficEng::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "overload" || name == "metric" || name == "tiebreaker")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathSelection::Invalidation::Invalidation()
    :
    drop{YType::empty, "drop"},
    value_{YType::int32, "value"}
{

    yang_name = "invalidation"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::PathSelection::Invalidation::~Invalidation()
{
}

bool Native::Mpls::TrafficEng::PathSelection::Invalidation::has_data() const
{
    return drop.is_set
	|| value_.is_set;
}

bool Native::Mpls::TrafficEng::PathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Mpls::TrafficEng::PathSelection::Invalidation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-selection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Mpls::TrafficEng::PathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Mpls::TrafficEng::PathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop" || name == "value")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathSelection::Overload::Overload()
    :
    allow(std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload::Allow>())
{
    allow->parent = this;

    yang_name = "overload"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::PathSelection::Overload::~Overload()
{
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::has_data() const
{
    return (allow !=  nullptr && allow->has_data());
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::has_operation() const
{
    return is_set(yfilter)
	|| (allow !=  nullptr && allow->has_operation());
}

std::string Native::Mpls::TrafficEng::PathSelection::Overload::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-selection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathSelection::Overload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathSelection::Overload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathSelection::Overload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload::Allow>();
        }
        return allow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathSelection::Overload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allow != nullptr)
    {
        children["allow"] = allow;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathSelection::Overload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathSelection::Overload::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathSelection::Overload::Allow::Allow()
    :
    head{YType::empty, "head"},
    middle{YType::empty, "middle"},
    tail{YType::empty, "tail"}
{

    yang_name = "allow"; yang_parent_name = "overload"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::PathSelection::Overload::Allow::~Allow()
{
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::Allow::has_data() const
{
    return head.is_set
	|| middle.is_set
	|| tail.is_set;
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::Allow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(head.yfilter)
	|| ydk::is_set(middle.yfilter)
	|| ydk::is_set(tail.yfilter);
}

std::string Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-selection/overload/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (head.is_set || is_set(head.yfilter)) leaf_name_data.push_back(head.get_name_leafdata());
    if (middle.is_set || is_set(middle.yfilter)) leaf_name_data.push_back(middle.get_name_leafdata());
    if (tail.is_set || is_set(tail.yfilter)) leaf_name_data.push_back(tail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathSelection::Overload::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "head")
    {
        head = value;
        head.value_namespace = name_space;
        head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "middle")
    {
        middle = value;
        middle.value_namespace = name_space;
        middle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail")
    {
        tail = value;
        tail.value_namespace = name_space;
        tail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathSelection::Overload::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "head")
    {
        head.yfilter = yfilter;
    }
    if(value_path == "middle")
    {
        middle.yfilter = yfilter;
    }
    if(value_path == "tail")
    {
        tail.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "middle" || name == "tail")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Pcc::Pcc()
    :
    report_all{YType::empty, "report-all"}
    	,
    peer(std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer>())
{
    peer->parent = this;

    yang_name = "pcc"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Pcc::~Pcc()
{
}

bool Native::Mpls::TrafficEng::Pcc::has_data() const
{
    return report_all.is_set
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Mpls::TrafficEng::Pcc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(report_all.yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Mpls::TrafficEng::Pcc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Pcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Pcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (report_all.is_set || is_set(report_all.yfilter)) leaf_name_data.push_back(report_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Pcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Pcc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Mpls::TrafficEng::Pcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "report-all")
    {
        report_all = value;
        report_all.value_namespace = name_space;
        report_all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Pcc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "report-all")
    {
        report_all.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Pcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "report-all")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Pcc::Peer::Peer()
{

    yang_name = "peer"; yang_parent_name = "pcc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Pcc::Peer::~Peer()
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::Pcc::Peer::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/pcc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Pcc::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Pcc::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Pcc::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::Pcc::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Pcc::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    keychain{YType::str, "keychain"},
    precedence{YType::uint8, "precedence"},
    source{YType::str, "source"}
    	,
    password(std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password>())
{
    password->parent = this;

    yang_name = "ipv4"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::~Ipv4()
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::has_data() const
{
    return ipv4.is_set
	|| keychain.is_set
	|| precedence.is_set
	|| source.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(keychain.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(source.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/pcc/peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "ipv4" || name == "keychain" || name == "precedence" || name == "source")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::Password()
    :
    clear{YType::str, "clear"},
    encrypted{YType::str, "encrypted"}
{

    yang_name = "password"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::~Password()
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::has_data() const
{
    return clear.is_set
	|| encrypted.is_set;
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clear.yfilter)
	|| ydk::is_set(encrypted.yfilter);
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear.is_set || is_set(clear.yfilter)) leaf_name_data.push_back(clear.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear")
    {
        clear = value;
        clear.value_namespace = name_space;
        clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
        encrypted.value_namespace = name_space;
        encrypted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear")
    {
        clear.yfilter = yfilter;
    }
    if(value_path == "encrypted")
    {
        encrypted.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear" || name == "encrypted")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Reoptimize::Reoptimize()
    :
    events(std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Events>())
	,timers(std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers>())
{
    events->parent = this;
    timers->parent = this;

    yang_name = "reoptimize"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Reoptimize::~Reoptimize()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::has_data() const
{
    return (events !=  nullptr && events->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::TrafficEng::Reoptimize::has_operation() const
{
    return is_set(yfilter)
	|| (events !=  nullptr && events->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::TrafficEng::Reoptimize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Reoptimize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reoptimize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Reoptimize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Reoptimize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events")
    {
        if(events == nullptr)
        {
            events = std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Events>();
        }
        return events;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Reoptimize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events != nullptr)
    {
        children["events"] = events;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Mpls::TrafficEng::Reoptimize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Reoptimize::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Reoptimize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events" || name == "timers")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Reoptimize::Events::Events()
    :
    link_up{YType::empty, "link-up"}
{

    yang_name = "events"; yang_parent_name = "reoptimize"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Reoptimize::Events::~Events()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::Events::has_data() const
{
    return link_up.is_set;
}

bool Native::Mpls::TrafficEng::Reoptimize::Events::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_up.yfilter);
}

std::string Native::Mpls::TrafficEng::Reoptimize::Events::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/reoptimize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Reoptimize::Events::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Reoptimize::Events::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_up.is_set || is_set(link_up.yfilter)) leaf_name_data.push_back(link_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Reoptimize::Events::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Reoptimize::Events::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Reoptimize::Events::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-up")
    {
        link_up = value;
        link_up.value_namespace = name_space;
        link_up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Reoptimize::Events::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-up")
    {
        link_up.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Reoptimize::Events::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-up")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Reoptimize::Timers::Timers()
    :
    frequency{YType::uint32, "frequency"}
    	,
    delay(std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers::Delay>())
{
    delay->parent = this;

    yang_name = "timers"; yang_parent_name = "reoptimize"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Reoptimize::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::has_data() const
{
    return frequency.is_set
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Mpls::TrafficEng::Reoptimize::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/reoptimize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Reoptimize::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Reoptimize::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Reoptimize::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Reoptimize::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "frequency")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::Delay()
    :
    after_frr{YType::uint8, "after-frr"},
    cleanup{YType::uint8, "cleanup"},
    installation{YType::uint16, "installation"}
{

    yang_name = "delay"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::~Delay()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::has_data() const
{
    return after_frr.is_set
	|| cleanup.is_set
	|| installation.is_set;
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(after_frr.yfilter)
	|| ydk::is_set(cleanup.yfilter)
	|| ydk::is_set(installation.yfilter);
}

std::string Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/reoptimize/timers/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (after_frr.is_set || is_set(after_frr.yfilter)) leaf_name_data.push_back(after_frr.get_name_leafdata());
    if (cleanup.is_set || is_set(cleanup.yfilter)) leaf_name_data.push_back(cleanup.get_name_leafdata());
    if (installation.is_set || is_set(installation.yfilter)) leaf_name_data.push_back(installation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "after-frr")
    {
        after_frr = value;
        after_frr.value_namespace = name_space;
        after_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup")
    {
        cleanup = value;
        cleanup.value_namespace = name_space;
        cleanup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "installation")
    {
        installation = value;
        installation.value_namespace = name_space;
        installation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "after-frr")
    {
        after_frr.yfilter = yfilter;
    }
    if(value_path == "cleanup")
    {
        cleanup.yfilter = yfilter;
    }
    if(value_path == "installation")
    {
        installation.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "after-frr" || name == "cleanup" || name == "installation")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Signalling::Signalling()
    :
    advertise(std::make_shared<Native::Mpls::TrafficEng::Signalling::Advertise>())
	,forwarding(std::make_shared<Native::Mpls::TrafficEng::Signalling::Forwarding>())
{
    advertise->parent = this;
    forwarding->parent = this;

    yang_name = "signalling"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Signalling::~Signalling()
{
}

bool Native::Mpls::TrafficEng::Signalling::has_data() const
{
    return (advertise !=  nullptr && advertise->has_data())
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool Native::Mpls::TrafficEng::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string Native::Mpls::TrafficEng::Signalling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Signalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Mpls::TrafficEng::Signalling::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Mpls::TrafficEng::Signalling::Forwarding>();
        }
        return forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(forwarding != nullptr)
    {
        children["forwarding"] = forwarding;
    }

    return children;
}

void Native::Mpls::TrafficEng::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "forwarding")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Signalling::Advertise::Advertise()
    :
    explicit_null(nullptr) // presence node
{

    yang_name = "advertise"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Signalling::Advertise::~Advertise()
{
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::has_data() const
{
    return (explicit_null !=  nullptr && explicit_null->has_data());
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| (explicit_null !=  nullptr && explicit_null->has_operation());
}

std::string Native::Mpls::TrafficEng::Signalling::Advertise::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Signalling::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Signalling::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit-null")
    {
        if(explicit_null == nullptr)
        {
            explicit_null = std::make_shared<Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull>();
        }
        return explicit_null;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(explicit_null != nullptr)
    {
        children["explicit-null"] = explicit_null;
    }

    return children;
}

void Native::Mpls::TrafficEng::Signalling::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Signalling::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::ExplicitNull()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "explicit-null"; yang_parent_name = "advertise"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::~ExplicitNull()
{
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/signalling/advertise/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-null";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Signalling::Forwarding::Forwarding()
    :
    sync{YType::empty, "sync"}
{

    yang_name = "forwarding"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Signalling::Forwarding::~Forwarding()
{
}

bool Native::Mpls::TrafficEng::Signalling::Forwarding::has_data() const
{
    return sync.is_set;
}

bool Native::Mpls::TrafficEng::Signalling::Forwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync.yfilter);
}

std::string Native::Mpls::TrafficEng::Signalling::Forwarding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Signalling::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Signalling::Forwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync.is_set || is_set(sync.yfilter)) leaf_name_data.push_back(sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Signalling::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync")
    {
        sync = value;
        sync.value_namespace = name_space;
        sync.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Signalling::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync")
    {
        sync.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Signalling::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Topology::Topology()
    :
    holddown(std::make_shared<Native::Mpls::TrafficEng::Topology::Holddown>())
	,mesh_group(std::make_shared<Native::Mpls::TrafficEng::Topology::MeshGroup>())
{
    holddown->parent = this;
    mesh_group->parent = this;

    yang_name = "topology"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Topology::~Topology()
{
}

bool Native::Mpls::TrafficEng::Topology::has_data() const
{
    return (holddown !=  nullptr && holddown->has_data())
	|| (mesh_group !=  nullptr && mesh_group->has_data());
}

bool Native::Mpls::TrafficEng::Topology::has_operation() const
{
    return is_set(yfilter)
	|| (holddown !=  nullptr && holddown->has_operation())
	|| (mesh_group !=  nullptr && mesh_group->has_operation());
}

std::string Native::Mpls::TrafficEng::Topology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "holddown")
    {
        if(holddown == nullptr)
        {
            holddown = std::make_shared<Native::Mpls::TrafficEng::Topology::Holddown>();
        }
        return holddown;
    }

    if(child_yang_name == "mesh-group")
    {
        if(mesh_group == nullptr)
        {
            mesh_group = std::make_shared<Native::Mpls::TrafficEng::Topology::MeshGroup>();
        }
        return mesh_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(holddown != nullptr)
    {
        children["holddown"] = holddown;
    }

    if(mesh_group != nullptr)
    {
        children["mesh-group"] = mesh_group;
    }

    return children;
}

void Native::Mpls::TrafficEng::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holddown" || name == "mesh-group")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Topology::Holddown::Holddown()
    :
    sigerr{YType::uint16, "sigerr"}
{

    yang_name = "holddown"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Topology::Holddown::~Holddown()
{
}

bool Native::Mpls::TrafficEng::Topology::Holddown::has_data() const
{
    return sigerr.is_set;
}

bool Native::Mpls::TrafficEng::Topology::Holddown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sigerr.yfilter);
}

std::string Native::Mpls::TrafficEng::Topology::Holddown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Topology::Holddown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "holddown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Topology::Holddown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sigerr.is_set || is_set(sigerr.yfilter)) leaf_name_data.push_back(sigerr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Topology::Holddown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Topology::Holddown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Topology::Holddown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sigerr")
    {
        sigerr = value;
        sigerr.value_namespace = name_space;
        sigerr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Topology::Holddown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sigerr")
    {
        sigerr.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Topology::Holddown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sigerr")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Topology::MeshGroup::MeshGroup()
    :
    accept_domain{YType::empty, "accept-domain"}
{

    yang_name = "mesh-group"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Topology::MeshGroup::~MeshGroup()
{
}

bool Native::Mpls::TrafficEng::Topology::MeshGroup::has_data() const
{
    return accept_domain.is_set;
}

bool Native::Mpls::TrafficEng::Topology::MeshGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_domain.yfilter);
}

std::string Native::Mpls::TrafficEng::Topology::MeshGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Topology::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Topology::MeshGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_domain.is_set || is_set(accept_domain.yfilter)) leaf_name_data.push_back(accept_domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Topology::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Topology::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Topology::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-domain")
    {
        accept_domain = value;
        accept_domain.value_namespace = name_space;
        accept_domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Topology::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-domain")
    {
        accept_domain.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Topology::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-domain")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Trace::Trace()
    :
    buffer_size(std::make_shared<Native::Mpls::TrafficEng::Trace::BufferSize>())
{
    buffer_size->parent = this;

    yang_name = "trace"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Trace::~Trace()
{
}

bool Native::Mpls::TrafficEng::Trace::has_data() const
{
    return (buffer_size !=  nullptr && buffer_size->has_data());
}

bool Native::Mpls::TrafficEng::Trace::has_operation() const
{
    return is_set(yfilter)
	|| (buffer_size !=  nullptr && buffer_size->has_operation());
}

std::string Native::Mpls::TrafficEng::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buffer-size")
    {
        if(buffer_size == nullptr)
        {
            buffer_size = std::make_shared<Native::Mpls::TrafficEng::Trace::BufferSize>();
        }
        return buffer_size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(buffer_size != nullptr)
    {
        children["buffer-size"] = buffer_size;
    }

    return children;
}

void Native::Mpls::TrafficEng::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buffer-size")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Trace::BufferSize::BufferSize()
    :
    error{YType::uint16, "error"},
    event{YType::uint16, "event"},
    warning{YType::uint8, "warning"}
{

    yang_name = "buffer-size"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::TrafficEng::Trace::BufferSize::~BufferSize()
{
}

bool Native::Mpls::TrafficEng::Trace::BufferSize::has_data() const
{
    return error.is_set
	|| event.is_set
	|| warning.is_set;
}

bool Native::Mpls::TrafficEng::Trace::BufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(event.yfilter)
	|| ydk::is_set(warning.yfilter);
}

std::string Native::Mpls::TrafficEng::Trace::BufferSize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/trace/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::TrafficEng::Trace::BufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::TrafficEng::Trace::BufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (event.is_set || is_set(event.yfilter)) leaf_name_data.push_back(event.get_name_leafdata());
    if (warning.is_set || is_set(warning.yfilter)) leaf_name_data.push_back(warning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Trace::BufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Trace::BufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Trace::BufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event")
    {
        event = value;
        event.value_namespace = name_space;
        event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning")
    {
        warning = value;
        warning.value_namespace = name_space;
        warning.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Trace::BufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "event")
    {
        event.yfilter = yfilter;
    }
    if(value_path == "warning")
    {
        warning.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Trace::BufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "event" || name == "warning")
        return true;
    return false;
}

Native::Multilink::Multilink()
    :
    bundle_name{YType::enumeration, "Cisco-IOS-XE-ppp:bundle-name"},
    virtual_template{YType::uint16, "Cisco-IOS-XE-ppp:virtual-template"}
{

    yang_name = "multilink"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Multilink::~Multilink()
{
}

bool Native::Multilink::has_data() const
{
    return bundle_name.is_set
	|| virtual_template.is_set;
}

bool Native::Multilink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(virtual_template.yfilter);
}

std::string Native::Multilink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Multilink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multilink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Multilink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Multilink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Multilink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Multilink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Multilink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "virtual-template")
    {
        virtual_template.yfilter = yfilter;
    }
}

bool Native::Multilink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-name" || name == "virtual-template")
        return true;
    return false;
}

Native::NamedOrderingRouteMap::NamedOrderingRouteMap()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "named-ordering-route-map"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NamedOrderingRouteMap::~NamedOrderingRouteMap()
{
}

bool Native::NamedOrderingRouteMap::has_data() const
{
    return enable.is_set;
}

bool Native::NamedOrderingRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::NamedOrderingRouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NamedOrderingRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-route-map:named-ordering-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NamedOrderingRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NamedOrderingRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NamedOrderingRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NamedOrderingRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NamedOrderingRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::NamedOrderingRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Nat66::Nat66()
    :
    prefix(std::make_shared<Native::Nat66::Prefix>())
{
    prefix->parent = this;

    yang_name = "nat66"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Nat66::~Nat66()
{
}

bool Native::Nat66::has_data() const
{
    return (prefix !=  nullptr && prefix->has_data());
}

bool Native::Nat66::has_operation() const
{
    return is_set(yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Nat66::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Nat66::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nat:nat66";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Nat66::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Nat66::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Nat66::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Nat66::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Native::Nat66::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Nat66::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Nat66::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Native::Nat66::Prefix::Prefix()
{

    yang_name = "prefix"; yang_parent_name = "nat66"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Nat66::Prefix::~Prefix()
{
}

bool Native::Nat66::Prefix::has_data() const
{
    for (std::size_t index=0; index<inside.size(); index++)
    {
        if(inside[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Nat66::Prefix::has_operation() const
{
    for (std::size_t index=0; index<inside.size(); index++)
    {
        if(inside[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Nat66::Prefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-nat:nat66/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Nat66::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Nat66::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Nat66::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inside")
    {
        for(auto const & c : inside)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Nat66::Prefix::Inside>();
        c->parent = this;
        inside.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Nat66::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : inside)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Nat66::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Nat66::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Nat66::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inside")
        return true;
    return false;
}

Native::Nat66::Prefix::Inside::Inside()
    :
    inside_pfx{YType::str, "inside-pfx"},
    outside{YType::str, "outside"}
{

    yang_name = "inside"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Nat66::Prefix::Inside::~Inside()
{
}

bool Native::Nat66::Prefix::Inside::has_data() const
{
    return inside_pfx.is_set
	|| outside.is_set;
}

bool Native::Nat66::Prefix::Inside::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inside_pfx.yfilter)
	|| ydk::is_set(outside.yfilter);
}

std::string Native::Nat66::Prefix::Inside::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-nat:nat66/prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Nat66::Prefix::Inside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inside" <<"[inside-pfx='" <<inside_pfx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Nat66::Prefix::Inside::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inside_pfx.is_set || is_set(inside_pfx.yfilter)) leaf_name_data.push_back(inside_pfx.get_name_leafdata());
    if (outside.is_set || is_set(outside.yfilter)) leaf_name_data.push_back(outside.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Nat66::Prefix::Inside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Nat66::Prefix::Inside::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Nat66::Prefix::Inside::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inside-pfx")
    {
        inside_pfx = value;
        inside_pfx.value_namespace = name_space;
        inside_pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outside")
    {
        outside = value;
        outside.value_namespace = name_space;
        outside.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Nat66::Prefix::Inside::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inside-pfx")
    {
        inside_pfx.yfilter = yfilter;
    }
    if(value_path == "outside")
    {
        outside.yfilter = yfilter;
    }
}

bool Native::Nat66::Prefix::Inside::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inside-pfx" || name == "outside")
        return true;
    return false;
}

Native::NetworkClock::NetworkClock()
    :
    input_source(std::make_shared<Native::NetworkClock::InputSource>())
	,synchronization(std::make_shared<Native::NetworkClock::Synchronization>())
	,wait_to_restore(std::make_shared<Native::NetworkClock::WaitToRestore>())
{
    input_source->parent = this;
    synchronization->parent = this;
    wait_to_restore->parent = this;

    yang_name = "network-clock"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::~NetworkClock()
{
}

bool Native::NetworkClock::has_data() const
{
    return (input_source !=  nullptr && input_source->has_data())
	|| (synchronization !=  nullptr && synchronization->has_data())
	|| (wait_to_restore !=  nullptr && wait_to_restore->has_data());
}

bool Native::NetworkClock::has_operation() const
{
    return is_set(yfilter)
	|| (input_source !=  nullptr && input_source->has_operation())
	|| (synchronization !=  nullptr && synchronization->has_operation())
	|| (wait_to_restore !=  nullptr && wait_to_restore->has_operation());
}

std::string Native::NetworkClock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-source")
    {
        if(input_source == nullptr)
        {
            input_source = std::make_shared<Native::NetworkClock::InputSource>();
        }
        return input_source;
    }

    if(child_yang_name == "synchronization")
    {
        if(synchronization == nullptr)
        {
            synchronization = std::make_shared<Native::NetworkClock::Synchronization>();
        }
        return synchronization;
    }

    if(child_yang_name == "wait-to-restore")
    {
        if(wait_to_restore == nullptr)
        {
            wait_to_restore = std::make_shared<Native::NetworkClock::WaitToRestore>();
        }
        return wait_to_restore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_source != nullptr)
    {
        children["input-source"] = input_source;
    }

    if(synchronization != nullptr)
    {
        children["synchronization"] = synchronization;
    }

    if(wait_to_restore != nullptr)
    {
        children["wait-to-restore"] = wait_to_restore;
    }

    return children;
}

void Native::NetworkClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::NetworkClock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::NetworkClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-source" || name == "synchronization" || name == "wait-to-restore")
        return true;
    return false;
}

Native::NetworkClock::InputSource::InputSource()
    :
    priority{YType::uint8, "priority"}
    	,
    interface(std::make_shared<Native::NetworkClock::InputSource::Interface>())
	,ptp(std::make_shared<Native::NetworkClock::InputSource::Ptp>())
{
    interface->parent = this;
    ptp->parent = this;

    yang_name = "input-source"; yang_parent_name = "network-clock"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::InputSource::~InputSource()
{
}

bool Native::NetworkClock::InputSource::has_data() const
{
    return priority.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (ptp !=  nullptr && ptp->has_data());
}

bool Native::NetworkClock::InputSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (ptp !=  nullptr && ptp->has_operation());
}

std::string Native::NetworkClock::InputSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::NetworkClock::InputSource::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ptp")
    {
        if(ptp == nullptr)
        {
            ptp = std::make_shared<Native::NetworkClock::InputSource::Ptp>();
        }
        return ptp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ptp != nullptr)
    {
        children["ptp"] = ptp;
    }

    return children;
}

void Native::NetworkClock::InputSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ptp" || name == "priority")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::Interface()
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
    atm_acrsubinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "input-source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::InputSource::Interface::~Interface()
{
}

bool Native::NetworkClock::InputSource::Interface::has_data() const
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

bool Native::NetworkClock::InputSource::Interface::has_operation() const
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

std::string Native::NetworkClock::InputSource::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Interface::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::get_children() const
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

void Native::NetworkClock::InputSource::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::NetworkClock::InputSource::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::NetworkClock::InputSource::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::InputSource::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::NetworkClock::InputSource::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::NetworkClock::InputSource::Interface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::InputSource::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::NetworkClock::InputSource::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::NetworkClock::InputSource::Interface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Ptp::Ptp()
    :
    domain{YType::uint8, "domain"}
{

    yang_name = "ptp"; yang_parent_name = "input-source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::InputSource::Ptp::~Ptp()
{
}

bool Native::NetworkClock::InputSource::Ptp::has_data() const
{
    return domain.is_set;
}

bool Native::NetworkClock::InputSource::Ptp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::NetworkClock::InputSource::Ptp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Ptp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Ptp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

Native::NetworkClock::Synchronization::Synchronization()
    :
    automatic{YType::empty, "automatic"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "synchronization"; yang_parent_name = "network-clock"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::Synchronization::~Synchronization()
{
}

bool Native::NetworkClock::Synchronization::has_data() const
{
    return automatic.is_set
	|| mode.is_set;
}

bool Native::NetworkClock::Synchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(automatic.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::NetworkClock::Synchronization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::Synchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::Synchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (automatic.is_set || is_set(automatic.yfilter)) leaf_name_data.push_back(automatic.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::Synchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::Synchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::Synchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "automatic")
    {
        automatic = value;
        automatic.value_namespace = name_space;
        automatic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::Synchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "automatic")
    {
        automatic.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::NetworkClock::Synchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "automatic" || name == "mode")
        return true;
    return false;
}

Native::NetworkClock::WaitToRestore::WaitToRestore()
    :
    global{YType::empty, "global"},
    time{YType::uint32, "time"}
{

    yang_name = "wait-to-restore"; yang_parent_name = "network-clock"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::WaitToRestore::~WaitToRestore()
{
}

bool Native::NetworkClock::WaitToRestore::has_data() const
{
    return global.is_set
	|| time.is_set;
}

bool Native::NetworkClock::WaitToRestore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::NetworkClock::WaitToRestore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::WaitToRestore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wait-to-restore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::WaitToRestore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::WaitToRestore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::WaitToRestore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::WaitToRestore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::WaitToRestore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::NetworkClock::WaitToRestore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "time")
        return true;
    return false;
}

Native::NetworkPolicy::NetworkPolicy()
    :
    profile{YType::uint32, "profile"}
{

    yang_name = "network-policy"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkPolicy::~NetworkPolicy()
{
}

bool Native::NetworkPolicy::has_data() const
{
    return profile.is_set;
}

bool Native::NetworkPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::NetworkPolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:network-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::NetworkPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Ntp::Ntp()
    :
    authenticate{YType::empty, "Cisco-IOS-XE-ntp:authenticate"},
    broadcastdelay{YType::uint32, "Cisco-IOS-XE-ntp:broadcastdelay"},
    clock_period{YType::uint32, "Cisco-IOS-XE-ntp:clock-period"},
    logging{YType::empty, "Cisco-IOS-XE-ntp:logging"},
    max_associations{YType::uint32, "Cisco-IOS-XE-ntp:max-associations"},
    maxdistance{YType::uint8, "Cisco-IOS-XE-ntp:maxdistance"},
    mindistance{YType::uint16, "Cisco-IOS-XE-ntp:mindistance"},
    orphan{YType::uint8, "Cisco-IOS-XE-ntp:orphan"},
    passive{YType::empty, "Cisco-IOS-XE-ntp:passive"},
    update_calendar{YType::empty, "Cisco-IOS-XE-ntp:update-calendar"}
    	,
    access_group(std::make_shared<Native::Ntp::AccessGroup>())
	,allow(std::make_shared<Native::Ntp::Allow>())
	,master(nullptr) // presence node
	,panic(std::make_shared<Native::Ntp::Panic>())
	,peer(std::make_shared<Native::Ntp::Peer>())
	,server(std::make_shared<Native::Ntp::Server>())
	,source(std::make_shared<Native::Ntp::Source>())
{
    access_group->parent = this;
    allow->parent = this;
    panic->parent = this;
    peer->parent = this;
    server->parent = this;
    source->parent = this;

    yang_name = "ntp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::~Ntp()
{
}

bool Native::Ntp::has_data() const
{
    for (std::size_t index=0; index<authentication_key.size(); index++)
    {
        if(authentication_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trusted_key.size(); index++)
    {
        if(trusted_key[index]->has_data())
            return true;
    }
    return authenticate.is_set
	|| broadcastdelay.is_set
	|| clock_period.is_set
	|| logging.is_set
	|| max_associations.is_set
	|| maxdistance.is_set
	|| mindistance.is_set
	|| orphan.is_set
	|| passive.is_set
	|| update_calendar.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (allow !=  nullptr && allow->has_data())
	|| (master !=  nullptr && master->has_data())
	|| (panic !=  nullptr && panic->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Ntp::has_operation() const
{
    for (std::size_t index=0; index<authentication_key.size(); index++)
    {
        if(authentication_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trusted_key.size(); index++)
    {
        if(trusted_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authenticate.yfilter)
	|| ydk::is_set(broadcastdelay.yfilter)
	|| ydk::is_set(clock_period.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(max_associations.yfilter)
	|| ydk::is_set(maxdistance.yfilter)
	|| ydk::is_set(mindistance.yfilter)
	|| ydk::is_set(orphan.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(update_calendar.yfilter)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (allow !=  nullptr && allow->has_operation())
	|| (master !=  nullptr && master->has_operation())
	|| (panic !=  nullptr && panic->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Ntp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticate.is_set || is_set(authenticate.yfilter)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (broadcastdelay.is_set || is_set(broadcastdelay.yfilter)) leaf_name_data.push_back(broadcastdelay.get_name_leafdata());
    if (clock_period.is_set || is_set(clock_period.yfilter)) leaf_name_data.push_back(clock_period.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (max_associations.is_set || is_set(max_associations.yfilter)) leaf_name_data.push_back(max_associations.get_name_leafdata());
    if (maxdistance.is_set || is_set(maxdistance.yfilter)) leaf_name_data.push_back(maxdistance.get_name_leafdata());
    if (mindistance.is_set || is_set(mindistance.yfilter)) leaf_name_data.push_back(mindistance.get_name_leafdata());
    if (orphan.is_set || is_set(orphan.yfilter)) leaf_name_data.push_back(orphan.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (update_calendar.is_set || is_set(update_calendar.yfilter)) leaf_name_data.push_back(update_calendar.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Ntp::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::Ntp::Allow>();
        }
        return allow;
    }

    if(child_yang_name == "authentication-key")
    {
        for(auto const & c : authentication_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::AuthenticationKey>();
        c->parent = this;
        authentication_key.push_back(c);
        return c;
    }

    if(child_yang_name == "master")
    {
        if(master == nullptr)
        {
            master = std::make_shared<Native::Ntp::Master>();
        }
        return master;
    }

    if(child_yang_name == "panic")
    {
        if(panic == nullptr)
        {
            panic = std::make_shared<Native::Ntp::Panic>();
        }
        return panic;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ntp::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ntp::Server>();
        }
        return server;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ntp::Source>();
        }
        return source;
    }

    if(child_yang_name == "trusted-key")
    {
        for(auto const & c : trusted_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::TrustedKey>();
        c->parent = this;
        trusted_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    if(allow != nullptr)
    {
        children["allow"] = allow;
    }

    for (auto const & c : authentication_key)
    {
        children[c->get_segment_path()] = c;
    }

    if(master != nullptr)
    {
        children["master"] = master;
    }

    if(panic != nullptr)
    {
        children["panic"] = panic;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    for (auto const & c : trusted_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authenticate")
    {
        authenticate = value;
        authenticate.value_namespace = name_space;
        authenticate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastdelay")
    {
        broadcastdelay = value;
        broadcastdelay.value_namespace = name_space;
        broadcastdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-period")
    {
        clock_period = value;
        clock_period.value_namespace = name_space;
        clock_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-associations")
    {
        max_associations = value;
        max_associations.value_namespace = name_space;
        max_associations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxdistance")
    {
        maxdistance = value;
        maxdistance.value_namespace = name_space;
        maxdistance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mindistance")
    {
        mindistance = value;
        mindistance.value_namespace = name_space;
        mindistance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orphan")
    {
        orphan = value;
        orphan.value_namespace = name_space;
        orphan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-calendar")
    {
        update_calendar = value;
        update_calendar.value_namespace = name_space;
        update_calendar.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authenticate")
    {
        authenticate.yfilter = yfilter;
    }
    if(value_path == "broadcastdelay")
    {
        broadcastdelay.yfilter = yfilter;
    }
    if(value_path == "clock-period")
    {
        clock_period.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "max-associations")
    {
        max_associations.yfilter = yfilter;
    }
    if(value_path == "maxdistance")
    {
        maxdistance.yfilter = yfilter;
    }
    if(value_path == "mindistance")
    {
        mindistance.yfilter = yfilter;
    }
    if(value_path == "orphan")
    {
        orphan.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "update-calendar")
    {
        update_calendar.yfilter = yfilter;
    }
}

bool Native::Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "allow" || name == "authentication-key" || name == "master" || name == "panic" || name == "peer" || name == "server" || name == "source" || name == "trusted-key" || name == "authenticate" || name == "broadcastdelay" || name == "clock-period" || name == "logging" || name == "max-associations" || name == "maxdistance" || name == "mindistance" || name == "orphan" || name == "passive" || name == "update-calendar")
        return true;
    return false;
}

Native::Ntp::AccessGroup::AccessGroup()
    :
    ipv4(std::make_shared<Native::Ntp::AccessGroup::Ipv4>())
	,ipv6(std::make_shared<Native::Ntp::AccessGroup::Ipv6>())
	,peer(std::make_shared<Native::Ntp::AccessGroup::Peer>())
	,query_only(std::make_shared<Native::Ntp::AccessGroup::QueryOnly>())
	,serve(std::make_shared<Native::Ntp::AccessGroup::Serve>())
	,serve_only(std::make_shared<Native::Ntp::AccessGroup::ServeOnly>())
{
    ipv4->parent = this;
    ipv6->parent = this;
    peer->parent = this;
    query_only->parent = this;
    serve->parent = this;
    serve_only->parent = this;

    yang_name = "access-group"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::AccessGroup::~AccessGroup()
{
}

bool Native::Ntp::AccessGroup::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (query_only !=  nullptr && query_only->has_data())
	|| (serve !=  nullptr && serve->has_data())
	|| (serve_only !=  nullptr && serve_only->has_data());
}

bool Native::Ntp::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (query_only !=  nullptr && query_only->has_operation())
	|| (serve !=  nullptr && serve->has_operation())
	|| (serve_only !=  nullptr && serve_only->has_operation());
}

std::string Native::Ntp::AccessGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Ntp::AccessGroup::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ntp::AccessGroup::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ntp::AccessGroup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "query-only")
    {
        if(query_only == nullptr)
        {
            query_only = std::make_shared<Native::Ntp::AccessGroup::QueryOnly>();
        }
        return query_only;
    }

    if(child_yang_name == "serve")
    {
        if(serve == nullptr)
        {
            serve = std::make_shared<Native::Ntp::AccessGroup::Serve>();
        }
        return serve;
    }

    if(child_yang_name == "serve-only")
    {
        if(serve_only == nullptr)
        {
            serve_only = std::make_shared<Native::Ntp::AccessGroup::ServeOnly>();
        }
        return serve_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::get_children() const
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

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(query_only != nullptr)
    {
        children["query-only"] = query_only;
    }

    if(serve != nullptr)
    {
        children["serve"] = serve;
    }

    if(serve_only != nullptr)
    {
        children["serve-only"] = serve_only;
    }

    return children;
}

void Native::Ntp::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "peer" || name == "query-only" || name == "serve" || name == "serve-only")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv4::Ipv4()
    :
    peer(std::make_shared<Native::Ntp::AccessGroup::Ipv4::Peer>())
	,query_only(std::make_shared<Native::Ntp::AccessGroup::Ipv4::QueryOnly>())
	,serve(std::make_shared<Native::Ntp::AccessGroup::Ipv4::Serve>())
	,serve_only(std::make_shared<Native::Ntp::AccessGroup::Ipv4::ServeOnly>())
{
    peer->parent = this;
    query_only->parent = this;
    serve->parent = this;
    serve_only->parent = this;

    yang_name = "ipv4"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::AccessGroup::Ipv4::~Ipv4()
{
}

bool Native::Ntp::AccessGroup::Ipv4::has_data() const
{
    return (peer !=  nullptr && peer->has_data())
	|| (query_only !=  nullptr && query_only->has_data())
	|| (serve !=  nullptr && serve->has_data())
	|| (serve_only !=  nullptr && serve_only->has_data());
}

bool Native::Ntp::AccessGroup::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (query_only !=  nullptr && query_only->has_operation())
	|| (serve !=  nullptr && serve->has_operation())
	|| (serve_only !=  nullptr && serve_only->has_operation());
}

std::string Native::Ntp::AccessGroup::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ntp::AccessGroup::Ipv4::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "query-only")
    {
        if(query_only == nullptr)
        {
            query_only = std::make_shared<Native::Ntp::AccessGroup::Ipv4::QueryOnly>();
        }
        return query_only;
    }

    if(child_yang_name == "serve")
    {
        if(serve == nullptr)
        {
            serve = std::make_shared<Native::Ntp::AccessGroup::Ipv4::Serve>();
        }
        return serve;
    }

    if(child_yang_name == "serve-only")
    {
        if(serve_only == nullptr)
        {
            serve_only = std::make_shared<Native::Ntp::AccessGroup::Ipv4::ServeOnly>();
        }
        return serve_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(query_only != nullptr)
    {
        children["query-only"] = query_only;
    }

    if(serve != nullptr)
    {
        children["serve"] = serve;
    }

    if(serve_only != nullptr)
    {
        children["serve-only"] = serve_only;
    }

    return children;
}

void Native::Ntp::AccessGroup::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::AccessGroup::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::AccessGroup::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "query-only" || name == "serve" || name == "serve-only")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv4::Peer::Peer()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "peer"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::AccessGroup::Ipv4::Peer::~Peer()
{
}

bool Native::Ntp::AccessGroup::Ipv4::Peer::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv4::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Ipv4::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv4::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv4::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv4::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv4::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Ipv4::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv4::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv4::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv4::QueryOnly::QueryOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "query-only"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::AccessGroup::Ipv4::QueryOnly::~QueryOnly()
{
}

bool Native::Ntp::AccessGroup::Ipv4::QueryOnly::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv4::QueryOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Ipv4::QueryOnly::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv4::QueryOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv4::QueryOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv4::QueryOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv4::QueryOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Ipv4::QueryOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv4::QueryOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv4::QueryOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv4::Serve::Serve()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "serve"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::AccessGroup::Ipv4::Serve::~Serve()
{
}

bool Native::Ntp::AccessGroup::Ipv4::Serve::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv4::Serve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Ipv4::Serve::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv4::Serve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv4::Serve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv4::Serve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv4::Serve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Ipv4::Serve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv4::Serve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv4::Serve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv4::ServeOnly::ServeOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "serve-only"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::AccessGroup::Ipv4::ServeOnly::~ServeOnly()
{
}

bool Native::Ntp::AccessGroup::Ipv4::ServeOnly::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv4::ServeOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Ipv4::ServeOnly::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv4::ServeOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv4::ServeOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv4::ServeOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv4::ServeOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Ipv4::ServeOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv4::ServeOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv4::ServeOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv6::Ipv6()
    :
    peer(std::make_shared<Native::Ntp::AccessGroup::Ipv6::Peer>())
	,query_only(std::make_shared<Native::Ntp::AccessGroup::Ipv6::QueryOnly>())
	,serve(std::make_shared<Native::Ntp::AccessGroup::Ipv6::Serve>())
	,serve_only(std::make_shared<Native::Ntp::AccessGroup::Ipv6::ServeOnly>())
{
    peer->parent = this;
    query_only->parent = this;
    serve->parent = this;
    serve_only->parent = this;

    yang_name = "ipv6"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::AccessGroup::Ipv6::~Ipv6()
{
}

bool Native::Ntp::AccessGroup::Ipv6::has_data() const
{
    return (peer !=  nullptr && peer->has_data())
	|| (query_only !=  nullptr && query_only->has_data())
	|| (serve !=  nullptr && serve->has_data())
	|| (serve_only !=  nullptr && serve_only->has_data());
}

bool Native::Ntp::AccessGroup::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (query_only !=  nullptr && query_only->has_operation())
	|| (serve !=  nullptr && serve->has_operation())
	|| (serve_only !=  nullptr && serve_only->has_operation());
}

std::string Native::Ntp::AccessGroup::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ntp::AccessGroup::Ipv6::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "query-only")
    {
        if(query_only == nullptr)
        {
            query_only = std::make_shared<Native::Ntp::AccessGroup::Ipv6::QueryOnly>();
        }
        return query_only;
    }

    if(child_yang_name == "serve")
    {
        if(serve == nullptr)
        {
            serve = std::make_shared<Native::Ntp::AccessGroup::Ipv6::Serve>();
        }
        return serve;
    }

    if(child_yang_name == "serve-only")
    {
        if(serve_only == nullptr)
        {
            serve_only = std::make_shared<Native::Ntp::AccessGroup::Ipv6::ServeOnly>();
        }
        return serve_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(query_only != nullptr)
    {
        children["query-only"] = query_only;
    }

    if(serve != nullptr)
    {
        children["serve"] = serve;
    }

    if(serve_only != nullptr)
    {
        children["serve-only"] = serve_only;
    }

    return children;
}

void Native::Ntp::AccessGroup::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::AccessGroup::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::AccessGroup::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "query-only" || name == "serve" || name == "serve-only")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv6::Peer::Peer()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "peer"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::AccessGroup::Ipv6::Peer::~Peer()
{
}

bool Native::Ntp::AccessGroup::Ipv6::Peer::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv6::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Ipv6::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv6::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv6::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv6::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv6::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Ipv6::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv6::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv6::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv6::QueryOnly::QueryOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "query-only"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::AccessGroup::Ipv6::QueryOnly::~QueryOnly()
{
}

bool Native::Ntp::AccessGroup::Ipv6::QueryOnly::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv6::QueryOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Ipv6::QueryOnly::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv6::QueryOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv6::QueryOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv6::QueryOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv6::QueryOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Ipv6::QueryOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv6::QueryOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv6::QueryOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv6::Serve::Serve()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "serve"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::AccessGroup::Ipv6::Serve::~Serve()
{
}

bool Native::Ntp::AccessGroup::Ipv6::Serve::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv6::Serve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Ipv6::Serve::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv6::Serve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv6::Serve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv6::Serve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv6::Serve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Ipv6::Serve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv6::Serve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv6::Serve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv6::ServeOnly::ServeOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "serve-only"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::AccessGroup::Ipv6::ServeOnly::~ServeOnly()
{
}

bool Native::Ntp::AccessGroup::Ipv6::ServeOnly::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv6::ServeOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Ipv6::ServeOnly::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv6::ServeOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv6::ServeOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv6::ServeOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv6::ServeOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Ipv6::ServeOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv6::ServeOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv6::ServeOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Peer::Peer()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "peer"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::AccessGroup::Peer::~Peer()
{
}

bool Native::Ntp::AccessGroup::Peer::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::QueryOnly::QueryOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "query-only"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::AccessGroup::QueryOnly::~QueryOnly()
{
}

bool Native::Ntp::AccessGroup::QueryOnly::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::QueryOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::QueryOnly::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::QueryOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::QueryOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::QueryOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::QueryOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::QueryOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::QueryOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::QueryOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Serve::Serve()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "serve"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::AccessGroup::Serve::~Serve()
{
}

bool Native::Ntp::AccessGroup::Serve::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Serve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Serve::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Serve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Serve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Serve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Serve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Serve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Serve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Serve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::ServeOnly::ServeOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "serve-only"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::AccessGroup::ServeOnly::~ServeOnly()
{
}

bool Native::Ntp::AccessGroup::ServeOnly::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::ServeOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::ServeOnly::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::ServeOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::ServeOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::ServeOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::ServeOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::ServeOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::ServeOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::ServeOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::Allow::Allow()
    :
    mode(std::make_shared<Native::Ntp::Allow::Mode>())
{
    mode->parent = this;

    yang_name = "allow"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Allow::~Allow()
{
}

bool Native::Ntp::Allow::has_data() const
{
    return (mode !=  nullptr && mode->has_data());
}

bool Native::Ntp::Allow::has_operation() const
{
    return is_set(yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Ntp::Allow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:allow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Allow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Ntp::Allow::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Ntp::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Ntp::Allow::Mode::Mode()
    :
    private_{YType::empty, "private"}
    	,
    control(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "allow"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Allow::Mode::~Mode()
{
}

bool Native::Ntp::Allow::Mode::has_data() const
{
    return private_.is_set
	|| (control !=  nullptr && control->has_data());
}

bool Native::Ntp::Allow::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(private_.yfilter)
	|| (control !=  nullptr && control->has_operation());
}

std::string Native::Ntp::Allow::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:allow/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Allow::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Allow::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (private_.is_set || is_set(private_.yfilter)) leaf_name_data.push_back(private_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Allow::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Ntp::Allow::Mode::Control>();
        }
        return control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Allow::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(control != nullptr)
    {
        children["control"] = control;
    }

    return children;
}

void Native::Ntp::Allow::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "private")
    {
        private_ = value;
        private_.value_namespace = name_space;
        private_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Allow::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "private")
    {
        private_.yfilter = yfilter;
    }
}

bool Native::Ntp::Allow::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control" || name == "private")
        return true;
    return false;
}

Native::Ntp::Allow::Mode::Control::Control()
    :
    delay{YType::uint8, "delay"}
{

    yang_name = "control"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Allow::Mode::Control::~Control()
{
}

bool Native::Ntp::Allow::Mode::Control::has_data() const
{
    return delay.is_set;
}

bool Native::Ntp::Allow::Mode::Control::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Ntp::Allow::Mode::Control::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:allow/mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Allow::Mode::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Allow::Mode::Control::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Allow::Mode::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Allow::Mode::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Allow::Mode::Control::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Allow::Mode::Control::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Ntp::Allow::Mode::Control::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Ntp::AuthenticationKey::AuthenticationKey()
    :
    number{YType::uint32, "number"},
    encryption_type{YType::uint32, "encryption-type"},
    md5{YType::str, "md5"}
{

    yang_name = "authentication-key"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Ntp::AuthenticationKey::has_data() const
{
    return number.is_set
	|| encryption_type.is_set
	|| md5.is_set;
}

bool Native::Ntp::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(encryption_type.yfilter)
	|| ydk::is_set(md5.yfilter);
}

std::string Native::Ntp::AuthenticationKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:authentication-key" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (encryption_type.is_set || is_set(encryption_type.yfilter)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-type")
    {
        encryption_type = value;
        encryption_type.value_namespace = name_space;
        encryption_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "encryption-type")
    {
        encryption_type.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
}

bool Native::Ntp::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "encryption-type" || name == "md5")
        return true;
    return false;
}

Native::Ntp::Master::Master()
    :
    stratum_number{YType::uint8, "stratum-number"}
{

    yang_name = "master"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Master::~Master()
{
}

bool Native::Ntp::Master::has_data() const
{
    return stratum_number.is_set;
}

bool Native::Ntp::Master::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stratum_number.yfilter);
}

std::string Native::Ntp::Master::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Master::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:master";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Master::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stratum_number.is_set || is_set(stratum_number.yfilter)) leaf_name_data.push_back(stratum_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Master::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stratum-number")
    {
        stratum_number = value;
        stratum_number.value_namespace = name_space;
        stratum_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Master::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stratum-number")
    {
        stratum_number.yfilter = yfilter;
    }
}

bool Native::Ntp::Master::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stratum-number")
        return true;
    return false;
}

Native::Ntp::Panic::Panic()
    :
    update{YType::empty, "update"}
{

    yang_name = "panic"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Panic::~Panic()
{
}

bool Native::Ntp::Panic::has_data() const
{
    return update.is_set;
}

bool Native::Ntp::Panic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update.yfilter);
}

std::string Native::Ntp::Panic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Panic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:panic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Panic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Panic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Panic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Panic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Panic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update")
    {
        update.yfilter = yfilter;
    }
}

bool Native::Ntp::Panic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update")
        return true;
    return false;
}

Native::Ntp::Peer::Peer()
{

    yang_name = "peer"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Peer::~Peer()
{
}

bool Native::Ntp::Peer::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<server_list.size(); index++)
    {
        if(server_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ntp::Peer::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<server_list.size(); index++)
    {
        if(server_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ntp::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ntp::Peer::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        for(auto const & c : ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Peer::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    if(child_yang_name == "server-list")
    {
        for(auto const & c : server_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Peer::ServerList>();
        c->parent = this;
        server_list.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Peer::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : server_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ntp::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6" || name == "server-list" || name == "vrf")
        return true;
    return false;
}

Native::Ntp::Peer::Ip::Ip()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "ip"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Peer::Ip::~Ip()
{
}

bool Native::Ntp::Peer::Ip::has_data() const
{
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Peer::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Peer::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[host-name='" <<host_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Peer::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Peer::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Peer::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Peer::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Peer::Ipv6::Ipv6()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "ipv6"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Peer::Ipv6::~Ipv6()
{
}

bool Native::Ntp::Peer::Ipv6::has_data() const
{
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Peer::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Peer::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[host-name='" <<host_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Peer::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Peer::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Peer::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Peer::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Peer::ServerList::ServerList()
    :
    ip_address{YType::str, "ip-address"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "server-list"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Peer::ServerList::~ServerList()
{
}

bool Native::Ntp::Peer::ServerList::has_data() const
{
    return ip_address.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::ServerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Peer::ServerList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Peer::ServerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-list" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Peer::ServerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Peer::ServerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Peer::ServerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Peer::ServerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::ServerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::ServerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Peer::Vrf::Vrf()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Peer::Vrf::~Vrf()
{
}

bool Native::Ntp::Peer::Vrf::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<server_list.size(); index++)
    {
        if(server_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ntp::Peer::Vrf::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<server_list.size(); index++)
    {
        if(server_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ntp::Peer::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Peer::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Peer::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Peer::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ntp::Peer::Vrf::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        for(auto const & c : ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Peer::Vrf::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    if(child_yang_name == "server-list")
    {
        for(auto const & c : server_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Peer::Vrf::ServerList>();
        c->parent = this;
        server_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Peer::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : server_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ntp::Peer::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6" || name == "server-list" || name == "name")
        return true;
    return false;
}

Native::Ntp::Peer::Vrf::Ip::Ip()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "ip"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ntp::Peer::Vrf::Ip::~Ip()
{
}

bool Native::Ntp::Peer::Vrf::Ip::has_data() const
{
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::Vrf::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Peer::Vrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[host-name='" <<host_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Peer::Vrf::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Peer::Vrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Peer::Vrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Peer::Vrf::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Vrf::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Vrf::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Peer::Vrf::Ipv6::Ipv6()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "ipv6"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ntp::Peer::Vrf::Ipv6::~Ipv6()
{
}

bool Native::Ntp::Peer::Vrf::Ipv6::has_data() const
{
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::Vrf::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Peer::Vrf::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[host-name='" <<host_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Peer::Vrf::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Peer::Vrf::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Peer::Vrf::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Peer::Vrf::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Vrf::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Vrf::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Peer::Vrf::ServerList::ServerList()
    :
    ip_address{YType::str, "ip-address"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "server-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ntp::Peer::Vrf::ServerList::~ServerList()
{
}

bool Native::Ntp::Peer::Vrf::ServerList::has_data() const
{
    return ip_address.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::Vrf::ServerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Peer::Vrf::ServerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-list" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Peer::Vrf::ServerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Peer::Vrf::ServerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Peer::Vrf::ServerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Peer::Vrf::ServerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Vrf::ServerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Vrf::ServerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Server::Server()
{

    yang_name = "server"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Server::~Server()
{
}

bool Native::Ntp::Server::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<server_list.size(); index++)
    {
        if(server_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ntp::Server::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<server_list.size(); index++)
    {
        if(server_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ntp::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ntp::Server::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        for(auto const & c : ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Server::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    if(child_yang_name == "server-list")
    {
        for(auto const & c : server_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Server::ServerList>();
        c->parent = this;
        server_list.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Server::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : server_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ntp::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6" || name == "server-list" || name == "vrf")
        return true;
    return false;
}

Native::Ntp::Server::Ip::Ip()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "ip"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Server::Ip::~Ip()
{
}

bool Native::Ntp::Server::Ip::has_data() const
{
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Server::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Server::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[host-name='" <<host_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Server::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Server::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Server::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Server::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Server::Ipv6::Ipv6()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "ipv6"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Server::Ipv6::~Ipv6()
{
}

bool Native::Ntp::Server::Ipv6::has_data() const
{
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Server::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Server::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[host-name='" <<host_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Server::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Server::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Server::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Server::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Server::ServerList::ServerList()
    :
    ip_address{YType::str, "ip-address"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "server-list"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Server::ServerList::~ServerList()
{
}

bool Native::Ntp::Server::ServerList::has_data() const
{
    return ip_address.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::ServerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Server::ServerList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Server::ServerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-list" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Server::ServerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Server::ServerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Server::ServerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Server::ServerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::ServerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::ServerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Server::Vrf::Vrf()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Server::Vrf::~Vrf()
{
}

bool Native::Ntp::Server::Vrf::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<server_list.size(); index++)
    {
        if(server_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ntp::Server::Vrf::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<server_list.size(); index++)
    {
        if(server_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ntp::Server::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Server::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Server::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Server::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ntp::Server::Vrf::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        for(auto const & c : ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Server::Vrf::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    if(child_yang_name == "server-list")
    {
        for(auto const & c : server_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Server::Vrf::ServerList>();
        c->parent = this;
        server_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Server::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : server_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ntp::Server::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6" || name == "server-list" || name == "name")
        return true;
    return false;
}

Native::Ntp::Server::Vrf::Ip::Ip()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "ip"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ntp::Server::Vrf::Ip::~Ip()
{
}

bool Native::Ntp::Server::Vrf::Ip::has_data() const
{
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::Vrf::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Server::Vrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[host-name='" <<host_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Server::Vrf::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Server::Vrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Server::Vrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Server::Vrf::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Vrf::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Vrf::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Server::Vrf::Ipv6::Ipv6()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "ipv6"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ntp::Server::Vrf::Ipv6::~Ipv6()
{
}

bool Native::Ntp::Server::Vrf::Ipv6::has_data() const
{
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::Vrf::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Server::Vrf::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[host-name='" <<host_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Server::Vrf::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Server::Vrf::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Server::Vrf::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Server::Vrf::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Vrf::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Vrf::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Server::Vrf::ServerList::ServerList()
    :
    ip_address{YType::str, "ip-address"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "server-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ntp::Server::Vrf::ServerList::~ServerList()
{
}

bool Native::Ntp::Server::Vrf::ServerList::has_data() const
{
    return ip_address.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::Vrf::ServerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Server::Vrf::ServerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-list" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Server::Vrf::ServerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Server::Vrf::ServerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Server::Vrf::ServerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Server::Vrf::ServerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Vrf::ServerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Vrf::ServerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Source::Source()
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
    atm_acrsubinterface(std::make_shared<Native::Ntp::Source::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ntp::Source::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ntp::Source::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ntp::Source::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Source::~Source()
{
}

bool Native::Ntp::Source::has_data() const
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

bool Native::Ntp::Source::has_operation() const
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

std::string Native::Ntp::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Source::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Ntp::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ntp::Source::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ntp::Source::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ntp::Source::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ntp::Source::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Source::get_children() const
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

void Native::Ntp::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ntp::Source::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ntp::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Ntp::Source::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Source::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ntp::Source::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ntp::Source::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ntp::Source::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Source::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Source::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Source::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Source::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Source::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Source::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ntp::Source::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ntp::Source::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Source::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ntp::Source::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ntp::Source::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ntp::Source::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Source::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Source::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Source::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Source::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Source::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Source::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ntp::Source::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ntp::Source::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Source::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ntp::Source::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ntp::Source::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ntp::Source::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Source::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Source::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Source::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Source::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Source::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Source::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ntp::Source::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ntp::Source::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::Source::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ntp::Source::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ntp::Source::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ntp::Source::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Source::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Source::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::Source::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Source::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Source::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Source::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ntp::Source::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ntp::TrustedKey::TrustedKey()
    :
    number{YType::uint16, "number"},
    end_key{YType::uint16, "end-key"}
{

    yang_name = "trusted-key"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ntp::TrustedKey::~TrustedKey()
{
}

bool Native::Ntp::TrustedKey::has_data() const
{
    return number.is_set
	|| end_key.is_set;
}

bool Native::Ntp::TrustedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(end_key.yfilter);
}

std::string Native::Ntp::TrustedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::TrustedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:trusted-key" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::TrustedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (end_key.is_set || is_set(end_key.yfilter)) leaf_name_data.push_back(end_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ntp::TrustedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::TrustedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::TrustedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-key")
    {
        end_key = value;
        end_key.value_namespace = name_space;
        end_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::TrustedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "end-key")
    {
        end_key.yfilter = yfilter;
    }
}

bool Native::Ntp::TrustedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "end-key")
        return true;
    return false;
}

Native::ObjectGroup::ObjectGroup()
{

    yang_name = "object-group"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ObjectGroup::~ObjectGroup()
{
}

bool Native::ObjectGroup::has_data() const
{
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<security.size(); index++)
    {
        if(security[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ObjectGroup::has_operation() const
{
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<security.size(); index++)
    {
        if(security[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ObjectGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ObjectGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ObjectGroup::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "security")
    {
        for(auto const & c : security)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ObjectGroup::Security>();
        c->parent = this;
        security.push_back(c);
        return c;
    }

    if(child_yang_name == "service")
    {
        for(auto const & c : service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ObjectGroup::Service>();
        c->parent = this;
        service.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : security)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : service)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ObjectGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ObjectGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ObjectGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "security" || name == "service")
        return true;
    return false;
}

Native::ObjectGroup::Network::Network()
    :
    name{YType::str, "name"}
    	,
    obj_mode_config_network_group(std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup>())
{
    obj_mode_config_network_group->parent = this;

    yang_name = "network"; yang_parent_name = "object-group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ObjectGroup::Network::~Network()
{
}

bool Native::ObjectGroup::Network::has_data() const
{
    return name.is_set
	|| (obj_mode_config_network_group !=  nullptr && obj_mode_config_network_group->has_data());
}

bool Native::ObjectGroup::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (obj_mode_config_network_group !=  nullptr && obj_mode_config_network_group->has_operation());
}

std::string Native::ObjectGroup::Network::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/object-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ObjectGroup::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-object-group:network" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "obj-Mode-config-network-group")
    {
        if(obj_mode_config_network_group == nullptr)
        {
            obj_mode_config_network_group = std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup>();
        }
        return obj_mode_config_network_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(obj_mode_config_network_group != nullptr)
    {
        children["obj-Mode-config-network-group"] = obj_mode_config_network_group;
    }

    return children;
}

void Native::ObjectGroup::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "obj-Mode-config-network-group" || name == "name")
        return true;
    return false;
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::ObjModeConfigNetworkGroup()
    :
    description{YType::str, "description"},
    group_object{YType::str, "group-object"},
    host{YType::str, "host"}
    	,
    range(std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range>())
{
    range->parent = this;

    yang_name = "obj-Mode-config-network-group"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::~ObjModeConfigNetworkGroup()
{
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::has_data() const
{
    for (std::size_t index=0; index<network_address.size(); index++)
    {
        if(network_address[index]->has_data())
            return true;
    }
    return description.is_set
	|| group_object.is_set
	|| host.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::has_operation() const
{
    for (std::size_t index=0; index<network_address.size(); index++)
    {
        if(network_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(group_object.yfilter)
	|| ydk::is_set(host.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obj-Mode-config-network-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (group_object.is_set || is_set(group_object.yfilter)) leaf_name_data.push_back(group_object.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network_address")
    {
        for(auto const & c : network_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress>();
        c->parent = this;
        network_address.push_back(c);
        return c;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-object")
    {
        group_object = value;
        group_object.value_namespace = name_space;
        group_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "group-object")
    {
        group_object.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network_address" || name == "range" || name == "description" || name == "group-object" || name == "host")
        return true;
    return false;
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::NetworkAddress()
    :
    ipv4_addr{YType::str, "ipv4_addr"},
    ipv4_mask{YType::str, "ipv4_mask"}
{

    yang_name = "network_address"; yang_parent_name = "obj-Mode-config-network-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::~NetworkAddress()
{
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::has_data() const
{
    return ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network_address" <<"[ipv4_addr='" <<ipv4_addr <<"']" <<"[ipv4_mask='" <<ipv4_mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4_addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4_mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4_addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "ipv4_mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4_addr" || name == "ipv4_mask")
        return true;
    return false;
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::Range()
    :
    ip_addr_max{YType::str, "ip-addr-max"},
    ip_addr_min{YType::str, "ip-addr-min"}
{

    yang_name = "range"; yang_parent_name = "obj-Mode-config-network-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::~Range()
{
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::has_data() const
{
    return ip_addr_max.is_set
	|| ip_addr_min.is_set;
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr_max.yfilter)
	|| ydk::is_set(ip_addr_min.yfilter);
}

std::string Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr_max.is_set || is_set(ip_addr_max.yfilter)) leaf_name_data.push_back(ip_addr_max.get_name_leafdata());
    if (ip_addr_min.is_set || is_set(ip_addr_min.yfilter)) leaf_name_data.push_back(ip_addr_min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr-max")
    {
        ip_addr_max = value;
        ip_addr_max.value_namespace = name_space;
        ip_addr_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr-min")
    {
        ip_addr_min = value;
        ip_addr_min.value_namespace = name_space;
        ip_addr_min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr-max")
    {
        ip_addr_max.yfilter = yfilter;
    }
    if(value_path == "ip-addr-min")
    {
        ip_addr_min.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr-max" || name == "ip-addr-min")
        return true;
    return false;
}

Native::ObjectGroup::Security::Security()
    :
    name{YType::str, "name"}
    	,
    security_group(std::make_shared<Native::ObjectGroup::Security::SecurityGroup>())
{
    security_group->parent = this;

    yang_name = "security"; yang_parent_name = "object-group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ObjectGroup::Security::~Security()
{
}

bool Native::ObjectGroup::Security::has_data() const
{
    return name.is_set
	|| (security_group !=  nullptr && security_group->has_data());
}

bool Native::ObjectGroup::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (security_group !=  nullptr && security_group->has_operation());
}

std::string Native::ObjectGroup::Security::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/object-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ObjectGroup::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-object-group:security" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security-group")
    {
        if(security_group == nullptr)
        {
            security_group = std::make_shared<Native::ObjectGroup::Security::SecurityGroup>();
        }
        return security_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(security_group != nullptr)
    {
        children["security-group"] = security_group;
    }

    return children;
}

void Native::ObjectGroup::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-group" || name == "name")
        return true;
    return false;
}

Native::ObjectGroup::Security::SecurityGroup::SecurityGroup()
    :
    description{YType::str, "description"},
    group_object{YType::str, "group-object"}
    	,
    security_group(std::make_shared<Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_>())
{
    security_group->parent = this;

    yang_name = "security-group"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ObjectGroup::Security::SecurityGroup::~SecurityGroup()
{
}

bool Native::ObjectGroup::Security::SecurityGroup::has_data() const
{
    return description.is_set
	|| group_object.is_set
	|| (security_group !=  nullptr && security_group->has_data());
}

bool Native::ObjectGroup::Security::SecurityGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(group_object.yfilter)
	|| (security_group !=  nullptr && security_group->has_operation());
}

std::string Native::ObjectGroup::Security::SecurityGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Security::SecurityGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (group_object.is_set || is_set(group_object.yfilter)) leaf_name_data.push_back(group_object.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Security::SecurityGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security-group")
    {
        if(security_group == nullptr)
        {
            security_group = std::make_shared<Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_>();
        }
        return security_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Security::SecurityGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(security_group != nullptr)
    {
        children["security-group"] = security_group;
    }

    return children;
}

void Native::ObjectGroup::Security::SecurityGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-object")
    {
        group_object = value;
        group_object.value_namespace = name_space;
        group_object.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Security::SecurityGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "group-object")
    {
        group_object.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Security::SecurityGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-group" || name == "description" || name == "group-object")
        return true;
    return false;
}

Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::SecurityGroup_()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "security-group"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::~SecurityGroup_()
{
}

bool Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::has_data() const
{
    return tag.is_set;
}

bool Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::ObjectGroup::Service::Service()
    :
    name{YType::str, "name"},
    ahp{YType::empty, "ahp"},
    description{YType::str, "description"},
    eigrp{YType::empty, "eigrp"},
    esp{YType::empty, "esp"},
    gre{YType::empty, "gre"},
    group_object{YType::str, "group-object"},
    igmp{YType::empty, "igmp"},
    ip{YType::empty, "ip"},
    ipinip{YType::empty, "ipinip"},
    nos{YType::empty, "nos"},
    ospf{YType::empty, "ospf"},
    pcp{YType::empty, "pcp"},
    pim{YType::empty, "pim"},
    protocal_number{YType::uint8, "protocal-number"}
    	,
    icmp(nullptr) // presence node
	,tcp(nullptr) // presence node
	,tcp_udp(nullptr) // presence node
	,udp(nullptr) // presence node
{

    yang_name = "service"; yang_parent_name = "object-group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ObjectGroup::Service::~Service()
{
}

bool Native::ObjectGroup::Service::has_data() const
{
    return name.is_set
	|| ahp.is_set
	|| description.is_set
	|| eigrp.is_set
	|| esp.is_set
	|| gre.is_set
	|| group_object.is_set
	|| igmp.is_set
	|| ip.is_set
	|| ipinip.is_set
	|| nos.is_set
	|| ospf.is_set
	|| pcp.is_set
	|| pim.is_set
	|| protocal_number.is_set
	|| (icmp !=  nullptr && icmp->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (tcp_udp !=  nullptr && tcp_udp->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::ObjectGroup::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ahp.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(esp.yfilter)
	|| ydk::is_set(gre.yfilter)
	|| ydk::is_set(group_object.yfilter)
	|| ydk::is_set(igmp.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ipinip.yfilter)
	|| ydk::is_set(nos.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| ydk::is_set(pcp.yfilter)
	|| ydk::is_set(pim.yfilter)
	|| ydk::is_set(protocal_number.yfilter)
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (tcp_udp !=  nullptr && tcp_udp->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::ObjectGroup::Service::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/object-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ObjectGroup::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-object-group:service" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ahp.is_set || is_set(ahp.yfilter)) leaf_name_data.push_back(ahp.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (esp.is_set || is_set(esp.yfilter)) leaf_name_data.push_back(esp.get_name_leafdata());
    if (gre.is_set || is_set(gre.yfilter)) leaf_name_data.push_back(gre.get_name_leafdata());
    if (group_object.is_set || is_set(group_object.yfilter)) leaf_name_data.push_back(group_object.get_name_leafdata());
    if (igmp.is_set || is_set(igmp.yfilter)) leaf_name_data.push_back(igmp.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ipinip.is_set || is_set(ipinip.yfilter)) leaf_name_data.push_back(ipinip.get_name_leafdata());
    if (nos.is_set || is_set(nos.yfilter)) leaf_name_data.push_back(nos.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());
    if (pcp.is_set || is_set(pcp.yfilter)) leaf_name_data.push_back(pcp.get_name_leafdata());
    if (pim.is_set || is_set(pim.yfilter)) leaf_name_data.push_back(pim.get_name_leafdata());
    if (protocal_number.is_set || is_set(protocal_number.yfilter)) leaf_name_data.push_back(protocal_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::ObjectGroup::Service::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ObjectGroup::Service::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "tcp-udp")
    {
        if(tcp_udp == nullptr)
        {
            tcp_udp = std::make_shared<Native::ObjectGroup::Service::TcpUdp>();
        }
        return tcp_udp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::ObjectGroup::Service::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(icmp != nullptr)
    {
        children["icmp"] = icmp;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(tcp_udp != nullptr)
    {
        children["tcp-udp"] = tcp_udp;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::ObjectGroup::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ahp")
    {
        ahp = value;
        ahp.value_namespace = name_space;
        ahp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esp")
    {
        esp = value;
        esp.value_namespace = name_space;
        esp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gre")
    {
        gre = value;
        gre.value_namespace = name_space;
        gre.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-object")
    {
        group_object = value;
        group_object.value_namespace = name_space;
        group_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp")
    {
        igmp = value;
        igmp.value_namespace = name_space;
        igmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipinip")
    {
        ipinip = value;
        ipinip.value_namespace = name_space;
        ipinip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nos")
    {
        nos = value;
        nos.value_namespace = name_space;
        nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcp")
    {
        pcp = value;
        pcp.value_namespace = name_space;
        pcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim")
    {
        pim = value;
        pim.value_namespace = name_space;
        pim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocal-number")
    {
        protocal_number = value;
        protocal_number.value_namespace = name_space;
        protocal_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ahp")
    {
        ahp.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "esp")
    {
        esp.yfilter = yfilter;
    }
    if(value_path == "gre")
    {
        gre.yfilter = yfilter;
    }
    if(value_path == "group-object")
    {
        group_object.yfilter = yfilter;
    }
    if(value_path == "igmp")
    {
        igmp.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "ipinip")
    {
        ipinip.yfilter = yfilter;
    }
    if(value_path == "nos")
    {
        nos.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
    if(value_path == "pcp")
    {
        pcp.yfilter = yfilter;
    }
    if(value_path == "pim")
    {
        pim.yfilter = yfilter;
    }
    if(value_path == "protocal-number")
    {
        protocal_number.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp" || name == "tcp" || name == "tcp-udp" || name == "udp" || name == "name" || name == "ahp" || name == "description" || name == "eigrp" || name == "esp" || name == "gre" || name == "group-object" || name == "igmp" || name == "ip" || name == "ipinip" || name == "nos" || name == "ospf" || name == "pcp" || name == "pim" || name == "protocal-number")
        return true;
    return false;
}

Native::ObjectGroup::Service::Icmp::Icmp()
    :
    alternate_address{YType::empty, "alternate-address"},
    conversion_error{YType::empty, "conversion-error"},
    echo{YType::empty, "echo"},
    echo_reply{YType::empty, "echo-reply"},
    information_reply{YType::empty, "information-reply"},
    information_request{YType::empty, "information-request"},
    mask_reply{YType::empty, "mask-reply"},
    mask_request{YType::empty, "mask-request"},
    mobile_redirect{YType::empty, "mobile-redirect"},
    parameter_problem{YType::empty, "parameter-problem"},
    port_number{YType::uint8, "port-number"},
    redirect{YType::empty, "redirect"},
    router_advertisement{YType::empty, "router-advertisement"},
    router_solicitation{YType::empty, "router-solicitation"},
    source_quench{YType::empty, "source-quench"},
    time_exceeded{YType::empty, "time-exceeded"},
    timestamp_reply{YType::empty, "timestamp-reply"},
    timestamp_request{YType::empty, "timestamp-request"},
    traceroute{YType::empty, "traceroute"},
    unreachable{YType::empty, "unreachable"}
{

    yang_name = "icmp"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ObjectGroup::Service::Icmp::~Icmp()
{
}

bool Native::ObjectGroup::Service::Icmp::has_data() const
{
    return alternate_address.is_set
	|| conversion_error.is_set
	|| echo.is_set
	|| echo_reply.is_set
	|| information_reply.is_set
	|| information_request.is_set
	|| mask_reply.is_set
	|| mask_request.is_set
	|| mobile_redirect.is_set
	|| parameter_problem.is_set
	|| port_number.is_set
	|| redirect.is_set
	|| router_advertisement.is_set
	|| router_solicitation.is_set
	|| source_quench.is_set
	|| time_exceeded.is_set
	|| timestamp_reply.is_set
	|| timestamp_request.is_set
	|| traceroute.is_set
	|| unreachable.is_set;
}

bool Native::ObjectGroup::Service::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alternate_address.yfilter)
	|| ydk::is_set(conversion_error.yfilter)
	|| ydk::is_set(echo.yfilter)
	|| ydk::is_set(echo_reply.yfilter)
	|| ydk::is_set(information_reply.yfilter)
	|| ydk::is_set(information_request.yfilter)
	|| ydk::is_set(mask_reply.yfilter)
	|| ydk::is_set(mask_request.yfilter)
	|| ydk::is_set(mobile_redirect.yfilter)
	|| ydk::is_set(parameter_problem.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(redirect.yfilter)
	|| ydk::is_set(router_advertisement.yfilter)
	|| ydk::is_set(router_solicitation.yfilter)
	|| ydk::is_set(source_quench.yfilter)
	|| ydk::is_set(time_exceeded.yfilter)
	|| ydk::is_set(timestamp_reply.yfilter)
	|| ydk::is_set(timestamp_request.yfilter)
	|| ydk::is_set(traceroute.yfilter)
	|| ydk::is_set(unreachable.yfilter);
}

std::string Native::ObjectGroup::Service::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Service::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alternate_address.is_set || is_set(alternate_address.yfilter)) leaf_name_data.push_back(alternate_address.get_name_leafdata());
    if (conversion_error.is_set || is_set(conversion_error.yfilter)) leaf_name_data.push_back(conversion_error.get_name_leafdata());
    if (echo.is_set || is_set(echo.yfilter)) leaf_name_data.push_back(echo.get_name_leafdata());
    if (echo_reply.is_set || is_set(echo_reply.yfilter)) leaf_name_data.push_back(echo_reply.get_name_leafdata());
    if (information_reply.is_set || is_set(information_reply.yfilter)) leaf_name_data.push_back(information_reply.get_name_leafdata());
    if (information_request.is_set || is_set(information_request.yfilter)) leaf_name_data.push_back(information_request.get_name_leafdata());
    if (mask_reply.is_set || is_set(mask_reply.yfilter)) leaf_name_data.push_back(mask_reply.get_name_leafdata());
    if (mask_request.is_set || is_set(mask_request.yfilter)) leaf_name_data.push_back(mask_request.get_name_leafdata());
    if (mobile_redirect.is_set || is_set(mobile_redirect.yfilter)) leaf_name_data.push_back(mobile_redirect.get_name_leafdata());
    if (parameter_problem.is_set || is_set(parameter_problem.yfilter)) leaf_name_data.push_back(parameter_problem.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (redirect.is_set || is_set(redirect.yfilter)) leaf_name_data.push_back(redirect.get_name_leafdata());
    if (router_advertisement.is_set || is_set(router_advertisement.yfilter)) leaf_name_data.push_back(router_advertisement.get_name_leafdata());
    if (router_solicitation.is_set || is_set(router_solicitation.yfilter)) leaf_name_data.push_back(router_solicitation.get_name_leafdata());
    if (source_quench.is_set || is_set(source_quench.yfilter)) leaf_name_data.push_back(source_quench.get_name_leafdata());
    if (time_exceeded.is_set || is_set(time_exceeded.yfilter)) leaf_name_data.push_back(time_exceeded.get_name_leafdata());
    if (timestamp_reply.is_set || is_set(timestamp_reply.yfilter)) leaf_name_data.push_back(timestamp_reply.get_name_leafdata());
    if (timestamp_request.is_set || is_set(timestamp_request.yfilter)) leaf_name_data.push_back(timestamp_request.get_name_leafdata());
    if (traceroute.is_set || is_set(traceroute.yfilter)) leaf_name_data.push_back(traceroute.get_name_leafdata());
    if (unreachable.is_set || is_set(unreachable.yfilter)) leaf_name_data.push_back(unreachable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Service::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Service::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ObjectGroup::Service::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alternate-address")
    {
        alternate_address = value;
        alternate_address.value_namespace = name_space;
        alternate_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conversion-error")
    {
        conversion_error = value;
        conversion_error.value_namespace = name_space;
        conversion_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo")
    {
        echo = value;
        echo.value_namespace = name_space;
        echo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-reply")
    {
        echo_reply = value;
        echo_reply.value_namespace = name_space;
        echo_reply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-reply")
    {
        information_reply = value;
        information_reply.value_namespace = name_space;
        information_reply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-request")
    {
        information_request = value;
        information_request.value_namespace = name_space;
        information_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-reply")
    {
        mask_reply = value;
        mask_reply.value_namespace = name_space;
        mask_reply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-request")
    {
        mask_request = value;
        mask_request.value_namespace = name_space;
        mask_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobile-redirect")
    {
        mobile_redirect = value;
        mobile_redirect.value_namespace = name_space;
        mobile_redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parameter-problem")
    {
        parameter_problem = value;
        parameter_problem.value_namespace = name_space;
        parameter_problem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect")
    {
        redirect = value;
        redirect.value_namespace = name_space;
        redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-advertisement")
    {
        router_advertisement = value;
        router_advertisement.value_namespace = name_space;
        router_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-solicitation")
    {
        router_solicitation = value;
        router_solicitation.value_namespace = name_space;
        router_solicitation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-quench")
    {
        source_quench = value;
        source_quench.value_namespace = name_space;
        source_quench.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-exceeded")
    {
        time_exceeded = value;
        time_exceeded.value_namespace = name_space;
        time_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-reply")
    {
        timestamp_reply = value;
        timestamp_reply.value_namespace = name_space;
        timestamp_reply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-request")
    {
        timestamp_request = value;
        timestamp_request.value_namespace = name_space;
        timestamp_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traceroute")
    {
        traceroute = value;
        traceroute.value_namespace = name_space;
        traceroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable")
    {
        unreachable = value;
        unreachable.value_namespace = name_space;
        unreachable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Service::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alternate-address")
    {
        alternate_address.yfilter = yfilter;
    }
    if(value_path == "conversion-error")
    {
        conversion_error.yfilter = yfilter;
    }
    if(value_path == "echo")
    {
        echo.yfilter = yfilter;
    }
    if(value_path == "echo-reply")
    {
        echo_reply.yfilter = yfilter;
    }
    if(value_path == "information-reply")
    {
        information_reply.yfilter = yfilter;
    }
    if(value_path == "information-request")
    {
        information_request.yfilter = yfilter;
    }
    if(value_path == "mask-reply")
    {
        mask_reply.yfilter = yfilter;
    }
    if(value_path == "mask-request")
    {
        mask_request.yfilter = yfilter;
    }
    if(value_path == "mobile-redirect")
    {
        mobile_redirect.yfilter = yfilter;
    }
    if(value_path == "parameter-problem")
    {
        parameter_problem.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "redirect")
    {
        redirect.yfilter = yfilter;
    }
    if(value_path == "router-advertisement")
    {
        router_advertisement.yfilter = yfilter;
    }
    if(value_path == "router-solicitation")
    {
        router_solicitation.yfilter = yfilter;
    }
    if(value_path == "source-quench")
    {
        source_quench.yfilter = yfilter;
    }
    if(value_path == "time-exceeded")
    {
        time_exceeded.yfilter = yfilter;
    }
    if(value_path == "timestamp-reply")
    {
        timestamp_reply.yfilter = yfilter;
    }
    if(value_path == "timestamp-request")
    {
        timestamp_request.yfilter = yfilter;
    }
    if(value_path == "traceroute")
    {
        traceroute.yfilter = yfilter;
    }
    if(value_path == "unreachable")
    {
        unreachable.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Service::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alternate-address" || name == "conversion-error" || name == "echo" || name == "echo-reply" || name == "information-reply" || name == "information-request" || name == "mask-reply" || name == "mask-request" || name == "mobile-redirect" || name == "parameter-problem" || name == "port-number" || name == "redirect" || name == "router-advertisement" || name == "router-solicitation" || name == "source-quench" || name == "time-exceeded" || name == "timestamp-reply" || name == "timestamp-request" || name == "traceroute" || name == "unreachable")
        return true;
    return false;
}

Native::ObjectGroup::Service::Tcp::Tcp()
{

    yang_name = "tcp"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ObjectGroup::Service::Tcp::~Tcp()
{
}

bool Native::ObjectGroup::Service::Tcp::has_data() const
{
    for (std::size_t index=0; index<tcp_port_list.size(); index++)
    {
        if(tcp_port_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ObjectGroup::Service::Tcp::has_operation() const
{
    for (std::size_t index=0; index<tcp_port_list.size(); index++)
    {
        if(tcp_port_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ObjectGroup::Service::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Service::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Service::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-port-list")
    {
        for(auto const & c : tcp_port_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ObjectGroup::Service::Tcp::TcpPortList>();
        c->parent = this;
        tcp_port_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Service::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tcp_port_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ObjectGroup::Service::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ObjectGroup::Service::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ObjectGroup::Service::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-port-list")
        return true;
    return false;
}

Native::ObjectGroup::Service::Tcp::TcpPortList::TcpPortList()
    :
    tcp_port{YType::str, "tcp-port"},
    max_tcp_port{YType::str, "max-tcp-port"},
    operator_{YType::enumeration, "operator"}
{

    yang_name = "tcp-port-list"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ObjectGroup::Service::Tcp::TcpPortList::~TcpPortList()
{
}

bool Native::ObjectGroup::Service::Tcp::TcpPortList::has_data() const
{
    return tcp_port.is_set
	|| max_tcp_port.is_set
	|| operator_.is_set;
}

bool Native::ObjectGroup::Service::Tcp::TcpPortList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp_port.yfilter)
	|| ydk::is_set(max_tcp_port.yfilter)
	|| ydk::is_set(operator_.yfilter);
}

std::string Native::ObjectGroup::Service::Tcp::TcpPortList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-port-list" <<"[tcp-port='" <<tcp_port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Service::Tcp::TcpPortList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp_port.is_set || is_set(tcp_port.yfilter)) leaf_name_data.push_back(tcp_port.get_name_leafdata());
    if (max_tcp_port.is_set || is_set(max_tcp_port.yfilter)) leaf_name_data.push_back(max_tcp_port.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Service::Tcp::TcpPortList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Service::Tcp::TcpPortList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ObjectGroup::Service::Tcp::TcpPortList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp-port")
    {
        tcp_port = value;
        tcp_port.value_namespace = name_space;
        tcp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tcp-port")
    {
        max_tcp_port = value;
        max_tcp_port.value_namespace = name_space;
        max_tcp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Service::Tcp::TcpPortList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp-port")
    {
        tcp_port.yfilter = yfilter;
    }
    if(value_path == "max-tcp-port")
    {
        max_tcp_port.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Service::Tcp::TcpPortList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-port" || name == "max-tcp-port" || name == "operator")
        return true;
    return false;
}

Native::ObjectGroup::Service::TcpUdp::TcpUdp()
{

    yang_name = "tcp-udp"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ObjectGroup::Service::TcpUdp::~TcpUdp()
{
}

bool Native::ObjectGroup::Service::TcpUdp::has_data() const
{
    for (std::size_t index=0; index<udp_port_list.size(); index++)
    {
        if(udp_port_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ObjectGroup::Service::TcpUdp::has_operation() const
{
    for (std::size_t index=0; index<udp_port_list.size(); index++)
    {
        if(udp_port_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ObjectGroup::Service::TcpUdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Service::TcpUdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Service::TcpUdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-port-list")
    {
        for(auto const & c : udp_port_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ObjectGroup::Service::TcpUdp::UdpPortList>();
        c->parent = this;
        udp_port_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Service::TcpUdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : udp_port_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ObjectGroup::Service::TcpUdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ObjectGroup::Service::TcpUdp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ObjectGroup::Service::TcpUdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-port-list")
        return true;
    return false;
}

Native::ObjectGroup::Service::TcpUdp::UdpPortList::UdpPortList()
    :
    udp_port{YType::str, "udp-port"},
    max_udp_port{YType::str, "max-udp-port"},
    operator_{YType::enumeration, "operator"}
{

    yang_name = "udp-port-list"; yang_parent_name = "tcp-udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ObjectGroup::Service::TcpUdp::UdpPortList::~UdpPortList()
{
}

bool Native::ObjectGroup::Service::TcpUdp::UdpPortList::has_data() const
{
    return udp_port.is_set
	|| max_udp_port.is_set
	|| operator_.is_set;
}

bool Native::ObjectGroup::Service::TcpUdp::UdpPortList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udp_port.yfilter)
	|| ydk::is_set(max_udp_port.yfilter)
	|| ydk::is_set(operator_.yfilter);
}

std::string Native::ObjectGroup::Service::TcpUdp::UdpPortList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-port-list" <<"[udp-port='" <<udp_port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Service::TcpUdp::UdpPortList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (max_udp_port.is_set || is_set(max_udp_port.yfilter)) leaf_name_data.push_back(max_udp_port.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Service::TcpUdp::UdpPortList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Service::TcpUdp::UdpPortList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ObjectGroup::Service::TcpUdp::UdpPortList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-udp-port")
    {
        max_udp_port = value;
        max_udp_port.value_namespace = name_space;
        max_udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Service::TcpUdp::UdpPortList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
    if(value_path == "max-udp-port")
    {
        max_udp_port.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Service::TcpUdp::UdpPortList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-port" || name == "max-udp-port" || name == "operator")
        return true;
    return false;
}

Native::ObjectGroup::Service::Udp::Udp()
{

    yang_name = "udp"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ObjectGroup::Service::Udp::~Udp()
{
}

bool Native::ObjectGroup::Service::Udp::has_data() const
{
    for (std::size_t index=0; index<udp_port_list.size(); index++)
    {
        if(udp_port_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ObjectGroup::Service::Udp::has_operation() const
{
    for (std::size_t index=0; index<udp_port_list.size(); index++)
    {
        if(udp_port_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ObjectGroup::Service::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Service::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Service::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-port-list")
    {
        for(auto const & c : udp_port_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ObjectGroup::Service::Udp::UdpPortList>();
        c->parent = this;
        udp_port_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Service::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : udp_port_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ObjectGroup::Service::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ObjectGroup::Service::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ObjectGroup::Service::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-port-list")
        return true;
    return false;
}

Native::ObjectGroup::Service::Udp::UdpPortList::UdpPortList()
    :
    udp_port{YType::str, "udp-port"},
    max_udp_port{YType::str, "max-udp-port"},
    operator_{YType::enumeration, "operator"}
{

    yang_name = "udp-port-list"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ObjectGroup::Service::Udp::UdpPortList::~UdpPortList()
{
}

bool Native::ObjectGroup::Service::Udp::UdpPortList::has_data() const
{
    return udp_port.is_set
	|| max_udp_port.is_set
	|| operator_.is_set;
}

bool Native::ObjectGroup::Service::Udp::UdpPortList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udp_port.yfilter)
	|| ydk::is_set(max_udp_port.yfilter)
	|| ydk::is_set(operator_.yfilter);
}

std::string Native::ObjectGroup::Service::Udp::UdpPortList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-port-list" <<"[udp-port='" <<udp_port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Service::Udp::UdpPortList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (max_udp_port.is_set || is_set(max_udp_port.yfilter)) leaf_name_data.push_back(max_udp_port.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ObjectGroup::Service::Udp::UdpPortList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ObjectGroup::Service::Udp::UdpPortList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ObjectGroup::Service::Udp::UdpPortList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-udp-port")
    {
        max_udp_port = value;
        max_udp_port.value_namespace = name_space;
        max_udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Service::Udp::UdpPortList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
    if(value_path == "max-udp-port")
    {
        max_udp_port.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Service::Udp::UdpPortList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-port" || name == "max-udp-port" || name == "operator")
        return true;
    return false;
}

Native::Otv::Otv()
    :
    site_identifier{YType::str, "Cisco-IOS-XE-otv:site-identifier"}
    	,
    fragmentation(std::make_shared<Native::Otv::Fragmentation>())
	,isis(std::make_shared<Native::Otv::Isis>())
{
    fragmentation->parent = this;
    isis->parent = this;

    yang_name = "otv"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Otv::~Otv()
{
}

bool Native::Otv::has_data() const
{
    for (std::size_t index=0; index<site.size(); index++)
    {
        if(site[index]->has_data())
            return true;
    }
    return site_identifier.is_set
	|| (fragmentation !=  nullptr && fragmentation->has_data())
	|| (isis !=  nullptr && isis->has_data());
}

bool Native::Otv::has_operation() const
{
    for (std::size_t index=0; index<site.size(); index++)
    {
        if(site[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(site_identifier.yfilter)
	|| (fragmentation !=  nullptr && fragmentation->has_operation())
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Otv::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_identifier.is_set || is_set(site_identifier.yfilter)) leaf_name_data.push_back(site_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fragmentation")
    {
        if(fragmentation == nullptr)
        {
            fragmentation = std::make_shared<Native::Otv::Fragmentation>();
        }
        return fragmentation;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Otv::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "site")
    {
        for(auto const & c : site)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Otv::Site>();
        c->parent = this;
        site.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fragmentation != nullptr)
    {
        children["fragmentation"] = fragmentation;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    for (auto const & c : site)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Otv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-identifier")
    {
        site_identifier = value;
        site_identifier.value_namespace = name_space;
        site_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-identifier")
    {
        site_identifier.yfilter = yfilter;
    }
}

bool Native::Otv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fragmentation" || name == "isis" || name == "site" || name == "site-identifier")
        return true;
    return false;
}

Native::Otv::Fragmentation::Fragmentation()
    :
    join_interface(std::make_shared<Native::Otv::Fragmentation::JoinInterface>())
{
    join_interface->parent = this;

    yang_name = "fragmentation"; yang_parent_name = "otv"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Otv::Fragmentation::~Fragmentation()
{
}

bool Native::Otv::Fragmentation::has_data() const
{
    return (join_interface !=  nullptr && join_interface->has_data());
}

bool Native::Otv::Fragmentation::has_operation() const
{
    return is_set(yfilter)
	|| (join_interface !=  nullptr && join_interface->has_operation());
}

std::string Native::Otv::Fragmentation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Fragmentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:fragmentation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Fragmentation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Fragmentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join-interface")
    {
        if(join_interface == nullptr)
        {
            join_interface = std::make_shared<Native::Otv::Fragmentation::JoinInterface>();
        }
        return join_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Fragmentation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(join_interface != nullptr)
    {
        children["join-interface"] = join_interface;
    }

    return children;
}

void Native::Otv::Fragmentation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Fragmentation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Fragmentation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "join-interface")
        return true;
    return false;
}

Native::Otv::Fragmentation::JoinInterface::JoinInterface()
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
    atm_acrsubinterface(std::make_shared<Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Otv::Fragmentation::JoinInterface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Otv::Fragmentation::JoinInterface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "join-interface"; yang_parent_name = "fragmentation"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Otv::Fragmentation::JoinInterface::~JoinInterface()
{
}

bool Native::Otv::Fragmentation::JoinInterface::has_data() const
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

bool Native::Otv::Fragmentation::JoinInterface::has_operation() const
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

std::string Native::Otv::Fragmentation::JoinInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:fragmentation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Fragmentation::JoinInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Fragmentation::JoinInterface::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Otv::Fragmentation::JoinInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Otv::Fragmentation::JoinInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Otv::Fragmentation::JoinInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Fragmentation::JoinInterface::get_children() const
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

void Native::Otv::Fragmentation::JoinInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Otv::Fragmentation::JoinInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Otv::Fragmentation::JoinInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "join-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:fragmentation/join-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Otv::Fragmentation::JoinInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "join-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:fragmentation/join-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Otv::Fragmentation::JoinInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "join-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:fragmentation/join-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Otv::Fragmentation::JoinInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "join-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:fragmentation/join-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Otv::Isis::Isis()
    :
    site(std::make_shared<Native::Otv::Isis::Site>())
{
    site->parent = this;

    yang_name = "isis"; yang_parent_name = "otv"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Otv::Isis::~Isis()
{
}

bool Native::Otv::Isis::has_data() const
{
    for (std::size_t index=0; index<overlay.size(); index++)
    {
        if(overlay[index]->has_data())
            return true;
    }
    return (site !=  nullptr && site->has_data());
}

bool Native::Otv::Isis::has_operation() const
{
    for (std::size_t index=0; index<overlay.size(); index++)
    {
        if(overlay[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (site !=  nullptr && site->has_operation());
}

std::string Native::Otv::Isis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Overlay")
    {
        for(auto const & c : overlay)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Otv::Isis::Overlay>();
        c->parent = this;
        overlay.push_back(c);
        return c;
    }

    if(child_yang_name == "site")
    {
        if(site == nullptr)
        {
            site = std::make_shared<Native::Otv::Isis::Site>();
        }
        return site;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : overlay)
    {
        children[c->get_segment_path()] = c;
    }

    if(site != nullptr)
    {
        children["site"] = site;
    }

    return children;
}

void Native::Otv::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Overlay" || name == "site")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Overlay()
    :
    number{YType::uint16, "number"},
    delayed_deletion_interval{YType::uint32, "delayed-deletion-interval"},
    lsp_mtu{YType::uint32, "lsp-mtu"},
    lsp_refresh_interval{YType::uint32, "lsp-refresh-interval"},
    max_lsp_lifetime{YType::uint32, "max-lsp-lifetime"}
    	,
    authentication(std::make_shared<Native::Otv::Isis::Overlay::Authentication>())
	,default_(std::make_shared<Native::Otv::Isis::Overlay::Default_>())
	,hostname(std::make_shared<Native::Otv::Isis::Overlay::Hostname>())
	,log_adjacency_changes(nullptr) // presence node
	,lsp_gen_interval(std::make_shared<Native::Otv::Isis::Overlay::LspGenInterval>())
	,nsf(std::make_shared<Native::Otv::Isis::Overlay::Nsf>())
	,prc_interval(std::make_shared<Native::Otv::Isis::Overlay::PrcInterval>())
	,skeptical(std::make_shared<Native::Otv::Isis::Overlay::Skeptical>())
	,spf_interval(std::make_shared<Native::Otv::Isis::Overlay::SpfInterval>())
{
    authentication->parent = this;
    default_->parent = this;
    hostname->parent = this;
    lsp_gen_interval->parent = this;
    nsf->parent = this;
    prc_interval->parent = this;
    skeptical->parent = this;
    spf_interval->parent = this;

    yang_name = "Overlay"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Otv::Isis::Overlay::~Overlay()
{
}

bool Native::Otv::Isis::Overlay::has_data() const
{
    return number.is_set
	|| delayed_deletion_interval.is_set
	|| lsp_mtu.is_set
	|| lsp_refresh_interval.is_set
	|| max_lsp_lifetime.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_data())
	|| (lsp_gen_interval !=  nullptr && lsp_gen_interval->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (prc_interval !=  nullptr && prc_interval->has_data())
	|| (skeptical !=  nullptr && skeptical->has_data())
	|| (spf_interval !=  nullptr && spf_interval->has_data());
}

bool Native::Otv::Isis::Overlay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(delayed_deletion_interval.yfilter)
	|| ydk::is_set(lsp_mtu.yfilter)
	|| ydk::is_set(lsp_refresh_interval.yfilter)
	|| ydk::is_set(max_lsp_lifetime.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_operation())
	|| (lsp_gen_interval !=  nullptr && lsp_gen_interval->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (prc_interval !=  nullptr && prc_interval->has_operation())
	|| (skeptical !=  nullptr && skeptical->has_operation())
	|| (spf_interval !=  nullptr && spf_interval->has_operation());
}

std::string Native::Otv::Isis::Overlay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Isis::Overlay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Overlay" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (delayed_deletion_interval.is_set || is_set(delayed_deletion_interval.yfilter)) leaf_name_data.push_back(delayed_deletion_interval.get_name_leafdata());
    if (lsp_mtu.is_set || is_set(lsp_mtu.yfilter)) leaf_name_data.push_back(lsp_mtu.get_name_leafdata());
    if (lsp_refresh_interval.is_set || is_set(lsp_refresh_interval.yfilter)) leaf_name_data.push_back(lsp_refresh_interval.get_name_leafdata());
    if (max_lsp_lifetime.is_set || is_set(max_lsp_lifetime.yfilter)) leaf_name_data.push_back(max_lsp_lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Otv::Isis::Overlay::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Otv::Isis::Overlay::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Otv::Isis::Overlay::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "log-adjacency-changes")
    {
        if(log_adjacency_changes == nullptr)
        {
            log_adjacency_changes = std::make_shared<Native::Otv::Isis::Overlay::LogAdjacencyChanges>();
        }
        return log_adjacency_changes;
    }

    if(child_yang_name == "lsp-gen-interval")
    {
        if(lsp_gen_interval == nullptr)
        {
            lsp_gen_interval = std::make_shared<Native::Otv::Isis::Overlay::LspGenInterval>();
        }
        return lsp_gen_interval;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Native::Otv::Isis::Overlay::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "prc-interval")
    {
        if(prc_interval == nullptr)
        {
            prc_interval = std::make_shared<Native::Otv::Isis::Overlay::PrcInterval>();
        }
        return prc_interval;
    }

    if(child_yang_name == "skeptical")
    {
        if(skeptical == nullptr)
        {
            skeptical = std::make_shared<Native::Otv::Isis::Overlay::Skeptical>();
        }
        return skeptical;
    }

    if(child_yang_name == "spf-interval")
    {
        if(spf_interval == nullptr)
        {
            spf_interval = std::make_shared<Native::Otv::Isis::Overlay::SpfInterval>();
        }
        return spf_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    if(log_adjacency_changes != nullptr)
    {
        children["log-adjacency-changes"] = log_adjacency_changes;
    }

    if(lsp_gen_interval != nullptr)
    {
        children["lsp-gen-interval"] = lsp_gen_interval;
    }

    if(nsf != nullptr)
    {
        children["nsf"] = nsf;
    }

    if(prc_interval != nullptr)
    {
        children["prc-interval"] = prc_interval;
    }

    if(skeptical != nullptr)
    {
        children["skeptical"] = skeptical;
    }

    if(spf_interval != nullptr)
    {
        children["spf-interval"] = spf_interval;
    }

    return children;
}

void Native::Otv::Isis::Overlay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delayed-deletion-interval")
    {
        delayed_deletion_interval = value;
        delayed_deletion_interval.value_namespace = name_space;
        delayed_deletion_interval.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "max-lsp-lifetime")
    {
        max_lsp_lifetime = value;
        max_lsp_lifetime.value_namespace = name_space;
        max_lsp_lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "delayed-deletion-interval")
    {
        delayed_deletion_interval.yfilter = yfilter;
    }
    if(value_path == "lsp-mtu")
    {
        lsp_mtu.yfilter = yfilter;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "max-lsp-lifetime")
    {
        max_lsp_lifetime.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "default" || name == "hostname" || name == "log-adjacency-changes" || name == "lsp-gen-interval" || name == "nsf" || name == "prc-interval" || name == "skeptical" || name == "spf-interval" || name == "number" || name == "delayed-deletion-interval" || name == "lsp-mtu" || name == "lsp-refresh-interval" || name == "max-lsp-lifetime")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    mode{YType::enumeration, "mode"},
    send_only{YType::empty, "send-only"}
{

    yang_name = "authentication"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Isis::Overlay::Authentication::~Authentication()
{
}

bool Native::Otv::Isis::Overlay::Authentication::has_data() const
{
    return key_chain.is_set
	|| mode.is_set
	|| send_only.is_set;
}

bool Native::Otv::Isis::Overlay::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(send_only.yfilter);
}

std::string Native::Otv::Isis::Overlay::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (send_only.is_set || is_set(send_only.yfilter)) leaf_name_data.push_back(send_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-only")
    {
        send_only = value;
        send_only.value_namespace = name_space;
        send_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "send-only")
    {
        send_only.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode" || name == "send-only")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Default_::Default_()
    :
    delayed_deletion_interval{YType::empty, "delayed-deletion-interval"},
    log_adjacency_changes{YType::empty, "log-adjacency-changes"},
    lsp_gen_interval{YType::empty, "lsp-gen-interval"},
    lsp_mtu{YType::empty, "lsp-mtu"},
    lsp_refresh_interval{YType::empty, "lsp-refresh-interval"},
    max_lsp_lifetime{YType::empty, "max-lsp-lifetime"},
    prc_interval{YType::empty, "prc-interval"},
    spf_interval{YType::empty, "spf-interval"}
    	,
    authentication(std::make_shared<Native::Otv::Isis::Overlay::Default_::Authentication>())
	,hostname(std::make_shared<Native::Otv::Isis::Overlay::Default_::Hostname>())
	,nsf(std::make_shared<Native::Otv::Isis::Overlay::Default_::Nsf>())
	,skeptical(std::make_shared<Native::Otv::Isis::Overlay::Default_::Skeptical>())
{
    authentication->parent = this;
    hostname->parent = this;
    nsf->parent = this;
    skeptical->parent = this;

    yang_name = "default"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Isis::Overlay::Default_::~Default_()
{
}

bool Native::Otv::Isis::Overlay::Default_::has_data() const
{
    return delayed_deletion_interval.is_set
	|| log_adjacency_changes.is_set
	|| lsp_gen_interval.is_set
	|| lsp_mtu.is_set
	|| lsp_refresh_interval.is_set
	|| max_lsp_lifetime.is_set
	|| prc_interval.is_set
	|| spf_interval.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (skeptical !=  nullptr && skeptical->has_data());
}

bool Native::Otv::Isis::Overlay::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delayed_deletion_interval.yfilter)
	|| ydk::is_set(log_adjacency_changes.yfilter)
	|| ydk::is_set(lsp_gen_interval.yfilter)
	|| ydk::is_set(lsp_mtu.yfilter)
	|| ydk::is_set(lsp_refresh_interval.yfilter)
	|| ydk::is_set(max_lsp_lifetime.yfilter)
	|| ydk::is_set(prc_interval.yfilter)
	|| ydk::is_set(spf_interval.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (skeptical !=  nullptr && skeptical->has_operation());
}

std::string Native::Otv::Isis::Overlay::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delayed_deletion_interval.is_set || is_set(delayed_deletion_interval.yfilter)) leaf_name_data.push_back(delayed_deletion_interval.get_name_leafdata());
    if (log_adjacency_changes.is_set || is_set(log_adjacency_changes.yfilter)) leaf_name_data.push_back(log_adjacency_changes.get_name_leafdata());
    if (lsp_gen_interval.is_set || is_set(lsp_gen_interval.yfilter)) leaf_name_data.push_back(lsp_gen_interval.get_name_leafdata());
    if (lsp_mtu.is_set || is_set(lsp_mtu.yfilter)) leaf_name_data.push_back(lsp_mtu.get_name_leafdata());
    if (lsp_refresh_interval.is_set || is_set(lsp_refresh_interval.yfilter)) leaf_name_data.push_back(lsp_refresh_interval.get_name_leafdata());
    if (max_lsp_lifetime.is_set || is_set(max_lsp_lifetime.yfilter)) leaf_name_data.push_back(max_lsp_lifetime.get_name_leafdata());
    if (prc_interval.is_set || is_set(prc_interval.yfilter)) leaf_name_data.push_back(prc_interval.get_name_leafdata());
    if (spf_interval.is_set || is_set(spf_interval.yfilter)) leaf_name_data.push_back(spf_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Otv::Isis::Overlay::Default_::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Otv::Isis::Overlay::Default_::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Native::Otv::Isis::Overlay::Default_::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "skeptical")
    {
        if(skeptical == nullptr)
        {
            skeptical = std::make_shared<Native::Otv::Isis::Overlay::Default_::Skeptical>();
        }
        return skeptical;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    if(nsf != nullptr)
    {
        children["nsf"] = nsf;
    }

    if(skeptical != nullptr)
    {
        children["skeptical"] = skeptical;
    }

    return children;
}

void Native::Otv::Isis::Overlay::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delayed-deletion-interval")
    {
        delayed_deletion_interval = value;
        delayed_deletion_interval.value_namespace = name_space;
        delayed_deletion_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes = value;
        log_adjacency_changes.value_namespace = name_space;
        log_adjacency_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-gen-interval")
    {
        lsp_gen_interval = value;
        lsp_gen_interval.value_namespace = name_space;
        lsp_gen_interval.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "max-lsp-lifetime")
    {
        max_lsp_lifetime = value;
        max_lsp_lifetime.value_namespace = name_space;
        max_lsp_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prc-interval")
    {
        prc_interval = value;
        prc_interval.value_namespace = name_space;
        prc_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-interval")
    {
        spf_interval = value;
        spf_interval.value_namespace = name_space;
        spf_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delayed-deletion-interval")
    {
        delayed_deletion_interval.yfilter = yfilter;
    }
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes.yfilter = yfilter;
    }
    if(value_path == "lsp-gen-interval")
    {
        lsp_gen_interval.yfilter = yfilter;
    }
    if(value_path == "lsp-mtu")
    {
        lsp_mtu.yfilter = yfilter;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "max-lsp-lifetime")
    {
        max_lsp_lifetime.yfilter = yfilter;
    }
    if(value_path == "prc-interval")
    {
        prc_interval.yfilter = yfilter;
    }
    if(value_path == "spf-interval")
    {
        spf_interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "hostname" || name == "nsf" || name == "skeptical" || name == "delayed-deletion-interval" || name == "log-adjacency-changes" || name == "lsp-gen-interval" || name == "lsp-mtu" || name == "lsp-refresh-interval" || name == "max-lsp-lifetime" || name == "prc-interval" || name == "spf-interval")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Default_::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    mode{YType::enumeration, "mode"},
    send_only{YType::empty, "send-only"}
{

    yang_name = "authentication"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Isis::Overlay::Default_::Authentication::~Authentication()
{
}

bool Native::Otv::Isis::Overlay::Default_::Authentication::has_data() const
{
    return key_chain.is_set
	|| mode.is_set
	|| send_only.is_set;
}

bool Native::Otv::Isis::Overlay::Default_::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(send_only.yfilter);
}

std::string Native::Otv::Isis::Overlay::Default_::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Default_::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (send_only.is_set || is_set(send_only.yfilter)) leaf_name_data.push_back(send_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Default_::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Default_::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Default_::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-only")
    {
        send_only = value;
        send_only.value_namespace = name_space;
        send_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Default_::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "send-only")
    {
        send_only.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Default_::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode" || name == "send-only")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Default_::Hostname::Hostname()
    :
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "hostname"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Isis::Overlay::Default_::Hostname::~Hostname()
{
}

bool Native::Otv::Isis::Overlay::Default_::Hostname::has_data() const
{
    return dynamic.is_set;
}

bool Native::Otv::Isis::Overlay::Default_::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Otv::Isis::Overlay::Default_::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Default_::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Default_::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Default_::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Default_::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Default_::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Default_::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Default_::Nsf::Nsf()
    :
    cisco{YType::empty, "cisco"},
    interval{YType::empty, "interval"}
{

    yang_name = "nsf"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Isis::Overlay::Default_::Nsf::~Nsf()
{
}

bool Native::Otv::Isis::Overlay::Default_::Nsf::has_data() const
{
    return cisco.is_set
	|| interval.is_set;
}

bool Native::Otv::Isis::Overlay::Default_::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Otv::Isis::Overlay::Default_::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Default_::Nsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.yfilter)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Default_::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Default_::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Default_::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco")
    {
        cisco = value;
        cisco.value_namespace = name_space;
        cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Default_::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco")
    {
        cisco.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Default_::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "interval")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Default_::Skeptical::Skeptical()
    :
    interval{YType::empty, "interval"}
{

    yang_name = "skeptical"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Isis::Overlay::Default_::Skeptical::~Skeptical()
{
}

bool Native::Otv::Isis::Overlay::Default_::Skeptical::has_data() const
{
    return interval.is_set;
}

bool Native::Otv::Isis::Overlay::Default_::Skeptical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Otv::Isis::Overlay::Default_::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Default_::Skeptical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Default_::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Default_::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Default_::Skeptical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Default_::Skeptical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Default_::Skeptical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Hostname::Hostname()
    :
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "hostname"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Isis::Overlay::Hostname::~Hostname()
{
}

bool Native::Otv::Isis::Overlay::Hostname::has_data() const
{
    return dynamic.is_set;
}

bool Native::Otv::Isis::Overlay::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Otv::Isis::Overlay::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::LogAdjacencyChanges::LogAdjacencyChanges()
    :
    all{YType::empty, "all"}
{

    yang_name = "log-adjacency-changes"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Isis::Overlay::LogAdjacencyChanges::~LogAdjacencyChanges()
{
}

bool Native::Otv::Isis::Overlay::LogAdjacencyChanges::has_data() const
{
    return all.is_set;
}

bool Native::Otv::Isis::Overlay::LogAdjacencyChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Otv::Isis::Overlay::LogAdjacencyChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-adjacency-changes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::LogAdjacencyChanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::LogAdjacencyChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::LogAdjacencyChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::LogAdjacencyChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::LogAdjacencyChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::LogAdjacencyChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::LspGenInterval::LspGenInterval()
    :
    milliseconds{YType::uint32, "milliseconds"},
    seconds{YType::uint8, "seconds"},
    wait{YType::uint32, "wait"}
{

    yang_name = "lsp-gen-interval"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Isis::Overlay::LspGenInterval::~LspGenInterval()
{
}

bool Native::Otv::Isis::Overlay::LspGenInterval::has_data() const
{
    return milliseconds.is_set
	|| seconds.is_set
	|| wait.is_set;
}

bool Native::Otv::Isis::Overlay::LspGenInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(milliseconds.yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Otv::Isis::Overlay::LspGenInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-gen-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::LspGenInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds.is_set || is_set(milliseconds.yfilter)) leaf_name_data.push_back(milliseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::LspGenInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::LspGenInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::LspGenInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "milliseconds")
    {
        milliseconds = value;
        milliseconds.value_namespace = name_space;
        milliseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::LspGenInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "milliseconds")
    {
        milliseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::LspGenInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "milliseconds" || name == "seconds" || name == "wait")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Nsf::Nsf()
    :
    cisco{YType::empty, "cisco"},
    interval{YType::uint32, "interval"}
{

    yang_name = "nsf"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Isis::Overlay::Nsf::~Nsf()
{
}

bool Native::Otv::Isis::Overlay::Nsf::has_data() const
{
    return cisco.is_set
	|| interval.is_set;
}

bool Native::Otv::Isis::Overlay::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Otv::Isis::Overlay::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Nsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.yfilter)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco")
    {
        cisco = value;
        cisco.value_namespace = name_space;
        cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco")
    {
        cisco.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "interval")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::PrcInterval::PrcInterval()
    :
    milliseconds{YType::uint32, "milliseconds"},
    seconds{YType::uint8, "seconds"},
    wait{YType::uint32, "wait"}
{

    yang_name = "prc-interval"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Isis::Overlay::PrcInterval::~PrcInterval()
{
}

bool Native::Otv::Isis::Overlay::PrcInterval::has_data() const
{
    return milliseconds.is_set
	|| seconds.is_set
	|| wait.is_set;
}

bool Native::Otv::Isis::Overlay::PrcInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(milliseconds.yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Otv::Isis::Overlay::PrcInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::PrcInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds.is_set || is_set(milliseconds.yfilter)) leaf_name_data.push_back(milliseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::PrcInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::PrcInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::PrcInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "milliseconds")
    {
        milliseconds = value;
        milliseconds.value_namespace = name_space;
        milliseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::PrcInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "milliseconds")
    {
        milliseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::PrcInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "milliseconds" || name == "seconds" || name == "wait")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::Skeptical::Skeptical()
    :
    interval{YType::uint32, "interval"}
{

    yang_name = "skeptical"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Isis::Overlay::Skeptical::~Skeptical()
{
}

bool Native::Otv::Isis::Overlay::Skeptical::has_data() const
{
    return interval.is_set;
}

bool Native::Otv::Isis::Overlay::Skeptical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Otv::Isis::Overlay::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::Skeptical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::Skeptical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::Skeptical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::Skeptical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Otv::Isis::Overlay::SpfInterval::SpfInterval()
    :
    milliseconds{YType::uint32, "milliseconds"},
    seconds{YType::uint8, "seconds"},
    wait{YType::uint32, "wait"}
{

    yang_name = "spf-interval"; yang_parent_name = "Overlay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Isis::Overlay::SpfInterval::~SpfInterval()
{
}

bool Native::Otv::Isis::Overlay::SpfInterval::has_data() const
{
    return milliseconds.is_set
	|| seconds.is_set
	|| wait.is_set;
}

bool Native::Otv::Isis::Overlay::SpfInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(milliseconds.yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(wait.yfilter);
}

std::string Native::Otv::Isis::Overlay::SpfInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Overlay::SpfInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds.is_set || is_set(milliseconds.yfilter)) leaf_name_data.push_back(milliseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (wait.is_set || is_set(wait.yfilter)) leaf_name_data.push_back(wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Overlay::SpfInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Overlay::SpfInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Overlay::SpfInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "milliseconds")
    {
        milliseconds = value;
        milliseconds.value_namespace = name_space;
        milliseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait")
    {
        wait = value;
        wait.value_namespace = name_space;
        wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Overlay::SpfInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "milliseconds")
    {
        milliseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "wait")
    {
        wait.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Overlay::SpfInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "milliseconds" || name == "seconds" || name == "wait")
        return true;
    return false;
}

Native::Otv::Isis::Site::Site()
    :
    net{YType::str, "net"}
    	,
    default_(std::make_shared<Native::Otv::Isis::Site::Default_>())
	,log_adjacency_changes(nullptr) // presence node
	,skeptical(std::make_shared<Native::Otv::Isis::Site::Skeptical>())
{
    default_->parent = this;
    skeptical->parent = this;

    yang_name = "site"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Otv::Isis::Site::~Site()
{
}

bool Native::Otv::Isis::Site::has_data() const
{
    return net.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_data())
	|| (skeptical !=  nullptr && skeptical->has_data());
}

bool Native::Otv::Isis::Site::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(net.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_operation())
	|| (skeptical !=  nullptr && skeptical->has_operation());
}

std::string Native::Otv::Isis::Site::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Isis::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Site::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (net.is_set || is_set(net.yfilter)) leaf_name_data.push_back(net.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Otv::Isis::Site::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "log-adjacency-changes")
    {
        if(log_adjacency_changes == nullptr)
        {
            log_adjacency_changes = std::make_shared<Native::Otv::Isis::Site::LogAdjacencyChanges>();
        }
        return log_adjacency_changes;
    }

    if(child_yang_name == "skeptical")
    {
        if(skeptical == nullptr)
        {
            skeptical = std::make_shared<Native::Otv::Isis::Site::Skeptical>();
        }
        return skeptical;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(log_adjacency_changes != nullptr)
    {
        children["log-adjacency-changes"] = log_adjacency_changes;
    }

    if(skeptical != nullptr)
    {
        children["skeptical"] = skeptical;
    }

    return children;
}

void Native::Otv::Isis::Site::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "net")
    {
        net = value;
        net.value_namespace = name_space;
        net.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Site::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "net")
    {
        net.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Site::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "log-adjacency-changes" || name == "skeptical" || name == "net")
        return true;
    return false;
}

Native::Otv::Isis::Site::Default_::Default_()
    :
    log_adjacency_changes{YType::empty, "log-adjacency-changes"},
    net{YType::empty, "net"}
    	,
    skeptical(std::make_shared<Native::Otv::Isis::Site::Default_::Skeptical>())
{
    skeptical->parent = this;

    yang_name = "default"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Otv::Isis::Site::Default_::~Default_()
{
}

bool Native::Otv::Isis::Site::Default_::has_data() const
{
    return log_adjacency_changes.is_set
	|| net.is_set
	|| (skeptical !=  nullptr && skeptical->has_data());
}

bool Native::Otv::Isis::Site::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_adjacency_changes.yfilter)
	|| ydk::is_set(net.yfilter)
	|| (skeptical !=  nullptr && skeptical->has_operation());
}

std::string Native::Otv::Isis::Site::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/site/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Isis::Site::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Site::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_adjacency_changes.is_set || is_set(log_adjacency_changes.yfilter)) leaf_name_data.push_back(log_adjacency_changes.get_name_leafdata());
    if (net.is_set || is_set(net.yfilter)) leaf_name_data.push_back(net.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Site::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "skeptical")
    {
        if(skeptical == nullptr)
        {
            skeptical = std::make_shared<Native::Otv::Isis::Site::Default_::Skeptical>();
        }
        return skeptical;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Site::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(skeptical != nullptr)
    {
        children["skeptical"] = skeptical;
    }

    return children;
}

void Native::Otv::Isis::Site::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes = value;
        log_adjacency_changes.value_namespace = name_space;
        log_adjacency_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net")
    {
        net = value;
        net.value_namespace = name_space;
        net.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Site::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes.yfilter = yfilter;
    }
    if(value_path == "net")
    {
        net.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Site::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "skeptical" || name == "log-adjacency-changes" || name == "net")
        return true;
    return false;
}

Native::Otv::Isis::Site::Default_::Skeptical::Skeptical()
    :
    interval{YType::empty, "interval"}
{

    yang_name = "skeptical"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Otv::Isis::Site::Default_::Skeptical::~Skeptical()
{
}

bool Native::Otv::Isis::Site::Default_::Skeptical::has_data() const
{
    return interval.is_set;
}

bool Native::Otv::Isis::Site::Default_::Skeptical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Otv::Isis::Site::Default_::Skeptical::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/site/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Isis::Site::Default_::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Site::Default_::Skeptical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Site::Default_::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Site::Default_::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Site::Default_::Skeptical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Site::Default_::Skeptical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Site::Default_::Skeptical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Otv::Isis::Site::LogAdjacencyChanges::LogAdjacencyChanges()
    :
    all{YType::empty, "all"}
{

    yang_name = "log-adjacency-changes"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Otv::Isis::Site::LogAdjacencyChanges::~LogAdjacencyChanges()
{
}

bool Native::Otv::Isis::Site::LogAdjacencyChanges::has_data() const
{
    return all.is_set;
}

bool Native::Otv::Isis::Site::LogAdjacencyChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Otv::Isis::Site::LogAdjacencyChanges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/site/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Isis::Site::LogAdjacencyChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-adjacency-changes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Site::LogAdjacencyChanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Site::LogAdjacencyChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Site::LogAdjacencyChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Site::LogAdjacencyChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Site::LogAdjacencyChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Site::LogAdjacencyChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Otv::Isis::Site::Skeptical::Skeptical()
    :
    interval{YType::uint32, "interval"}
{

    yang_name = "skeptical"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Otv::Isis::Site::Skeptical::~Skeptical()
{
}

bool Native::Otv::Isis::Site::Skeptical::has_data() const
{
    return interval.is_set;
}

bool Native::Otv::Isis::Site::Skeptical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Otv::Isis::Site::Skeptical::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/Cisco-IOS-XE-otv:isis/site/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Isis::Site::Skeptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skeptical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Isis::Site::Skeptical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Isis::Site::Skeptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Isis::Site::Skeptical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Isis::Site::Skeptical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Isis::Site::Skeptical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Otv::Isis::Site::Skeptical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Otv::Site::Site()
    :
    bridge_domain{YType::uint16, "bridge-domain"}
    	,
    default_(std::make_shared<Native::Otv::Site::Default_>())
	,otv(std::make_shared<Native::Otv::Site::Otv_>())
{
    default_->parent = this;
    otv->parent = this;

    yang_name = "site"; yang_parent_name = "otv"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Otv::Site::~Site()
{
}

bool Native::Otv::Site::has_data() const
{
    return bridge_domain.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (otv !=  nullptr && otv->has_data());
}

bool Native::Otv::Site::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_domain.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (otv !=  nullptr && otv->has_operation());
}

std::string Native::Otv::Site::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/otv/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Otv::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-otv:site" <<"[bridge-domain='" <<bridge_domain <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain.is_set || is_set(bridge_domain.yfilter)) leaf_name_data.push_back(bridge_domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Otv::Site::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "otv")
    {
        if(otv == nullptr)
        {
            otv = std::make_shared<Native::Otv::Site::Otv_>();
        }
        return otv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(otv != nullptr)
    {
        children["otv"] = otv;
    }

    return children;
}

void Native::Otv::Site::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-domain")
    {
        bridge_domain = value;
        bridge_domain.value_namespace = name_space;
        bridge_domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-domain")
    {
        bridge_domain.yfilter = yfilter;
    }
}

bool Native::Otv::Site::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "otv" || name == "bridge-domain")
        return true;
    return false;
}

Native::Otv::Site::Default_::Default_()
    :
    otv(std::make_shared<Native::Otv::Site::Default_::Otv_>())
{
    otv->parent = this;

    yang_name = "default"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Site::Default_::~Default_()
{
}

bool Native::Otv::Site::Default_::has_data() const
{
    return (otv !=  nullptr && otv->has_data());
}

bool Native::Otv::Site::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (otv !=  nullptr && otv->has_operation());
}

std::string Native::Otv::Site::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Site::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otv")
    {
        if(otv == nullptr)
        {
            otv = std::make_shared<Native::Otv::Site::Default_::Otv_>();
        }
        return otv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otv != nullptr)
    {
        children["otv"] = otv;
    }

    return children;
}

void Native::Otv::Site::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Site::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Site::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otv")
        return true;
    return false;
}

Native::Otv::Site::Default_::Otv_::Otv_()
    :
    isis(std::make_shared<Native::Otv::Site::Default_::Otv_::Isis>())
{
    isis->parent = this;

    yang_name = "otv"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Site::Default_::Otv_::~Otv_()
{
}

bool Native::Otv::Site::Default_::Otv_::has_data() const
{
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Otv::Site::Default_::Otv_::has_operation() const
{
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Otv::Site::Default_::Otv_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Default_::Otv_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Site::Default_::Otv_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Otv::Site::Default_::Otv_::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Default_::Otv_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    return children;
}

void Native::Otv::Site::Default_::Otv_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Site::Default_::Otv_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Site::Default_::Otv_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis")
        return true;
    return false;
}

Native::Otv::Site::Default_::Otv_::Isis::Isis()
    :
    bfd{YType::empty, "bfd"},
    hello_multiplier{YType::uint16, "hello-multiplier"},
    priority{YType::uint8, "priority"}
    	,
    authentication(std::make_shared<Native::Otv::Site::Default_::Otv_::Isis::Authentication>())
	,hello(std::make_shared<Native::Otv::Site::Default_::Otv_::Isis::Hello>())
	,hello_interval(std::make_shared<Native::Otv::Site::Default_::Otv_::Isis::HelloInterval>())
{
    authentication->parent = this;
    hello->parent = this;
    hello_interval->parent = this;

    yang_name = "isis"; yang_parent_name = "otv"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Site::Default_::Otv_::Isis::~Isis()
{
}

bool Native::Otv::Site::Default_::Otv_::Isis::has_data() const
{
    return bfd.is_set
	|| hello_multiplier.is_set
	|| priority.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data());
}

bool Native::Otv::Site::Default_::Otv_::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(hello_multiplier.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation());
}

std::string Native::Otv::Site::Default_::Otv_::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Default_::Otv_::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (hello_multiplier.is_set || is_set(hello_multiplier.yfilter)) leaf_name_data.push_back(hello_multiplier.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Site::Default_::Otv_::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Otv::Site::Default_::Otv_::Isis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Otv::Site::Default_::Otv_::Isis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Otv::Site::Default_::Otv_::Isis::HelloInterval>();
        }
        return hello_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Default_::Otv_::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    return children;
}

void Native::Otv::Site::Default_::Otv_::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier = value;
        hello_multiplier.value_namespace = name_space;
        hello_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Default_::Otv_::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Default_::Otv_::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "hello" || name == "hello-interval" || name == "bfd" || name == "hello-multiplier" || name == "priority")
        return true;
    return false;
}

const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Metric::igp {0, "igp"};
const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Metric::te {1, "te"};

const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::Adjacency::protected_ {0, "protected"};
const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::Adjacency::unprotected {1, "unprotected"};

const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::Type::link {0, "link"};
const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::Type::node {1, "node"};
const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::Type::srlg {2, "srlg"};

const Enum::YLeaf Native::Mpls::TrafficEng::PathSelection::Metric::igp {0, "igp"};
const Enum::YLeaf Native::Mpls::TrafficEng::PathSelection::Metric::te {1, "te"};

const Enum::YLeaf Native::Multilink::BundleName::authenticated {0, "authenticated"};
const Enum::YLeaf Native::Multilink::BundleName::both {1, "both"};
const Enum::YLeaf Native::Multilink::BundleName::endpoint {2, "endpoint"};
const Enum::YLeaf Native::Multilink::BundleName::rfc {3, "rfc"};

const Enum::YLeaf Native::NetworkClock::Synchronization::Mode::QL_enabled {0, "QL-enabled"};

const Enum::YLeaf Native::ObjectGroup::Service::Tcp::TcpPortList::Operator_::eq {0, "eq"};
const Enum::YLeaf Native::ObjectGroup::Service::Tcp::TcpPortList::Operator_::gt {1, "gt"};
const Enum::YLeaf Native::ObjectGroup::Service::Tcp::TcpPortList::Operator_::lt {2, "lt"};
const Enum::YLeaf Native::ObjectGroup::Service::Tcp::TcpPortList::Operator_::range {3, "range"};

const Enum::YLeaf Native::ObjectGroup::Service::TcpUdp::UdpPortList::Operator_::eq {0, "eq"};
const Enum::YLeaf Native::ObjectGroup::Service::TcpUdp::UdpPortList::Operator_::gt {1, "gt"};
const Enum::YLeaf Native::ObjectGroup::Service::TcpUdp::UdpPortList::Operator_::lt {2, "lt"};
const Enum::YLeaf Native::ObjectGroup::Service::TcpUdp::UdpPortList::Operator_::range {3, "range"};

const Enum::YLeaf Native::ObjectGroup::Service::Udp::UdpPortList::Operator_::eq {0, "eq"};
const Enum::YLeaf Native::ObjectGroup::Service::Udp::UdpPortList::Operator_::gt {1, "gt"};
const Enum::YLeaf Native::ObjectGroup::Service::Udp::UdpPortList::Operator_::lt {2, "lt"};
const Enum::YLeaf Native::ObjectGroup::Service::Udp::UdpPortList::Operator_::range {3, "range"};

const Enum::YLeaf Native::Otv::Isis::Overlay::Authentication::Mode::md5 {0, "md5"};
const Enum::YLeaf Native::Otv::Isis::Overlay::Authentication::Mode::text {1, "text"};

const Enum::YLeaf Native::Otv::Isis::Overlay::Default_::Authentication::Mode::md5 {0, "md5"};
const Enum::YLeaf Native::Otv::Isis::Overlay::Default_::Authentication::Mode::text {1, "text"};


}
}

