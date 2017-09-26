
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_95.hpp"
#include "Cisco_IOS_XE_native_128.hpp"
#include "Cisco_IOS_XE_native_166.hpp"
#include "Cisco_IOS_XE_native_96.hpp"
#include "Cisco_IOS_XE_native_99.hpp"
#include "Cisco_IOS_XE_native_97.hpp"
#include "Cisco_IOS_XE_native_173.hpp"
#include "Cisco_IOS_XE_native_101.hpp"
#include "Cisco_IOS_XE_native_122.hpp"
#include "Cisco_IOS_XE_native_168.hpp"
#include "Cisco_IOS_XE_native_147.hpp"
#include "Cisco_IOS_XE_native_106.hpp"
#include "Cisco_IOS_XE_native_126.hpp"
#include "Cisco_IOS_XE_native_103.hpp"
#include "Cisco_IOS_XE_native_102.hpp"
#include "Cisco_IOS_XE_native_100.hpp"
#include "Cisco_IOS_XE_native_123.hpp"
#include "Cisco_IOS_XE_native_121.hpp"
#include "Cisco_IOS_XE_native_105.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::RouteMap::RouteMapSeq::Match::LocalPreference::LocalPreference()
    :
    values{YType::str, "values"}
{

    yang_name = "local-preference"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::LocalPreference::~LocalPreference()
{
}

bool Native::RouteMap::RouteMapSeq::Match::LocalPreference::has_data() const
{
    for (auto const & leaf : values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::LocalPreference::has_operation() const
{
    for (auto const & leaf : values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(values.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::LocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-preference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::LocalPreference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto values_name_datas = values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), values_name_datas.begin(), values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::LocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::LocalPreference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::LocalPreference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "values")
    {
        values.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::LocalPreference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "values")
    {
        values.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::LocalPreference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "values")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::MdtGroup::MdtGroup()
    :
    name{YType::str, "name"}
{

    yang_name = "mdt-group"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::MdtGroup::~MdtGroup()
{
}

bool Native::RouteMap::RouteMapSeq::Match::MdtGroup::has_data() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::MdtGroup::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::MdtGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::MdtGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::MdtGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::MdtGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::MdtGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::MdtGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::MdtGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Metric::Metric()
    :
    external{YType::str, "external"},
    metric_value{YType::str, "metric-value"}
{

    yang_name = "metric"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Metric::~Metric()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Metric::has_data() const
{
    return external.is_set
	|| metric_value.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(metric_value.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "metric-value")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::PolicyList::PolicyList()
    :
    policy_map_names{YType::str, "policy-map-names"}
{

    yang_name = "policy-list"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::PolicyList::~PolicyList()
{
}

bool Native::RouteMap::RouteMapSeq::Match::PolicyList::has_data() const
{
    for (auto const & leaf : policy_map_names.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::PolicyList::has_operation() const
{
    for (auto const & leaf : policy_map_names.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(policy_map_names.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::PolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::PolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto policy_map_names_name_datas = policy_map_names.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_map_names_name_datas.begin(), policy_map_names_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::PolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::PolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::PolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-names")
    {
        policy_map_names.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::PolicyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-names")
    {
        policy_map_names.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::PolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-names")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::RouteType::RouteType()
    :
    internal{YType::empty, "internal"},
    level_1{YType::empty, "level-1"},
    level_2{YType::empty, "level-2"},
    local{YType::empty, "local"}
    	,
    external(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "route-type"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::RouteType::~RouteType()
{
}

bool Native::RouteMap::RouteMapSeq::Match::RouteType::has_data() const
{
    return internal.is_set
	|| level_1.is_set
	|| level_2.is_set
	|| local.is_set
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::RouteType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(level_2.yfilter)
	|| ydk::is_set(local.yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::RouteType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::RouteType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::RouteType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::RouteMap::RouteMapSeq::Match::RouteType::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::RouteType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::RouteType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::RouteType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "level-1")
    {
        level_1.yfilter = yfilter;
    }
    if(value_path == "level-2")
    {
        level_2.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::RouteType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "nssa-external" || name == "internal" || name == "level-1" || name == "level-2" || name == "local")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::RouteType::External::External()
    :
    type_1{YType::empty, "type-1"},
    type_2{YType::empty, "type-2"}
{

    yang_name = "external"; yang_parent_name = "route-type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::RouteType::External::~External()
{
}

bool Native::RouteMap::RouteMapSeq::Match::RouteType::External::has_data() const
{
    return type_1.is_set
	|| type_2.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::RouteType::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type_1.yfilter)
	|| ydk::is_set(type_2.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::RouteType::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::RouteType::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type_1.is_set || is_set(type_1.yfilter)) leaf_name_data.push_back(type_1.get_name_leafdata());
    if (type_2.is_set || is_set(type_2.yfilter)) leaf_name_data.push_back(type_2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::RouteType::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::RouteType::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::RouteType::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type-1")
    {
        type_1 = value;
        type_1.value_namespace = name_space;
        type_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-2")
    {
        type_2 = value;
        type_2.value_namespace = name_space;
        type_2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::RouteType::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type-1")
    {
        type_1.yfilter = yfilter;
    }
    if(value_path == "type-2")
    {
        type_2.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::RouteType::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type-1" || name == "type-2")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::NssaExternal()
    :
    type_1{YType::empty, "type-1"},
    type_2{YType::empty, "type-2"}
{

    yang_name = "nssa-external"; yang_parent_name = "route-type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::~NssaExternal()
{
}

bool Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::has_data() const
{
    return type_1.is_set
	|| type_2.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type_1.yfilter)
	|| ydk::is_set(type_2.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type_1.is_set || is_set(type_1.yfilter)) leaf_name_data.push_back(type_1.get_name_leafdata());
    if (type_2.is_set || is_set(type_2.yfilter)) leaf_name_data.push_back(type_2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type-1")
    {
        type_1 = value;
        type_1.value_namespace = name_space;
        type_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-2")
    {
        type_2 = value;
        type_2.value_namespace = name_space;
        type_2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type-1")
    {
        type_1.yfilter = yfilter;
    }
    if(value_path == "type-2")
    {
        type_2.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type-1" || name == "type-2")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Rpki::Rpki()
    :
    invalid{YType::empty, "invalid"},
    not_found{YType::empty, "not-found"},
    valid{YType::empty, "valid"}
{

    yang_name = "rpki"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Rpki::~Rpki()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Rpki::has_data() const
{
    return invalid.is_set
	|| not_found.is_set
	|| valid.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::Rpki::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(invalid.yfilter)
	|| ydk::is_set(not_found.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Rpki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Rpki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (invalid.is_set || is_set(invalid.yfilter)) leaf_name_data.push_back(invalid.get_name_leafdata());
    if (not_found.is_set || is_set(not_found.yfilter)) leaf_name_data.push_back(not_found.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Rpki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Rpki::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Rpki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "invalid")
    {
        invalid = value;
        invalid.value_namespace = name_space;
        invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-found")
    {
        not_found = value;
        not_found.value_namespace = name_space;
        not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::Rpki::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "invalid")
    {
        invalid.yfilter = yfilter;
    }
    if(value_path == "not-found")
    {
        not_found.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Rpki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid" || name == "not-found" || name == "valid")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::SourceProtocol::SourceProtocol()
    :
    bgp{YType::str, "bgp"},
    connected{YType::empty, "connected"},
    eigrp{YType::str, "eigrp"},
    isis{YType::empty, "isis"},
    lisp{YType::empty, "lisp"},
    mobile{YType::empty, "mobile"},
    ospf{YType::str, "ospf"},
    ospfv3{YType::str, "ospfv3"},
    rip{YType::empty, "rip"},
    static_{YType::empty, "static"}
{

    yang_name = "source-protocol"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::SourceProtocol::~SourceProtocol()
{
}

bool Native::RouteMap::RouteMapSeq::Match::SourceProtocol::has_data() const
{
    for (auto const & leaf : bgp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : eigrp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ospf.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ospfv3.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return connected.is_set
	|| isis.is_set
	|| lisp.is_set
	|| mobile.is_set
	|| rip.is_set
	|| static_.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::SourceProtocol::has_operation() const
{
    for (auto const & leaf : bgp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : eigrp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ospf.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ospfv3.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(isis.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(mobile.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| ydk::is_set(ospfv3.yfilter)
	|| ydk::is_set(rip.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::SourceProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::SourceProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (isis.is_set || is_set(isis.yfilter)) leaf_name_data.push_back(isis.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (mobile.is_set || is_set(mobile.yfilter)) leaf_name_data.push_back(mobile.get_name_leafdata());
    if (rip.is_set || is_set(rip.yfilter)) leaf_name_data.push_back(rip.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    auto bgp_name_datas = bgp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bgp_name_datas.begin(), bgp_name_datas.end());
    auto eigrp_name_datas = eigrp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), eigrp_name_datas.begin(), eigrp_name_datas.end());
    auto ospf_name_datas = ospf.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ospf_name_datas.begin(), ospf_name_datas.end());
    auto ospfv3_name_datas = ospfv3.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ospfv3_name_datas.begin(), ospfv3_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::SourceProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::SourceProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::SourceProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp.append(value);
    }
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp")
    {
        eigrp.append(value);
    }
    if(value_path == "isis")
    {
        isis = value;
        isis.value_namespace = name_space;
        isis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobile")
    {
        mobile = value;
        mobile.value_namespace = name_space;
        mobile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf.append(value);
    }
    if(value_path == "ospfv3")
    {
        ospfv3.append(value);
    }
    if(value_path == "rip")
    {
        rip = value;
        rip.value_namespace = name_space;
        rip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Match::SourceProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "isis")
    {
        isis.yfilter = yfilter;
    }
    if(value_path == "lisp")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "mobile")
    {
        mobile.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
    if(value_path == "ospfv3")
    {
        ospfv3.yfilter = yfilter;
    }
    if(value_path == "rip")
    {
        rip.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::SourceProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "lisp" || name == "mobile" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Tag::Tag()
    :
    ipv4_address{YType::str, "ipv4-address"},
    tag_value{YType::uint32, "tag_value"}
    	,
    list(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Tag::List>())
{
    list->parent = this;

    yang_name = "tag"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Tag::~Tag()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Tag::has_data() const
{
    for (auto const & leaf : ipv4_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : tag_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (list !=  nullptr && list->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::Tag::has_operation() const
{
    for (auto const & leaf : ipv4_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : tag_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(tag_value.yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv4_address_name_datas = ipv4_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_address_name_datas.begin(), ipv4_address_name_datas.end());
    auto tag_value_name_datas = tag_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag_value_name_datas.begin(), tag_value_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Tag::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.append(value);
    }
    if(value_path == "tag_value")
    {
        tag_value.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "tag_value")
    {
        tag_value.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "ipv4-address" || name == "tag_value")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Match::Tag::List::List()
    :
    tag_names{YType::str, "tag-names"}
{

    yang_name = "list"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Match::Tag::List::~List()
{
}

bool Native::RouteMap::RouteMapSeq::Match::Tag::List::has_data() const
{
    for (auto const & leaf : tag_names.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Match::Tag::List::has_operation() const
{
    for (auto const & leaf : tag_names.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag_names.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Match::Tag::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Match::Tag::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag_names_name_datas = tag_names.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag_names_name_datas.begin(), tag_names_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::Tag::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::Tag::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::Tag::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag-names")
    {
        tag_names.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Match::Tag::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag-names")
    {
        tag_names.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Match::Tag::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag-names")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Set()
    :
    automatic_tag{YType::empty, "automatic-tag"},
    global{YType::empty, "global"},
    local_preference{YType::uint32, "local-preference"},
    metric{YType::str, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    mpls_label{YType::empty, "mpls-label"},
    traffic_index{YType::uint8, "traffic-index"},
    vrf{YType::str, "vrf"},
    weight{YType::uint32, "weight"}
    	,
    aigp_metric(std::make_shared<Native::RouteMap::RouteMapSeq::Set::AigpMetric>())
	,as_path(std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath>())
	,clns(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Clns>())
	,comm_list(std::make_shared<Native::RouteMap::RouteMapSeq::Set::CommList>())
	,community(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Community>())
	,dampening(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Dampening>())
	,default_(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_>())
	,extcomm_list(std::make_shared<Native::RouteMap::RouteMapSeq::Set::ExtcommList>())
	,extcommunity(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity>())
	,interface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface>())
	,ip(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip>())
	,ipv6(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6>())
	,level(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Level>())
	,lisp(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Lisp>())
	,origin(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Origin>())
	,tag(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Tag>())
{
    aigp_metric->parent = this;
    as_path->parent = this;
    clns->parent = this;
    comm_list->parent = this;
    community->parent = this;
    dampening->parent = this;
    default_->parent = this;
    extcomm_list->parent = this;
    extcommunity->parent = this;
    interface->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    level->parent = this;
    lisp->parent = this;
    origin->parent = this;
    tag->parent = this;

    yang_name = "set"; yang_parent_name = "route-map-seq"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::~Set()
{
}

bool Native::RouteMap::RouteMapSeq::Set::has_data() const
{
    return automatic_tag.is_set
	|| global.is_set
	|| local_preference.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| mpls_label.is_set
	|| traffic_index.is_set
	|| vrf.is_set
	|| weight.is_set
	|| (aigp_metric !=  nullptr && aigp_metric->has_data())
	|| (as_path !=  nullptr && as_path->has_data())
	|| (clns !=  nullptr && clns->has_data())
	|| (comm_list !=  nullptr && comm_list->has_data())
	|| (community !=  nullptr && community->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (extcomm_list !=  nullptr && extcomm_list->has_data())
	|| (extcommunity !=  nullptr && extcommunity->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (level !=  nullptr && level->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (origin !=  nullptr && origin->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(automatic_tag.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (aigp_metric !=  nullptr && aigp_metric->has_operation())
	|| (as_path !=  nullptr && as_path->has_operation())
	|| (clns !=  nullptr && clns->has_operation())
	|| (comm_list !=  nullptr && comm_list->has_operation())
	|| (community !=  nullptr && community->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (extcomm_list !=  nullptr && extcomm_list->has_operation())
	|| (extcommunity !=  nullptr && extcommunity->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (level !=  nullptr && level->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (origin !=  nullptr && origin->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (automatic_tag.is_set || is_set(automatic_tag.yfilter)) leaf_name_data.push_back(automatic_tag.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aigp-metric")
    {
        if(aigp_metric == nullptr)
        {
            aigp_metric = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AigpMetric>();
        }
        return aigp_metric;
    }

    if(child_yang_name == "as-path")
    {
        if(as_path == nullptr)
        {
            as_path = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath>();
        }
        return as_path;
    }

    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "comm-list")
    {
        if(comm_list == nullptr)
        {
            comm_list = std::make_shared<Native::RouteMap::RouteMapSeq::Set::CommList>();
        }
        return comm_list;
    }

    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Community>();
        }
        return community;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "extcomm-list")
    {
        if(extcomm_list == nullptr)
        {
            extcomm_list = std::make_shared<Native::RouteMap::RouteMapSeq::Set::ExtcommList>();
        }
        return extcomm_list;
    }

    if(child_yang_name == "extcommunity")
    {
        if(extcommunity == nullptr)
        {
            extcommunity = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity>();
        }
        return extcommunity;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Level>();
        }
        return level;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "origin")
    {
        if(origin == nullptr)
        {
            origin = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Origin>();
        }
        return origin;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aigp_metric != nullptr)
    {
        children["aigp-metric"] = aigp_metric;
    }

    if(as_path != nullptr)
    {
        children["as-path"] = as_path;
    }

    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(comm_list != nullptr)
    {
        children["comm-list"] = comm_list;
    }

    if(community != nullptr)
    {
        children["community"] = community;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(extcomm_list != nullptr)
    {
        children["extcomm-list"] = extcomm_list;
    }

    if(extcommunity != nullptr)
    {
        children["extcommunity"] = extcommunity;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(level != nullptr)
    {
        children["level"] = level;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(origin != nullptr)
    {
        children["origin"] = origin;
    }

    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "automatic-tag")
    {
        automatic_tag = value;
        automatic_tag.value_namespace = name_space;
        automatic_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "automatic-tag")
    {
        automatic_tag.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aigp-metric" || name == "as-path" || name == "clns" || name == "comm-list" || name == "community" || name == "dampening" || name == "default" || name == "extcomm-list" || name == "extcommunity" || name == "interface" || name == "ip" || name == "ipv6" || name == "level" || name == "lisp" || name == "origin" || name == "tag" || name == "automatic-tag" || name == "global" || name == "local-preference" || name == "metric" || name == "metric-type" || name == "mpls-label" || name == "traffic-index" || name == "vrf" || name == "weight")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::AigpMetric::AigpMetric()
    :
    igp_metric{YType::empty, "igp-metric"},
    value_{YType::uint32, "value"}
{

    yang_name = "aigp-metric"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::AigpMetric::~AigpMetric()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AigpMetric::has_data() const
{
    return igp_metric.is_set
	|| value_.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::AigpMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::AigpMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::AigpMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::AigpMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::AigpMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::AigpMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::AigpMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::AigpMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-metric" || name == "value")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::AsPath::AsPath()
    :
    prepend(std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend>())
	,tag(nullptr) // presence node
{
    prepend->parent = this;

    yang_name = "as-path"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::AsPath::~AsPath()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::has_data() const
{
    return (prepend !=  nullptr && prepend->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::has_operation() const
{
    return is_set(yfilter)
	|| (prepend !=  nullptr && prepend->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::AsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::AsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::AsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepend")
    {
        if(prepend == nullptr)
        {
            prepend = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend>();
        }
        return prepend;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::AsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prepend != nullptr)
    {
        children["prepend"] = prepend;
    }

    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend" || name == "tag")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::Prepend()
    :
    as_container(std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer>())
	,last_as_cont(std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont>())
{
    as_container->parent = this;
    last_as_cont->parent = this;

    yang_name = "prepend"; yang_parent_name = "as-path"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::~Prepend()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::has_data() const
{
    return (as_container !=  nullptr && as_container->has_data())
	|| (last_as_cont !=  nullptr && last_as_cont->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::has_operation() const
{
    return is_set(yfilter)
	|| (as_container !=  nullptr && as_container->has_operation())
	|| (last_as_cont !=  nullptr && last_as_cont->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-container")
    {
        if(as_container == nullptr)
        {
            as_container = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer>();
        }
        return as_container;
    }

    if(child_yang_name == "last-as-cont")
    {
        if(last_as_cont == nullptr)
        {
            last_as_cont = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont>();
        }
        return last_as_cont;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as_container != nullptr)
    {
        children["as-container"] = as_container;
    }

    if(last_as_cont != nullptr)
    {
        children["last-as-cont"] = last_as_cont;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-container" || name == "last-as-cont")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::AsContainer()
    :
    as_number{YType::str, "as-number"}
{

    yang_name = "as-container"; yang_parent_name = "prepend"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::~AsContainer()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::has_data() const
{
    return as_number.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::LastAsCont()
    :
    last_as{YType::uint16, "last-as"}
{

    yang_name = "last-as-cont"; yang_parent_name = "prepend"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::~LastAsCont()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::has_data() const
{
    return last_as.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_as.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-as-cont";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_as.is_set || is_set(last_as.yfilter)) leaf_name_data.push_back(last_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-as")
    {
        last_as = value;
        last_as.value_namespace = name_space;
        last_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-as")
    {
        last_as.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-as")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::Tag()
{

    yang_name = "tag"; yang_parent_name = "as-path"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::~Tag()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::has_data() const
{
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Clns::Clns()
    :
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Clns::NextHop>())
{
    next_hop->parent = this;

    yang_name = "clns"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Clns::~Clns()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Clns::has_data() const
{
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Clns::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Clns::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::NextHop()
    :
    address{YType::str, "address"}
{

    yang_name = "next-hop"; yang_parent_name = "clns"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::CommList::CommList()
    :
    comm_list_expanded{YType::uint16, "comm-list-expanded"},
    comm_list_name{YType::str, "comm-list-name"},
    comm_list_standard{YType::uint16, "comm-list-standard"},
    delete_{YType::empty, "delete"}
{

    yang_name = "comm-list"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::CommList::~CommList()
{
}

bool Native::RouteMap::RouteMapSeq::Set::CommList::has_data() const
{
    return comm_list_expanded.is_set
	|| comm_list_name.is_set
	|| comm_list_standard.is_set
	|| delete_.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::CommList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(comm_list_expanded.yfilter)
	|| ydk::is_set(comm_list_name.yfilter)
	|| ydk::is_set(comm_list_standard.yfilter)
	|| ydk::is_set(delete_.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::CommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "comm-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::CommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comm_list_expanded.is_set || is_set(comm_list_expanded.yfilter)) leaf_name_data.push_back(comm_list_expanded.get_name_leafdata());
    if (comm_list_name.is_set || is_set(comm_list_name.yfilter)) leaf_name_data.push_back(comm_list_name.get_name_leafdata());
    if (comm_list_standard.is_set || is_set(comm_list_standard.yfilter)) leaf_name_data.push_back(comm_list_standard.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::CommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::CommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::CommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "comm-list-expanded")
    {
        comm_list_expanded = value;
        comm_list_expanded.value_namespace = name_space;
        comm_list_expanded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comm-list-name")
    {
        comm_list_name = value;
        comm_list_name.value_namespace = name_space;
        comm_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comm-list-standard")
    {
        comm_list_standard = value;
        comm_list_standard.value_namespace = name_space;
        comm_list_standard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::CommList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "comm-list-expanded")
    {
        comm_list_expanded.yfilter = yfilter;
    }
    if(value_path == "comm-list-name")
    {
        comm_list_name.yfilter = yfilter;
    }
    if(value_path == "comm-list-standard")
    {
        comm_list_standard.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::CommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "comm-list-expanded" || name == "comm-list-name" || name == "comm-list-standard" || name == "delete")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Community::Community()
    :
    none{YType::empty, "none"}
    	,
    community_well_known(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown>())
{
    community_well_known->parent = this;

    yang_name = "community"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Community::~Community()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Community::has_data() const
{
    return none.is_set
	|| (community_well_known !=  nullptr && community_well_known->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| (community_well_known !=  nullptr && community_well_known->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-well-known")
    {
        if(community_well_known == nullptr)
        {
            community_well_known = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown>();
        }
        return community_well_known;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(community_well_known != nullptr)
    {
        children["community-well-known"] = community_well_known;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-well-known" || name == "none")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::CommunityWellKnown()
    :
    community_list{YType::str, "community-list"}
{

    yang_name = "community-well-known"; yang_parent_name = "community"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::~CommunityWellKnown()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::has_data() const
{
    for (auto const & leaf : community_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::has_operation() const
{
    for (auto const & leaf : community_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(community_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-well-known";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto community_list_name_datas = community_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_list_name_datas.begin(), community_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-list")
    {
        community_list.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-list")
    {
        community_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Dampening::Dampening()
{

    yang_name = "dampening"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Dampening::~Dampening()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Dampening::has_data() const
{
    for (std::size_t index=0; index<dampening_list.size(); index++)
    {
        if(dampening_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Dampening::has_operation() const
{
    for (std::size_t index=0; index<dampening_list.size(); index++)
    {
        if(dampening_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampening-list")
    {
        for(auto const & c : dampening_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList>();
        c->parent = this;
        dampening_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dampening_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampening-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::DampeningList()
    :
    half_life_penalty{YType::uint8, "half-life-penalty"},
    restart_penalty{YType::uint16, "restart-penalty"},
    suppress_penalty{YType::uint16, "suppress-penalty"},
    max_suppress_penalty{YType::uint8, "max-suppress-penalty"}
{

    yang_name = "dampening-list"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::~DampeningList()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::has_data() const
{
    return half_life_penalty.is_set
	|| restart_penalty.is_set
	|| suppress_penalty.is_set
	|| max_suppress_penalty.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(half_life_penalty.yfilter)
	|| ydk::is_set(restart_penalty.yfilter)
	|| ydk::is_set(suppress_penalty.yfilter)
	|| ydk::is_set(max_suppress_penalty.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening-list" <<"[half-life-penalty='" <<half_life_penalty <<"']" <<"[restart-penalty='" <<restart_penalty <<"']" <<"[suppress-penalty='" <<suppress_penalty <<"']" <<"[max-suppress-penalty='" <<max_suppress_penalty <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life_penalty.is_set || is_set(half_life_penalty.yfilter)) leaf_name_data.push_back(half_life_penalty.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());
    if (suppress_penalty.is_set || is_set(suppress_penalty.yfilter)) leaf_name_data.push_back(suppress_penalty.get_name_leafdata());
    if (max_suppress_penalty.is_set || is_set(max_suppress_penalty.yfilter)) leaf_name_data.push_back(max_suppress_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "half-life-penalty")
    {
        half_life_penalty = value;
        half_life_penalty.value_namespace = name_space;
        half_life_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
        restart_penalty.value_namespace = name_space;
        restart_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-penalty")
    {
        suppress_penalty = value;
        suppress_penalty.value_namespace = name_space;
        suppress_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-suppress-penalty")
    {
        max_suppress_penalty = value;
        max_suppress_penalty.value_namespace = name_space;
        max_suppress_penalty.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "half-life-penalty")
    {
        half_life_penalty.yfilter = yfilter;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty.yfilter = yfilter;
    }
    if(value_path == "suppress-penalty")
    {
        suppress_penalty.yfilter = yfilter;
    }
    if(value_path == "max-suppress-penalty")
    {
        max_suppress_penalty.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-life-penalty" || name == "restart-penalty" || name == "suppress-penalty" || name == "max-suppress-penalty")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Default_::Default_()
    :
    interface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface>())
{
    interface->parent = this;

    yang_name = "default"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Default_::~Default_()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::Interface()
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
    atm_acrsubinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::~Interface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::has_data() const
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

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::has_operation() const
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

std::string Native::RouteMap::RouteMapSeq::Set::Default_::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Default_::Interface::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::get_children() const
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

void Native::RouteMap::RouteMapSeq::Set::Default_::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::RouteMap::RouteMapSeq::Set::Default_::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtcommList()
{

    yang_name = "extcomm-list"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::~ExtcommList()
{
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::has_data() const
{
    for (std::size_t index=0; index<excomm_list_name.size(); index++)
    {
        if(excomm_list_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ext_range.size(); index++)
    {
        if(ext_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::has_operation() const
{
    for (std::size_t index=0; index<excomm_list_name.size(); index++)
    {
        if(excomm_list_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ext_range.size(); index++)
    {
        if(ext_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::ExtcommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extcomm-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::ExtcommList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::ExtcommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "excomm-list-name")
    {
        for(auto const & c : excomm_list_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName>();
        c->parent = this;
        excomm_list_name.push_back(c);
        return c;
    }

    if(child_yang_name == "ext-range")
    {
        for(auto const & c : ext_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange>();
        c->parent = this;
        ext_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::ExtcommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : excomm_list_name)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ext_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::ExtcommList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::ExtcommList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "excomm-list-name" || name == "ext-range")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::ExcommListName()
    :
    name{YType::str, "name"},
    delete_{YType::empty, "delete"}
{

    yang_name = "excomm-list-name"; yang_parent_name = "extcomm-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::~ExcommListName()
{
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::has_data() const
{
    return name.is_set
	|| delete_.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delete_.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "excomm-list-name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "delete")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::ExtRange()
    :
    comm_list_num{YType::uint16, "comm-list-num"},
    delete_{YType::empty, "delete"}
{

    yang_name = "ext-range"; yang_parent_name = "extcomm-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::~ExtRange()
{
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::has_data() const
{
    return comm_list_num.is_set
	|| delete_.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(comm_list_num.yfilter)
	|| ydk::is_set(delete_.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-range" <<"[comm-list-num='" <<comm_list_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comm_list_num.is_set || is_set(comm_list_num.yfilter)) leaf_name_data.push_back(comm_list_num.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.yfilter)) leaf_name_data.push_back(delete_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "comm-list-num")
    {
        comm_list_num = value;
        comm_list_num.value_namespace = name_space;
        comm_list_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete")
    {
        delete_ = value;
        delete_.value_namespace = name_space;
        delete_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "comm-list-num")
    {
        comm_list_num.yfilter = yfilter;
    }
    if(value_path == "delete")
    {
        delete_.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "comm-list-num" || name == "delete")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Extcommunity()
    :
    cost(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost>())
	,rt(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt>())
	,soo(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo>())
	,vpn_distinguisher(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher>())
{
    cost->parent = this;
    rt->parent = this;
    soo->parent = this;
    vpn_distinguisher->parent = this;

    yang_name = "extcommunity"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::~Extcommunity()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::has_data() const
{
    return (cost !=  nullptr && cost->has_data())
	|| (rt !=  nullptr && rt->has_data())
	|| (soo !=  nullptr && soo->has_data())
	|| (vpn_distinguisher !=  nullptr && vpn_distinguisher->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::has_operation() const
{
    return is_set(yfilter)
	|| (cost !=  nullptr && cost->has_operation())
	|| (rt !=  nullptr && rt->has_operation())
	|| (soo !=  nullptr && soo->has_operation())
	|| (vpn_distinguisher !=  nullptr && vpn_distinguisher->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extcommunity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "rt")
    {
        if(rt == nullptr)
        {
            rt = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt>();
        }
        return rt;
    }

    if(child_yang_name == "soo")
    {
        if(soo == nullptr)
        {
            soo = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo>();
        }
        return soo;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        if(vpn_distinguisher == nullptr)
        {
            vpn_distinguisher = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher>();
        }
        return vpn_distinguisher;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    if(rt != nullptr)
    {
        children["rt"] = rt;
    }

    if(soo != nullptr)
    {
        children["soo"] = soo;
    }

    if(vpn_distinguisher != nullptr)
    {
        children["vpn-distinguisher"] = vpn_distinguisher;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "rt" || name == "soo" || name == "vpn-distinguisher")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Cost()
    :
    igp(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp>())
	,pre_bestpath(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath>())
{
    igp->parent = this;
    pre_bestpath->parent = this;

    yang_name = "cost"; yang_parent_name = "extcommunity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::~Cost()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::has_data() const
{
    for (std::size_t index=0; index<community_id.size(); index++)
    {
        if(community_id[index]->has_data())
            return true;
    }
    return (igp !=  nullptr && igp->has_data())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::has_operation() const
{
    for (std::size_t index=0; index<community_id.size(); index++)
    {
        if(community_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (igp !=  nullptr && igp->has_operation())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-id")
    {
        for(auto const & c : community_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId>();
        c->parent = this;
        community_id.push_back(c);
        return c;
    }

    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp>();
        }
        return igp;
    }

    if(child_yang_name == "pre-bestpath")
    {
        if(pre_bestpath == nullptr)
        {
            pre_bestpath = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath>();
        }
        return pre_bestpath;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : community_id)
    {
        children[c->get_segment_path()] = c;
    }

    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    if(pre_bestpath != nullptr)
    {
        children["pre-bestpath"] = pre_bestpath;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id" || name == "igp" || name == "pre-bestpath")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::CommunityId()
    :
    community_id{YType::uint8, "community-id"},
    cost_value{YType::uint32, "cost-value"}
{

    yang_name = "community-id"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::~CommunityId()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::has_data() const
{
    return community_id.is_set
	|| cost_value.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_id.yfilter)
	|| ydk::is_set(cost_value.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-id" <<"[community-id='" <<community_id <<"']" <<"[cost-value='" <<cost_value <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_id.is_set || is_set(community_id.yfilter)) leaf_name_data.push_back(community_id.get_name_leafdata());
    if (cost_value.is_set || is_set(cost_value.yfilter)) leaf_name_data.push_back(cost_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-id")
    {
        community_id = value;
        community_id.value_namespace = name_space;
        community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-value")
    {
        cost_value = value;
        cost_value.value_namespace = name_space;
        cost_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-id")
    {
        community_id.yfilter = yfilter;
    }
    if(value_path == "cost-value")
    {
        cost_value.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id" || name == "cost-value")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::Igp()
{

    yang_name = "igp"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::~Igp()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::has_data() const
{
    for (std::size_t index=0; index<community_id.size(); index++)
    {
        if(community_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::has_operation() const
{
    for (std::size_t index=0; index<community_id.size(); index++)
    {
        if(community_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-id")
    {
        for(auto const & c : community_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId>();
        c->parent = this;
        community_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : community_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::CommunityId()
    :
    community_id{YType::uint8, "community-id"},
    cost_value{YType::uint32, "cost-value"}
{

    yang_name = "community-id"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::~CommunityId()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::has_data() const
{
    return community_id.is_set
	|| cost_value.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_id.yfilter)
	|| ydk::is_set(cost_value.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-id" <<"[community-id='" <<community_id <<"']" <<"[cost-value='" <<cost_value <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_id.is_set || is_set(community_id.yfilter)) leaf_name_data.push_back(community_id.get_name_leafdata());
    if (cost_value.is_set || is_set(cost_value.yfilter)) leaf_name_data.push_back(cost_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-id")
    {
        community_id = value;
        community_id.value_namespace = name_space;
        community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-value")
    {
        cost_value = value;
        cost_value.value_namespace = name_space;
        cost_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-id")
    {
        community_id.yfilter = yfilter;
    }
    if(value_path == "cost-value")
    {
        cost_value.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id" || name == "cost-value")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::PreBestpath()
{

    yang_name = "pre-bestpath"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::~PreBestpath()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::has_data() const
{
    for (std::size_t index=0; index<community_id.size(); index++)
    {
        if(community_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::has_operation() const
{
    for (std::size_t index=0; index<community_id.size(); index++)
    {
        if(community_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-bestpath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-id")
    {
        for(auto const & c : community_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId>();
        c->parent = this;
        community_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : community_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::CommunityId()
    :
    community_id{YType::uint8, "community-id"},
    cost_value{YType::uint32, "cost-value"}
{

    yang_name = "community-id"; yang_parent_name = "pre-bestpath"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::~CommunityId()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::has_data() const
{
    return community_id.is_set
	|| cost_value.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_id.yfilter)
	|| ydk::is_set(cost_value.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-id" <<"[community-id='" <<community_id <<"']" <<"[cost-value='" <<cost_value <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_id.is_set || is_set(community_id.yfilter)) leaf_name_data.push_back(community_id.get_name_leafdata());
    if (cost_value.is_set || is_set(cost_value.yfilter)) leaf_name_data.push_back(cost_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-id")
    {
        community_id = value;
        community_id.value_namespace = name_space;
        community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-value")
    {
        cost_value = value;
        cost_value.value_namespace = name_space;
        cost_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-id")
    {
        community_id.yfilter = yfilter;
    }
    if(value_path == "cost-value")
    {
        cost_value.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community-id" || name == "cost-value")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Rt()
    :
    asn_nn{YType::str, "asn-nn"}
    	,
    range(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range>())
{
    range->parent = this;

    yang_name = "rt"; yang_parent_name = "extcommunity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::~Rt()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::has_data() const
{
    for (auto const & leaf : asn_nn.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::has_operation() const
{
    for (auto const & leaf : asn_nn.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asn_nn.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto asn_nn_name_datas = asn_nn.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), asn_nn_name_datas.begin(), asn_nn_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-nn")
    {
        asn_nn.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-nn")
    {
        asn_nn.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "asn-nn")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::Range()
    :
    additive{YType::empty, "additive"},
    high_limit{YType::str, "high-limit"},
    lower_limit{YType::str, "lower-limit"}
{

    yang_name = "range"; yang_parent_name = "rt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::~Range()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::has_data() const
{
    return additive.is_set
	|| high_limit.is_set
	|| lower_limit.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(additive.yfilter)
	|| ydk::is_set(high_limit.yfilter)
	|| ydk::is_set(lower_limit.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (additive.is_set || is_set(additive.yfilter)) leaf_name_data.push_back(additive.get_name_leafdata());
    if (high_limit.is_set || is_set(high_limit.yfilter)) leaf_name_data.push_back(high_limit.get_name_leafdata());
    if (lower_limit.is_set || is_set(lower_limit.yfilter)) leaf_name_data.push_back(lower_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "additive")
    {
        additive = value;
        additive.value_namespace = name_space;
        additive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-limit")
    {
        high_limit = value;
        high_limit.value_namespace = name_space;
        high_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-limit")
    {
        lower_limit = value;
        lower_limit.value_namespace = name_space;
        lower_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "additive")
    {
        additive.yfilter = yfilter;
    }
    if(value_path == "high-limit")
    {
        high_limit.yfilter = yfilter;
    }
    if(value_path == "lower-limit")
    {
        lower_limit.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additive" || name == "high-limit" || name == "lower-limit")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::Soo()
    :
    asn_nn{YType::str, "asn-nn"}
{

    yang_name = "soo"; yang_parent_name = "extcommunity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::~Soo()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::has_data() const
{
    return asn_nn.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_nn.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_nn.is_set || is_set(asn_nn.yfilter)) leaf_name_data.push_back(asn_nn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-nn")
    {
        asn_nn = value;
        asn_nn.value_namespace = name_space;
        asn_nn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-nn")
    {
        asn_nn.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn-nn")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::VpnDistinguisher()
    :
    asn_nn{YType::str, "asn-nn"}
    	,
    range(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range>())
{
    range->parent = this;

    yang_name = "vpn-distinguisher"; yang_parent_name = "extcommunity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::has_data() const
{
    return asn_nn.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn_nn.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_nn.is_set || is_set(asn_nn.yfilter)) leaf_name_data.push_back(asn_nn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn-nn")
    {
        asn_nn = value;
        asn_nn.value_namespace = name_space;
        asn_nn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn-nn")
    {
        asn_nn.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "asn-nn")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::Range()
    :
    additive{YType::empty, "additive"},
    high_limit{YType::str, "high-limit"},
    lower_limit{YType::str, "lower-limit"}
{

    yang_name = "range"; yang_parent_name = "vpn-distinguisher"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::~Range()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::has_data() const
{
    return additive.is_set
	|| high_limit.is_set
	|| lower_limit.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(additive.yfilter)
	|| ydk::is_set(high_limit.yfilter)
	|| ydk::is_set(lower_limit.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (additive.is_set || is_set(additive.yfilter)) leaf_name_data.push_back(additive.get_name_leafdata());
    if (high_limit.is_set || is_set(high_limit.yfilter)) leaf_name_data.push_back(high_limit.get_name_leafdata());
    if (lower_limit.is_set || is_set(lower_limit.yfilter)) leaf_name_data.push_back(lower_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "additive")
    {
        additive = value;
        additive.value_namespace = name_space;
        additive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-limit")
    {
        high_limit = value;
        high_limit.value_namespace = name_space;
        high_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-limit")
    {
        lower_limit = value;
        lower_limit.value_namespace = name_space;
        lower_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "additive")
    {
        additive.yfilter = yfilter;
    }
    if(value_path == "high-limit")
    {
        high_limit.yfilter = yfilter;
    }
    if(value_path == "lower-limit")
    {
        lower_limit.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additive" || name == "high-limit" || name == "lower-limit")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Interface::Interface()
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
    atm_acrsubinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Interface::~Interface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::has_data() const
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

bool Native::RouteMap::RouteMapSeq::Set::Interface::has_operation() const
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

std::string Native::RouteMap::RouteMapSeq::Set::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Interface::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Interface::get_children() const
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

void Native::RouteMap::RouteMapSeq::Set::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::RouteMap::RouteMapSeq::Set::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::RouteMap::RouteMapSeq::Set::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Ip()
    :
    df{YType::uint8, "df"}
    	,
    address(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Address>())
	,default_(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_>())
	,global(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Global>())
	,next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop>())
	,precedence(nullptr) // presence node
	,qos_group(nullptr) // presence node
	,tos(nullptr) // presence node
	,vrf(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Vrf>())
{
    address->parent = this;
    default_->parent = this;
    global->parent = this;
    next_hop->parent = this;
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::~Ip()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::has_data() const
{
    return df.is_set
	|| (address !=  nullptr && address->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (precedence !=  nullptr && precedence->has_data())
	|| (qos_group !=  nullptr && qos_group->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(df.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (precedence !=  nullptr && precedence->has_operation())
	|| (qos_group !=  nullptr && qos_group->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df.is_set || is_set(df.yfilter)) leaf_name_data.push_back(df.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Global>();
        }
        return global;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "precedence")
    {
        if(precedence == nullptr)
        {
            precedence = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Precedence>();
        }
        return precedence;
    }

    if(child_yang_name == "qos-group")
    {
        if(qos_group == nullptr)
        {
            qos_group = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup>();
        }
        return qos_group;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Tos>();
        }
        return tos;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(precedence != nullptr)
    {
        children["precedence"] = precedence;
    }

    if(qos_group != nullptr)
    {
        children["qos-group"] = qos_group;
    }

    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "df")
    {
        df = value;
        df.value_namespace = name_space;
        df.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "df")
    {
        df.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "default" || name == "global" || name == "next-hop" || name == "precedence" || name == "qos-group" || name == "tos" || name == "vrf" || name == "df")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Address::Address()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Address::~Address()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Address::has_data() const
{
    return prefix_list.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Default_()
    :
    global(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global>())
	,next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop>())
	,vrf(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf>())
{
    global->parent = this;
    next_hop->parent = this;
    vrf->parent = this;

    yang_name = "default"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::~Default_()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global>();
        }
        return global;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "next-hop" || name == "vrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::Global()
    :
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop>())
{
    next_hop->parent = this;

    yang_name = "global"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::~Global()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::has_data() const
{
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::NextHop()
    :
    address{YType::str, "address"}
{

    yang_name = "next-hop"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::NextHop()
    :
    address{YType::str, "address"}
{

    yang_name = "next-hop"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrf()
{

    yang_name = "vrf"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::~Vrf()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrfs.size(); index++)
    {
        if(vrfs[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrfs.size(); index++)
    {
        if(vrfs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        for(auto const & c : vrfs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs>();
        c->parent = this;
        vrfs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrfs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::Vrfs()
    :
    vrf{YType::str, "vrf"}
    	,
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop>())
{
    next_hop->parent = this;

    yang_name = "vrfs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::~Vrfs()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::has_data() const
{
    return vrf.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs" <<"[vrf='" <<vrf <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "vrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::NextHop()
    :
    address{YType::str, "address"}
{

    yang_name = "next-hop"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Global::Global()
    :
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop>())
{
    next_hop->parent = this;

    yang_name = "global"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Global::~Global()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Global::has_data() const
{
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Global::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::NextHop()
    :
    address{YType::str, "address"}
{

    yang_name = "next-hop"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::NextHop()
    :
    address{YType::str, "address"},
    peer_address{YType::empty, "peer-address"},
    self{YType::empty, "self"}
    	,
    dynamic(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic>())
	,encapsulate(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate>())
	,recursive(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive>())
	,verify_availability(nullptr) // presence node
{
    dynamic->parent = this;
    encapsulate->parent = this;
    recursive->parent = this;

    yang_name = "next-hop"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::has_data() const
{
    return address.is_set
	|| peer_address.is_set
	|| self.is_set
	|| (dynamic !=  nullptr && dynamic->has_data())
	|| (encapsulate !=  nullptr && encapsulate->has_data())
	|| (recursive !=  nullptr && recursive->has_data())
	|| (verify_availability !=  nullptr && verify_availability->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(self.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation())
	|| (encapsulate !=  nullptr && encapsulate->has_operation())
	|| (recursive !=  nullptr && recursive->has_operation())
	|| (verify_availability !=  nullptr && verify_availability->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (self.is_set || is_set(self.yfilter)) leaf_name_data.push_back(self.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic>();
        }
        return dynamic;
    }

    if(child_yang_name == "encapsulate")
    {
        if(encapsulate == nullptr)
        {
            encapsulate = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate>();
        }
        return encapsulate;
    }

    if(child_yang_name == "recursive")
    {
        if(recursive == nullptr)
        {
            recursive = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive>();
        }
        return recursive;
    }

    if(child_yang_name == "verify-availability")
    {
        if(verify_availability == nullptr)
        {
            verify_availability = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability>();
        }
        return verify_availability;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    if(encapsulate != nullptr)
    {
        children["encapsulate"] = encapsulate;
    }

    if(recursive != nullptr)
    {
        children["recursive"] = recursive;
    }

    if(verify_availability != nullptr)
    {
        children["verify-availability"] = verify_availability;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "self")
    {
        self = value;
        self.value_namespace = name_space;
        self.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "self")
    {
        self.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "encapsulate" || name == "recursive" || name == "verify-availability" || name == "address" || name == "peer-address" || name == "self")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::Dynamic()
    :
    dhcp{YType::empty, "dhcp"}
{

    yang_name = "dynamic"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::~Dynamic()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::has_data() const
{
    return dhcp.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::Encapsulate()
    :
    l3vpn{YType::str, "l3vpn"}
{

    yang_name = "encapsulate"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::~Encapsulate()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::has_data() const
{
    return l3vpn.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l3vpn.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3vpn.is_set || is_set(l3vpn.yfilter)) leaf_name_data.push_back(l3vpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l3vpn")
    {
        l3vpn = value;
        l3vpn.value_namespace = name_space;
        l3vpn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l3vpn")
    {
        l3vpn.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l3vpn")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Recursive()
    :
    global{YType::str, "global"},
    ipv4{YType::str, "ipv4"}
    	,
    vrf(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf>())
{
    vrf->parent = this;

    yang_name = "recursive"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::~Recursive()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::has_data() const
{
    return global.is_set
	|| ipv4.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recursive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "global" || name == "ipv4")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrf()
{

    yang_name = "vrf"; yang_parent_name = "recursive"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::~Vrf()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrfs.size(); index++)
    {
        if(vrfs[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrfs.size(); index++)
    {
        if(vrfs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        for(auto const & c : vrfs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs>();
        c->parent = this;
        vrfs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrfs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::Vrfs()
    :
    vrf{YType::str, "vrf"},
    ipv4{YType::str, "ipv4"}
{

    yang_name = "vrfs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::~Vrfs()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::has_data() const
{
    return vrf.is_set
	|| ipv4.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs" <<"[vrf='" <<vrf <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "ipv4")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::VerifyAvailability()
{

    yang_name = "verify-availability"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::~VerifyAvailability()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify-availability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    range{YType::uint16, "range"}
{

    yang_name = "ipv4"; yang_parent_name = "verify-availability"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::~Ipv4()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::has_data() const
{
    return ipv4.is_set
	|| range.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "range")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::Precedence()
    :
    precedence_fields{YType::enumeration, "precedence-fields"},
    precedence_value{YType::uint8, "precedence-value"}
{

    yang_name = "precedence"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::~Precedence()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::has_data() const
{
    return precedence_fields.is_set
	|| precedence_value.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(precedence_fields.yfilter)
	|| ydk::is_set(precedence_value.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (precedence_fields.is_set || is_set(precedence_fields.yfilter)) leaf_name_data.push_back(precedence_fields.get_name_leafdata());
    if (precedence_value.is_set || is_set(precedence_value.yfilter)) leaf_name_data.push_back(precedence_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "precedence-fields")
    {
        precedence_fields = value;
        precedence_fields.value_namespace = name_space;
        precedence_fields.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence-value")
    {
        precedence_value = value;
        precedence_value.value_namespace = name_space;
        precedence_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "precedence-fields")
    {
        precedence_fields.yfilter = yfilter;
    }
    if(value_path == "precedence-value")
    {
        precedence_value.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "precedence-fields" || name == "precedence-value")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::QosGroup()
    :
    qos_id{YType::uint8, "qos-id"}
{

    yang_name = "qos-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::~QosGroup()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::has_data() const
{
    return qos_id.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_id.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_id.is_set || is_set(qos_id.yfilter)) leaf_name_data.push_back(qos_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qos-id")
    {
        qos_id = value;
        qos_id.value_namespace = name_space;
        qos_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qos-id")
    {
        qos_id.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-id")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Tos::Tos()
    :
    service_value{YType::uint8, "service-value"},
    tos_fields{YType::enumeration, "tos-fields"}
{

    yang_name = "tos"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Tos::~Tos()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Tos::has_data() const
{
    return service_value.is_set
	|| tos_fields.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_value.yfilter)
	|| ydk::is_set(tos_fields.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_value.is_set || is_set(service_value.yfilter)) leaf_name_data.push_back(service_value.get_name_leafdata());
    if (tos_fields.is_set || is_set(tos_fields.yfilter)) leaf_name_data.push_back(tos_fields.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-value")
    {
        service_value = value;
        service_value.value_namespace = name_space;
        service_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-fields")
    {
        tos_fields = value;
        tos_fields.value_namespace = name_space;
        tos_fields.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-value")
    {
        service_value.yfilter = yfilter;
    }
    if(value_path == "tos-fields")
    {
        tos_fields.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-value" || name == "tos-fields")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrf()
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::~Vrf()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrfs.size(); index++)
    {
        if(vrfs[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrfs.size(); index++)
    {
        if(vrfs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        for(auto const & c : vrfs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs>();
        c->parent = this;
        vrfs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrfs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::Vrfs()
    :
    vrf{YType::str, "vrf"}
    	,
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop>())
{
    next_hop->parent = this;

    yang_name = "vrfs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::~Vrfs()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::has_data() const
{
    return vrf.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs" <<"[vrf='" <<vrf <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "vrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::NextHop()
    :
    address{YType::str, "address"}
{

    yang_name = "next-hop"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Ipv6()
    :
    precedence{YType::uint8, "precedence"}
    	,
    address(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Address>())
	,default_(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_>())
	,global(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Global>())
	,next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop>())
{
    address->parent = this;
    default_->parent = this;
    global->parent = this;
    next_hop->parent = this;

    yang_name = "ipv6"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::~Ipv6()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::has_data() const
{
    for (std::size_t index=0; index<bvrf.size(); index++)
    {
        if(bvrf[index]->has_data())
            return true;
    }
    return precedence.is_set
	|| (address !=  nullptr && address->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<bvrf.size(); index++)
    {
        if(bvrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "bvrf")
    {
        for(auto const & c : bvrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf>();
        c->parent = this;
        bvrf.push_back(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Global>();
        }
        return global;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    for (auto const & c : bvrf)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "bvrf" || name == "default" || name == "global" || name == "next-hop" || name == "precedence")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::Address()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::~Address()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::has_data() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::has_operation() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf()
    :
    bvrf{YType::str, "bvrf"}
{

    yang_name = "bvrf"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::~Bvrf()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::has_data() const
{
    for (std::size_t index=0; index<bvrf0.size(); index++)
    {
        if(bvrf0[index]->has_data())
            return true;
    }
    return bvrf.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::has_operation() const
{
    for (std::size_t index=0; index<bvrf0.size(); index++)
    {
        if(bvrf0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bvrf.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bvrf" <<"[bvrf='" <<bvrf <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bvrf.is_set || is_set(bvrf.yfilter)) leaf_name_data.push_back(bvrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bvrf0")
    {
        for(auto const & c : bvrf0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0>();
        c->parent = this;
        bvrf0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bvrf0)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bvrf")
    {
        bvrf = value;
        bvrf.value_namespace = name_space;
        bvrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bvrf")
    {
        bvrf.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bvrf0" || name == "bvrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::Bvrf0()
    :
    bvrf0{YType::str, "bvrf0"}
    	,
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop>())
{
    next_hop->parent = this;

    yang_name = "bvrf0"; yang_parent_name = "bvrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::~Bvrf0()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::has_data() const
{
    return bvrf0.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bvrf0.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bvrf0" <<"[bvrf0='" <<bvrf0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bvrf0.is_set || is_set(bvrf0.yfilter)) leaf_name_data.push_back(bvrf0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bvrf0")
    {
        bvrf0 = value;
        bvrf0.value_namespace = name_space;
        bvrf0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bvrf0")
    {
        bvrf0.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "bvrf0")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::NextHop()
    :
    bipv6{YType::str, "bipv6"},
    verify_availability{YType::empty, "verify-availability"}
{

    yang_name = "next-hop"; yang_parent_name = "bvrf0"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::has_data() const
{
    return bipv6.is_set
	|| verify_availability.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bipv6.yfilter)
	|| ydk::is_set(verify_availability.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bipv6.is_set || is_set(bipv6.yfilter)) leaf_name_data.push_back(bipv6.get_name_leafdata());
    if (verify_availability.is_set || is_set(verify_availability.yfilter)) leaf_name_data.push_back(verify_availability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bipv6")
    {
        bipv6 = value;
        bipv6.value_namespace = name_space;
        bipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-availability")
    {
        verify_availability = value;
        verify_availability.value_namespace = name_space;
        verify_availability.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bipv6")
    {
        bipv6.yfilter = yfilter;
    }
    if(value_path == "verify-availability")
    {
        verify_availability.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bipv6" || name == "verify-availability")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Default_()
    :
    global(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global>())
	,next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop>())
{
    global->parent = this;
    next_hop->parent = this;

    yang_name = "default"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::~Default_()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::has_data() const
{
    for (std::size_t index=0; index<dvrf.size(); index++)
    {
        if(dvrf[index]->has_data())
            return true;
    }
    return (global !=  nullptr && global->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::has_operation() const
{
    for (std::size_t index=0; index<dvrf.size(); index++)
    {
        if(dvrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dvrf")
    {
        for(auto const & c : dvrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf>();
        c->parent = this;
        dvrf.push_back(c);
        return c;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global>();
        }
        return global;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dvrf)
    {
        children[c->get_segment_path()] = c;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dvrf" || name == "global" || name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf()
    :
    dvrf{YType::str, "dvrf"}
{

    yang_name = "dvrf"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::~Dvrf()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::has_data() const
{
    for (std::size_t index=0; index<dvrf0.size(); index++)
    {
        if(dvrf0[index]->has_data())
            return true;
    }
    return dvrf.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::has_operation() const
{
    for (std::size_t index=0; index<dvrf0.size(); index++)
    {
        if(dvrf0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dvrf.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dvrf" <<"[dvrf='" <<dvrf <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dvrf.is_set || is_set(dvrf.yfilter)) leaf_name_data.push_back(dvrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dvrf0")
    {
        for(auto const & c : dvrf0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0>();
        c->parent = this;
        dvrf0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dvrf0)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dvrf")
    {
        dvrf = value;
        dvrf.value_namespace = name_space;
        dvrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dvrf")
    {
        dvrf.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dvrf0" || name == "dvrf")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::Dvrf0()
    :
    dvrf0{YType::str, "dvrf0"},
    next_hop{YType::empty, "next-hop"}
{

    yang_name = "dvrf0"; yang_parent_name = "dvrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::~Dvrf0()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::has_data() const
{
    return dvrf0.is_set
	|| next_hop.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dvrf0.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dvrf0" <<"[dvrf0='" <<dvrf0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dvrf0.is_set || is_set(dvrf0.yfilter)) leaf_name_data.push_back(dvrf0.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dvrf0")
    {
        dvrf0 = value;
        dvrf0.value_namespace = name_space;
        dvrf0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dvrf0")
    {
        dvrf0.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dvrf0" || name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::Global()
    :
    next_hop{YType::str, "next-hop"}
{

    yang_name = "global"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::~Global()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::has_data() const
{
    return next_hop.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"}
{

    yang_name = "next-hop"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::has_data() const
{
    for (std::size_t index=0; index<ipv6s.size(); index++)
    {
        if(ipv6s[index]->has_data())
            return true;
    }
    return next_hop_address.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::has_operation() const
{
    for (std::size_t index=0; index<ipv6s.size(); index++)
    {
        if(ipv6s[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6s")
    {
        for(auto const & c : ipv6s)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S>();
        c->parent = this;
        ipv6s.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6s)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6s" || name == "next-hop-address")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::Ipv6S()
    :
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ipv6s"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::~Ipv6S()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::has_data() const
{
    return ipv6.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6s" <<"[ipv6='" <<ipv6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::Global()
    :
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop>())
{
    next_hop->parent = this;

    yang_name = "global"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::~Global()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::has_data() const
{
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NextHop()
    :
    verify_availability{YType::str, "verify-availability"}
{

    yang_name = "next-hop"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::has_data() const
{
    for (std::size_t index=0; index<nh_ipv6.size(); index++)
    {
        if(nh_ipv6[index]->has_data())
            return true;
    }
    return verify_availability.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::has_operation() const
{
    for (std::size_t index=0; index<nh_ipv6.size(); index++)
    {
        if(nh_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(verify_availability.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (verify_availability.is_set || is_set(verify_availability.yfilter)) leaf_name_data.push_back(verify_availability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-ipv6")
    {
        for(auto const & c : nh_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6>();
        c->parent = this;
        nh_ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nh_ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "verify-availability")
    {
        verify_availability = value;
        verify_availability.value_namespace = name_space;
        verify_availability.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "verify-availability")
    {
        verify_availability.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-ipv6" || name == "verify-availability")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::NhIpv6()
    :
    nh_ipv6{YType::str, "nh-ipv6"},
    nh_ipv60{YType::str, "nh-ipv60"}
{

    yang_name = "nh-ipv6"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::~NhIpv6()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::has_data() const
{
    return nh_ipv6.is_set
	|| nh_ipv60.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nh_ipv6.yfilter)
	|| ydk::is_set(nh_ipv60.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-ipv6" <<"[nh-ipv6='" <<nh_ipv6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_ipv6.is_set || is_set(nh_ipv6.yfilter)) leaf_name_data.push_back(nh_ipv6.get_name_leafdata());
    if (nh_ipv60.is_set || is_set(nh_ipv60.yfilter)) leaf_name_data.push_back(nh_ipv60.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nh-ipv6")
    {
        nh_ipv6 = value;
        nh_ipv6.value_namespace = name_space;
        nh_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-ipv60")
    {
        nh_ipv60 = value;
        nh_ipv60.value_namespace = name_space;
        nh_ipv60.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nh-ipv6")
    {
        nh_ipv6.yfilter = yfilter;
    }
    if(value_path == "nh-ipv60")
    {
        nh_ipv60.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-ipv6" || name == "nh-ipv60")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NextHop()
    :
    peer_address{YType::empty, "peer-address"},
    recursive{YType::str, "recursive"}
    	,
    encapsulate(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate>())
	,verify_availability(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability>())
{
    encapsulate->parent = this;
    verify_availability->parent = this;

    yang_name = "next-hop"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::has_data() const
{
    for (std::size_t index=0; index<nha_ipv6.size(); index++)
    {
        if(nha_ipv6[index]->has_data())
            return true;
    }
    return peer_address.is_set
	|| recursive.is_set
	|| (encapsulate !=  nullptr && encapsulate->has_data())
	|| (verify_availability !=  nullptr && verify_availability->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::has_operation() const
{
    for (std::size_t index=0; index<nha_ipv6.size(); index++)
    {
        if(nha_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(recursive.yfilter)
	|| (encapsulate !=  nullptr && encapsulate->has_operation())
	|| (verify_availability !=  nullptr && verify_availability->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (recursive.is_set || is_set(recursive.yfilter)) leaf_name_data.push_back(recursive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulate")
    {
        if(encapsulate == nullptr)
        {
            encapsulate = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate>();
        }
        return encapsulate;
    }

    if(child_yang_name == "nha-ipv6")
    {
        for(auto const & c : nha_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6>();
        c->parent = this;
        nha_ipv6.push_back(c);
        return c;
    }

    if(child_yang_name == "verify-availability")
    {
        if(verify_availability == nullptr)
        {
            verify_availability = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability>();
        }
        return verify_availability;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulate != nullptr)
    {
        children["encapsulate"] = encapsulate;
    }

    for (auto const & c : nha_ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    if(verify_availability != nullptr)
    {
        children["verify-availability"] = verify_availability;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive")
    {
        recursive = value;
        recursive.value_namespace = name_space;
        recursive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "recursive")
    {
        recursive.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulate" || name == "nha-ipv6" || name == "verify-availability" || name == "peer-address" || name == "recursive")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::Encapsulate()
    :
    l3vpn{YType::str, "l3vpn"}
{

    yang_name = "encapsulate"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::~Encapsulate()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::has_data() const
{
    return l3vpn.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l3vpn.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3vpn.is_set || is_set(l3vpn.yfilter)) leaf_name_data.push_back(l3vpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l3vpn")
    {
        l3vpn = value;
        l3vpn.value_namespace = name_space;
        l3vpn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l3vpn")
    {
        l3vpn.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l3vpn")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv6()
    :
    nha_ipv6{YType::str, "nha-ipv6"}
{

    yang_name = "nha-ipv6"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::~NhaIpv6()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::has_data() const
{
    for (std::size_t index=0; index<nha_ipv60.size(); index++)
    {
        if(nha_ipv60[index]->has_data())
            return true;
    }
    return nha_ipv6.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::has_operation() const
{
    for (std::size_t index=0; index<nha_ipv60.size(); index++)
    {
        if(nha_ipv60[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nha_ipv6.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nha-ipv6" <<"[nha-ipv6='" <<nha_ipv6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nha_ipv6.is_set || is_set(nha_ipv6.yfilter)) leaf_name_data.push_back(nha_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nha-ipv60")
    {
        for(auto const & c : nha_ipv60)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60>();
        c->parent = this;
        nha_ipv60.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nha_ipv60)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nha-ipv6")
    {
        nha_ipv6 = value;
        nha_ipv6.value_namespace = name_space;
        nha_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nha-ipv6")
    {
        nha_ipv6.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nha-ipv60" || name == "nha-ipv6")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::NhaIpv60()
    :
    nha_ipv60{YType::str, "nha-ipv60"},
    nh_ipv6{YType::str, "nh-ipv6"}
{

    yang_name = "nha-ipv60"; yang_parent_name = "nha-ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::~NhaIpv60()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::has_data() const
{
    return nha_ipv60.is_set
	|| nh_ipv6.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nha_ipv60.yfilter)
	|| ydk::is_set(nh_ipv6.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nha-ipv60" <<"[nha-ipv60='" <<nha_ipv60 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nha_ipv60.is_set || is_set(nha_ipv60.yfilter)) leaf_name_data.push_back(nha_ipv60.get_name_leafdata());
    if (nh_ipv6.is_set || is_set(nh_ipv6.yfilter)) leaf_name_data.push_back(nh_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nha-ipv60")
    {
        nha_ipv60 = value;
        nha_ipv60.value_namespace = name_space;
        nha_ipv60.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-ipv6")
    {
        nh_ipv6 = value;
        nh_ipv6.value_namespace = name_space;
        nh_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nha-ipv60")
    {
        nha_ipv60.yfilter = yfilter;
    }
    if(value_path == "nh-ipv6")
    {
        nh_ipv6.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nha-ipv60" || name == "nh-ipv6")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VerifyAvailability()
{

    yang_name = "verify-availability"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::~VerifyAvailability()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::has_data() const
{
    for (std::size_t index=0; index<va_ipv6.size(); index++)
    {
        if(va_ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::has_operation() const
{
    for (std::size_t index=0; index<va_ipv6.size(); index++)
    {
        if(va_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify-availability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "va-ipv6")
    {
        for(auto const & c : va_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6>();
        c->parent = this;
        va_ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : va_ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "va-ipv6")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::VaIpv6()
    :
    va_ipv6{YType::str, "va-ipv6"},
    seq_nh{YType::uint16, "seq-nh"}
{

    yang_name = "va-ipv6"; yang_parent_name = "verify-availability"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::~VaIpv6()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::has_data() const
{
    return va_ipv6.is_set
	|| seq_nh.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(va_ipv6.yfilter)
	|| ydk::is_set(seq_nh.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "va-ipv6" <<"[va-ipv6='" <<va_ipv6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (va_ipv6.is_set || is_set(va_ipv6.yfilter)) leaf_name_data.push_back(va_ipv6.get_name_leafdata());
    if (seq_nh.is_set || is_set(seq_nh.yfilter)) leaf_name_data.push_back(seq_nh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "va-ipv6")
    {
        va_ipv6 = value;
        va_ipv6.value_namespace = name_space;
        va_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-nh")
    {
        seq_nh = value;
        seq_nh.value_namespace = name_space;
        seq_nh.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "va-ipv6")
    {
        va_ipv6.yfilter = yfilter;
    }
    if(value_path == "seq-nh")
    {
        seq_nh.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "va-ipv6" || name == "seq-nh")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Level::Level()
    :
    level_1{YType::empty, "level-1"},
    level_1_2{YType::empty, "level-1-2"},
    level_2{YType::empty, "level-2"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "level"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Level::~Level()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Level::has_data() const
{
    return level_1.is_set
	|| level_1_2.is_set
	|| level_2.is_set
	|| nssa_only.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(level_1_2.yfilter)
	|| ydk::is_set(level_2.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_1_2.is_set || is_set(level_1_2.yfilter)) leaf_name_data.push_back(level_1_2.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-1-2" || name == "level-2" || name == "nssa-only")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Lisp::Lisp()
    :
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Lisp::~Lisp()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Lisp::has_data() const
{
    return locator_set.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Origin::Origin()
    :
    egp{YType::uint32, "egp"},
    origin_value{YType::enumeration, "origin-value"}
{

    yang_name = "origin"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Origin::~Origin()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Origin::has_data() const
{
    return egp.is_set
	|| origin_value.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Origin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egp.yfilter)
	|| ydk::is_set(origin_value.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Origin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Origin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egp.is_set || is_set(egp.yfilter)) leaf_name_data.push_back(egp.get_name_leafdata());
    if (origin_value.is_set || is_set(origin_value.yfilter)) leaf_name_data.push_back(origin_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Origin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Origin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Origin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egp")
    {
        egp = value;
        egp.value_namespace = name_space;
        egp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-value")
    {
        origin_value = value;
        origin_value.value_namespace = name_space;
        origin_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Origin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egp")
    {
        egp.yfilter = yfilter;
    }
    if(value_path == "origin-value")
    {
        origin_value.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Origin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egp" || name == "origin-value")
        return true;
    return false;
}

Native::RouteMap::RouteMapSeq::Set::Tag::Tag()
    :
    tag_ipv4{YType::str, "tag-ipv4"},
    tag_val{YType::uint32, "tag-val"}
{

    yang_name = "tag"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteMap::RouteMapSeq::Set::Tag::~Tag()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Tag::has_data() const
{
    return tag_ipv4.is_set
	|| tag_val.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Tag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag_ipv4.yfilter)
	|| ydk::is_set(tag_val.yfilter);
}

std::string Native::RouteMap::RouteMapSeq::Set::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapSeq::Set::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag_ipv4.is_set || is_set(tag_ipv4.yfilter)) leaf_name_data.push_back(tag_ipv4.get_name_leafdata());
    if (tag_val.is_set || is_set(tag_val.yfilter)) leaf_name_data.push_back(tag_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag-ipv4")
    {
        tag_ipv4 = value;
        tag_ipv4.value_namespace = name_space;
        tag_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-val")
    {
        tag_val = value;
        tag_val.value_namespace = name_space;
        tag_val.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapSeq::Set::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag-ipv4")
    {
        tag_ipv4.yfilter = yfilter;
    }
    if(value_path == "tag-val")
    {
        tag_val.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapSeq::Set::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag-ipv4" || name == "tag-val")
        return true;
    return false;
}

Native::RouteTag::RouteTag()
    :
    list(std::make_shared<Native::RouteTag::List>())
	,notation(std::make_shared<Native::RouteTag::Notation>())
{
    list->parent = this;
    notation->parent = this;

    yang_name = "route-tag"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RouteTag::~RouteTag()
{
}

bool Native::RouteTag::has_data() const
{
    return (list !=  nullptr && list->has_data())
	|| (notation !=  nullptr && notation->has_data());
}

bool Native::RouteTag::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation())
	|| (notation !=  nullptr && notation->has_operation());
}

std::string Native::RouteTag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RouteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::RouteTag::List>();
        }
        return list;
    }

    if(child_yang_name == "notation")
    {
        if(notation == nullptr)
        {
            notation = std::make_shared<Native::RouteTag::Notation>();
        }
        return notation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(notation != nullptr)
    {
        children["notation"] = notation;
    }

    return children;
}

void Native::RouteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "notation")
        return true;
    return false;
}

Native::RouteTag::List::List()
{

    yang_name = "list"; yang_parent_name = "route-tag"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RouteTag::List::~List()
{
}

bool Native::RouteTag::List::has_data() const
{
    for (std::size_t index=0; index<rt_name.size(); index++)
    {
        if(rt_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteTag::List::has_operation() const
{
    for (std::size_t index=0; index<rt_name.size(); index++)
    {
        if(rt_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteTag::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/route-tag/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RouteTag::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-name")
    {
        for(auto const & c : rt_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteTag::List::RtName>();
        c->parent = this;
        rt_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rt_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteTag::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteTag::List::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteTag::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-name")
        return true;
    return false;
}

Native::RouteTag::List::RtName::RtName()
    :
    rt_name{YType::str, "rt-name"}
    	,
    deny(std::make_shared<Native::RouteTag::List::RtName::Deny>())
	,permit(std::make_shared<Native::RouteTag::List::RtName::Permit>())
	,seq(std::make_shared<Native::RouteTag::List::RtName::Seq>())
{
    deny->parent = this;
    permit->parent = this;
    seq->parent = this;

    yang_name = "rt-name"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RouteTag::List::RtName::~RtName()
{
}

bool Native::RouteTag::List::RtName::has_data() const
{
    return rt_name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data())
	|| (seq !=  nullptr && seq->has_data());
}

bool Native::RouteTag::List::RtName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_name.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation())
	|| (seq !=  nullptr && seq->has_operation());
}

std::string Native::RouteTag::List::RtName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/route-tag/Cisco-IOS-XE-eigrp:list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RouteTag::List::RtName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-name" <<"[rt-name='" <<rt_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_name.is_set || is_set(rt_name.yfilter)) leaf_name_data.push_back(rt_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::RouteTag::List::RtName::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::RouteTag::List::RtName::Permit>();
        }
        return permit;
    }

    if(child_yang_name == "seq")
    {
        if(seq == nullptr)
        {
            seq = std::make_shared<Native::RouteTag::List::RtName::Seq>();
        }
        return seq;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    if(seq != nullptr)
    {
        children["seq"] = seq;
    }

    return children;
}

void Native::RouteTag::List::RtName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-name")
    {
        rt_name = value;
        rt_name.value_namespace = name_space;
        rt_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteTag::List::RtName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-name")
    {
        rt_name.yfilter = yfilter;
    }
}

bool Native::RouteTag::List::RtName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "seq" || name == "rt-name")
        return true;
    return false;
}

Native::RouteTag::List::RtName::Deny::Deny()
{

    yang_name = "deny"; yang_parent_name = "rt-name"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteTag::List::RtName::Deny::~Deny()
{
}

bool Native::RouteTag::List::RtName::Deny::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteTag::List::RtName::Deny::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteTag::List::RtName::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::RouteTag::List::RtName::Deny::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteTag::List::RtName::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteTag::List::RtName::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteTag::List::RtName::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::RouteTag::List::RtName::Deny::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{

    yang_name = "ipv4"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteTag::List::RtName::Deny::Ipv4::~Ipv4()
{
}

bool Native::RouteTag::List::RtName::Deny::Ipv4::has_data() const
{
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::RouteTag::List::RtName::Deny::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::RouteTag::List::RtName::Deny::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Deny::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Deny::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Deny::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteTag::List::RtName::Deny::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::RouteTag::List::RtName::Deny::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::RouteTag::List::RtName::Deny::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mask")
        return true;
    return false;
}

Native::RouteTag::List::RtName::Permit::Permit()
{

    yang_name = "permit"; yang_parent_name = "rt-name"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteTag::List::RtName::Permit::~Permit()
{
}

bool Native::RouteTag::List::RtName::Permit::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteTag::List::RtName::Permit::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteTag::List::RtName::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::RouteTag::List::RtName::Permit::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteTag::List::RtName::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteTag::List::RtName::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteTag::List::RtName::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::RouteTag::List::RtName::Permit::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{

    yang_name = "ipv4"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteTag::List::RtName::Permit::Ipv4::~Ipv4()
{
}

bool Native::RouteTag::List::RtName::Permit::Ipv4::has_data() const
{
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::RouteTag::List::RtName::Permit::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::RouteTag::List::RtName::Permit::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Permit::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Permit::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Permit::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteTag::List::RtName::Permit::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::RouteTag::List::RtName::Permit::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::RouteTag::List::RtName::Permit::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mask")
        return true;
    return false;
}

Native::RouteTag::List::RtName::Seq::Seq()
{

    yang_name = "seq"; yang_parent_name = "rt-name"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteTag::List::RtName::Seq::~Seq()
{
}

bool Native::RouteTag::List::RtName::Seq::has_data() const
{
    for (std::size_t index=0; index<seq_num.size(); index++)
    {
        if(seq_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteTag::List::RtName::Seq::has_operation() const
{
    for (std::size_t index=0; index<seq_num.size(); index++)
    {
        if(seq_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::RouteTag::List::RtName::Seq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Seq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Seq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-num")
    {
        for(auto const & c : seq_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteTag::List::RtName::Seq::SeqNum>();
        c->parent = this;
        seq_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Seq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : seq_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteTag::List::RtName::Seq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::RouteTag::List::RtName::Seq::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::RouteTag::List::RtName::Seq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq-num")
        return true;
    return false;
}

Native::RouteTag::List::RtName::Seq::SeqNum::SeqNum()
    :
    seq_num{YType::uint32, "seq-num"}
    	,
    deny(std::make_shared<Native::RouteTag::List::RtName::Seq::SeqNum::Deny>())
	,permit(std::make_shared<Native::RouteTag::List::RtName::Seq::SeqNum::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "seq-num"; yang_parent_name = "seq"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteTag::List::RtName::Seq::SeqNum::~SeqNum()
{
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::has_data() const
{
    return seq_num.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::RouteTag::List::RtName::Seq::SeqNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq-num" <<"[seq-num='" <<seq_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Seq::SeqNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Seq::SeqNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::RouteTag::List::RtName::Seq::SeqNum::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::RouteTag::List::RtName::Seq::SeqNum::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Seq::SeqNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::RouteTag::List::RtName::Seq::SeqNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteTag::List::RtName::Seq::SeqNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "seq-num")
        return true;
    return false;
}

Native::RouteTag::List::RtName::Seq::SeqNum::Deny::Deny()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{

    yang_name = "deny"; yang_parent_name = "seq-num"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteTag::List::RtName::Seq::SeqNum::Deny::~Deny()
{
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::Deny::has_data() const
{
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::Deny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::RouteTag::List::RtName::Seq::SeqNum::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Seq::SeqNum::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Seq::SeqNum::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Seq::SeqNum::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteTag::List::RtName::Seq::SeqNum::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::RouteTag::List::RtName::Seq::SeqNum::Deny::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::RouteTag::List::RtName::Seq::SeqNum::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mask")
        return true;
    return false;
}

Native::RouteTag::List::RtName::Seq::SeqNum::Permit::Permit()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{

    yang_name = "permit"; yang_parent_name = "seq-num"; is_top_level_class = false; has_list_ancestor = true;
}

Native::RouteTag::List::RtName::Seq::SeqNum::Permit::~Permit()
{
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::Permit::has_data() const
{
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::RouteTag::List::RtName::Seq::SeqNum::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::RouteTag::List::RtName::Seq::SeqNum::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Seq::SeqNum::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::List::RtName::Seq::SeqNum::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::List::RtName::Seq::SeqNum::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteTag::List::RtName::Seq::SeqNum::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::RouteTag::List::RtName::Seq::SeqNum::Permit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::RouteTag::List::RtName::Seq::SeqNum::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mask")
        return true;
    return false;
}

Native::RouteTag::Notation::Notation()
    :
    dotted_decimal{YType::empty, "dotted-decimal"}
{

    yang_name = "notation"; yang_parent_name = "route-tag"; is_top_level_class = false; has_list_ancestor = false;
}

Native::RouteTag::Notation::~Notation()
{
}

bool Native::RouteTag::Notation::has_data() const
{
    return dotted_decimal.is_set;
}

bool Native::RouteTag::Notation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dotted_decimal.yfilter);
}

std::string Native::RouteTag::Notation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/route-tag/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::RouteTag::Notation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eigrp:notation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::Notation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dotted_decimal.is_set || is_set(dotted_decimal.yfilter)) leaf_name_data.push_back(dotted_decimal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::RouteTag::Notation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteTag::Notation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteTag::Notation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dotted-decimal")
    {
        dotted_decimal = value;
        dotted_decimal.value_namespace = name_space;
        dotted_decimal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteTag::Notation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dotted-decimal")
    {
        dotted_decimal.yfilter = yfilter;
    }
}

bool Native::RouteTag::Notation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dotted-decimal")
        return true;
    return false;
}

Native::Router::Router()
    :
    isis(nullptr) // presence node
	,isis_container(std::make_shared<Native::Router::IsisContainer>())
	,lisp(nullptr) // presence node
	,rip(nullptr) // presence node
{
    isis_container->parent = this;

    yang_name = "router"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::~Router()
{
}

bool Native::Router::has_data() const
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
    for (std::size_t index=0; index<lisp_list.size(); index++)
    {
        if(lisp_list[index]->has_data())
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
    return (isis !=  nullptr && isis->has_data())
	|| (isis_container !=  nullptr && isis_container->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (rip !=  nullptr && rip->has_data());
}

bool Native::Router::has_operation() const
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
    for (std::size_t index=0; index<lisp_list.size(); index++)
    {
        if(lisp_list[index]->has_operation())
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
	|| (isis !=  nullptr && isis->has_operation())
	|| (isis_container !=  nullptr && isis_container->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (rip !=  nullptr && rip->has_operation());
}

std::string Native::Router::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Native::Router::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
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
        auto c = std::make_shared<Native::Router::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "isis-container")
    {
        if(isis_container == nullptr)
        {
            isis_container = std::make_shared<Native::Router::IsisContainer>();
        }
        return isis_container;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "lisp-list")
    {
        for(auto const & c : lisp_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::LispList>();
        c->parent = this;
        lisp_list.push_back(c);
        return c;
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
        auto c = std::make_shared<Native::Router::Ospf>();
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
        auto c = std::make_shared<Native::Router::Ospfv3>();
        c->parent = this;
        ospfv3.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Rip>();
        }
        return rip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(isis_container != nullptr)
    {
        children["isis-container"] = isis_container;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    for (auto const & c : lisp_list)
    {
        children[c->get_segment_path()] = c;
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

    return children;
}

void Native::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "eigrp" || name == "isis" || name == "isis-container" || name == "lisp" || name == "lisp-list" || name == "ospf" || name == "ospfv3" || name == "rip")
        return true;
    return false;
}

Native::Router::Bgp::Bgp()
    :
    id{YType::str, "id"},
    auto_summary{YType::boolean, "auto-summary"},
    default_metric{YType::uint32, "default-metric"},
    synchronization{YType::empty, "synchronization"}
    	,
    address_family(std::make_shared<Native::Router::Bgp::AddressFamily>())
	,bgp(std::make_shared<Native::Router::Bgp::Bgp_>())
	,default_information(std::make_shared<Native::Router::Bgp::DefaultInformation>())
	,distance(std::make_shared<Native::Router::Bgp::Distance>())
	,import(std::make_shared<Native::Router::Bgp::Import>())
	,maximum_paths(std::make_shared<Native::Router::Bgp::MaximumPaths>())
	,redistribute(std::make_shared<Native::Router::Bgp::Redistribute>())
	,scope(std::make_shared<Native::Router::Bgp::Scope>())
	,snmp(nullptr) // presence node
	,table_map(nullptr) // presence node
	,template_(std::make_shared<Native::Router::Bgp::Template_>())
	,timers(std::make_shared<Native::Router::Bgp::Timers>())
{
    address_family->parent = this;
    bgp->parent = this;
    default_information->parent = this;
    distance->parent = this;
    import->parent = this;
    maximum_paths->parent = this;
    redistribute->parent = this;
    scope->parent = this;
    template_->parent = this;
    timers->parent = this;

    yang_name = "bgp"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Bgp::~Bgp()
{
}

bool Native::Router::Bgp::has_data() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return id.is_set
	|| auto_summary.is_set
	|| default_metric.is_set
	|| synchronization.is_set
	|| (address_family !=  nullptr && address_family->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum_paths !=  nullptr && maximum_paths->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (scope !=  nullptr && scope->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (table_map !=  nullptr && table_map->has_data())
	|| (template_ !=  nullptr && template_->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Router::Bgp::has_operation() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum_paths !=  nullptr && maximum_paths->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (scope !=  nullptr && scope->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (table_map !=  nullptr && table_map->has_operation())
	|| (template_ !=  nullptr && template_->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Router::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp:bgp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Router::Bgp::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Bgp::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Bgp::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        for(auto const & c : distribute_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::DistributeList>();
        c->parent = this;
        distribute_list.push_back(c);
        return c;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Router::Bgp::Import>();
        }
        return import;
    }

    if(child_yang_name == "maximum-paths")
    {
        if(maximum_paths == nullptr)
        {
            maximum_paths = std::make_shared<Native::Router::Bgp::MaximumPaths>();
        }
        return maximum_paths;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

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
        auto c = std::make_shared<Native::Router::Bgp::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Bgp::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Router::Bgp::Scope>();
        }
        return scope;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Bgp::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "table-map")
    {
        if(table_map == nullptr)
        {
            table_map = std::make_shared<Native::Router::Bgp::TableMap>();
        }
        return table_map;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::Router::Bgp::Template_>();
        }
        return template_;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Bgp::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    for (auto const & c : distribute_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(maximum_paths != nullptr)
    {
        children["maximum-paths"] = maximum_paths;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(table_map != nullptr)
    {
        children["table-map"] = table_map;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Router::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "bgp" || name == "default-information" || name == "distance" || name == "distribute-list" || name == "import" || name == "maximum-paths" || name == "neighbor" || name == "network" || name == "redistribute" || name == "scope" || name == "snmp" || name == "table-map" || name == "template" || name == "timers" || name == "id" || name == "auto-summary" || name == "default-metric" || name == "synchronization")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::AddressFamily()
    :
    no_vrf(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf>())
	,with_vrf(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf>())
{
    no_vrf->parent = this;
    with_vrf->parent = this;

    yang_name = "address-family"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::~AddressFamily()
{
}

bool Native::Router::Bgp::AddressFamily::has_data() const
{
    return (no_vrf !=  nullptr && no_vrf->has_data())
	|| (with_vrf !=  nullptr && with_vrf->has_data());
}

bool Native::Router::Bgp::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (no_vrf !=  nullptr && no_vrf->has_operation())
	|| (with_vrf !=  nullptr && with_vrf->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no-vrf")
    {
        if(no_vrf == nullptr)
        {
            no_vrf = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf>();
        }
        return no_vrf;
    }

    if(child_yang_name == "with-vrf")
    {
        if(with_vrf == nullptr)
        {
            with_vrf = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf>();
        }
        return with_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(no_vrf != nullptr)
    {
        children["no-vrf"] = no_vrf;
    }

    if(with_vrf != nullptr)
    {
        children["with-vrf"] = with_vrf;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-vrf" || name == "with-vrf")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::NoVrf()
{

    yang_name = "no-vrf"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::~NoVrf()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2vpn.size(); index++)
    {
        if(l2vpn[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nsap.size(); index++)
    {
        if(nsap[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rtfilter.size(); index++)
    {
        if(rtfilter[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpnv4.size(); index++)
    {
        if(vpnv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpnv6.size(); index++)
    {
        if(vpnv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2vpn.size(); index++)
    {
        if(l2vpn[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nsap.size(); index++)
    {
        if(nsap[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rtfilter.size(); index++)
    {
        if(rtfilter[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpnv4.size(); index++)
    {
        if(vpnv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpnv6.size(); index++)
    {
        if(vpnv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
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
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    if(child_yang_name == "l2vpn")
    {
        for(auto const & c : l2vpn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::L2Vpn>();
        c->parent = this;
        l2vpn.push_back(c);
        return c;
    }

    if(child_yang_name == "nsap")
    {
        for(auto const & c : nsap)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Nsap>();
        c->parent = this;
        nsap.push_back(c);
        return c;
    }

    if(child_yang_name == "rtfilter")
    {
        for(auto const & c : rtfilter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter>();
        c->parent = this;
        rtfilter.push_back(c);
        return c;
    }

    if(child_yang_name == "vpnv4")
    {
        for(auto const & c : vpnv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Vpnv4>();
        c->parent = this;
        vpnv4.push_back(c);
        return c;
    }

    if(child_yang_name == "vpnv6")
    {
        for(auto const & c : vpnv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Vpnv6>();
        c->parent = this;
        vpnv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : l2vpn)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : nsap)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rtfilter)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vpnv4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vpnv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::NoVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "l2vpn" || name == "nsap" || name == "rtfilter" || name == "vpnv4" || name == "vpnv6")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Ipv4()
    :
    af_name{YType::enumeration, "af-name"},
    auto_summary{YType::boolean, "auto-summary"},
    default_metric{YType::uint32, "default-metric"},
    synchronization{YType::empty, "synchronization"}
    	,
    aggregate_address(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::AggregateAddress>())
	,bgp(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_>())
	,default_information(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DefaultInformation>())
	,distance(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance>())
	,import(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Import>())
	,maximum_paths(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths>())
	,redistribute(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute>())
	,snmp(nullptr) // presence node
	,table_map(nullptr) // presence node
{
    aggregate_address->parent = this;
    bgp->parent = this;
    default_information->parent = this;
    distance->parent = this;
    import->parent = this;
    maximum_paths->parent = this;
    redistribute->parent = this;

    yang_name = "ipv4"; yang_parent_name = "no-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::~Ipv4()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::has_data() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return af_name.is_set
	|| auto_summary.is_set
	|| default_metric.is_set
	|| synchronization.is_set
	|| (aggregate_address !=  nullptr && aggregate_address->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum_paths !=  nullptr && maximum_paths->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (table_map !=  nullptr && table_map->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| (aggregate_address !=  nullptr && aggregate_address->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum_paths !=  nullptr && maximum_paths->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (table_map !=  nullptr && table_map->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate-address")
    {
        if(aggregate_address == nullptr)
        {
            aggregate_address = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::AggregateAddress>();
        }
        return aggregate_address;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        for(auto const & c : distribute_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList>();
        c->parent = this;
        distribute_list.push_back(c);
        return c;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Import>();
        }
        return import;
    }

    if(child_yang_name == "maximum-paths")
    {
        if(maximum_paths == nullptr)
        {
            maximum_paths = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths>();
        }
        return maximum_paths;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

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
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "table-map")
    {
        if(table_map == nullptr)
        {
            table_map = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::TableMap>();
        }
        return table_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregate_address != nullptr)
    {
        children["aggregate-address"] = aggregate_address;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    for (auto const & c : distribute_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(maximum_paths != nullptr)
    {
        children["maximum-paths"] = maximum_paths;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(table_map != nullptr)
    {
        children["table-map"] = table_map;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-summary")
    {
        auto_summary = value;
        auto_summary.value_namespace = name_space;
        auto_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-address" || name == "bgp" || name == "default-information" || name == "distance" || name == "distribute-list" || name == "import" || name == "maximum-paths" || name == "neighbor" || name == "network" || name == "redistribute" || name == "snmp" || name == "table-map" || name == "af-name" || name == "auto-summary" || name == "default-metric" || name == "synchronization")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::AggregateAddress::AggregateAddress()
    :
    advertise_map{YType::str, "advertise-map"},
    as_override{YType::empty, "as-override"},
    as_set{YType::empty, "as-set"},
    attribute_map{YType::str, "attribute-map"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mask{YType::str, "ipv4-mask"},
    route_map{YType::str, "route-map"},
    summary_only{YType::empty, "summary-only"},
    suppress_map{YType::str, "suppress-map"}
{

    yang_name = "aggregate-address"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::AggregateAddress::~AggregateAddress()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::AggregateAddress::has_data() const
{
    return advertise_map.is_set
	|| as_override.is_set
	|| as_set.is_set
	|| attribute_map.is_set
	|| ipv4_address.is_set
	|| ipv4_mask.is_set
	|| route_map.is_set
	|| summary_only.is_set
	|| suppress_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::AggregateAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise_map.yfilter)
	|| ydk::is_set(as_override.yfilter)
	|| ydk::is_set(as_set.yfilter)
	|| ydk::is_set(attribute_map.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(summary_only.yfilter)
	|| ydk::is_set(suppress_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::AggregateAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::AggregateAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_map.is_set || is_set(advertise_map.yfilter)) leaf_name_data.push_back(advertise_map.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.yfilter)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (as_set.is_set || is_set(as_set.yfilter)) leaf_name_data.push_back(as_set.get_name_leafdata());
    if (attribute_map.is_set || is_set(attribute_map.yfilter)) leaf_name_data.push_back(attribute_map.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (summary_only.is_set || is_set(summary_only.yfilter)) leaf_name_data.push_back(summary_only.get_name_leafdata());
    if (suppress_map.is_set || is_set(suppress_map.yfilter)) leaf_name_data.push_back(suppress_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::AggregateAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::AggregateAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::AggregateAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-map")
    {
        advertise_map = value;
        advertise_map.value_namespace = name_space;
        advertise_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-override")
    {
        as_override = value;
        as_override.value_namespace = name_space;
        as_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-set")
    {
        as_set = value;
        as_set.value_namespace = name_space;
        as_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-map")
    {
        attribute_map = value;
        attribute_map.value_namespace = name_space;
        attribute_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-only")
    {
        summary_only = value;
        summary_only.value_namespace = name_space;
        summary_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-map")
    {
        suppress_map = value;
        suppress_map.value_namespace = name_space;
        suppress_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::AggregateAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-map")
    {
        advertise_map.yfilter = yfilter;
    }
    if(value_path == "as-override")
    {
        as_override.yfilter = yfilter;
    }
    if(value_path == "as-set")
    {
        as_set.yfilter = yfilter;
    }
    if(value_path == "attribute-map")
    {
        attribute_map.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "summary-only")
    {
        summary_only.yfilter = yfilter;
    }
    if(value_path == "suppress-map")
    {
        suppress_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::AggregateAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-map" || name == "as-override" || name == "as-set" || name == "attribute-map" || name == "ipv4-address" || name == "ipv4-mask" || name == "route-map" || name == "summary-only" || name == "suppress-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bgp_()
    :
    advertise_best_external{YType::empty, "advertise-best-external"},
    aggregate_timer{YType::uint8, "aggregate-timer"},
    always_compare_med{YType::empty, "always-compare-med"},
    cluster_id{YType::str, "cluster-id"},
    deterministic_med{YType::empty, "deterministic-med"},
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    enforce_first_as{YType::empty, "enforce-first-as"},
    enhanced_error{YType::empty, "enhanced-error"},
    fast_external_fallover{YType::boolean, "fast-external-fallover"},
    log_neighbor_changes{YType::empty, "log-neighbor-changes"},
    maxas_limit{YType::uint16, "maxas-limit"},
    maxcommunity_limit{YType::uint16, "maxcommunity-limit"},
    redistribute_internal{YType::empty, "redistribute-internal"},
    router_id{YType::str, "router-id"},
    scan_time{YType::uint8, "scan-time"},
    soft_reconfig_backup{YType::empty, "soft-reconfig-backup"},
    suppress_inactive{YType::empty, "suppress-inactive"},
    update_delay{YType::uint16, "update-delay"}
    	,
    additional_paths(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths>())
	,asnotation(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Asnotation>())
	,bestpath(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath>())
	,client_to_client(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient>())
	,confederation(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation>())
	,consistency_checker(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker>())
	,dampening(nullptr) // presence node
	,default_(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_>())
	,graceful_restart(nullptr) // presence node
	,ha_mode(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode>())
	,nexthop(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop>())
	,nopeerup_delay(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::NopeerupDelay>())
	,recursion(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Recursion>())
	,regexp(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Regexp>())
	,route_map(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::RouteMap>())
	,slow_peer(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer>())
	,transport(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Transport>())
	,update_group(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup>())
{
    additional_paths->parent = this;
    asnotation->parent = this;
    bestpath->parent = this;
    client_to_client->parent = this;
    confederation->parent = this;
    consistency_checker->parent = this;
    default_->parent = this;
    ha_mode->parent = this;
    nexthop->parent = this;
    nopeerup_delay->parent = this;
    recursion->parent = this;
    regexp->parent = this;
    route_map->parent = this;
    slow_peer->parent = this;
    transport->parent = this;
    update_group->parent = this;

    yang_name = "bgp"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::has_data() const
{
    for (std::size_t index=0; index<inject_map.size(); index++)
    {
        if(inject_map[index]->has_data())
            return true;
    }
    return advertise_best_external.is_set
	|| aggregate_timer.is_set
	|| always_compare_med.is_set
	|| cluster_id.is_set
	|| deterministic_med.is_set
	|| dmzlink_bw.is_set
	|| enforce_first_as.is_set
	|| enhanced_error.is_set
	|| fast_external_fallover.is_set
	|| log_neighbor_changes.is_set
	|| maxas_limit.is_set
	|| maxcommunity_limit.is_set
	|| redistribute_internal.is_set
	|| router_id.is_set
	|| scan_time.is_set
	|| soft_reconfig_backup.is_set
	|| suppress_inactive.is_set
	|| update_delay.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (asnotation !=  nullptr && asnotation->has_data())
	|| (bestpath !=  nullptr && bestpath->has_data())
	|| (client_to_client !=  nullptr && client_to_client->has_data())
	|| (confederation !=  nullptr && confederation->has_data())
	|| (consistency_checker !=  nullptr && consistency_checker->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (ha_mode !=  nullptr && ha_mode->has_data())
	|| (nexthop !=  nullptr && nexthop->has_data())
	|| (nopeerup_delay !=  nullptr && nopeerup_delay->has_data())
	|| (recursion !=  nullptr && recursion->has_data())
	|| (regexp !=  nullptr && regexp->has_data())
	|| (route_map !=  nullptr && route_map->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (update_group !=  nullptr && update_group->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::has_operation() const
{
    for (std::size_t index=0; index<inject_map.size(); index++)
    {
        if(inject_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(advertise_best_external.yfilter)
	|| ydk::is_set(aggregate_timer.yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(cluster_id.yfilter)
	|| ydk::is_set(deterministic_med.yfilter)
	|| ydk::is_set(dmzlink_bw.yfilter)
	|| ydk::is_set(enforce_first_as.yfilter)
	|| ydk::is_set(enhanced_error.yfilter)
	|| ydk::is_set(fast_external_fallover.yfilter)
	|| ydk::is_set(log_neighbor_changes.yfilter)
	|| ydk::is_set(maxas_limit.yfilter)
	|| ydk::is_set(maxcommunity_limit.yfilter)
	|| ydk::is_set(redistribute_internal.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(scan_time.yfilter)
	|| ydk::is_set(soft_reconfig_backup.yfilter)
	|| ydk::is_set(suppress_inactive.yfilter)
	|| ydk::is_set(update_delay.yfilter)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (asnotation !=  nullptr && asnotation->has_operation())
	|| (bestpath !=  nullptr && bestpath->has_operation())
	|| (client_to_client !=  nullptr && client_to_client->has_operation())
	|| (confederation !=  nullptr && confederation->has_operation())
	|| (consistency_checker !=  nullptr && consistency_checker->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (ha_mode !=  nullptr && ha_mode->has_operation())
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (nopeerup_delay !=  nullptr && nopeerup_delay->has_operation())
	|| (recursion !=  nullptr && recursion->has_operation())
	|| (regexp !=  nullptr && regexp->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (update_group !=  nullptr && update_group->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_best_external.is_set || is_set(advertise_best_external.yfilter)) leaf_name_data.push_back(advertise_best_external.get_name_leafdata());
    if (aggregate_timer.is_set || is_set(aggregate_timer.yfilter)) leaf_name_data.push_back(aggregate_timer.get_name_leafdata());
    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.yfilter)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (deterministic_med.is_set || is_set(deterministic_med.yfilter)) leaf_name_data.push_back(deterministic_med.get_name_leafdata());
    if (dmzlink_bw.is_set || is_set(dmzlink_bw.yfilter)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.yfilter)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (enhanced_error.is_set || is_set(enhanced_error.yfilter)) leaf_name_data.push_back(enhanced_error.get_name_leafdata());
    if (fast_external_fallover.is_set || is_set(fast_external_fallover.yfilter)) leaf_name_data.push_back(fast_external_fallover.get_name_leafdata());
    if (log_neighbor_changes.is_set || is_set(log_neighbor_changes.yfilter)) leaf_name_data.push_back(log_neighbor_changes.get_name_leafdata());
    if (maxas_limit.is_set || is_set(maxas_limit.yfilter)) leaf_name_data.push_back(maxas_limit.get_name_leafdata());
    if (maxcommunity_limit.is_set || is_set(maxcommunity_limit.yfilter)) leaf_name_data.push_back(maxcommunity_limit.get_name_leafdata());
    if (redistribute_internal.is_set || is_set(redistribute_internal.yfilter)) leaf_name_data.push_back(redistribute_internal.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (scan_time.is_set || is_set(scan_time.yfilter)) leaf_name_data.push_back(scan_time.get_name_leafdata());
    if (soft_reconfig_backup.is_set || is_set(soft_reconfig_backup.yfilter)) leaf_name_data.push_back(soft_reconfig_backup.get_name_leafdata());
    if (suppress_inactive.is_set || is_set(suppress_inactive.yfilter)) leaf_name_data.push_back(suppress_inactive.get_name_leafdata());
    if (update_delay.is_set || is_set(update_delay.yfilter)) leaf_name_data.push_back(update_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "asnotation")
    {
        if(asnotation == nullptr)
        {
            asnotation = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Asnotation>();
        }
        return asnotation;
    }

    if(child_yang_name == "bestpath")
    {
        if(bestpath == nullptr)
        {
            bestpath = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath>();
        }
        return bestpath;
    }

    if(child_yang_name == "client-to-client")
    {
        if(client_to_client == nullptr)
        {
            client_to_client = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient>();
        }
        return client_to_client;
    }

    if(child_yang_name == "confederation")
    {
        if(confederation == nullptr)
        {
            confederation = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation>();
        }
        return confederation;
    }

    if(child_yang_name == "consistency-checker")
    {
        if(consistency_checker == nullptr)
        {
            consistency_checker = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker>();
        }
        return consistency_checker;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "ha-mode")
    {
        if(ha_mode == nullptr)
        {
            ha_mode = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode>();
        }
        return ha_mode;
    }

    if(child_yang_name == "inject-map")
    {
        for(auto const & c : inject_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::InjectMap>();
        c->parent = this;
        inject_map.push_back(c);
        return c;
    }

    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "nopeerup-delay")
    {
        if(nopeerup_delay == nullptr)
        {
            nopeerup_delay = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::NopeerupDelay>();
        }
        return nopeerup_delay;
    }

    if(child_yang_name == "recursion")
    {
        if(recursion == nullptr)
        {
            recursion = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Recursion>();
        }
        return recursion;
    }

    if(child_yang_name == "regexp")
    {
        if(regexp == nullptr)
        {
            regexp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Regexp>();
        }
        return regexp;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::RouteMap>();
        }
        return route_map;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer>();
        }
        return slow_peer;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "update-group")
    {
        if(update_group == nullptr)
        {
            update_group = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup>();
        }
        return update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(asnotation != nullptr)
    {
        children["asnotation"] = asnotation;
    }

    if(bestpath != nullptr)
    {
        children["bestpath"] = bestpath;
    }

    if(client_to_client != nullptr)
    {
        children["client-to-client"] = client_to_client;
    }

    if(confederation != nullptr)
    {
        children["confederation"] = confederation;
    }

    if(consistency_checker != nullptr)
    {
        children["consistency-checker"] = consistency_checker;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(ha_mode != nullptr)
    {
        children["ha-mode"] = ha_mode;
    }

    for (auto const & c : inject_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    if(nopeerup_delay != nullptr)
    {
        children["nopeerup-delay"] = nopeerup_delay;
    }

    if(recursion != nullptr)
    {
        children["recursion"] = recursion;
    }

    if(regexp != nullptr)
    {
        children["regexp"] = regexp;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    if(slow_peer != nullptr)
    {
        children["slow-peer"] = slow_peer;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(update_group != nullptr)
    {
        children["update-group"] = update_group;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-best-external")
    {
        advertise_best_external = value;
        advertise_best_external.value_namespace = name_space;
        advertise_best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-timer")
    {
        aggregate_timer = value;
        aggregate_timer.value_namespace = name_space;
        aggregate_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
        cluster_id.value_namespace = name_space;
        cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deterministic-med")
    {
        deterministic_med = value;
        deterministic_med.value_namespace = name_space;
        deterministic_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
        dmzlink_bw.value_namespace = name_space;
        dmzlink_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
        enforce_first_as.value_namespace = name_space;
        enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhanced-error")
    {
        enhanced_error = value;
        enhanced_error.value_namespace = name_space;
        enhanced_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-external-fallover")
    {
        fast_external_fallover = value;
        fast_external_fallover.value_namespace = name_space;
        fast_external_fallover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes = value;
        log_neighbor_changes.value_namespace = name_space;
        log_neighbor_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxas-limit")
    {
        maxas_limit = value;
        maxas_limit.value_namespace = name_space;
        maxas_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxcommunity-limit")
    {
        maxcommunity_limit = value;
        maxcommunity_limit.value_namespace = name_space;
        maxcommunity_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-internal")
    {
        redistribute_internal = value;
        redistribute_internal.value_namespace = name_space;
        redistribute_internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scan-time")
    {
        scan_time = value;
        scan_time.value_namespace = name_space;
        scan_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-reconfig-backup")
    {
        soft_reconfig_backup = value;
        soft_reconfig_backup.value_namespace = name_space;
        soft_reconfig_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-inactive")
    {
        suppress_inactive = value;
        suppress_inactive.value_namespace = name_space;
        suppress_inactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-delay")
    {
        update_delay = value;
        update_delay.value_namespace = name_space;
        update_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-best-external")
    {
        advertise_best_external.yfilter = yfilter;
    }
    if(value_path == "aggregate-timer")
    {
        aggregate_timer.yfilter = yfilter;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "cluster-id")
    {
        cluster_id.yfilter = yfilter;
    }
    if(value_path == "deterministic-med")
    {
        deterministic_med.yfilter = yfilter;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw.yfilter = yfilter;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "enhanced-error")
    {
        enhanced_error.yfilter = yfilter;
    }
    if(value_path == "fast-external-fallover")
    {
        fast_external_fallover.yfilter = yfilter;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes.yfilter = yfilter;
    }
    if(value_path == "maxas-limit")
    {
        maxas_limit.yfilter = yfilter;
    }
    if(value_path == "maxcommunity-limit")
    {
        maxcommunity_limit.yfilter = yfilter;
    }
    if(value_path == "redistribute-internal")
    {
        redistribute_internal.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "scan-time")
    {
        scan_time.yfilter = yfilter;
    }
    if(value_path == "soft-reconfig-backup")
    {
        soft_reconfig_backup.yfilter = yfilter;
    }
    if(value_path == "suppress-inactive")
    {
        suppress_inactive.yfilter = yfilter;
    }
    if(value_path == "update-delay")
    {
        update_delay.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-paths" || name == "asnotation" || name == "bestpath" || name == "client-to-client" || name == "confederation" || name == "consistency-checker" || name == "dampening" || name == "default" || name == "graceful-restart" || name == "ha-mode" || name == "inject-map" || name == "nexthop" || name == "nopeerup-delay" || name == "recursion" || name == "regexp" || name == "route-map" || name == "slow-peer" || name == "transport" || name == "update-group" || name == "advertise-best-external" || name == "aggregate-timer" || name == "always-compare-med" || name == "cluster-id" || name == "deterministic-med" || name == "dmzlink-bw" || name == "enforce-first-as" || name == "enhanced-error" || name == "fast-external-fallover" || name == "log-neighbor-changes" || name == "maxas-limit" || name == "maxcommunity-limit" || name == "redistribute-internal" || name == "router-id" || name == "scan-time" || name == "soft-reconfig-backup" || name == "suppress-inactive" || name == "update-delay")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::AdditionalPaths()
    :
    install{YType::empty, "install"},
    receive{YType::empty, "receive"}
    	,
    select(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select>())
	,send(nullptr) // presence node
{
    select->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::has_data() const
{
    return install.is_set
	|| receive.is_set
	|| (select !=  nullptr && select->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(install.yfilter)
	|| ydk::is_set(receive.yfilter)
	|| (select !=  nullptr && select->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (install.is_set || is_set(install.yfilter)) leaf_name_data.push_back(install.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        if(select == nullptr)
        {
            select = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select>();
        }
        return select;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(select != nullptr)
    {
        children["select"] = select;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "install")
    {
        install = value;
        install.value_namespace = name_space;
        install.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "install")
    {
        install.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select" || name == "send" || name == "install" || name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Select()
    :
    all(nullptr) // presence node
	,backup(nullptr) // presence node
	,best(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best>())
	,best_external(nullptr) // presence node
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "select"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::~Select()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (best_external !=  nullptr && best_external->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (best_external !=  nullptr && best_external->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All>();
        }
        return all;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best>();
        }
        return best;
    }

    if(child_yang_name == "best-external")
    {
        if(best_external == nullptr)
        {
            best_external = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal>();
        }
        return best_external;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(best_external != nullptr)
    {
        children["best-external"] = best_external;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "backup" || name == "best" || name == "best-external" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::All()
    :
    best(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best>())
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "all"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::~All()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::has_data() const
{
    return (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::has_operation() const
{
    return is_set(yfilter)
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Best()
{

    yang_name = "best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::~Best()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    group_best{YType::empty, "group-best"}
{

    yang_name = "range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::has_data() const
{
    return range.is_set
	|| group_best.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(group_best.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.yfilter)) leaf_name_data.push_back(group_best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-best")
    {
        group_best = value;
        group_best.value_namespace = name_space;
        group_best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "group-best")
    {
        group_best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::GroupBest()
    :
    best{YType::uint8, "best"}
{

    yang_name = "group-best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::has_data() const
{
    return best.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::Backup()
    :
    best_external{YType::empty, "best-external"}
{

    yang_name = "backup"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::~Backup()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::has_data() const
{
    return best_external.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_external.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-external")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Best()
{

    yang_name = "best"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::~Best()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    all{YType::empty, "all"}
    	,
    group_best(nullptr) // presence node
{

    yang_name = "range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::has_data() const
{
    return range.is_set
	|| all.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(all.yfilter)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-best" || name == "range" || name == "all")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::GroupBest()
    :
    all{YType::empty, "all"}
{

    yang_name = "group-best"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_data() const
{
    return all.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::BestExternal()
    :
    backup{YType::empty, "backup"}
{

    yang_name = "best-external"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::~BestExternal()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::has_data() const
{
    return backup.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup.is_set || is_set(backup.yfilter)) leaf_name_data.push_back(backup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup")
    {
        backup = value;
        backup.value_namespace = name_space;
        backup.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup")
    {
        backup.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"}
{

    yang_name = "group-best"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::has_data() const
{
    return all.is_set
	|| best.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::Send()
    :
    receive{YType::empty, "receive"}
{

    yang_name = "send"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::~Send()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::has_data() const
{
    return receive.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Asnotation::Asnotation()
    :
    dot{YType::empty, "dot"}
{

    yang_name = "asnotation"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Asnotation::~Asnotation()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Asnotation::has_data() const
{
    return dot.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Asnotation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Asnotation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asnotation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Asnotation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot.is_set || is_set(dot.yfilter)) leaf_name_data.push_back(dot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Asnotation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Asnotation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Asnotation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot")
    {
        dot = value;
        dot.value_namespace = name_space;
        dot.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Asnotation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot")
    {
        dot.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Asnotation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Bestpath()
    :
    compare_routerid{YType::empty, "compare-routerid"}
    	,
    cost_community(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity>())
	,igp_metric(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric>())
	,med(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med>())
{
    cost_community->parent = this;
    igp_metric->parent = this;
    med->parent = this;

    yang_name = "bestpath"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::~Bestpath()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::has_data() const
{
    return compare_routerid.is_set
	|| (cost_community !=  nullptr && cost_community->has_data())
	|| (igp_metric !=  nullptr && igp_metric->has_data())
	|| (med !=  nullptr && med->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(compare_routerid.yfilter)
	|| (cost_community !=  nullptr && cost_community->has_operation())
	|| (igp_metric !=  nullptr && igp_metric->has_operation())
	|| (med !=  nullptr && med->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bestpath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compare_routerid.is_set || is_set(compare_routerid.yfilter)) leaf_name_data.push_back(compare_routerid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost-community")
    {
        if(cost_community == nullptr)
        {
            cost_community = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity>();
        }
        return cost_community;
    }

    if(child_yang_name == "igp-metric")
    {
        if(igp_metric == nullptr)
        {
            igp_metric = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric>();
        }
        return igp_metric;
    }

    if(child_yang_name == "med")
    {
        if(med == nullptr)
        {
            med = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med>();
        }
        return med;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost_community != nullptr)
    {
        children["cost-community"] = cost_community;
    }

    if(igp_metric != nullptr)
    {
        children["igp-metric"] = igp_metric;
    }

    if(med != nullptr)
    {
        children["med"] = med;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "compare-routerid")
    {
        compare_routerid = value;
        compare_routerid.value_namespace = name_space;
        compare_routerid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "compare-routerid")
    {
        compare_routerid.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost-community" || name == "igp-metric" || name == "med" || name == "compare-routerid")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::CostCommunity()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "cost-community"; yang_parent_name = "bestpath"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::~CostCommunity()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::has_data() const
{
    return ignore.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::IgpMetric()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "igp-metric"; yang_parent_name = "bestpath"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::~IgpMetric()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::has_data() const
{
    return ignore.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Med()
    :
    missing_at_worst{YType::empty, "missing-at-worst"}
    	,
    confed(nullptr) // presence node
{

    yang_name = "med"; yang_parent_name = "bestpath"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::~Med()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::has_data() const
{
    return missing_at_worst.is_set
	|| (confed !=  nullptr && confed->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(missing_at_worst.yfilter)
	|| (confed !=  nullptr && confed->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "med";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (missing_at_worst.is_set || is_set(missing_at_worst.yfilter)) leaf_name_data.push_back(missing_at_worst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "confed")
    {
        if(confed == nullptr)
        {
            confed = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed>();
        }
        return confed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(confed != nullptr)
    {
        children["confed"] = confed;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst = value;
        missing_at_worst.value_namespace = name_space;
        missing_at_worst.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confed" || name == "missing-at-worst")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::Confed()
    :
    missing_at_worst{YType::empty, "missing-at-worst"}
{

    yang_name = "confed"; yang_parent_name = "med"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::~Confed()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::has_data() const
{
    return missing_at_worst.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(missing_at_worst.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (missing_at_worst.is_set || is_set(missing_at_worst.yfilter)) leaf_name_data.push_back(missing_at_worst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst = value;
        missing_at_worst.value_namespace = name_space;
        missing_at_worst.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "missing-at-worst")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::ClientToClient()
    :
    reflection{YType::empty, "reflection"}
{

    yang_name = "client-to-client"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::~ClientToClient()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::has_data() const
{
    return reflection.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reflection.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reflection.is_set || is_set(reflection.yfilter)) leaf_name_data.push_back(reflection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reflection")
    {
        reflection = value;
        reflection.value_namespace = name_space;
        reflection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reflection")
    {
        reflection.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reflection")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Confederation()
    :
    identifier{YType::uint32, "identifier"}
    	,
    peers(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers>())
{
    peers->parent = this;

    yang_name = "confederation"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::~Confederation()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::has_data() const
{
    return identifier.is_set
	|| (peers !=  nullptr && peers->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| (peers !=  nullptr && peers->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers" || name == "identifier")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::Peers()
    :
    peers_as{YType::uint32, "peers-as"}
{

    yang_name = "peers"; yang_parent_name = "confederation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::~Peers()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::has_data() const
{
    for (auto const & leaf : peers_as.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::has_operation() const
{
    for (auto const & leaf : peers_as.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peers_as.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto peers_as_name_datas = peers_as.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), peers_as_name_datas.begin(), peers_as_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peers-as")
    {
        peers_as.append(value);
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peers-as")
    {
        peers_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers-as")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ConsistencyChecker()
    :
    auto_repair(nullptr) // presence node
	,error_message(nullptr) // presence node
{

    yang_name = "consistency-checker"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::~ConsistencyChecker()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::has_data() const
{
    return (auto_repair !=  nullptr && auto_repair->has_data())
	|| (error_message !=  nullptr && error_message->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::has_operation() const
{
    return is_set(yfilter)
	|| (auto_repair !=  nullptr && auto_repair->has_operation())
	|| (error_message !=  nullptr && error_message->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consistency-checker";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-repair")
    {
        if(auto_repair == nullptr)
        {
            auto_repair = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair>();
        }
        return auto_repair;
    }

    if(child_yang_name == "error-message")
    {
        if(error_message == nullptr)
        {
            error_message = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage>();
        }
        return error_message;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_repair != nullptr)
    {
        children["auto-repair"] = auto_repair;
    }

    if(error_message != nullptr)
    {
        children["error-message"] = error_message;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-repair" || name == "error-message")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::AutoRepair()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "auto-repair"; yang_parent_name = "consistency-checker"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::~AutoRepair()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::ErrorMessage()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "error-message"; yang_parent_name = "consistency-checker"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::~ErrorMessage()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-message";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampening()
    :
    route_map{YType::str, "route-map"}
    	,
    dampen(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen>())
{
    dampen->parent = this;

    yang_name = "dampening"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::~Dampening()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::has_data() const
{
    return route_map.is_set
	|| (dampen !=  nullptr && dampen->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (dampen !=  nullptr && dampen->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampen")
    {
        if(dampen == nullptr)
        {
            dampen = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen>();
        }
        return dampen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dampen != nullptr)
    {
        children["dampen"] = dampen;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampen" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::Dampen()
    :
    half_life_time{YType::uint8, "half-life-time"},
    max_suppress_time{YType::uint8, "max-suppress-time"},
    reuse_time{YType::uint16, "reuse-time"},
    suppress_time{YType::uint16, "suppress-time"}
{

    yang_name = "dampen"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::~Dampen()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::has_data() const
{
    return half_life_time.is_set
	|| max_suppress_time.is_set
	|| reuse_time.is_set
	|| suppress_time.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(half_life_time.yfilter)
	|| ydk::is_set(max_suppress_time.yfilter)
	|| ydk::is_set(reuse_time.yfilter)
	|| ydk::is_set(suppress_time.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life_time.is_set || is_set(half_life_time.yfilter)) leaf_name_data.push_back(half_life_time.get_name_leafdata());
    if (max_suppress_time.is_set || is_set(max_suppress_time.yfilter)) leaf_name_data.push_back(max_suppress_time.get_name_leafdata());
    if (reuse_time.is_set || is_set(reuse_time.yfilter)) leaf_name_data.push_back(reuse_time.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.yfilter)) leaf_name_data.push_back(suppress_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "half-life-time")
    {
        half_life_time = value;
        half_life_time.value_namespace = name_space;
        half_life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-suppress-time")
    {
        max_suppress_time = value;
        max_suppress_time.value_namespace = name_space;
        max_suppress_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-time")
    {
        reuse_time = value;
        reuse_time.value_namespace = name_space;
        reuse_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
        suppress_time.value_namespace = name_space;
        suppress_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "half-life-time")
    {
        half_life_time.yfilter = yfilter;
    }
    if(value_path == "max-suppress-time")
    {
        max_suppress_time.yfilter = yfilter;
    }
    if(value_path == "reuse-time")
    {
        reuse_time.yfilter = yfilter;
    }
    if(value_path == "suppress-time")
    {
        suppress_time.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-life-time" || name == "max-suppress-time" || name == "reuse-time" || name == "suppress-time")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::Default_()
    :
    ipv4_unicast{YType::boolean, "ipv4-unicast"},
    ipv6_nexthop{YType::empty, "ipv6-nexthop"},
    local_preference{YType::uint32, "local-preference"},
    route_target{YType::enumeration, "route-target"}
{

    yang_name = "default"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::~Default_()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::has_data() const
{
    return ipv4_unicast.is_set
	|| ipv6_nexthop.is_set
	|| local_preference.is_set
	|| route_target.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_unicast.yfilter)
	|| ydk::is_set(ipv6_nexthop.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(route_target.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_unicast.is_set || is_set(ipv4_unicast.yfilter)) leaf_name_data.push_back(ipv4_unicast.get_name_leafdata());
    if (ipv6_nexthop.is_set || is_set(ipv6_nexthop.yfilter)) leaf_name_data.push_back(ipv6_nexthop.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-unicast")
    {
        ipv4_unicast = value;
        ipv4_unicast.value_namespace = name_space;
        ipv4_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-nexthop")
    {
        ipv6_nexthop = value;
        ipv6_nexthop.value_namespace = name_space;
        ipv6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-unicast")
    {
        ipv4_unicast.yfilter = yfilter;
    }
    if(value_path == "ipv6-nexthop")
    {
        ipv6_nexthop.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unicast" || name == "ipv6-nexthop" || name == "local-preference" || name == "route-target")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::GracefulRestart()
    :
    extended{YType::empty, "extended"},
    restart_time{YType::uint16, "restart-time"},
    stalepath_time{YType::uint16, "stalepath-time"}
{

    yang_name = "graceful-restart"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::has_data() const
{
    return extended.is_set
	|| restart_time.is_set
	|| stalepath_time.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stalepath_time.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stalepath_time.is_set || is_set(stalepath_time.yfilter)) leaf_name_data.push_back(stalepath_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stalepath-time")
    {
        stalepath_time = value;
        stalepath_time.value_namespace = name_space;
        stalepath_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stalepath-time")
    {
        stalepath_time.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended" || name == "restart-time" || name == "stalepath-time")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::HaMode()
    :
    sso(nullptr) // presence node
{

    yang_name = "ha-mode"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::~HaMode()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::has_data() const
{
    return (sso !=  nullptr && sso->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::has_operation() const
{
    return is_set(yfilter)
	|| (sso !=  nullptr && sso->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sso")
    {
        if(sso == nullptr)
        {
            sso = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso>();
        }
        return sso;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sso != nullptr)
    {
        children["sso"] = sso;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sso")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::Sso()
    :
    prefer{YType::empty, "prefer"}
{

    yang_name = "sso"; yang_parent_name = "ha-mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::~Sso()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::has_data() const
{
    return prefer.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefer.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefer")
        return true;
    return false;
}

const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::MetricType::external {0, "external"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::MetricType::type_1 {2, "type-1"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::MetricType::type_2 {3, "type-2"};

const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::AsnNn::additive {0, "additive"};

const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFields::critical {0, "critical"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFields::flash {1, "flash"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFields::flash_override {2, "flash-override"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFields::immediate {3, "immediate"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFields::internet {4, "internet"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFields::network {5, "network"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFields::priority {6, "priority"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFields::routine {7, "routine"};

const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Tos::TosFields::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Tos::TosFields::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Tos::TosFields::min_delay {2, "min-delay"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Tos::TosFields::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Tos::TosFields::normal {4, "normal"};

const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Origin::OriginValue::igp {0, "igp"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Origin::OriginValue::incomplete {1, "incomplete"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::RouteTarget::filter {0, "filter"};


}
}

