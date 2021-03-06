
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_117.hpp"
#include "Cisco_IOS_XE_native_118.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::LocalPreference()
    :
    values{YType::uint32, "values"}
{

    yang_name = "local-preference"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::~LocalPreference()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::has_operation() const
{
    for (auto const & leaf : values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(values.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-preference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto values_name_datas = values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), values_name_datas.begin(), values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "values")
    {
        values.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "values")
    {
        values.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "values")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::MdtGroup()
    :
    name{YType::str, "name"}
{

    yang_name = "mdt-group"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::~MdtGroup()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::Metric()
    :
    metric_value{YType::str, "metric-value"},
    external{YType::str, "external"}
{

    yang_name = "metric"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::~Metric()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::has_data() const
{
    if (is_presence_container) return true;
    return metric_value.is_set
	|| external.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(external.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "external")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::PolicyList()
    :
    policy_map_names{YType::str, "policy-map-names"}
{

    yang_name = "policy-list"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::~PolicyList()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : policy_map_names.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::has_operation() const
{
    for (auto const & leaf : policy_map_names.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(policy_map_names.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto policy_map_names_name_datas = policy_map_names.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_map_names_name_datas.begin(), policy_map_names_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-names")
    {
        policy_map_names.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-names")
    {
        policy_map_names.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-names")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::RouteType()
    :
    internal{YType::empty, "internal"},
    level_1{YType::empty, "level-1"},
    level_2{YType::empty, "level-2"},
    local{YType::empty, "local"}
        ,
    external(nullptr) // presence node
    , nssa_external(nullptr) // presence node
{

    yang_name = "route-type"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::~RouteType()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::has_data() const
{
    if (is_presence_container) return true;
    return internal.is_set
	|| level_1.is_set
	|| level_2.is_set
	|| local.is_set
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(level_2.yfilter)
	|| ydk::is_set(local.yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(external != nullptr)
    {
        _children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        _children["nssa-external"] = nssa_external;
    }

    return _children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "nssa-external" || name == "internal" || name == "level-1" || name == "level-2" || name == "local")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::External()
    :
    type_1{YType::empty, "type-1"},
    type_2{YType::empty, "type-2"}
{

    yang_name = "external"; yang_parent_name = "route-type"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::~External()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::has_data() const
{
    if (is_presence_container) return true;
    return type_1.is_set
	|| type_2.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type_1.yfilter)
	|| ydk::is_set(type_2.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type_1.is_set || is_set(type_1.yfilter)) leaf_name_data.push_back(type_1.get_name_leafdata());
    if (type_2.is_set || is_set(type_2.yfilter)) leaf_name_data.push_back(type_2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type-1" || name == "type-2")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::NssaExternal()
    :
    type_1{YType::empty, "type-1"},
    type_2{YType::empty, "type-2"}
{

    yang_name = "nssa-external"; yang_parent_name = "route-type"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::~NssaExternal()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return type_1.is_set
	|| type_2.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type_1.yfilter)
	|| ydk::is_set(type_2.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type_1.is_set || is_set(type_1.yfilter)) leaf_name_data.push_back(type_1.get_name_leafdata());
    if (type_2.is_set || is_set(type_2.yfilter)) leaf_name_data.push_back(type_2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type-1" || name == "type-2")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::Rpki()
    :
    invalid{YType::empty, "invalid"},
    not_found{YType::empty, "not-found"},
    valid{YType::empty, "valid"}
{

    yang_name = "rpki"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::~Rpki()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::has_data() const
{
    if (is_presence_container) return true;
    return invalid.is_set
	|| not_found.is_set
	|| valid.is_set;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(invalid.yfilter)
	|| ydk::is_set(not_found.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (invalid.is_set || is_set(invalid.yfilter)) leaf_name_data.push_back(invalid.get_name_leafdata());
    if (not_found.is_set || is_set(not_found.yfilter)) leaf_name_data.push_back(not_found.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid" || name == "not-found" || name == "valid")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::SourceProtocol()
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

    yang_name = "source-protocol"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::~SourceProtocol()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::has_data() const
{
    if (is_presence_container) return true;
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

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::has_operation() const
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

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "lisp" || name == "mobile" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::Tag()
    :
    tag_value{YType::uint32, "tag_value"},
    ipv4_address{YType::str, "ipv4-address"}
        ,
    list(std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List>())
{
    list->parent = this;

    yang_name = "tag"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::~Tag()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv4_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (list !=  nullptr && list->has_data());
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::has_operation() const
{
    for (auto const & leaf : tag_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv4_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag_value.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag_value_name_datas = tag_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag_value_name_datas.begin(), tag_value_name_datas.end());
    auto ipv4_address_name_datas = ipv4_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_address_name_datas.begin(), ipv4_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    return _children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag_value")
    {
        tag_value.append(value);
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag_value")
    {
        tag_value.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "tag_value" || name == "ipv4-address")
        return true;
    return false;
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::List()
    :
    tag_names{YType::str, "tag-names"}
{

    yang_name = "list"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::~List()
{
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag_names.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::has_operation() const
{
    for (auto const & leaf : tag_names.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag_names.yfilter);
}

std::string Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag_names_name_datas = tag_names.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag_names_name_datas.begin(), tag_names_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag-names")
    {
        tag_names.append(value);
    }
}

void Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag-names")
    {
        tag_names.yfilter = yfilter;
    }
}

bool Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag-names")
        return true;
    return false;
}

Native::RouteTag::RouteTag()
    :
    list(std::make_shared<Native::RouteTag::List>())
    , notation(std::make_shared<Native::RouteTag::Notation>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::RouteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-eigrp:list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::RouteTag::List>();
        }
        return list;
    }

    if(child_yang_name == "Cisco-IOS-XE-eigrp:notation")
    {
        if(notation == nullptr)
        {
            notation = std::make_shared<Native::RouteTag::Notation>();
        }
        return notation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["Cisco-IOS-XE-eigrp:list"] = list;
    }

    if(notation != nullptr)
    {
        _children["Cisco-IOS-XE-eigrp:notation"] = notation;
    }

    return _children;
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
    :
    rt_name(this, {"rt_name"})
{

    yang_name = "list"; yang_parent_name = "route-tag"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::RouteTag::List::~List()
{
}

bool Native::RouteTag::List::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rt_name.len(); index++)
    {
        if(rt_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteTag::List::has_operation() const
{
    for (std::size_t index=0; index<rt_name.len(); index++)
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

std::shared_ptr<ydk::Entity> Native::RouteTag::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-name")
    {
        auto ent_ = std::make_shared<Native::RouteTag::List::RtName>();
        ent_->parent = this;
        rt_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteTag::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rt_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    , permit(std::make_shared<Native::RouteTag::List::RtName::Permit>())
    , seq(std::make_shared<Native::RouteTag::List::RtName::Seq>())
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
    if (is_presence_container) return true;
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
    path_buffer << "rt-name";
    ADD_KEY_TOKEN(rt_name, "rt-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_name.is_set || is_set(rt_name.yfilter)) leaf_name_data.push_back(rt_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteTag::List::RtName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteTag::List::RtName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(deny != nullptr)
    {
        _children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    if(seq != nullptr)
    {
        _children["seq"] = seq;
    }

    return _children;
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
    :
    ipv4(this, {"ipv4"})
{

    yang_name = "deny"; yang_parent_name = "rt-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteTag::List::RtName::Deny::~Deny()
{
}

bool Native::RouteTag::List::RtName::Deny::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteTag::List::RtName::Deny::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
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

std::shared_ptr<ydk::Entity> Native::RouteTag::List::RtName::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::RouteTag::List::RtName::Deny::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteTag::List::RtName::Deny::get_children() const
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
    if (is_presence_container) return true;
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
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Deny::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteTag::List::RtName::Deny::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteTag::List::RtName::Deny::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    ipv4(this, {"ipv4"})
{

    yang_name = "permit"; yang_parent_name = "rt-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteTag::List::RtName::Permit::~Permit()
{
}

bool Native::RouteTag::List::RtName::Permit::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteTag::List::RtName::Permit::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
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

std::shared_ptr<ydk::Entity> Native::RouteTag::List::RtName::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::RouteTag::List::RtName::Permit::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteTag::List::RtName::Permit::get_children() const
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
    if (is_presence_container) return true;
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
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Permit::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteTag::List::RtName::Permit::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteTag::List::RtName::Permit::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    seq_num(this, {"seq_num"})
{

    yang_name = "seq"; yang_parent_name = "rt-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::RouteTag::List::RtName::Seq::~Seq()
{
}

bool Native::RouteTag::List::RtName::Seq::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<seq_num.len(); index++)
    {
        if(seq_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteTag::List::RtName::Seq::has_operation() const
{
    for (std::size_t index=0; index<seq_num.len(); index++)
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

std::shared_ptr<ydk::Entity> Native::RouteTag::List::RtName::Seq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq-num")
    {
        auto ent_ = std::make_shared<Native::RouteTag::List::RtName::Seq::SeqNum>();
        ent_->parent = this;
        seq_num.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteTag::List::RtName::Seq::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : seq_num.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    , permit(std::make_shared<Native::RouteTag::List::RtName::Seq::SeqNum::Permit>())
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
    if (is_presence_container) return true;
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
    path_buffer << "seq-num";
    ADD_KEY_TOKEN(seq_num, "seq-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::RouteTag::List::RtName::Seq::SeqNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::RouteTag::List::RtName::Seq::SeqNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteTag::List::RtName::Seq::SeqNum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(deny != nullptr)
    {
        _children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::RouteTag::List::RtName::Seq::SeqNum::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteTag::List::RtName::Seq::SeqNum::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::RouteTag::List::RtName::Seq::SeqNum::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteTag::List::RtName::Seq::SeqNum::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::RouteTag::Notation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::RouteTag::Notation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Native::TableMap::TableMap()
    :
    name{YType::str, "name"},
    default_{YType::str, "Cisco-IOS-XE-qos:default"}
        ,
    map(this, {"from", "to"})
{

    yang_name = "table-map"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::TableMap::~TableMap()
{
}

bool Native::TableMap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map.len(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return name.is_set
	|| default_.is_set;
}

bool Native::TableMap::has_operation() const
{
    for (std::size_t index=0; index<map.len(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::TableMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TableMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-map";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TableMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::TableMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-qos:map")
    {
        auto ent_ = std::make_shared<Native::TableMap::Map>();
        ent_->parent = this;
        map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::TableMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::TableMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-qos:default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TableMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::TableMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map" || name == "name" || name == "default")
        return true;
    return false;
}

Native::TableMap::Map::Map()
    :
    from{YType::uint8, "from"},
    to{YType::uint8, "to"}
{

    yang_name = "map"; yang_parent_name = "table-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::TableMap::Map::~Map()
{
}

bool Native::TableMap::Map::has_data() const
{
    if (is_presence_container) return true;
    return from.is_set
	|| to.is_set;
}

bool Native::TableMap::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from.yfilter)
	|| ydk::is_set(to.yfilter);
}

std::string Native::TableMap::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:map";
    ADD_KEY_TOKEN(from, "from");
    ADD_KEY_TOKEN(to, "to");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TableMap::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.yfilter)) leaf_name_data.push_back(from.get_name_leafdata());
    if (to.is_set || is_set(to.yfilter)) leaf_name_data.push_back(to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::TableMap::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::TableMap::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::TableMap::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from")
    {
        from = value;
        from.value_namespace = name_space;
        from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to")
    {
        to = value;
        to.value_namespace = name_space;
        to.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TableMap::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from")
    {
        from.yfilter = yfilter;
    }
    if(value_path == "to")
    {
        to.yfilter = yfilter;
    }
}

bool Native::TableMap::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from" || name == "to")
        return true;
    return false;
}

Native::Sdm::Sdm()
    :
    prefer(nullptr) // presence node
{

    yang_name = "sdm"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Sdm::~Sdm()
{
}

bool Native::Sdm::has_data() const
{
    if (is_presence_container) return true;
    return (prefer !=  nullptr && prefer->has_data());
}

bool Native::Sdm::has_operation() const
{
    return is_set(yfilter)
	|| (prefer !=  nullptr && prefer->has_operation());
}

std::string Native::Sdm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Sdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Sdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-switch:prefer")
    {
        if(prefer == nullptr)
        {
            prefer = std::make_shared<Native::Sdm::Prefer>();
        }
        return prefer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Sdm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefer != nullptr)
    {
        _children["Cisco-IOS-XE-switch:prefer"] = prefer;
    }

    return _children;
}

void Native::Sdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Sdm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Sdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefer")
        return true;
    return false;
}

Native::Sdm::Prefer::Prefer()
    :
    default_{YType::empty, "default"},
    qos{YType::empty, "qos"}
{

    yang_name = "prefer"; yang_parent_name = "sdm"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Sdm::Prefer::~Prefer()
{
}

bool Native::Sdm::Prefer::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| qos.is_set;
}

bool Native::Sdm::Prefer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(qos.yfilter);
}

std::string Native::Sdm::Prefer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/sdm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Sdm::Prefer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:prefer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Sdm::Prefer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (qos.is_set || is_set(qos.yfilter)) leaf_name_data.push_back(qos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Sdm::Prefer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Sdm::Prefer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Sdm::Prefer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos")
    {
        qos = value;
        qos.value_namespace = name_space;
        qos.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Sdm::Prefer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "qos")
    {
        qos.yfilter = yfilter;
    }
}

bool Native::Sdm::Prefer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "qos")
        return true;
    return false;
}

Native::Mls::Mls()
{

    yang_name = "mls"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Mls::~Mls()
{
}

bool Native::Mls::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Mls::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Mls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Mls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Mls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Mls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mls::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::ObjectGroup::ObjectGroup()
    :
    network(this, {"name"})
    , security(this, {"name"})
    , service(this, {"name"})
{

    yang_name = "object-group"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ObjectGroup::~ObjectGroup()
{
}

bool Native::ObjectGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<security.len(); index++)
    {
        if(security[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service.len(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ObjectGroup::has_operation() const
{
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<security.len(); index++)
    {
        if(security[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service.len(); index++)
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

std::shared_ptr<ydk::Entity> Native::ObjectGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-object-group:network")
    {
        auto ent_ = std::make_shared<Native::ObjectGroup::Network>();
        ent_->parent = this;
        network.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-object-group:security")
    {
        auto ent_ = std::make_shared<Native::ObjectGroup::Security>();
        ent_->parent = this;
        security.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-object-group:service")
    {
        auto ent_ = std::make_shared<Native::ObjectGroup::Service>();
        ent_->parent = this;
        service.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ObjectGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : network.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : security.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "Cisco-IOS-XE-object-group:network";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ObjectGroup::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ObjectGroup::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(obj_mode_config_network_group != nullptr)
    {
        _children["obj-Mode-config-network-group"] = obj_mode_config_network_group;
    }

    return _children;
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
    group_object{YType::str, "group-object"}
        ,
    network_address(this, {"ipv4_addr", "ipv4_mask"})
    , host(this, {"ipv4_host"})
    , range(std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range>())
{
    range->parent = this;

    yang_name = "obj-Mode-config-network-group"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::~ObjModeConfigNetworkGroup()
{
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network_address.len(); index++)
    {
        if(network_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return description.is_set
	|| group_object.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::has_operation() const
{
    for (std::size_t index=0; index<network_address.len(); index++)
    {
        if(network_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(group_object.yfilter)
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network_address")
    {
        auto ent_ = std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress>();
        ent_->parent = this;
        network_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "host")
    {
        auto ent_ = std::make_shared<Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host>();
        ent_->parent = this;
        host.append(ent_);
        return ent_;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : network_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
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
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network_address" || name == "host" || name == "range" || name == "description" || name == "group-object")
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
    if (is_presence_container) return true;
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
    path_buffer << "network_address";
    ADD_KEY_TOKEN(ipv4_addr, "ipv4_addr");
    ADD_KEY_TOKEN(ipv4_mask, "ipv4_mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::Host()
    :
    ipv4_host{YType::str, "ipv4-host"}
{

    yang_name = "host"; yang_parent_name = "obj-Mode-config-network-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::~Host()
{
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_host.is_set;
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_host.yfilter);
}

std::string Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    ADD_KEY_TOKEN(ipv4_host, "ipv4-host");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_host.is_set || is_set(ipv4_host.yfilter)) leaf_name_data.push_back(ipv4_host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host = value;
        ipv4_host.value_namespace = name_space;
        ipv4_host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-host")
        return true;
    return false;
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::Range()
    :
    ip_addr_min{YType::str, "ip-addr-min"},
    ip_addr_max{YType::str, "ip-addr-max"}
{

    yang_name = "range"; yang_parent_name = "obj-Mode-config-network-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::~Range()
{
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr_min.is_set
	|| ip_addr_max.is_set;
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr_min.yfilter)
	|| ydk::is_set(ip_addr_max.yfilter);
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

    if (ip_addr_min.is_set || is_set(ip_addr_min.yfilter)) leaf_name_data.push_back(ip_addr_min.get_name_leafdata());
    if (ip_addr_max.is_set || is_set(ip_addr_max.yfilter)) leaf_name_data.push_back(ip_addr_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr-min")
    {
        ip_addr_min = value;
        ip_addr_min.value_namespace = name_space;
        ip_addr_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr-max")
    {
        ip_addr_max = value;
        ip_addr_max.value_namespace = name_space;
        ip_addr_max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr-min")
    {
        ip_addr_min.yfilter = yfilter;
    }
    if(value_path == "ip-addr-max")
    {
        ip_addr_max.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr-min" || name == "ip-addr-max")
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
    if (is_presence_container) return true;
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
    path_buffer << "Cisco-IOS-XE-object-group:security";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ObjectGroup::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ObjectGroup::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(security_group != nullptr)
    {
        _children["security-group"] = security_group;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::ObjectGroup::Security::SecurityGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ObjectGroup::Security::SecurityGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(security_group != nullptr)
    {
        _children["security-group"] = security_group;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    description{YType::str, "description"},
    group_object{YType::str, "group-object"},
    protocal_number{YType::uint8, "protocal-number"},
    ahp{YType::empty, "ahp"},
    eigrp{YType::empty, "eigrp"},
    esp{YType::empty, "esp"},
    gre{YType::empty, "gre"},
    igmp{YType::empty, "igmp"},
    ip{YType::empty, "ip"},
    ipinip{YType::empty, "ipinip"},
    nos{YType::empty, "nos"},
    ospf{YType::empty, "ospf"},
    pcp{YType::empty, "pcp"},
    pim{YType::empty, "pim"}
        ,
    icmp(nullptr) // presence node
    , tcp(nullptr) // presence node
    , tcp_udp(nullptr) // presence node
    , udp(nullptr) // presence node
{

    yang_name = "service"; yang_parent_name = "object-group"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ObjectGroup::Service::~Service()
{
}

bool Native::ObjectGroup::Service::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| group_object.is_set
	|| protocal_number.is_set
	|| ahp.is_set
	|| eigrp.is_set
	|| esp.is_set
	|| gre.is_set
	|| igmp.is_set
	|| ip.is_set
	|| ipinip.is_set
	|| nos.is_set
	|| ospf.is_set
	|| pcp.is_set
	|| pim.is_set
	|| (icmp !=  nullptr && icmp->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (tcp_udp !=  nullptr && tcp_udp->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::ObjectGroup::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(group_object.yfilter)
	|| ydk::is_set(protocal_number.yfilter)
	|| ydk::is_set(ahp.yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(esp.yfilter)
	|| ydk::is_set(gre.yfilter)
	|| ydk::is_set(igmp.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ipinip.yfilter)
	|| ydk::is_set(nos.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| ydk::is_set(pcp.yfilter)
	|| ydk::is_set(pim.yfilter)
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
    path_buffer << "Cisco-IOS-XE-object-group:service";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (group_object.is_set || is_set(group_object.yfilter)) leaf_name_data.push_back(group_object.get_name_leafdata());
    if (protocal_number.is_set || is_set(protocal_number.yfilter)) leaf_name_data.push_back(protocal_number.get_name_leafdata());
    if (ahp.is_set || is_set(ahp.yfilter)) leaf_name_data.push_back(ahp.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (esp.is_set || is_set(esp.yfilter)) leaf_name_data.push_back(esp.get_name_leafdata());
    if (gre.is_set || is_set(gre.yfilter)) leaf_name_data.push_back(gre.get_name_leafdata());
    if (igmp.is_set || is_set(igmp.yfilter)) leaf_name_data.push_back(igmp.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ipinip.is_set || is_set(ipinip.yfilter)) leaf_name_data.push_back(ipinip.get_name_leafdata());
    if (nos.is_set || is_set(nos.yfilter)) leaf_name_data.push_back(nos.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());
    if (pcp.is_set || is_set(pcp.yfilter)) leaf_name_data.push_back(pcp.get_name_leafdata());
    if (pim.is_set || is_set(pim.yfilter)) leaf_name_data.push_back(pim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ObjectGroup::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ObjectGroup::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(icmp != nullptr)
    {
        _children["icmp"] = icmp;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    if(tcp_udp != nullptr)
    {
        _children["tcp-udp"] = tcp_udp;
    }

    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::ObjectGroup::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "protocal-number")
    {
        protocal_number = value;
        protocal_number.value_namespace = name_space;
        protocal_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ahp")
    {
        ahp = value;
        ahp.value_namespace = name_space;
        ahp.value_namespace_prefix = name_space_prefix;
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
}

void Native::ObjectGroup::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "group-object")
    {
        group_object.yfilter = yfilter;
    }
    if(value_path == "protocal-number")
    {
        protocal_number.yfilter = yfilter;
    }
    if(value_path == "ahp")
    {
        ahp.yfilter = yfilter;
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
}

bool Native::ObjectGroup::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp" || name == "tcp" || name == "tcp-udp" || name == "udp" || name == "name" || name == "description" || name == "group-object" || name == "protocal-number" || name == "ahp" || name == "eigrp" || name == "esp" || name == "gre" || name == "igmp" || name == "ip" || name == "ipinip" || name == "nos" || name == "ospf" || name == "pcp" || name == "pim")
        return true;
    return false;
}

Native::ObjectGroup::Service::Icmp::Icmp()
    :
    port_number{YType::uint8, "port-number"},
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

    yang_name = "icmp"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::ObjectGroup::Service::Icmp::~Icmp()
{
}

bool Native::ObjectGroup::Service::Icmp::has_data() const
{
    if (is_presence_container) return true;
    return port_number.is_set
	|| alternate_address.is_set
	|| conversion_error.is_set
	|| echo.is_set
	|| echo_reply.is_set
	|| information_reply.is_set
	|| information_request.is_set
	|| mask_reply.is_set
	|| mask_request.is_set
	|| mobile_redirect.is_set
	|| parameter_problem.is_set
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
	|| ydk::is_set(port_number.yfilter)
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

    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> Native::ObjectGroup::Service::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ObjectGroup::Service::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ObjectGroup::Service::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
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
    if(name == "port-number" || name == "alternate-address" || name == "conversion-error" || name == "echo" || name == "echo-reply" || name == "information-reply" || name == "information-request" || name == "mask-reply" || name == "mask-request" || name == "mobile-redirect" || name == "parameter-problem" || name == "redirect" || name == "router-advertisement" || name == "router-solicitation" || name == "source-quench" || name == "time-exceeded" || name == "timestamp-reply" || name == "timestamp-request" || name == "traceroute" || name == "unreachable")
        return true;
    return false;
}

Native::ObjectGroup::Service::Tcp::Tcp()
    :
    tcp_port_list(this, {"tcp_port"})
{

    yang_name = "tcp"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::ObjectGroup::Service::Tcp::~Tcp()
{
}

bool Native::ObjectGroup::Service::Tcp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tcp_port_list.len(); index++)
    {
        if(tcp_port_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ObjectGroup::Service::Tcp::has_operation() const
{
    for (std::size_t index=0; index<tcp_port_list.len(); index++)
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

std::shared_ptr<ydk::Entity> Native::ObjectGroup::Service::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-port-list")
    {
        auto ent_ = std::make_shared<Native::ObjectGroup::Service::Tcp::TcpPortList>();
        ent_->parent = this;
        tcp_port_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ObjectGroup::Service::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tcp_port_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    operator_{YType::enumeration, "operator"},
    max_tcp_port{YType::str, "max-tcp-port"}
{

    yang_name = "tcp-port-list"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ObjectGroup::Service::Tcp::TcpPortList::~TcpPortList()
{
}

bool Native::ObjectGroup::Service::Tcp::TcpPortList::has_data() const
{
    if (is_presence_container) return true;
    return tcp_port.is_set
	|| operator_.is_set
	|| max_tcp_port.is_set;
}

bool Native::ObjectGroup::Service::Tcp::TcpPortList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp_port.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(max_tcp_port.yfilter);
}

std::string Native::ObjectGroup::Service::Tcp::TcpPortList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-port-list";
    ADD_KEY_TOKEN(tcp_port, "tcp-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Service::Tcp::TcpPortList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp_port.is_set || is_set(tcp_port.yfilter)) leaf_name_data.push_back(tcp_port.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (max_tcp_port.is_set || is_set(max_tcp_port.yfilter)) leaf_name_data.push_back(max_tcp_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ObjectGroup::Service::Tcp::TcpPortList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ObjectGroup::Service::Tcp::TcpPortList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ObjectGroup::Service::Tcp::TcpPortList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp-port")
    {
        tcp_port = value;
        tcp_port.value_namespace = name_space;
        tcp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tcp-port")
    {
        max_tcp_port = value;
        max_tcp_port.value_namespace = name_space;
        max_tcp_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Service::Tcp::TcpPortList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp-port")
    {
        tcp_port.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "max-tcp-port")
    {
        max_tcp_port.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Service::Tcp::TcpPortList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-port" || name == "operator" || name == "max-tcp-port")
        return true;
    return false;
}

Native::ObjectGroup::Service::TcpUdp::TcpUdp()
    :
    udp_port_list(this, {"udp_port"})
{

    yang_name = "tcp-udp"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::ObjectGroup::Service::TcpUdp::~TcpUdp()
{
}

bool Native::ObjectGroup::Service::TcpUdp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<udp_port_list.len(); index++)
    {
        if(udp_port_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ObjectGroup::Service::TcpUdp::has_operation() const
{
    for (std::size_t index=0; index<udp_port_list.len(); index++)
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

std::shared_ptr<ydk::Entity> Native::ObjectGroup::Service::TcpUdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-port-list")
    {
        auto ent_ = std::make_shared<Native::ObjectGroup::Service::TcpUdp::UdpPortList>();
        ent_->parent = this;
        udp_port_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ObjectGroup::Service::TcpUdp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : udp_port_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    operator_{YType::enumeration, "operator"},
    max_udp_port{YType::str, "max-udp-port"}
{

    yang_name = "udp-port-list"; yang_parent_name = "tcp-udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ObjectGroup::Service::TcpUdp::UdpPortList::~UdpPortList()
{
}

bool Native::ObjectGroup::Service::TcpUdp::UdpPortList::has_data() const
{
    if (is_presence_container) return true;
    return udp_port.is_set
	|| operator_.is_set
	|| max_udp_port.is_set;
}

bool Native::ObjectGroup::Service::TcpUdp::UdpPortList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udp_port.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(max_udp_port.yfilter);
}

std::string Native::ObjectGroup::Service::TcpUdp::UdpPortList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-port-list";
    ADD_KEY_TOKEN(udp_port, "udp-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Service::TcpUdp::UdpPortList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (max_udp_port.is_set || is_set(max_udp_port.yfilter)) leaf_name_data.push_back(max_udp_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ObjectGroup::Service::TcpUdp::UdpPortList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ObjectGroup::Service::TcpUdp::UdpPortList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ObjectGroup::Service::TcpUdp::UdpPortList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-udp-port")
    {
        max_udp_port = value;
        max_udp_port.value_namespace = name_space;
        max_udp_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Service::TcpUdp::UdpPortList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "max-udp-port")
    {
        max_udp_port.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Service::TcpUdp::UdpPortList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-port" || name == "operator" || name == "max-udp-port")
        return true;
    return false;
}

Native::ObjectGroup::Service::Udp::Udp()
    :
    udp_port_list(this, {"udp_port"})
{

    yang_name = "udp"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::ObjectGroup::Service::Udp::~Udp()
{
}

bool Native::ObjectGroup::Service::Udp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<udp_port_list.len(); index++)
    {
        if(udp_port_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ObjectGroup::Service::Udp::has_operation() const
{
    for (std::size_t index=0; index<udp_port_list.len(); index++)
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

std::shared_ptr<ydk::Entity> Native::ObjectGroup::Service::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-port-list")
    {
        auto ent_ = std::make_shared<Native::ObjectGroup::Service::Udp::UdpPortList>();
        ent_->parent = this;
        udp_port_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ObjectGroup::Service::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : udp_port_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    operator_{YType::enumeration, "operator"},
    max_udp_port{YType::str, "max-udp-port"}
{

    yang_name = "udp-port-list"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ObjectGroup::Service::Udp::UdpPortList::~UdpPortList()
{
}

bool Native::ObjectGroup::Service::Udp::UdpPortList::has_data() const
{
    if (is_presence_container) return true;
    return udp_port.is_set
	|| operator_.is_set
	|| max_udp_port.is_set;
}

bool Native::ObjectGroup::Service::Udp::UdpPortList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udp_port.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(max_udp_port.yfilter);
}

std::string Native::ObjectGroup::Service::Udp::UdpPortList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-port-list";
    ADD_KEY_TOKEN(udp_port, "udp-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ObjectGroup::Service::Udp::UdpPortList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (max_udp_port.is_set || is_set(max_udp_port.yfilter)) leaf_name_data.push_back(max_udp_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ObjectGroup::Service::Udp::UdpPortList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ObjectGroup::Service::Udp::UdpPortList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ObjectGroup::Service::Udp::UdpPortList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-udp-port")
    {
        max_udp_port = value;
        max_udp_port.value_namespace = name_space;
        max_udp_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ObjectGroup::Service::Udp::UdpPortList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "max-udp-port")
    {
        max_udp_port.yfilter = yfilter;
    }
}

bool Native::ObjectGroup::Service::Udp::UdpPortList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-port" || name == "operator" || name == "max-udp-port")
        return true;
    return false;
}

Native::PseudowireClass::PseudowireClass()
    :
    name{YType::str, "name"},
    encapsulation{YType::enumeration, "Cisco-IOS-XE-l2vpn:encapsulation"},
    control_word{YType::empty, "Cisco-IOS-XE-l2vpn:control-word"},
    interworking{YType::enumeration, "Cisco-IOS-XE-l2vpn:interworking"},
    sequencing{YType::enumeration, "Cisco-IOS-XE-l2vpn:sequencing"}
        ,
    ip(std::make_shared<Native::PseudowireClass::Ip>())
    , load_balance(std::make_shared<Native::PseudowireClass::LoadBalance>())
    , monitor(std::make_shared<Native::PseudowireClass::Monitor>())
    , preferred_path(std::make_shared<Native::PseudowireClass::PreferredPath>())
    , protocol_mpls(std::make_shared<Native::PseudowireClass::ProtocolMpls>())
    , protocol_l2tpv2(std::make_shared<Native::PseudowireClass::ProtocolL2tpv2>())
    , protocol_l2tpv3(std::make_shared<Native::PseudowireClass::ProtocolL2tpv3>())
    , status(nullptr) // presence node
    , switching(std::make_shared<Native::PseudowireClass::Switching>())
{
    ip->parent = this;
    load_balance->parent = this;
    monitor->parent = this;
    preferred_path->parent = this;
    protocol_mpls->parent = this;
    protocol_l2tpv2->parent = this;
    protocol_l2tpv3->parent = this;
    switching->parent = this;

    yang_name = "pseudowire-class"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::PseudowireClass::~PseudowireClass()
{
}

bool Native::PseudowireClass::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| encapsulation.is_set
	|| control_word.is_set
	|| interworking.is_set
	|| sequencing.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data())
	|| (protocol_mpls !=  nullptr && protocol_mpls->has_data())
	|| (protocol_l2tpv2 !=  nullptr && protocol_l2tpv2->has_data())
	|| (protocol_l2tpv3 !=  nullptr && protocol_l2tpv3->has_data())
	|| (status !=  nullptr && status->has_data())
	|| (switching !=  nullptr && switching->has_data());
}

bool Native::PseudowireClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(control_word.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation())
	|| (protocol_mpls !=  nullptr && protocol_mpls->has_operation())
	|| (protocol_l2tpv2 !=  nullptr && protocol_l2tpv2->has_operation())
	|| (protocol_l2tpv3 !=  nullptr && protocol_l2tpv3->has_operation())
	|| (status !=  nullptr && status->has_operation())
	|| (switching !=  nullptr && switching->has_operation());
}

std::string Native::PseudowireClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PseudowireClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-class";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-l2vpn:ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::PseudowireClass::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<Native::PseudowireClass::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::PseudowireClass::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:preferred-path")
    {
        if(preferred_path == nullptr)
        {
            preferred_path = std::make_shared<Native::PseudowireClass::PreferredPath>();
        }
        return preferred_path;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:protocol-mpls")
    {
        if(protocol_mpls == nullptr)
        {
            protocol_mpls = std::make_shared<Native::PseudowireClass::ProtocolMpls>();
        }
        return protocol_mpls;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:protocol-l2tpv2")
    {
        if(protocol_l2tpv2 == nullptr)
        {
            protocol_l2tpv2 = std::make_shared<Native::PseudowireClass::ProtocolL2tpv2>();
        }
        return protocol_l2tpv2;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:protocol-l2tpv3")
    {
        if(protocol_l2tpv3 == nullptr)
        {
            protocol_l2tpv3 = std::make_shared<Native::PseudowireClass::ProtocolL2tpv3>();
        }
        return protocol_l2tpv3;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Native::PseudowireClass::Status>();
        }
        return status;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:switching")
    {
        if(switching == nullptr)
        {
            switching = std::make_shared<Native::PseudowireClass::Switching>();
        }
        return switching;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:ip"] = ip;
    }

    if(load_balance != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:load-balance"] = load_balance;
    }

    if(monitor != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:monitor"] = monitor;
    }

    if(preferred_path != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:preferred-path"] = preferred_path;
    }

    if(protocol_mpls != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:protocol-mpls"] = protocol_mpls;
    }

    if(protocol_l2tpv2 != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:protocol-l2tpv2"] = protocol_l2tpv2;
    }

    if(protocol_l2tpv3 != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:protocol-l2tpv3"] = protocol_l2tpv3;
    }

    if(status != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:status"] = status;
    }

    if(switching != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:switching"] = switching;
    }

    return _children;
}

void Native::PseudowireClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-l2vpn:encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-l2vpn:control-word")
    {
        control_word = value;
        control_word.value_namespace = name_space;
        control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-l2vpn:interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-l2vpn:sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "load-balance" || name == "monitor" || name == "preferred-path" || name == "protocol-mpls" || name == "protocol-l2tpv2" || name == "protocol-l2tpv3" || name == "status" || name == "switching" || name == "name" || name == "encapsulation" || name == "control-word" || name == "interworking" || name == "sequencing")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Ip()
    :
    protocol{YType::enumeration, "protocol"},
    ttl{YType::uint8, "ttl"}
        ,
    dfbit(std::make_shared<Native::PseudowireClass::Ip::Dfbit>())
    , local(std::make_shared<Native::PseudowireClass::Ip::Local>())
    , pmtu(nullptr) // presence node
    , tos(std::make_shared<Native::PseudowireClass::Ip::Tos>())
{
    dfbit->parent = this;
    local->parent = this;
    tos->parent = this;

    yang_name = "ip"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Ip::~Ip()
{
}

bool Native::PseudowireClass::Ip::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| ttl.is_set
	|| (dfbit !=  nullptr && dfbit->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (pmtu !=  nullptr && pmtu->has_data())
	|| (tos !=  nullptr && tos->has_data());
}

bool Native::PseudowireClass::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (dfbit !=  nullptr && dfbit->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (pmtu !=  nullptr && pmtu->has_operation())
	|| (tos !=  nullptr && tos->has_operation());
}

std::string Native::PseudowireClass::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dfbit")
    {
        if(dfbit == nullptr)
        {
            dfbit = std::make_shared<Native::PseudowireClass::Ip::Dfbit>();
        }
        return dfbit;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::PseudowireClass::Ip::Local>();
        }
        return local;
    }

    if(child_yang_name == "pmtu")
    {
        if(pmtu == nullptr)
        {
            pmtu = std::make_shared<Native::PseudowireClass::Ip::Pmtu>();
        }
        return pmtu;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Native::PseudowireClass::Ip::Tos>();
        }
        return tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dfbit != nullptr)
    {
        _children["dfbit"] = dfbit;
    }

    if(local != nullptr)
    {
        _children["local"] = local;
    }

    if(pmtu != nullptr)
    {
        _children["pmtu"] = pmtu;
    }

    if(tos != nullptr)
    {
        _children["tos"] = tos;
    }

    return _children;
}

void Native::PseudowireClass::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dfbit" || name == "local" || name == "pmtu" || name == "tos" || name == "protocol" || name == "ttl")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Dfbit::Dfbit()
    :
    set{YType::empty, "set"}
{

    yang_name = "dfbit"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Ip::Dfbit::~Dfbit()
{
}

bool Native::PseudowireClass::Ip::Dfbit::has_data() const
{
    if (is_presence_container) return true;
    return set.is_set;
}

bool Native::PseudowireClass::Ip::Dfbit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set.yfilter);
}

std::string Native::PseudowireClass::Ip::Dfbit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dfbit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Dfbit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set.is_set || is_set(set.yfilter)) leaf_name_data.push_back(set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Ip::Dfbit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Ip::Dfbit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::Ip::Dfbit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set")
    {
        set = value;
        set.value_namespace = name_space;
        set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Ip::Dfbit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set")
    {
        set.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Ip::Dfbit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Local::Local()
    :
    interface(std::make_shared<Native::PseudowireClass::Ip::Local::Interface>())
{
    interface->parent = this;

    yang_name = "local"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Ip::Local::~Local()
{
}

bool Native::PseudowireClass::Ip::Local::has_data() const
{
    if (is_presence_container) return true;
    return (interface !=  nullptr && interface->has_data());
}

bool Native::PseudowireClass::Ip::Local::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::PseudowireClass::Ip::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Ip::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::PseudowireClass::Ip::Local::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Ip::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void Native::PseudowireClass::Ip::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PseudowireClass::Ip::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PseudowireClass::Ip::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Local::Interface::Interface()
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
    atm_subinterface(std::make_shared<Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Ip::Local::Interface::~Interface()
{
}

bool Native::PseudowireClass::Ip::Local::Interface::has_data() const
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

bool Native::PseudowireClass::Ip::Local::Interface::has_operation() const
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

std::string Native::PseudowireClass::Ip::Local::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Local::Interface::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Ip::Local::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Ip::Local::Interface::get_children() const
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

void Native::PseudowireClass::Ip::Local::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::PseudowireClass::Ip::Local::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::PseudowireClass::Ip::Local::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Pmtu::Pmtu()
    :
    max{YType::uint16, "max"}
{

    yang_name = "pmtu"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::PseudowireClass::Ip::Pmtu::~Pmtu()
{
}

bool Native::PseudowireClass::Ip::Pmtu::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set;
}

bool Native::PseudowireClass::Ip::Pmtu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::PseudowireClass::Ip::Pmtu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmtu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Pmtu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Ip::Pmtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Ip::Pmtu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::Ip::Pmtu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Ip::Pmtu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Ip::Pmtu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::PseudowireClass::Ip::Tos::Tos()
    :
    reflect{YType::empty, "reflect"},
    value_{YType::uint8, "value"}
{

    yang_name = "tos"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Ip::Tos::~Tos()
{
}

bool Native::PseudowireClass::Ip::Tos::has_data() const
{
    if (is_presence_container) return true;
    return reflect.is_set
	|| value_.is_set;
}

bool Native::PseudowireClass::Ip::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reflect.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::PseudowireClass::Ip::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Ip::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reflect.is_set || is_set(reflect.yfilter)) leaf_name_data.push_back(reflect.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Ip::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Ip::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::Ip::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reflect")
    {
        reflect = value;
        reflect.value_namespace = name_space;
        reflect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Ip::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reflect")
    {
        reflect.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Ip::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reflect" || name == "value")
        return true;
    return false;
}

Native::PseudowireClass::LoadBalance::LoadBalance()
    :
    flow(nullptr) // presence node
{

    yang_name = "load-balance"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::LoadBalance::~LoadBalance()
{
}

bool Native::PseudowireClass::LoadBalance::has_data() const
{
    if (is_presence_container) return true;
    return (flow !=  nullptr && flow->has_data());
}

bool Native::PseudowireClass::LoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::PseudowireClass::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::LoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::PseudowireClass::LoadBalance::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow != nullptr)
    {
        _children["flow"] = flow;
    }

    return _children;
}

void Native::PseudowireClass::LoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PseudowireClass::LoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PseudowireClass::LoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

Native::PseudowireClass::LoadBalance::Flow::Flow()
    :
    ethernet{YType::enumeration, "ethernet"}
{

    yang_name = "flow"; yang_parent_name = "load-balance"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::PseudowireClass::LoadBalance::Flow::~Flow()
{
}

bool Native::PseudowireClass::LoadBalance::Flow::has_data() const
{
    if (is_presence_container) return true;
    return ethernet.is_set;
}

bool Native::PseudowireClass::LoadBalance::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet.yfilter);
}

std::string Native::PseudowireClass::LoadBalance::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::LoadBalance::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::LoadBalance::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::LoadBalance::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::LoadBalance::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::LoadBalance::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::LoadBalance::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Monitor()
    :
    peer(std::make_shared<Native::PseudowireClass::Monitor::Peer>())
{
    peer->parent = this;

    yang_name = "monitor"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Monitor::~Monitor()
{
}

bool Native::PseudowireClass::Monitor::has_data() const
{
    if (is_presence_container) return true;
    return (peer !=  nullptr && peer->has_data());
}

bool Native::PseudowireClass::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::PseudowireClass::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::PseudowireClass::Monitor::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    return _children;
}

void Native::PseudowireClass::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PseudowireClass::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PseudowireClass::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Peer::Peer()
    :
    bfd(nullptr) // presence node
{

    yang_name = "peer"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Monitor::Peer::~Peer()
{
}

bool Native::PseudowireClass::Monitor::Peer::has_data() const
{
    if (is_presence_container) return true;
    return (bfd !=  nullptr && bfd->has_data());
}

bool Native::PseudowireClass::Monitor::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (bfd !=  nullptr && bfd->has_operation());
}

std::string Native::PseudowireClass::Monitor::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Monitor::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd>();
        }
        return bfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Monitor::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    return _children;
}

void Native::PseudowireClass::Monitor::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PseudowireClass::Monitor::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PseudowireClass::Monitor::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Bfd()
    :
    local(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local>())
{
    local->parent = this;

    yang_name = "bfd"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::PseudowireClass::Monitor::Peer::Bfd::~Bfd()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return (local !=  nullptr && local->has_data());
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::Peer::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Monitor::Peer::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    return _children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PseudowireClass::Monitor::Peer::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Local()
    :
    interface(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface>())
{
    interface->parent = this;

    yang_name = "local"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::~Local()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::has_data() const
{
    if (is_presence_container) return true;
    return (interface !=  nullptr && interface->has_data());
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::Peer::Bfd::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::Interface()
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
    atm_subinterface(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::~Interface()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::has_data() const
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

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::has_operation() const
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

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::get_children() const
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

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::PseudowireClass::PreferredPath::PreferredPath()
    :
    interface(std::make_shared<Native::PseudowireClass::PreferredPath::Interface>())
    , peer_container(std::make_shared<Native::PseudowireClass::PreferredPath::PeerContainer>())
{
    interface->parent = this;
    peer_container->parent = this;

    yang_name = "preferred-path"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::PreferredPath::~PreferredPath()
{
}

bool Native::PseudowireClass::PreferredPath::has_data() const
{
    if (is_presence_container) return true;
    return (interface !=  nullptr && interface->has_data())
	|| (peer_container !=  nullptr && peer_container->has_data());
}

bool Native::PseudowireClass::PreferredPath::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (peer_container !=  nullptr && peer_container->has_operation());
}

std::string Native::PseudowireClass::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:preferred-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::PreferredPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::PseudowireClass::PreferredPath::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "peer-container")
    {
        if(peer_container == nullptr)
        {
            peer_container = std::make_shared<Native::PseudowireClass::PreferredPath::PeerContainer>();
        }
        return peer_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(peer_container != nullptr)
    {
        _children["peer-container"] = peer_container;
    }

    return _children;
}

void Native::PseudowireClass::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PseudowireClass::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PseudowireClass::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "peer-container")
        return true;
    return false;
}

Native::PseudowireClass::PreferredPath::Interface::Interface()
    :
    tunnel{YType::uint64, "Tunnel"},
    tunnel_tp{YType::uint16, "Tunnel-tp"},
    disable_fallback{YType::empty, "disable-fallback"}
{

    yang_name = "interface"; yang_parent_name = "preferred-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::PreferredPath::Interface::~Interface()
{
}

bool Native::PseudowireClass::PreferredPath::Interface::has_data() const
{
    if (is_presence_container) return true;
    return tunnel.is_set
	|| tunnel_tp.is_set
	|| disable_fallback.is_set;
}

bool Native::PseudowireClass::PreferredPath::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(tunnel_tp.yfilter)
	|| ydk::is_set(disable_fallback.yfilter);
}

std::string Native::PseudowireClass::PreferredPath::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::PreferredPath::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (tunnel_tp.is_set || is_set(tunnel_tp.yfilter)) leaf_name_data.push_back(tunnel_tp.get_name_leafdata());
    if (disable_fallback.is_set || is_set(disable_fallback.yfilter)) leaf_name_data.push_back(disable_fallback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::PreferredPath::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::PreferredPath::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::PreferredPath::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp = value;
        tunnel_tp.value_namespace = name_space;
        tunnel_tp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-fallback")
    {
        disable_fallback = value;
        disable_fallback.value_namespace = name_space;
        disable_fallback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::PreferredPath::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp.yfilter = yfilter;
    }
    if(value_path == "disable-fallback")
    {
        disable_fallback.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::PreferredPath::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Tunnel" || name == "Tunnel-tp" || name == "disable-fallback")
        return true;
    return false;
}

Native::PseudowireClass::PreferredPath::PeerContainer::PeerContainer()
    :
    peer{YType::str, "peer"},
    disable_fallback{YType::empty, "disable-fallback"}
{

    yang_name = "peer-container"; yang_parent_name = "preferred-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::PreferredPath::PeerContainer::~PeerContainer()
{
}

bool Native::PseudowireClass::PreferredPath::PeerContainer::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| disable_fallback.is_set;
}

bool Native::PseudowireClass::PreferredPath::PeerContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(disable_fallback.yfilter);
}

std::string Native::PseudowireClass::PreferredPath::PeerContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::PreferredPath::PeerContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (disable_fallback.is_set || is_set(disable_fallback.yfilter)) leaf_name_data.push_back(disable_fallback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::PreferredPath::PeerContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::PreferredPath::PeerContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::PreferredPath::PeerContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-fallback")
    {
        disable_fallback = value;
        disable_fallback.value_namespace = name_space;
        disable_fallback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::PreferredPath::PeerContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "disable-fallback")
    {
        disable_fallback.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::PreferredPath::PeerContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "disable-fallback")
        return true;
    return false;
}

Native::PseudowireClass::ProtocolMpls::ProtocolMpls()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "protocol-mpls"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::ProtocolMpls::~ProtocolMpls()
{
}

bool Native::PseudowireClass::ProtocolMpls::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set;
}

bool Native::PseudowireClass::ProtocolMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::PseudowireClass::ProtocolMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:protocol-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::ProtocolMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::ProtocolMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::ProtocolMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::ProtocolMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::ProtocolMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::ProtocolMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::PseudowireClass::ProtocolL2tpv2::ProtocolL2tpv2()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "protocol-l2tpv2"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::ProtocolL2tpv2::~ProtocolL2tpv2()
{
}

bool Native::PseudowireClass::ProtocolL2tpv2::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set;
}

bool Native::PseudowireClass::ProtocolL2tpv2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::PseudowireClass::ProtocolL2tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:protocol-l2tpv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::ProtocolL2tpv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::ProtocolL2tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::ProtocolL2tpv2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::ProtocolL2tpv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::ProtocolL2tpv2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::ProtocolL2tpv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::PseudowireClass::ProtocolL2tpv3::ProtocolL2tpv3()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "protocol-l2tpv3"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::ProtocolL2tpv3::~ProtocolL2tpv3()
{
}

bool Native::PseudowireClass::ProtocolL2tpv3::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set;
}

bool Native::PseudowireClass::ProtocolL2tpv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::PseudowireClass::ProtocolL2tpv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:protocol-l2tpv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::ProtocolL2tpv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::ProtocolL2tpv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::ProtocolL2tpv3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::ProtocolL2tpv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::ProtocolL2tpv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::ProtocolL2tpv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::PseudowireClass::Status::Status()
    :
    decoupled{YType::empty, "decoupled"}
        ,
    admin_down(std::make_shared<Native::PseudowireClass::Status::AdminDown>())
    , control_plane(std::make_shared<Native::PseudowireClass::Status::ControlPlane>())
    , peer(std::make_shared<Native::PseudowireClass::Status::Peer>())
    , redundancy(std::make_shared<Native::PseudowireClass::Status::Redundancy>())
{
    admin_down->parent = this;
    control_plane->parent = this;
    peer->parent = this;
    redundancy->parent = this;

    yang_name = "status"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::PseudowireClass::Status::~Status()
{
}

bool Native::PseudowireClass::Status::has_data() const
{
    if (is_presence_container) return true;
    return decoupled.is_set
	|| (admin_down !=  nullptr && admin_down->has_data())
	|| (control_plane !=  nullptr && control_plane->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool Native::PseudowireClass::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(decoupled.yfilter)
	|| (admin_down !=  nullptr && admin_down->has_operation())
	|| (control_plane !=  nullptr && control_plane->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string Native::PseudowireClass::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decoupled.is_set || is_set(decoupled.yfilter)) leaf_name_data.push_back(decoupled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-down")
    {
        if(admin_down == nullptr)
        {
            admin_down = std::make_shared<Native::PseudowireClass::Status::AdminDown>();
        }
        return admin_down;
    }

    if(child_yang_name == "control-plane")
    {
        if(control_plane == nullptr)
        {
            control_plane = std::make_shared<Native::PseudowireClass::Status::ControlPlane>();
        }
        return control_plane;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::PseudowireClass::Status::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::PseudowireClass::Status::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(admin_down != nullptr)
    {
        _children["admin-down"] = admin_down;
    }

    if(control_plane != nullptr)
    {
        _children["control-plane"] = control_plane;
    }

    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    return _children;
}

void Native::PseudowireClass::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "decoupled")
    {
        decoupled = value;
        decoupled.value_namespace = name_space;
        decoupled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "decoupled")
    {
        decoupled.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-down" || name == "control-plane" || name == "peer" || name == "redundancy" || name == "decoupled")
        return true;
    return false;
}

Native::PseudowireClass::Status::AdminDown::AdminDown()
    :
    disconnect{YType::empty, "disconnect"}
{

    yang_name = "admin-down"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Status::AdminDown::~AdminDown()
{
}

bool Native::PseudowireClass::Status::AdminDown::has_data() const
{
    if (is_presence_container) return true;
    return disconnect.is_set;
}

bool Native::PseudowireClass::Status::AdminDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disconnect.yfilter);
}

std::string Native::PseudowireClass::Status::AdminDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Status::AdminDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disconnect.is_set || is_set(disconnect.yfilter)) leaf_name_data.push_back(disconnect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Status::AdminDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Status::AdminDown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::Status::AdminDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disconnect")
    {
        disconnect = value;
        disconnect.value_namespace = name_space;
        disconnect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Status::AdminDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disconnect")
    {
        disconnect.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Status::AdminDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disconnect")
        return true;
    return false;
}

Native::PseudowireClass::Status::ControlPlane::ControlPlane()
    :
    route_watch{YType::empty, "route-watch"}
{

    yang_name = "control-plane"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Status::ControlPlane::~ControlPlane()
{
}

bool Native::PseudowireClass::Status::ControlPlane::has_data() const
{
    if (is_presence_container) return true;
    return route_watch.is_set;
}

bool Native::PseudowireClass::Status::ControlPlane::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_watch.yfilter);
}

std::string Native::PseudowireClass::Status::ControlPlane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-plane";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Status::ControlPlane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_watch.is_set || is_set(route_watch.yfilter)) leaf_name_data.push_back(route_watch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Status::ControlPlane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Status::ControlPlane::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::Status::ControlPlane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-watch")
    {
        route_watch = value;
        route_watch.value_namespace = name_space;
        route_watch.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Status::ControlPlane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-watch")
    {
        route_watch.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Status::ControlPlane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-watch")
        return true;
    return false;
}

Native::PseudowireClass::Status::Peer::Peer()
    :
    topology(std::make_shared<Native::PseudowireClass::Status::Peer::Topology>())
{
    topology->parent = this;

    yang_name = "peer"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Status::Peer::~Peer()
{
}

bool Native::PseudowireClass::Status::Peer::has_data() const
{
    if (is_presence_container) return true;
    return (topology !=  nullptr && topology->has_data());
}

bool Native::PseudowireClass::Status::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (topology !=  nullptr && topology->has_operation());
}

std::string Native::PseudowireClass::Status::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Status::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Status::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<Native::PseudowireClass::Status::Peer::Topology>();
        }
        return topology;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Status::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(topology != nullptr)
    {
        _children["topology"] = topology;
    }

    return _children;
}

void Native::PseudowireClass::Status::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PseudowireClass::Status::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PseudowireClass::Status::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology")
        return true;
    return false;
}

Native::PseudowireClass::Status::Peer::Topology::Topology()
    :
    dual_homed{YType::empty, "dual-homed"}
{

    yang_name = "topology"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Status::Peer::Topology::~Topology()
{
}

bool Native::PseudowireClass::Status::Peer::Topology::has_data() const
{
    if (is_presence_container) return true;
    return dual_homed.is_set;
}

bool Native::PseudowireClass::Status::Peer::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_homed.yfilter);
}

std::string Native::PseudowireClass::Status::Peer::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Status::Peer::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_homed.is_set || is_set(dual_homed.yfilter)) leaf_name_data.push_back(dual_homed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Status::Peer::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Status::Peer::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::Status::Peer::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-homed")
    {
        dual_homed = value;
        dual_homed.value_namespace = name_space;
        dual_homed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Status::Peer::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-homed")
    {
        dual_homed.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Status::Peer::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-homed")
        return true;
    return false;
}

Native::PseudowireClass::Status::Redundancy::Redundancy()
    :
    master{YType::empty, "master"}
{

    yang_name = "redundancy"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Status::Redundancy::~Redundancy()
{
}

bool Native::PseudowireClass::Status::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return master.is_set;
}

bool Native::PseudowireClass::Status::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master.yfilter);
}

std::string Native::PseudowireClass::Status::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Status::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master.is_set || is_set(master.yfilter)) leaf_name_data.push_back(master.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Status::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Status::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::Status::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master")
    {
        master = value;
        master.value_namespace = name_space;
        master.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Status::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master")
    {
        master.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Status::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "master")
        return true;
    return false;
}

Native::PseudowireClass::Switching::Switching()
    :
    tlv{YType::empty, "tlv"}
{

    yang_name = "switching"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PseudowireClass::Switching::~Switching()
{
}

bool Native::PseudowireClass::Switching::has_data() const
{
    if (is_presence_container) return true;
    return tlv.is_set;
}

bool Native::PseudowireClass::Switching::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlv.yfilter);
}

std::string Native::PseudowireClass::Switching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:switching";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PseudowireClass::Switching::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv.is_set || is_set(tlv.yfilter)) leaf_name_data.push_back(tlv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PseudowireClass::Switching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PseudowireClass::Switching::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PseudowireClass::Switching::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv")
    {
        tlv = value;
        tlv.value_namespace = name_space;
        tlv.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PseudowireClass::Switching::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv")
    {
        tlv.yfilter = yfilter;
    }
}

bool Native::PseudowireClass::Switching::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Native::ControlPlane::ControlPlane()
    :
    service_policy(std::make_shared<Native::ControlPlane::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "control-plane"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::ControlPlane::~ControlPlane()
{
}

bool Native::ControlPlane::has_data() const
{
    if (is_presence_container) return true;
    return (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::ControlPlane::has_operation() const
{
    return is_set(yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::ControlPlane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ControlPlane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-plane";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ControlPlane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ControlPlane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-policy:service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::ControlPlane::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ControlPlane::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_policy != nullptr)
    {
        _children["Cisco-IOS-XE-policy:service-policy"] = service_policy;
    }

    return _children;
}

void Native::ControlPlane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ControlPlane::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ControlPlane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

Native::ControlPlane::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"},
    output{YType::str, "output"}
{

    yang_name = "service-policy"; yang_parent_name = "control-plane"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ControlPlane::ServicePolicy::~ServicePolicy()
{
}

bool Native::ControlPlane::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set
	|| output.is_set;
}

bool Native::ControlPlane::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::ControlPlane::ServicePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/control-plane/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ControlPlane::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ControlPlane::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ControlPlane::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ControlPlane::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ControlPlane::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ControlPlane::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::ControlPlane::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::ControlPlaneHost::ControlPlaneHost()
    :
    control_plane(std::make_shared<Native::ControlPlaneHost::ControlPlane>())
{
    control_plane->parent = this;

    yang_name = "control-plane-host"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ControlPlaneHost::~ControlPlaneHost()
{
}

bool Native::ControlPlaneHost::has_data() const
{
    if (is_presence_container) return true;
    return (control_plane !=  nullptr && control_plane->has_data());
}

bool Native::ControlPlaneHost::has_operation() const
{
    return is_set(yfilter)
	|| (control_plane !=  nullptr && control_plane->has_operation());
}

std::string Native::ControlPlaneHost::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ControlPlaneHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-plane-host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ControlPlaneHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ControlPlaneHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control-plane")
    {
        if(control_plane == nullptr)
        {
            control_plane = std::make_shared<Native::ControlPlaneHost::ControlPlane>();
        }
        return control_plane;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ControlPlaneHost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(control_plane != nullptr)
    {
        _children["control-plane"] = control_plane;
    }

    return _children;
}

void Native::ControlPlaneHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ControlPlaneHost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ControlPlaneHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control-plane")
        return true;
    return false;
}

Native::ControlPlaneHost::ControlPlane::ControlPlane()
    :
    host(nullptr) // presence node
{

    yang_name = "control-plane"; yang_parent_name = "control-plane-host"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ControlPlaneHost::ControlPlane::~ControlPlane()
{
}

bool Native::ControlPlaneHost::ControlPlane::has_data() const
{
    if (is_presence_container) return true;
    return (host !=  nullptr && host->has_data());
}

bool Native::ControlPlaneHost::ControlPlane::has_operation() const
{
    return is_set(yfilter)
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::ControlPlaneHost::ControlPlane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/control-plane-host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ControlPlaneHost::ControlPlane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-plane";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ControlPlaneHost::ControlPlane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ControlPlaneHost::ControlPlane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::ControlPlaneHost::ControlPlane::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ControlPlaneHost::ControlPlane::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::ControlPlaneHost::ControlPlane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ControlPlaneHost::ControlPlane::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ControlPlaneHost::ControlPlane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::ControlPlaneHost::ControlPlane::Host::Host()
    :
    management_interface(this, {"interface_name"})
{

    yang_name = "host"; yang_parent_name = "control-plane"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::ControlPlaneHost::ControlPlane::Host::~Host()
{
}

bool Native::ControlPlaneHost::ControlPlane::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<management_interface.len(); index++)
    {
        if(management_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ControlPlaneHost::ControlPlane::Host::has_operation() const
{
    for (std::size_t index=0; index<management_interface.len(); index++)
    {
        if(management_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ControlPlaneHost::ControlPlane::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/control-plane-host/control-plane/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ControlPlaneHost::ControlPlane::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ControlPlaneHost::ControlPlane::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ControlPlaneHost::ControlPlane::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "management-interface")
    {
        auto ent_ = std::make_shared<Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface>();
        ent_->parent = this;
        management_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ControlPlaneHost::ControlPlane::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : management_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::ControlPlaneHost::ControlPlane::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ControlPlaneHost::ControlPlane::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ControlPlaneHost::ControlPlane::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "management-interface")
        return true;
    return false;
}

Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::ManagementInterface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    allow(std::make_shared<Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow>())
{
    allow->parent = this;

    yang_name = "management-interface"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::~ManagementInterface()
{
}

bool Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (allow !=  nullptr && allow->has_data());
}

bool Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (allow !=  nullptr && allow->has_operation());
}

std::string Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/control-plane-host/control-plane/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "management-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow>();
        }
        return allow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allow != nullptr)
    {
        _children["allow"] = allow;
    }

    return _children;
}

void Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "interface-name")
        return true;
    return false;
}

Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::Allow()
    :
    beep{YType::empty, "beep"},
    ftp{YType::empty, "ftp"},
    http{YType::empty, "http"},
    https{YType::empty, "https"},
    snmp{YType::empty, "snmp"},
    ssh{YType::empty, "ssh"},
    telnet{YType::empty, "telnet"},
    tftp{YType::empty, "tftp"},
    tl1{YType::empty, "tl1"}
{

    yang_name = "allow"; yang_parent_name = "management-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::~Allow()
{
}

bool Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::has_data() const
{
    if (is_presence_container) return true;
    return beep.is_set
	|| ftp.is_set
	|| http.is_set
	|| https.is_set
	|| snmp.is_set
	|| ssh.is_set
	|| telnet.is_set
	|| tftp.is_set
	|| tl1.is_set;
}

bool Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(beep.yfilter)
	|| ydk::is_set(ftp.yfilter)
	|| ydk::is_set(http.yfilter)
	|| ydk::is_set(https.yfilter)
	|| ydk::is_set(snmp.yfilter)
	|| ydk::is_set(ssh.yfilter)
	|| ydk::is_set(telnet.yfilter)
	|| ydk::is_set(tftp.yfilter)
	|| ydk::is_set(tl1.yfilter);
}

std::string Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (beep.is_set || is_set(beep.yfilter)) leaf_name_data.push_back(beep.get_name_leafdata());
    if (ftp.is_set || is_set(ftp.yfilter)) leaf_name_data.push_back(ftp.get_name_leafdata());
    if (http.is_set || is_set(http.yfilter)) leaf_name_data.push_back(http.get_name_leafdata());
    if (https.is_set || is_set(https.yfilter)) leaf_name_data.push_back(https.get_name_leafdata());
    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());
    if (ssh.is_set || is_set(ssh.yfilter)) leaf_name_data.push_back(ssh.get_name_leafdata());
    if (telnet.is_set || is_set(telnet.yfilter)) leaf_name_data.push_back(telnet.get_name_leafdata());
    if (tftp.is_set || is_set(tftp.yfilter)) leaf_name_data.push_back(tftp.get_name_leafdata());
    if (tl1.is_set || is_set(tl1.yfilter)) leaf_name_data.push_back(tl1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "beep")
    {
        beep = value;
        beep.value_namespace = name_space;
        beep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ftp")
    {
        ftp = value;
        ftp.value_namespace = name_space;
        ftp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "http")
    {
        http = value;
        http.value_namespace = name_space;
        http.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "https")
    {
        https = value;
        https.value_namespace = name_space;
        https.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssh")
    {
        ssh = value;
        ssh.value_namespace = name_space;
        ssh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "telnet")
    {
        telnet = value;
        telnet.value_namespace = name_space;
        telnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tftp")
    {
        tftp = value;
        tftp.value_namespace = name_space;
        tftp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tl1")
    {
        tl1 = value;
        tl1.value_namespace = name_space;
        tl1.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "beep")
    {
        beep.yfilter = yfilter;
    }
    if(value_path == "ftp")
    {
        ftp.yfilter = yfilter;
    }
    if(value_path == "http")
    {
        http.yfilter = yfilter;
    }
    if(value_path == "https")
    {
        https.yfilter = yfilter;
    }
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
    if(value_path == "ssh")
    {
        ssh.yfilter = yfilter;
    }
    if(value_path == "telnet")
    {
        telnet.yfilter = yfilter;
    }
    if(value_path == "tftp")
    {
        tftp.yfilter = yfilter;
    }
    if(value_path == "tl1")
    {
        tl1.yfilter = yfilter;
    }
}

bool Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "beep" || name == "ftp" || name == "http" || name == "https" || name == "snmp" || name == "ssh" || name == "telnet" || name == "tftp" || name == "tl1")
        return true;
    return false;
}

Native::Clock::Clock()
    :
    calendar_valid(nullptr) // presence node
    , summer_time(std::make_shared<Native::Clock::SummerTime>())
    , timezone(std::make_shared<Native::Clock::Timezone>())
{
    summer_time->parent = this;
    timezone->parent = this;

    yang_name = "clock"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Clock::~Clock()
{
}

bool Native::Clock::has_data() const
{
    if (is_presence_container) return true;
    return (calendar_valid !=  nullptr && calendar_valid->has_data())
	|| (summer_time !=  nullptr && summer_time->has_data())
	|| (timezone !=  nullptr && timezone->has_data());
}

bool Native::Clock::has_operation() const
{
    return is_set(yfilter)
	|| (calendar_valid !=  nullptr && calendar_valid->has_operation())
	|| (summer_time !=  nullptr && summer_time->has_operation())
	|| (timezone !=  nullptr && timezone->has_operation());
}

std::string Native::Clock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Clock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "calendar-valid")
    {
        if(calendar_valid == nullptr)
        {
            calendar_valid = std::make_shared<Native::Clock::CalendarValid>();
        }
        return calendar_valid;
    }

    if(child_yang_name == "summer-time")
    {
        if(summer_time == nullptr)
        {
            summer_time = std::make_shared<Native::Clock::SummerTime>();
        }
        return summer_time;
    }

    if(child_yang_name == "timezone")
    {
        if(timezone == nullptr)
        {
            timezone = std::make_shared<Native::Clock::Timezone>();
        }
        return timezone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Clock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(calendar_valid != nullptr)
    {
        _children["calendar-valid"] = calendar_valid;
    }

    if(summer_time != nullptr)
    {
        _children["summer-time"] = summer_time;
    }

    if(timezone != nullptr)
    {
        _children["timezone"] = timezone;
    }

    return _children;
}

void Native::Clock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Clock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Clock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "calendar-valid" || name == "summer-time" || name == "timezone")
        return true;
    return false;
}

Native::Clock::CalendarValid::CalendarValid()
{

    yang_name = "calendar-valid"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Clock::CalendarValid::~CalendarValid()
{
}

bool Native::Clock::CalendarValid::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Clock::CalendarValid::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Clock::CalendarValid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Clock::CalendarValid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "calendar-valid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Clock::CalendarValid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Clock::CalendarValid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Clock::CalendarValid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Clock::CalendarValid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Clock::CalendarValid::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Clock::CalendarValid::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Clock::SummerTime::SummerTime()
    :
    zone{YType::str, "zone"},
    date{YType::empty, "date"},
    start_day{YType::uint8, "start-day"},
    start_month{YType::enumeration, "start-month"},
    start_year{YType::uint32, "start-year"},
    start_time{YType::str, "start-time"},
    date_end_day{YType::uint8, "date-end-day"},
    date_end_month{YType::enumeration, "date-end-month"},
    date_end_year{YType::uint32, "date-end-year"},
    date_end_time{YType::str, "date-end-time"},
    offset{YType::uint16, "offset"},
    recurring{YType::empty, "recurring"},
    recurring_start{YType::str, "recurring-start"},
    recurring_start_day{YType::enumeration, "recurring-start-day"},
    recurring_start_month{YType::enumeration, "recurring-start-month"},
    recurring_start_time{YType::str, "recurring-start-time"},
    recurring_end{YType::str, "recurring-end"},
    recurring_end_day{YType::enumeration, "recurring-end-day"},
    recurring_end_month{YType::enumeration, "recurring-end-month"},
    recurring_end_time{YType::str, "recurring-end-time"},
    recurring_offset{YType::uint16, "recurring-offset"}
{

    yang_name = "summer-time"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Clock::SummerTime::~SummerTime()
{
}

bool Native::Clock::SummerTime::has_data() const
{
    if (is_presence_container) return true;
    return zone.is_set
	|| date.is_set
	|| start_day.is_set
	|| start_month.is_set
	|| start_year.is_set
	|| start_time.is_set
	|| date_end_day.is_set
	|| date_end_month.is_set
	|| date_end_year.is_set
	|| date_end_time.is_set
	|| offset.is_set
	|| recurring.is_set
	|| recurring_start.is_set
	|| recurring_start_day.is_set
	|| recurring_start_month.is_set
	|| recurring_start_time.is_set
	|| recurring_end.is_set
	|| recurring_end_day.is_set
	|| recurring_end_month.is_set
	|| recurring_end_time.is_set
	|| recurring_offset.is_set;
}

bool Native::Clock::SummerTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(zone.yfilter)
	|| ydk::is_set(date.yfilter)
	|| ydk::is_set(start_day.yfilter)
	|| ydk::is_set(start_month.yfilter)
	|| ydk::is_set(start_year.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(date_end_day.yfilter)
	|| ydk::is_set(date_end_month.yfilter)
	|| ydk::is_set(date_end_year.yfilter)
	|| ydk::is_set(date_end_time.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(recurring.yfilter)
	|| ydk::is_set(recurring_start.yfilter)
	|| ydk::is_set(recurring_start_day.yfilter)
	|| ydk::is_set(recurring_start_month.yfilter)
	|| ydk::is_set(recurring_start_time.yfilter)
	|| ydk::is_set(recurring_end.yfilter)
	|| ydk::is_set(recurring_end_day.yfilter)
	|| ydk::is_set(recurring_end_month.yfilter)
	|| ydk::is_set(recurring_end_time.yfilter)
	|| ydk::is_set(recurring_offset.yfilter);
}

std::string Native::Clock::SummerTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Clock::SummerTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summer-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Clock::SummerTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());
    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());
    if (start_day.is_set || is_set(start_day.yfilter)) leaf_name_data.push_back(start_day.get_name_leafdata());
    if (start_month.is_set || is_set(start_month.yfilter)) leaf_name_data.push_back(start_month.get_name_leafdata());
    if (start_year.is_set || is_set(start_year.yfilter)) leaf_name_data.push_back(start_year.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (date_end_day.is_set || is_set(date_end_day.yfilter)) leaf_name_data.push_back(date_end_day.get_name_leafdata());
    if (date_end_month.is_set || is_set(date_end_month.yfilter)) leaf_name_data.push_back(date_end_month.get_name_leafdata());
    if (date_end_year.is_set || is_set(date_end_year.yfilter)) leaf_name_data.push_back(date_end_year.get_name_leafdata());
    if (date_end_time.is_set || is_set(date_end_time.yfilter)) leaf_name_data.push_back(date_end_time.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (recurring.is_set || is_set(recurring.yfilter)) leaf_name_data.push_back(recurring.get_name_leafdata());
    if (recurring_start.is_set || is_set(recurring_start.yfilter)) leaf_name_data.push_back(recurring_start.get_name_leafdata());
    if (recurring_start_day.is_set || is_set(recurring_start_day.yfilter)) leaf_name_data.push_back(recurring_start_day.get_name_leafdata());
    if (recurring_start_month.is_set || is_set(recurring_start_month.yfilter)) leaf_name_data.push_back(recurring_start_month.get_name_leafdata());
    if (recurring_start_time.is_set || is_set(recurring_start_time.yfilter)) leaf_name_data.push_back(recurring_start_time.get_name_leafdata());
    if (recurring_end.is_set || is_set(recurring_end.yfilter)) leaf_name_data.push_back(recurring_end.get_name_leafdata());
    if (recurring_end_day.is_set || is_set(recurring_end_day.yfilter)) leaf_name_data.push_back(recurring_end_day.get_name_leafdata());
    if (recurring_end_month.is_set || is_set(recurring_end_month.yfilter)) leaf_name_data.push_back(recurring_end_month.get_name_leafdata());
    if (recurring_end_time.is_set || is_set(recurring_end_time.yfilter)) leaf_name_data.push_back(recurring_end_time.get_name_leafdata());
    if (recurring_offset.is_set || is_set(recurring_offset.yfilter)) leaf_name_data.push_back(recurring_offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Clock::SummerTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Clock::SummerTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Clock::SummerTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-day")
    {
        start_day = value;
        start_day.value_namespace = name_space;
        start_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-month")
    {
        start_month = value;
        start_month.value_namespace = name_space;
        start_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-year")
    {
        start_year = value;
        start_year.value_namespace = name_space;
        start_year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date-end-day")
    {
        date_end_day = value;
        date_end_day.value_namespace = name_space;
        date_end_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date-end-month")
    {
        date_end_month = value;
        date_end_month.value_namespace = name_space;
        date_end_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date-end-year")
    {
        date_end_year = value;
        date_end_year.value_namespace = name_space;
        date_end_year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date-end-time")
    {
        date_end_time = value;
        date_end_time.value_namespace = name_space;
        date_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring")
    {
        recurring = value;
        recurring.value_namespace = name_space;
        recurring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-start")
    {
        recurring_start = value;
        recurring_start.value_namespace = name_space;
        recurring_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-start-day")
    {
        recurring_start_day = value;
        recurring_start_day.value_namespace = name_space;
        recurring_start_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-start-month")
    {
        recurring_start_month = value;
        recurring_start_month.value_namespace = name_space;
        recurring_start_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-start-time")
    {
        recurring_start_time = value;
        recurring_start_time.value_namespace = name_space;
        recurring_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-end")
    {
        recurring_end = value;
        recurring_end.value_namespace = name_space;
        recurring_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-end-day")
    {
        recurring_end_day = value;
        recurring_end_day.value_namespace = name_space;
        recurring_end_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-end-month")
    {
        recurring_end_month = value;
        recurring_end_month.value_namespace = name_space;
        recurring_end_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-end-time")
    {
        recurring_end_time = value;
        recurring_end_time.value_namespace = name_space;
        recurring_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-offset")
    {
        recurring_offset = value;
        recurring_offset.value_namespace = name_space;
        recurring_offset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Clock::SummerTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
    if(value_path == "start-day")
    {
        start_day.yfilter = yfilter;
    }
    if(value_path == "start-month")
    {
        start_month.yfilter = yfilter;
    }
    if(value_path == "start-year")
    {
        start_year.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "date-end-day")
    {
        date_end_day.yfilter = yfilter;
    }
    if(value_path == "date-end-month")
    {
        date_end_month.yfilter = yfilter;
    }
    if(value_path == "date-end-year")
    {
        date_end_year.yfilter = yfilter;
    }
    if(value_path == "date-end-time")
    {
        date_end_time.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "recurring")
    {
        recurring.yfilter = yfilter;
    }
    if(value_path == "recurring-start")
    {
        recurring_start.yfilter = yfilter;
    }
    if(value_path == "recurring-start-day")
    {
        recurring_start_day.yfilter = yfilter;
    }
    if(value_path == "recurring-start-month")
    {
        recurring_start_month.yfilter = yfilter;
    }
    if(value_path == "recurring-start-time")
    {
        recurring_start_time.yfilter = yfilter;
    }
    if(value_path == "recurring-end")
    {
        recurring_end.yfilter = yfilter;
    }
    if(value_path == "recurring-end-day")
    {
        recurring_end_day.yfilter = yfilter;
    }
    if(value_path == "recurring-end-month")
    {
        recurring_end_month.yfilter = yfilter;
    }
    if(value_path == "recurring-end-time")
    {
        recurring_end_time.yfilter = yfilter;
    }
    if(value_path == "recurring-offset")
    {
        recurring_offset.yfilter = yfilter;
    }
}

bool Native::Clock::SummerTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "zone" || name == "date" || name == "start-day" || name == "start-month" || name == "start-year" || name == "start-time" || name == "date-end-day" || name == "date-end-month" || name == "date-end-year" || name == "date-end-time" || name == "offset" || name == "recurring" || name == "recurring-start" || name == "recurring-start-day" || name == "recurring-start-month" || name == "recurring-start-time" || name == "recurring-end" || name == "recurring-end-day" || name == "recurring-end-month" || name == "recurring-end-time" || name == "recurring-offset")
        return true;
    return false;
}

Native::Clock::Timezone::Timezone()
    :
    zone{YType::str, "zone"},
    offset{YType::enumeration, "offset"},
    hours{YType::int8, "hours"},
    minutes{YType::int8, "minutes"}
{

    yang_name = "timezone"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Clock::Timezone::~Timezone()
{
}

bool Native::Clock::Timezone::has_data() const
{
    if (is_presence_container) return true;
    return zone.is_set
	|| offset.is_set
	|| hours.is_set
	|| minutes.is_set;
}

bool Native::Clock::Timezone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(zone.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string Native::Clock::Timezone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Clock::Timezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timezone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Clock::Timezone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Clock::Timezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Clock::Timezone::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Clock::Timezone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Clock::Timezone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool Native::Clock::Timezone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "zone" || name == "offset" || name == "hours" || name == "minutes")
        return true;
    return false;
}

Native::Logging::Logging()
    :
    alarm{YType::str, "alarm"},
    facility{YType::enumeration, "facility"},
    hostip{YType::str, "hostip"},
    snmp_authfail{YType::empty, "snmp-authfail"},
    buginf{YType::empty, "buginf"},
    userinfo{YType::empty, "userinfo"}
        ,
    discriminator(this, {"name"})
    , persistent(nullptr) // presence node
    , monitor_conf(std::make_shared<Native::Logging::MonitorConf>())
    , monitor(nullptr) // presence node
    , buffered(nullptr) // presence node
    , console_conf(std::make_shared<Native::Logging::ConsoleConf>())
    , console(nullptr) // presence node
    , event(std::make_shared<Native::Logging::Event>())
    , esm(std::make_shared<Native::Logging::Esm>())
    , history(std::make_shared<Native::Logging::History>())
    , host(std::make_shared<Native::Logging::Host>())
    , origin_id(std::make_shared<Native::Logging::OriginId>())
    , rate_limit_conf(std::make_shared<Native::Logging::RateLimitConf>())
    , rate_limit(nullptr) // presence node
    , source_interface(this, {"interface_name"})
    , snmp_trap(std::make_shared<Native::Logging::SnmpTrap>())
    , trap(nullptr) // presence node
    , file(std::make_shared<Native::Logging::File>())
{
    monitor_conf->parent = this;
    console_conf->parent = this;
    event->parent = this;
    esm->parent = this;
    history->parent = this;
    host->parent = this;
    origin_id->parent = this;
    rate_limit_conf->parent = this;
    snmp_trap->parent = this;
    file->parent = this;

    yang_name = "logging"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::~Logging()
{
}

bool Native::Logging::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<discriminator.len(); index++)
    {
        if(discriminator[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source_interface.len(); index++)
    {
        if(source_interface[index]->has_data())
            return true;
    }
    return alarm.is_set
	|| facility.is_set
	|| hostip.is_set
	|| snmp_authfail.is_set
	|| buginf.is_set
	|| userinfo.is_set
	|| (persistent !=  nullptr && persistent->has_data())
	|| (monitor_conf !=  nullptr && monitor_conf->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (buffered !=  nullptr && buffered->has_data())
	|| (console_conf !=  nullptr && console_conf->has_data())
	|| (console !=  nullptr && console->has_data())
	|| (event !=  nullptr && event->has_data())
	|| (esm !=  nullptr && esm->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (host !=  nullptr && host->has_data())
	|| (origin_id !=  nullptr && origin_id->has_data())
	|| (rate_limit_conf !=  nullptr && rate_limit_conf->has_data())
	|| (rate_limit !=  nullptr && rate_limit->has_data())
	|| (snmp_trap !=  nullptr && snmp_trap->has_data())
	|| (trap !=  nullptr && trap->has_data())
	|| (file !=  nullptr && file->has_data());
}

bool Native::Logging::has_operation() const
{
    for (std::size_t index=0; index<discriminator.len(); index++)
    {
        if(discriminator[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source_interface.len(); index++)
    {
        if(source_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(alarm.yfilter)
	|| ydk::is_set(facility.yfilter)
	|| ydk::is_set(hostip.yfilter)
	|| ydk::is_set(snmp_authfail.yfilter)
	|| ydk::is_set(buginf.yfilter)
	|| ydk::is_set(userinfo.yfilter)
	|| (persistent !=  nullptr && persistent->has_operation())
	|| (monitor_conf !=  nullptr && monitor_conf->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (buffered !=  nullptr && buffered->has_operation())
	|| (console_conf !=  nullptr && console_conf->has_operation())
	|| (console !=  nullptr && console->has_operation())
	|| (event !=  nullptr && event->has_operation())
	|| (esm !=  nullptr && esm->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (host !=  nullptr && host->has_operation())
	|| (origin_id !=  nullptr && origin_id->has_operation())
	|| (rate_limit_conf !=  nullptr && rate_limit_conf->has_operation())
	|| (rate_limit !=  nullptr && rate_limit->has_operation())
	|| (snmp_trap !=  nullptr && snmp_trap->has_operation())
	|| (trap !=  nullptr && trap->has_operation())
	|| (file !=  nullptr && file->has_operation());
}

std::string Native::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());
    if (facility.is_set || is_set(facility.yfilter)) leaf_name_data.push_back(facility.get_name_leafdata());
    if (hostip.is_set || is_set(hostip.yfilter)) leaf_name_data.push_back(hostip.get_name_leafdata());
    if (snmp_authfail.is_set || is_set(snmp_authfail.yfilter)) leaf_name_data.push_back(snmp_authfail.get_name_leafdata());
    if (buginf.is_set || is_set(buginf.yfilter)) leaf_name_data.push_back(buginf.get_name_leafdata());
    if (userinfo.is_set || is_set(userinfo.yfilter)) leaf_name_data.push_back(userinfo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discriminator")
    {
        auto ent_ = std::make_shared<Native::Logging::Discriminator>();
        ent_->parent = this;
        discriminator.append(ent_);
        return ent_;
    }

    if(child_yang_name == "persistent")
    {
        if(persistent == nullptr)
        {
            persistent = std::make_shared<Native::Logging::Persistent>();
        }
        return persistent;
    }

    if(child_yang_name == "monitor-conf")
    {
        if(monitor_conf == nullptr)
        {
            monitor_conf = std::make_shared<Native::Logging::MonitorConf>();
        }
        return monitor_conf;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Logging::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "buffered")
    {
        if(buffered == nullptr)
        {
            buffered = std::make_shared<Native::Logging::Buffered>();
        }
        return buffered;
    }

    if(child_yang_name == "console-conf")
    {
        if(console_conf == nullptr)
        {
            console_conf = std::make_shared<Native::Logging::ConsoleConf>();
        }
        return console_conf;
    }

    if(child_yang_name == "console")
    {
        if(console == nullptr)
        {
            console = std::make_shared<Native::Logging::Console>();
        }
        return console;
    }

    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Logging::Event>();
        }
        return event;
    }

    if(child_yang_name == "esm")
    {
        if(esm == nullptr)
        {
            esm = std::make_shared<Native::Logging::Esm>();
        }
        return esm;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Logging::History>();
        }
        return history;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Logging::Host>();
        }
        return host;
    }

    if(child_yang_name == "origin-id")
    {
        if(origin_id == nullptr)
        {
            origin_id = std::make_shared<Native::Logging::OriginId>();
        }
        return origin_id;
    }

    if(child_yang_name == "rate-limit-conf")
    {
        if(rate_limit_conf == nullptr)
        {
            rate_limit_conf = std::make_shared<Native::Logging::RateLimitConf>();
        }
        return rate_limit_conf;
    }

    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Native::Logging::RateLimit>();
        }
        return rate_limit;
    }

    if(child_yang_name == "source-interface")
    {
        auto ent_ = std::make_shared<Native::Logging::SourceInterface>();
        ent_->parent = this;
        source_interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "snmp-trap")
    {
        if(snmp_trap == nullptr)
        {
            snmp_trap = std::make_shared<Native::Logging::SnmpTrap>();
        }
        return snmp_trap;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Logging::Trap>();
        }
        return trap;
    }

    if(child_yang_name == "file")
    {
        if(file == nullptr)
        {
            file = std::make_shared<Native::Logging::File>();
        }
        return file;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : discriminator.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(persistent != nullptr)
    {
        _children["persistent"] = persistent;
    }

    if(monitor_conf != nullptr)
    {
        _children["monitor-conf"] = monitor_conf;
    }

    if(monitor != nullptr)
    {
        _children["monitor"] = monitor;
    }

    if(buffered != nullptr)
    {
        _children["buffered"] = buffered;
    }

    if(console_conf != nullptr)
    {
        _children["console-conf"] = console_conf;
    }

    if(console != nullptr)
    {
        _children["console"] = console;
    }

    if(event != nullptr)
    {
        _children["event"] = event;
    }

    if(esm != nullptr)
    {
        _children["esm"] = esm;
    }

    if(history != nullptr)
    {
        _children["history"] = history;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    if(origin_id != nullptr)
    {
        _children["origin-id"] = origin_id;
    }

    if(rate_limit_conf != nullptr)
    {
        _children["rate-limit-conf"] = rate_limit_conf;
    }

    if(rate_limit != nullptr)
    {
        _children["rate-limit"] = rate_limit;
    }

    count_ = 0;
    for (auto ent_ : source_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(snmp_trap != nullptr)
    {
        _children["snmp-trap"] = snmp_trap;
    }

    if(trap != nullptr)
    {
        _children["trap"] = trap;
    }

    if(file != nullptr)
    {
        _children["file"] = file;
    }

    return _children;
}

void Native::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "facility")
    {
        facility = value;
        facility.value_namespace = name_space;
        facility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostip")
    {
        hostip = value;
        hostip.value_namespace = name_space;
        hostip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-authfail")
    {
        snmp_authfail = value;
        snmp_authfail.value_namespace = name_space;
        snmp_authfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buginf")
    {
        buginf = value;
        buginf.value_namespace = name_space;
        buginf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userinfo")
    {
        userinfo = value;
        userinfo.value_namespace = name_space;
        userinfo.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
    if(value_path == "facility")
    {
        facility.yfilter = yfilter;
    }
    if(value_path == "hostip")
    {
        hostip.yfilter = yfilter;
    }
    if(value_path == "snmp-authfail")
    {
        snmp_authfail.yfilter = yfilter;
    }
    if(value_path == "buginf")
    {
        buginf.yfilter = yfilter;
    }
    if(value_path == "userinfo")
    {
        userinfo.yfilter = yfilter;
    }
}

bool Native::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discriminator" || name == "persistent" || name == "monitor-conf" || name == "monitor" || name == "buffered" || name == "console-conf" || name == "console" || name == "event" || name == "esm" || name == "history" || name == "host" || name == "origin-id" || name == "rate-limit-conf" || name == "rate-limit" || name == "source-interface" || name == "snmp-trap" || name == "trap" || name == "file" || name == "alarm" || name == "facility" || name == "hostip" || name == "snmp-authfail" || name == "buginf" || name == "userinfo")
        return true;
    return false;
}

Native::Logging::Discriminator::Discriminator()
    :
    name{YType::str, "name"},
    rate_limit{YType::uint16, "rate-limit"}
        ,
    severity(std::make_shared<Native::Logging::Discriminator::Severity>())
    , facility(std::make_shared<Native::Logging::Discriminator::Facility>())
    , mnemonics(std::make_shared<Native::Logging::Discriminator::Mnemonics>())
    , msg_body(std::make_shared<Native::Logging::Discriminator::MsgBody>())
{
    severity->parent = this;
    facility->parent = this;
    mnemonics->parent = this;
    msg_body->parent = this;

    yang_name = "discriminator"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Discriminator::~Discriminator()
{
}

bool Native::Logging::Discriminator::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| rate_limit.is_set
	|| (severity !=  nullptr && severity->has_data())
	|| (facility !=  nullptr && facility->has_data())
	|| (mnemonics !=  nullptr && mnemonics->has_data())
	|| (msg_body !=  nullptr && msg_body->has_data());
}

bool Native::Logging::Discriminator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| (severity !=  nullptr && severity->has_operation())
	|| (facility !=  nullptr && facility->has_operation())
	|| (mnemonics !=  nullptr && mnemonics->has_operation())
	|| (msg_body !=  nullptr && msg_body->has_operation());
}

std::string Native::Logging::Discriminator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discriminator";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Discriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "severity")
    {
        if(severity == nullptr)
        {
            severity = std::make_shared<Native::Logging::Discriminator::Severity>();
        }
        return severity;
    }

    if(child_yang_name == "facility")
    {
        if(facility == nullptr)
        {
            facility = std::make_shared<Native::Logging::Discriminator::Facility>();
        }
        return facility;
    }

    if(child_yang_name == "mnemonics")
    {
        if(mnemonics == nullptr)
        {
            mnemonics = std::make_shared<Native::Logging::Discriminator::Mnemonics>();
        }
        return mnemonics;
    }

    if(child_yang_name == "msg-body")
    {
        if(msg_body == nullptr)
        {
            msg_body = std::make_shared<Native::Logging::Discriminator::MsgBody>();
        }
        return msg_body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Discriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(severity != nullptr)
    {
        _children["severity"] = severity;
    }

    if(facility != nullptr)
    {
        _children["facility"] = facility;
    }

    if(mnemonics != nullptr)
    {
        _children["mnemonics"] = mnemonics;
    }

    if(msg_body != nullptr)
    {
        _children["msg-body"] = msg_body;
    }

    return _children;
}

void Native::Logging::Discriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Discriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
}

bool Native::Logging::Discriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity" || name == "facility" || name == "mnemonics" || name == "msg-body" || name == "name" || name == "rate-limit")
        return true;
    return false;
}

Native::Logging::Discriminator::Severity::Severity()
    :
    drops{YType::str, "drops"},
    includes{YType::str, "includes"}
{

    yang_name = "severity"; yang_parent_name = "discriminator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Logging::Discriminator::Severity::~Severity()
{
}

bool Native::Logging::Discriminator::Severity::has_data() const
{
    if (is_presence_container) return true;
    return drops.is_set
	|| includes.is_set;
}

bool Native::Logging::Discriminator::Severity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drops.yfilter)
	|| ydk::is_set(includes.yfilter);
}

std::string Native::Logging::Discriminator::Severity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "severity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Discriminator::Severity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drops.is_set || is_set(drops.yfilter)) leaf_name_data.push_back(drops.get_name_leafdata());
    if (includes.is_set || is_set(includes.yfilter)) leaf_name_data.push_back(includes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Discriminator::Severity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Discriminator::Severity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Discriminator::Severity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drops")
    {
        drops = value;
        drops.value_namespace = name_space;
        drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "includes")
    {
        includes = value;
        includes.value_namespace = name_space;
        includes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Discriminator::Severity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drops")
    {
        drops.yfilter = yfilter;
    }
    if(value_path == "includes")
    {
        includes.yfilter = yfilter;
    }
}

bool Native::Logging::Discriminator::Severity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drops" || name == "includes")
        return true;
    return false;
}

Native::Logging::Discriminator::Facility::Facility()
    :
    drops{YType::str, "drops"},
    includes{YType::str, "includes"}
{

    yang_name = "facility"; yang_parent_name = "discriminator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Logging::Discriminator::Facility::~Facility()
{
}

bool Native::Logging::Discriminator::Facility::has_data() const
{
    if (is_presence_container) return true;
    return drops.is_set
	|| includes.is_set;
}

bool Native::Logging::Discriminator::Facility::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drops.yfilter)
	|| ydk::is_set(includes.yfilter);
}

std::string Native::Logging::Discriminator::Facility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "facility";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Discriminator::Facility::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drops.is_set || is_set(drops.yfilter)) leaf_name_data.push_back(drops.get_name_leafdata());
    if (includes.is_set || is_set(includes.yfilter)) leaf_name_data.push_back(includes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Discriminator::Facility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Discriminator::Facility::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Discriminator::Facility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drops")
    {
        drops = value;
        drops.value_namespace = name_space;
        drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "includes")
    {
        includes = value;
        includes.value_namespace = name_space;
        includes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Discriminator::Facility::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drops")
    {
        drops.yfilter = yfilter;
    }
    if(value_path == "includes")
    {
        includes.yfilter = yfilter;
    }
}

bool Native::Logging::Discriminator::Facility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drops" || name == "includes")
        return true;
    return false;
}

Native::Logging::Discriminator::Mnemonics::Mnemonics()
    :
    drops{YType::str, "drops"},
    includes{YType::str, "includes"}
{

    yang_name = "mnemonics"; yang_parent_name = "discriminator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Logging::Discriminator::Mnemonics::~Mnemonics()
{
}

bool Native::Logging::Discriminator::Mnemonics::has_data() const
{
    if (is_presence_container) return true;
    return drops.is_set
	|| includes.is_set;
}

bool Native::Logging::Discriminator::Mnemonics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drops.yfilter)
	|| ydk::is_set(includes.yfilter);
}

std::string Native::Logging::Discriminator::Mnemonics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mnemonics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Discriminator::Mnemonics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drops.is_set || is_set(drops.yfilter)) leaf_name_data.push_back(drops.get_name_leafdata());
    if (includes.is_set || is_set(includes.yfilter)) leaf_name_data.push_back(includes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Discriminator::Mnemonics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Discriminator::Mnemonics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Discriminator::Mnemonics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drops")
    {
        drops = value;
        drops.value_namespace = name_space;
        drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "includes")
    {
        includes = value;
        includes.value_namespace = name_space;
        includes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Discriminator::Mnemonics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drops")
    {
        drops.yfilter = yfilter;
    }
    if(value_path == "includes")
    {
        includes.yfilter = yfilter;
    }
}

bool Native::Logging::Discriminator::Mnemonics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drops" || name == "includes")
        return true;
    return false;
}

Native::Logging::Discriminator::MsgBody::MsgBody()
    :
    drops{YType::str, "drops"},
    includes{YType::str, "includes"}
{

    yang_name = "msg-body"; yang_parent_name = "discriminator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Logging::Discriminator::MsgBody::~MsgBody()
{
}

bool Native::Logging::Discriminator::MsgBody::has_data() const
{
    if (is_presence_container) return true;
    return drops.is_set
	|| includes.is_set;
}

bool Native::Logging::Discriminator::MsgBody::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drops.yfilter)
	|| ydk::is_set(includes.yfilter);
}

std::string Native::Logging::Discriminator::MsgBody::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Discriminator::MsgBody::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drops.is_set || is_set(drops.yfilter)) leaf_name_data.push_back(drops.get_name_leafdata());
    if (includes.is_set || is_set(includes.yfilter)) leaf_name_data.push_back(includes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Discriminator::MsgBody::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Discriminator::MsgBody::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Discriminator::MsgBody::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drops")
    {
        drops = value;
        drops.value_namespace = name_space;
        drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "includes")
    {
        includes = value;
        includes.value_namespace = name_space;
        includes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Discriminator::MsgBody::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drops")
    {
        drops.yfilter = yfilter;
    }
    if(value_path == "includes")
    {
        includes.yfilter = yfilter;
    }
}

bool Native::Logging::Discriminator::MsgBody::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drops" || name == "includes")
        return true;
    return false;
}

Native::Logging::Persistent::Persistent()
    :
    url{YType::str, "url"},
    size{YType::uint32, "size"},
    filesize{YType::uint32, "filesize"},
    batch{YType::uint32, "batch"},
    threshold{YType::uint8, "threshold"},
    immediate{YType::empty, "immediate"},
    notify{YType::empty, "notify"},
    protected_{YType::empty, "protected"}
{

    yang_name = "persistent"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Logging::Persistent::~Persistent()
{
}

bool Native::Logging::Persistent::has_data() const
{
    if (is_presence_container) return true;
    return url.is_set
	|| size.is_set
	|| filesize.is_set
	|| batch.is_set
	|| threshold.is_set
	|| immediate.is_set
	|| notify.is_set
	|| protected_.is_set;
}

bool Native::Logging::Persistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(filesize.yfilter)
	|| ydk::is_set(batch.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(immediate.yfilter)
	|| ydk::is_set(notify.yfilter)
	|| ydk::is_set(protected_.yfilter);
}

std::string Native::Logging::Persistent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Persistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Persistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (filesize.is_set || is_set(filesize.yfilter)) leaf_name_data.push_back(filesize.get_name_leafdata());
    if (batch.is_set || is_set(batch.yfilter)) leaf_name_data.push_back(batch.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (immediate.is_set || is_set(immediate.yfilter)) leaf_name_data.push_back(immediate.get_name_leafdata());
    if (notify.is_set || is_set(notify.yfilter)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Persistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Persistent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Persistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filesize")
    {
        filesize = value;
        filesize.value_namespace = name_space;
        filesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "batch")
    {
        batch = value;
        batch.value_namespace = name_space;
        batch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "immediate")
    {
        immediate = value;
        immediate.value_namespace = name_space;
        immediate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify")
    {
        notify = value;
        notify.value_namespace = name_space;
        notify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Persistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "filesize")
    {
        filesize.yfilter = yfilter;
    }
    if(value_path == "batch")
    {
        batch.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "immediate")
    {
        immediate.yfilter = yfilter;
    }
    if(value_path == "notify")
    {
        notify.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
}

bool Native::Logging::Persistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "size" || name == "filesize" || name == "batch" || name == "threshold" || name == "immediate" || name == "notify" || name == "protected")
        return true;
    return false;
}

Native::Logging::MonitorConf::MonitorConf()
    :
    monitor{YType::boolean, "monitor"}
{

    yang_name = "monitor-conf"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::MonitorConf::~MonitorConf()
{
}

bool Native::Logging::MonitorConf::has_data() const
{
    if (is_presence_container) return true;
    return monitor.is_set;
}

bool Native::Logging::MonitorConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor.yfilter);
}

std::string Native::Logging::MonitorConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::MonitorConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::MonitorConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::MonitorConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::MonitorConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::MonitorConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::MonitorConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
}

bool Native::Logging::MonitorConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Logging::Monitor::Monitor()
    :
    severity{YType::str, "severity"}
        ,
    discriminator(this, {"name"})
{

    yang_name = "monitor"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Logging::Monitor::~Monitor()
{
}

bool Native::Logging::Monitor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<discriminator.len(); index++)
    {
        if(discriminator[index]->has_data())
            return true;
    }
    return severity.is_set;
}

bool Native::Logging::Monitor::has_operation() const
{
    for (std::size_t index=0; index<discriminator.len(); index++)
    {
        if(discriminator[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Native::Logging::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discriminator")
    {
        auto ent_ = std::make_shared<Native::Logging::Monitor::Discriminator>();
        ent_->parent = this;
        discriminator.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : discriminator.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Logging::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::Logging::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discriminator" || name == "severity")
        return true;
    return false;
}

Native::Logging::Monitor::Discriminator::Discriminator()
    :
    name{YType::str, "name"},
    severity{YType::str, "severity"}
{

    yang_name = "discriminator"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Monitor::Discriminator::~Discriminator()
{
}

bool Native::Logging::Monitor::Discriminator::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| severity.is_set;
}

bool Native::Logging::Monitor::Discriminator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Native::Logging::Monitor::Discriminator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Monitor::Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discriminator";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Monitor::Discriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Monitor::Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Monitor::Discriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Monitor::Discriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Monitor::Discriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::Logging::Monitor::Discriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "severity")
        return true;
    return false;
}

Native::Logging::Buffered::Buffered()
    :
    severity{YType::str, "severity"},
    xxml{YType::uint32, "xxml"}
        ,
    discriminator(this, {"name"})
    , size(std::make_shared<Native::Logging::Buffered::Size>())
{
    size->parent = this;

    yang_name = "buffered"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Logging::Buffered::~Buffered()
{
}

bool Native::Logging::Buffered::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<discriminator.len(); index++)
    {
        if(discriminator[index]->has_data())
            return true;
    }
    return severity.is_set
	|| xxml.is_set
	|| (size !=  nullptr && size->has_data());
}

bool Native::Logging::Buffered::has_operation() const
{
    for (std::size_t index=0; index<discriminator.len(); index++)
    {
        if(discriminator[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(xxml.yfilter)
	|| (size !=  nullptr && size->has_operation());
}

std::string Native::Logging::Buffered::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Buffered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Buffered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (xxml.is_set || is_set(xxml.yfilter)) leaf_name_data.push_back(xxml.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Buffered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discriminator")
    {
        auto ent_ = std::make_shared<Native::Logging::Buffered::Discriminator>();
        ent_->parent = this;
        discriminator.append(ent_);
        return ent_;
    }

    if(child_yang_name == "size")
    {
        if(size == nullptr)
        {
            size = std::make_shared<Native::Logging::Buffered::Size>();
        }
        return size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Buffered::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : discriminator.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(size != nullptr)
    {
        _children["size"] = size;
    }

    return _children;
}

void Native::Logging::Buffered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xxml")
    {
        xxml = value;
        xxml.value_namespace = name_space;
        xxml.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Buffered::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "xxml")
    {
        xxml.yfilter = yfilter;
    }
}

bool Native::Logging::Buffered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discriminator" || name == "size" || name == "severity" || name == "xxml")
        return true;
    return false;
}

Native::Logging::Buffered::Discriminator::Discriminator()
    :
    name{YType::str, "name"},
    size_value{YType::uint32, "size-value"},
    severity{YType::str, "severity"}
{

    yang_name = "discriminator"; yang_parent_name = "buffered"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Buffered::Discriminator::~Discriminator()
{
}

bool Native::Logging::Buffered::Discriminator::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| size_value.is_set
	|| severity.is_set;
}

bool Native::Logging::Buffered::Discriminator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(size_value.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Native::Logging::Buffered::Discriminator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/buffered/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Buffered::Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discriminator";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Buffered::Discriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (size_value.is_set || is_set(size_value.yfilter)) leaf_name_data.push_back(size_value.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Buffered::Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Buffered::Discriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Buffered::Discriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size-value")
    {
        size_value = value;
        size_value.value_namespace = name_space;
        size_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Buffered::Discriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "size-value")
    {
        size_value.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::Logging::Buffered::Discriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "size-value" || name == "severity")
        return true;
    return false;
}

Native::Logging::Buffered::Size::Size()
    :
    size_value{YType::uint32, "size-value"},
    severity{YType::str, "severity"}
{

    yang_name = "size"; yang_parent_name = "buffered"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Buffered::Size::~Size()
{
}

bool Native::Logging::Buffered::Size::has_data() const
{
    if (is_presence_container) return true;
    return size_value.is_set
	|| severity.is_set;
}

bool Native::Logging::Buffered::Size::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size_value.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Native::Logging::Buffered::Size::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/buffered/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Buffered::Size::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Buffered::Size::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size_value.is_set || is_set(size_value.yfilter)) leaf_name_data.push_back(size_value.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Buffered::Size::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Buffered::Size::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Buffered::Size::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size-value")
    {
        size_value = value;
        size_value.value_namespace = name_space;
        size_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Buffered::Size::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size-value")
    {
        size_value.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::Logging::Buffered::Size::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size-value" || name == "severity")
        return true;
    return false;
}

Native::Logging::ConsoleConf::ConsoleConf()
    :
    console{YType::boolean, "console"}
{

    yang_name = "console-conf"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::ConsoleConf::~ConsoleConf()
{
}

bool Native::Logging::ConsoleConf::has_data() const
{
    if (is_presence_container) return true;
    return console.is_set;
}

bool Native::Logging::ConsoleConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(console.yfilter);
}

std::string Native::Logging::ConsoleConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::ConsoleConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::ConsoleConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (console.is_set || is_set(console.yfilter)) leaf_name_data.push_back(console.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::ConsoleConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::ConsoleConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::ConsoleConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "console")
    {
        console = value;
        console.value_namespace = name_space;
        console.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::ConsoleConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "console")
    {
        console.yfilter = yfilter;
    }
}

bool Native::Logging::ConsoleConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "console")
        return true;
    return false;
}

Native::Logging::Console::Console()
    :
    filtered{YType::empty, "filtered"},
    guaranteed{YType::empty, "guaranteed"},
    xxml{YType::str, "xxml"},
    severity{YType::str, "severity"}
        ,
    discriminator(this, {"name"})
{

    yang_name = "console"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Logging::Console::~Console()
{
}

bool Native::Logging::Console::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<discriminator.len(); index++)
    {
        if(discriminator[index]->has_data())
            return true;
    }
    return filtered.is_set
	|| guaranteed.is_set
	|| xxml.is_set
	|| severity.is_set;
}

bool Native::Logging::Console::has_operation() const
{
    for (std::size_t index=0; index<discriminator.len(); index++)
    {
        if(discriminator[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(filtered.yfilter)
	|| ydk::is_set(guaranteed.yfilter)
	|| ydk::is_set(xxml.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Native::Logging::Console::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Console::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filtered.is_set || is_set(filtered.yfilter)) leaf_name_data.push_back(filtered.get_name_leafdata());
    if (guaranteed.is_set || is_set(guaranteed.yfilter)) leaf_name_data.push_back(guaranteed.get_name_leafdata());
    if (xxml.is_set || is_set(xxml.yfilter)) leaf_name_data.push_back(xxml.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discriminator")
    {
        auto ent_ = std::make_shared<Native::Logging::Console::Discriminator>();
        ent_->parent = this;
        discriminator.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : discriminator.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Logging::Console::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filtered")
    {
        filtered = value;
        filtered.value_namespace = name_space;
        filtered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "guaranteed")
    {
        guaranteed = value;
        guaranteed.value_namespace = name_space;
        guaranteed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xxml")
    {
        xxml = value;
        xxml.value_namespace = name_space;
        xxml.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Console::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filtered")
    {
        filtered.yfilter = yfilter;
    }
    if(value_path == "guaranteed")
    {
        guaranteed.yfilter = yfilter;
    }
    if(value_path == "xxml")
    {
        xxml.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::Logging::Console::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discriminator" || name == "filtered" || name == "guaranteed" || name == "xxml" || name == "severity")
        return true;
    return false;
}

Native::Logging::Console::Discriminator::Discriminator()
    :
    name{YType::str, "name"},
    severity{YType::str, "severity"}
{

    yang_name = "discriminator"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Console::Discriminator::~Discriminator()
{
}

bool Native::Logging::Console::Discriminator::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| severity.is_set;
}

bool Native::Logging::Console::Discriminator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Native::Logging::Console::Discriminator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/console/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Console::Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discriminator";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Console::Discriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Console::Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Console::Discriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Console::Discriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Console::Discriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::Logging::Console::Discriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "severity")
        return true;
    return false;
}

Native::Logging::Event::Event()
    :
    link_status(std::make_shared<Native::Logging::Event::LinkStatus>())
{
    link_status->parent = this;

    yang_name = "event"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Event::~Event()
{
}

bool Native::Logging::Event::has_data() const
{
    if (is_presence_container) return true;
    return (link_status !=  nullptr && link_status->has_data());
}

bool Native::Logging::Event::has_operation() const
{
    return is_set(yfilter)
	|| (link_status !=  nullptr && link_status->has_operation());
}

std::string Native::Logging::Event::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status")
    {
        if(link_status == nullptr)
        {
            link_status = std::make_shared<Native::Logging::Event::LinkStatus>();
        }
        return link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_status != nullptr)
    {
        _children["link-status"] = link_status;
    }

    return _children;
}

void Native::Logging::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Logging::Event::LinkStatus::LinkStatus()
    :
    boot{YType::empty, "boot"},
    global{YType::empty, "global"},
    default_{YType::empty, "default"}
{

    yang_name = "link-status"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Event::LinkStatus::~LinkStatus()
{
}

bool Native::Logging::Event::LinkStatus::has_data() const
{
    if (is_presence_container) return true;
    return boot.is_set
	|| global.is_set
	|| default_.is_set;
}

bool Native::Logging::Event::LinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boot.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Logging::Event::LinkStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/event/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Event::LinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Event::LinkStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot.is_set || is_set(boot.yfilter)) leaf_name_data.push_back(boot.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Event::LinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Event::LinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Event::LinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boot")
    {
        boot = value;
        boot.value_namespace = name_space;
        boot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Event::LinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boot")
    {
        boot.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Logging::Event::LinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot" || name == "global" || name == "default")
        return true;
    return false;
}

Native::Logging::Esm::Esm()
    :
    config{YType::empty, "config"}
{

    yang_name = "esm"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Esm::~Esm()
{
}

bool Native::Logging::Esm::has_data() const
{
    if (is_presence_container) return true;
    return config.is_set;
}

bool Native::Logging::Esm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config.yfilter);
}

std::string Native::Logging::Esm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Esm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Esm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Esm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Esm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Esm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Esm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
}

bool Native::Logging::Esm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config")
        return true;
    return false;
}

Native::Logging::History::History()
    :
    size{YType::uint16, "size"},
    severity_level{YType::str, "severity-level"}
{

    yang_name = "history"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::History::~History()
{
}

bool Native::Logging::History::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| severity_level.is_set;
}

bool Native::Logging::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(severity_level.yfilter);
}

std::string Native::Logging::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (severity_level.is_set || is_set(severity_level.yfilter)) leaf_name_data.push_back(severity_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity-level")
    {
        severity_level = value;
        severity_level.value_namespace = name_space;
        severity_level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "severity-level")
    {
        severity_level.yfilter = yfilter;
    }
}

bool Native::Logging::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "severity-level")
        return true;
    return false;
}

Native::Logging::Host::Host()
    :
    ipv4_host_list(this, {"ipv4_host"})
    , ipv4_host_transport_list(this, {"ipv4_host"})
    , ipv4_host_vrf_list(this, {"ipv4_host", "vrf"})
    , ipv4_host_vrf_transport_list(this, {"ipv4_host", "vrf"})
    , ipv6(std::make_shared<Native::Logging::Host::Ipv6>())
{
    ipv6->parent = this;

    yang_name = "host"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Host::~Host()
{
}

bool Native::Logging::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_host_list.len(); index++)
    {
        if(ipv4_host_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_host_transport_list.len(); index++)
    {
        if(ipv4_host_transport_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_host_vrf_list.len(); index++)
    {
        if(ipv4_host_vrf_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_host_vrf_transport_list.len(); index++)
    {
        if(ipv4_host_vrf_transport_list[index]->has_data())
            return true;
    }
    return (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Logging::Host::has_operation() const
{
    for (std::size_t index=0; index<ipv4_host_list.len(); index++)
    {
        if(ipv4_host_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_host_transport_list.len(); index++)
    {
        if(ipv4_host_transport_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_host_vrf_list.len(); index++)
    {
        if(ipv4_host_vrf_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_host_vrf_transport_list.len(); index++)
    {
        if(ipv4_host_vrf_transport_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Logging::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-host-list")
    {
        auto ent_ = std::make_shared<Native::Logging::Host::Ipv4HostList>();
        ent_->parent = this;
        ipv4_host_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4-host-transport-list")
    {
        auto ent_ = std::make_shared<Native::Logging::Host::Ipv4HostTransportList>();
        ent_->parent = this;
        ipv4_host_transport_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4-host-vrf-list")
    {
        auto ent_ = std::make_shared<Native::Logging::Host::Ipv4HostVrfList>();
        ent_->parent = this;
        ipv4_host_vrf_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4-host-vrf-transport-list")
    {
        auto ent_ = std::make_shared<Native::Logging::Host::Ipv4HostVrfTransportList>();
        ent_->parent = this;
        ipv4_host_vrf_transport_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Logging::Host::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_host_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_host_transport_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_host_vrf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_host_vrf_transport_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Logging::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-host-list" || name == "ipv4-host-transport-list" || name == "ipv4-host-vrf-list" || name == "ipv4-host-vrf-transport-list" || name == "ipv6")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostList::Ipv4HostList()
    :
    ipv4_host{YType::str, "ipv4-host"}
{

    yang_name = "ipv4-host-list"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Host::Ipv4HostList::~Ipv4HostList()
{
}

bool Native::Logging::Host::Ipv4HostList::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_host.is_set;
}

bool Native::Logging::Host::Ipv4HostList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_host.yfilter);
}

std::string Native::Logging::Host::Ipv4HostList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv4HostList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-host-list";
    ADD_KEY_TOKEN(ipv4_host, "ipv4-host");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_host.is_set || is_set(ipv4_host.yfilter)) leaf_name_data.push_back(ipv4_host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv4HostList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv4HostList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Host::Ipv4HostList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host = value;
        ipv4_host.value_namespace = name_space;
        ipv4_host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Host::Ipv4HostList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv4HostList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-host")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostTransportList::Ipv4HostTransportList()
    :
    ipv4_host{YType::str, "ipv4-host"},
    discriminator{YType::str, "discriminator"}
        ,
    transport(std::make_shared<Native::Logging::Host::Ipv4HostTransportList::Transport>())
{
    transport->parent = this;

    yang_name = "ipv4-host-transport-list"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Host::Ipv4HostTransportList::~Ipv4HostTransportList()
{
}

bool Native::Logging::Host::Ipv4HostTransportList::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_host.is_set
	|| discriminator.is_set
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Logging::Host::Ipv4HostTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_host.yfilter)
	|| ydk::is_set(discriminator.yfilter)
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Logging::Host::Ipv4HostTransportList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv4HostTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-host-transport-list";
    ADD_KEY_TOKEN(ipv4_host, "ipv4-host");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostTransportList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_host.is_set || is_set(ipv4_host.yfilter)) leaf_name_data.push_back(ipv4_host.get_name_leafdata());
    if (discriminator.is_set || is_set(discriminator.yfilter)) leaf_name_data.push_back(discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv4HostTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Logging::Host::Ipv4HostTransportList::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv4HostTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Logging::Host::Ipv4HostTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host = value;
        ipv4_host.value_namespace = name_space;
        ipv4_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discriminator")
    {
        discriminator = value;
        discriminator.value_namespace = name_space;
        discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Host::Ipv4HostTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host.yfilter = yfilter;
    }
    if(value_path == "discriminator")
    {
        discriminator.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv4HostTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "ipv4-host" || name == "discriminator")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostTransportList::Transport::Transport()
    :
    udp(std::make_shared<Native::Logging::Host::Ipv4HostTransportList::Transport::Udp>())
    , tcp(std::make_shared<Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp>())
{
    udp->parent = this;
    tcp->parent = this;

    yang_name = "transport"; yang_parent_name = "ipv4-host-transport-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Logging::Host::Ipv4HostTransportList::Transport::~Transport()
{
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::has_data() const
{
    if (is_presence_container) return true;
    return (udp !=  nullptr && udp->has_data())
	|| (tcp !=  nullptr && tcp->has_data());
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (udp !=  nullptr && udp->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::Logging::Host::Ipv4HostTransportList::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostTransportList::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv4HostTransportList::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Logging::Host::Ipv4HostTransportList::Transport::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv4HostTransportList::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    return _children;
}

void Native::Logging::Host::Ipv4HostTransportList::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::Host::Ipv4HostTransportList::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "tcp")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::Udp()
    :
    port{YType::uint16, "port"}
{

    yang_name = "udp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::~Udp()
{
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::Tcp()
    :
    port{YType::uint16, "port"}
{

    yang_name = "tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::~Tcp()
{
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostVrfList::Ipv4HostVrfList()
    :
    ipv4_host{YType::str, "ipv4-host"},
    vrf{YType::str, "vrf"},
    discriminator{YType::str, "discriminator"}
{

    yang_name = "ipv4-host-vrf-list"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Host::Ipv4HostVrfList::~Ipv4HostVrfList()
{
}

bool Native::Logging::Host::Ipv4HostVrfList::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_host.is_set
	|| vrf.is_set
	|| discriminator.is_set;
}

bool Native::Logging::Host::Ipv4HostVrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_host.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(discriminator.yfilter);
}

std::string Native::Logging::Host::Ipv4HostVrfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv4HostVrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-host-vrf-list";
    ADD_KEY_TOKEN(ipv4_host, "ipv4-host");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostVrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_host.is_set || is_set(ipv4_host.yfilter)) leaf_name_data.push_back(ipv4_host.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (discriminator.is_set || is_set(discriminator.yfilter)) leaf_name_data.push_back(discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv4HostVrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv4HostVrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Host::Ipv4HostVrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host = value;
        ipv4_host.value_namespace = name_space;
        ipv4_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discriminator")
    {
        discriminator = value;
        discriminator.value_namespace = name_space;
        discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Host::Ipv4HostVrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "discriminator")
    {
        discriminator.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv4HostVrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-host" || name == "vrf" || name == "discriminator")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostVrfTransportList::Ipv4HostVrfTransportList()
    :
    ipv4_host{YType::str, "ipv4-host"},
    vrf{YType::str, "vrf"},
    discriminator{YType::str, "discriminator"}
        ,
    transport(std::make_shared<Native::Logging::Host::Ipv4HostVrfTransportList::Transport>())
{
    transport->parent = this;

    yang_name = "ipv4-host-vrf-transport-list"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Host::Ipv4HostVrfTransportList::~Ipv4HostVrfTransportList()
{
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_host.is_set
	|| vrf.is_set
	|| discriminator.is_set
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_host.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(discriminator.yfilter)
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Logging::Host::Ipv4HostVrfTransportList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv4HostVrfTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-host-vrf-transport-list";
    ADD_KEY_TOKEN(ipv4_host, "ipv4-host");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostVrfTransportList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_host.is_set || is_set(ipv4_host.yfilter)) leaf_name_data.push_back(ipv4_host.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (discriminator.is_set || is_set(discriminator.yfilter)) leaf_name_data.push_back(discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv4HostVrfTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Logging::Host::Ipv4HostVrfTransportList::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv4HostVrfTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Logging::Host::Ipv4HostVrfTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host = value;
        ipv4_host.value_namespace = name_space;
        ipv4_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discriminator")
    {
        discriminator = value;
        discriminator.value_namespace = name_space;
        discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Host::Ipv4HostVrfTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-host")
    {
        ipv4_host.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "discriminator")
    {
        discriminator.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "ipv4-host" || name == "vrf" || name == "discriminator")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Transport()
    :
    udp(std::make_shared<Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp>())
    , tcp(std::make_shared<Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp>())
{
    udp->parent = this;
    tcp->parent = this;

    yang_name = "transport"; yang_parent_name = "ipv4-host-vrf-transport-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Logging::Host::Ipv4HostVrfTransportList::Transport::~Transport()
{
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::has_data() const
{
    if (is_presence_container) return true;
    return (udp !=  nullptr && udp->has_data())
	|| (tcp !=  nullptr && tcp->has_data());
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (udp !=  nullptr && udp->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::Logging::Host::Ipv4HostVrfTransportList::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostVrfTransportList::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv4HostVrfTransportList::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv4HostVrfTransportList::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    return _children;
}

void Native::Logging::Host::Ipv4HostVrfTransportList::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::Host::Ipv4HostVrfTransportList::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "tcp")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::Udp()
    :
    port{YType::uint16, "port"}
{

    yang_name = "udp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::~Udp()
{
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::Tcp()
    :
    port{YType::uint16, "port"}
{

    yang_name = "tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::~Tcp()
{
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6()
    :
    ipv6_host_list(this, {"ipv6_host"})
    , ipv6_host_transport_list(this, {"ipv6_host"})
    , ipv6_host_vrf_list(this, {"ipv6_host", "vrf"})
    , ipv6_host_vrf_transport_list(this, {"ipv6_host", "vrf"})
{

    yang_name = "ipv6"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Host::Ipv6::~Ipv6()
{
}

bool Native::Logging::Host::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_host_list.len(); index++)
    {
        if(ipv6_host_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_host_transport_list.len(); index++)
    {
        if(ipv6_host_transport_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_host_vrf_list.len(); index++)
    {
        if(ipv6_host_vrf_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_host_vrf_transport_list.len(); index++)
    {
        if(ipv6_host_vrf_transport_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<ipv6_host_list.len(); index++)
    {
        if(ipv6_host_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_host_transport_list.len(); index++)
    {
        if(ipv6_host_transport_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_host_vrf_list.len(); index++)
    {
        if(ipv6_host_vrf_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_host_vrf_transport_list.len(); index++)
    {
        if(ipv6_host_vrf_transport_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Logging::Host::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-host-list")
    {
        auto ent_ = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostList>();
        ent_->parent = this;
        ipv6_host_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6-host-transport-list")
    {
        auto ent_ = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostTransportList>();
        ent_->parent = this;
        ipv6_host_transport_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6-host-vrf-list")
    {
        auto ent_ = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostVrfList>();
        ent_->parent = this;
        ipv6_host_vrf_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6-host-vrf-transport-list")
    {
        auto ent_ = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList>();
        ent_->parent = this;
        ipv6_host_vrf_transport_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_host_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6_host_transport_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6_host_vrf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6_host_vrf_transport_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Logging::Host::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::Host::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::Host::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-host-list" || name == "ipv6-host-transport-list" || name == "ipv6-host-vrf-list" || name == "ipv6-host-vrf-transport-list")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostList::Ipv6HostList()
    :
    ipv6_host{YType::str, "ipv6-host"}
{

    yang_name = "ipv6-host-list"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Host::Ipv6::Ipv6HostList::~Ipv6HostList()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostList::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_host.is_set;
}

bool Native::Logging::Host::Ipv6::Ipv6HostList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_host.yfilter);
}

std::string Native::Logging::Host::Ipv6::Ipv6HostList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv6::Ipv6HostList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-host-list";
    ADD_KEY_TOKEN(ipv6_host, "ipv6-host");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_host.is_set || is_set(ipv6_host.yfilter)) leaf_name_data.push_back(ipv6_host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv6::Ipv6HostList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv6::Ipv6HostList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Host::Ipv6::Ipv6HostList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-host")
    {
        ipv6_host = value;
        ipv6_host.value_namespace = name_space;
        ipv6_host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Host::Ipv6::Ipv6HostList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-host")
    {
        ipv6_host.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv6::Ipv6HostList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-host")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostTransportList::Ipv6HostTransportList()
    :
    ipv6_host{YType::str, "ipv6-host"},
    discriminator{YType::str, "discriminator"}
        ,
    transport(std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport>())
{
    transport->parent = this;

    yang_name = "ipv6-host-transport-list"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Host::Ipv6::Ipv6HostTransportList::~Ipv6HostTransportList()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_host.is_set
	|| discriminator.is_set
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_host.yfilter)
	|| ydk::is_set(discriminator.yfilter)
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Logging::Host::Ipv6::Ipv6HostTransportList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv6::Ipv6HostTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-host-transport-list";
    ADD_KEY_TOKEN(ipv6_host, "ipv6-host");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostTransportList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_host.is_set || is_set(ipv6_host.yfilter)) leaf_name_data.push_back(ipv6_host.get_name_leafdata());
    if (discriminator.is_set || is_set(discriminator.yfilter)) leaf_name_data.push_back(discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv6::Ipv6HostTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv6::Ipv6HostTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Logging::Host::Ipv6::Ipv6HostTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-host")
    {
        ipv6_host = value;
        ipv6_host.value_namespace = name_space;
        ipv6_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discriminator")
    {
        discriminator = value;
        discriminator.value_namespace = name_space;
        discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Host::Ipv6::Ipv6HostTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-host")
    {
        ipv6_host.yfilter = yfilter;
    }
    if(value_path == "discriminator")
    {
        discriminator.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "ipv6-host" || name == "discriminator")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Transport()
    :
    udp(std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp>())
    , tcp(std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp>())
{
    udp->parent = this;
    tcp->parent = this;

    yang_name = "transport"; yang_parent_name = "ipv6-host-transport-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::~Transport()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::has_data() const
{
    if (is_presence_container) return true;
    return (udp !=  nullptr && udp->has_data())
	|| (tcp !=  nullptr && tcp->has_data());
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (udp !=  nullptr && udp->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    return _children;
}

void Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "tcp")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::Udp()
    :
    port{YType::uint16, "port"}
{

    yang_name = "udp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::~Udp()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::Tcp()
    :
    port{YType::uint16, "port"}
{

    yang_name = "tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::~Tcp()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostVrfList::Ipv6HostVrfList()
    :
    ipv6_host{YType::str, "ipv6-host"},
    vrf{YType::str, "vrf"},
    discriminator{YType::str, "discriminator"}
{

    yang_name = "ipv6-host-vrf-list"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Host::Ipv6::Ipv6HostVrfList::~Ipv6HostVrfList()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfList::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_host.is_set
	|| vrf.is_set
	|| discriminator.is_set;
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_host.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(discriminator.yfilter);
}

std::string Native::Logging::Host::Ipv6::Ipv6HostVrfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv6::Ipv6HostVrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-host-vrf-list";
    ADD_KEY_TOKEN(ipv6_host, "ipv6-host");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostVrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_host.is_set || is_set(ipv6_host.yfilter)) leaf_name_data.push_back(ipv6_host.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (discriminator.is_set || is_set(discriminator.yfilter)) leaf_name_data.push_back(discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv6::Ipv6HostVrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv6::Ipv6HostVrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-host")
    {
        ipv6_host = value;
        ipv6_host.value_namespace = name_space;
        ipv6_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discriminator")
    {
        discriminator = value;
        discriminator.value_namespace = name_space;
        discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-host")
    {
        ipv6_host.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "discriminator")
    {
        discriminator.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-host" || name == "vrf" || name == "discriminator")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Ipv6HostVrfTransportList()
    :
    ipv6_host{YType::str, "ipv6-host"},
    vrf{YType::str, "vrf"},
    discriminator{YType::str, "discriminator"}
        ,
    transport(std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport>())
{
    transport->parent = this;

    yang_name = "ipv6-host-vrf-transport-list"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::~Ipv6HostVrfTransportList()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_host.is_set
	|| vrf.is_set
	|| discriminator.is_set
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_host.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(discriminator.yfilter)
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-host-vrf-transport-list";
    ADD_KEY_TOKEN(ipv6_host, "ipv6-host");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_host.is_set || is_set(ipv6_host.yfilter)) leaf_name_data.push_back(ipv6_host.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (discriminator.is_set || is_set(discriminator.yfilter)) leaf_name_data.push_back(discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-host")
    {
        ipv6_host = value;
        ipv6_host.value_namespace = name_space;
        ipv6_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discriminator")
    {
        discriminator = value;
        discriminator.value_namespace = name_space;
        discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-host")
    {
        ipv6_host.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "discriminator")
    {
        discriminator.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "ipv6-host" || name == "vrf" || name == "discriminator")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Transport()
    :
    udp(std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp>())
    , tcp(std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp>())
{
    udp->parent = this;
    tcp->parent = this;

    yang_name = "transport"; yang_parent_name = "ipv6-host-vrf-transport-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::~Transport()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::has_data() const
{
    if (is_presence_container) return true;
    return (udp !=  nullptr && udp->has_data())
	|| (tcp !=  nullptr && tcp->has_data());
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (udp !=  nullptr && udp->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    return _children;
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "tcp")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::Udp()
    :
    port{YType::uint16, "port"}
{

    yang_name = "udp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::~Udp()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::Tcp()
    :
    port{YType::uint16, "port"}
{

    yang_name = "tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::~Tcp()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Logging::OriginId::OriginId()
    :
    type_value{YType::enumeration, "type-value"},
    string{YType::str, "string"}
{

    yang_name = "origin-id"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::OriginId::~OriginId()
{
}

bool Native::Logging::OriginId::has_data() const
{
    if (is_presence_container) return true;
    return type_value.is_set
	|| string.is_set;
}

bool Native::Logging::OriginId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type_value.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Logging::OriginId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::OriginId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "origin-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::OriginId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type_value.is_set || is_set(type_value.yfilter)) leaf_name_data.push_back(type_value.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::OriginId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::OriginId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::OriginId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type-value")
    {
        type_value = value;
        type_value.value_namespace = name_space;
        type_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::OriginId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type-value")
    {
        type_value.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Logging::OriginId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type-value" || name == "string")
        return true;
    return false;
}

Native::Logging::RateLimitConf::RateLimitConf()
    :
    rate_limit{YType::boolean, "rate-limit"}
{

    yang_name = "rate-limit-conf"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::RateLimitConf::~RateLimitConf()
{
}

bool Native::Logging::RateLimitConf::has_data() const
{
    if (is_presence_container) return true;
    return rate_limit.is_set;
}

bool Native::Logging::RateLimitConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate_limit.yfilter);
}

std::string Native::Logging::RateLimitConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimitConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimitConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::RateLimitConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::RateLimitConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::RateLimitConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimitConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimitConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate-limit")
        return true;
    return false;
}

Native::Logging::RateLimit::RateLimit()
    :
    ranges(this, {"range"})
    , console(std::make_shared<Native::Logging::RateLimit::Console>())
    , all(std::make_shared<Native::Logging::RateLimit::All>())
{
    console->parent = this;
    all->parent = this;

    yang_name = "rate-limit"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Logging::RateLimit::~RateLimit()
{
}

bool Native::Logging::RateLimit::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ranges.len(); index++)
    {
        if(ranges[index]->has_data())
            return true;
    }
    return (console !=  nullptr && console->has_data())
	|| (all !=  nullptr && all->has_data());
}

bool Native::Logging::RateLimit::has_operation() const
{
    for (std::size_t index=0; index<ranges.len(); index++)
    {
        if(ranges[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (console !=  nullptr && console->has_operation())
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Logging::RateLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ranges")
    {
        auto ent_ = std::make_shared<Native::Logging::RateLimit::Ranges>();
        ent_->parent = this;
        ranges.append(ent_);
        return ent_;
    }

    if(child_yang_name == "console")
    {
        if(console == nullptr)
        {
            console = std::make_shared<Native::Logging::RateLimit::Console>();
        }
        return console;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Logging::RateLimit::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ranges.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(console != nullptr)
    {
        _children["console"] = console;
    }

    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Native::Logging::RateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::RateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::RateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ranges" || name == "console" || name == "all")
        return true;
    return false;
}

Native::Logging::RateLimit::Ranges::Ranges()
    :
    range{YType::uint16, "range"}
        ,
    except(nullptr) // presence node
{

    yang_name = "ranges"; yang_parent_name = "rate-limit"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::RateLimit::Ranges::~Ranges()
{
}

bool Native::Logging::RateLimit::Ranges::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| (except !=  nullptr && except->has_data());
}

bool Native::Logging::RateLimit::Ranges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (except !=  nullptr && except->has_operation());
}

std::string Native::Logging::RateLimit::Ranges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimit::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::RateLimit::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "except")
    {
        if(except == nullptr)
        {
            except = std::make_shared<Native::Logging::RateLimit::Ranges::Except>();
        }
        return except;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::RateLimit::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(except != nullptr)
    {
        _children["except"] = except;
    }

    return _children;
}

void Native::Logging::RateLimit::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimit::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimit::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "except" || name == "range")
        return true;
    return false;
}

Native::Logging::RateLimit::Ranges::Except::Except()
    :
    range{YType::str, "range"}
{

    yang_name = "except"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Logging::RateLimit::Ranges::Except::~Except()
{
}

bool Native::Logging::RateLimit::Ranges::Except::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set;
}

bool Native::Logging::RateLimit::Ranges::Except::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Native::Logging::RateLimit::Ranges::Except::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "except";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::Ranges::Except::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::RateLimit::Ranges::Except::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::RateLimit::Ranges::Except::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::RateLimit::Ranges::Except::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimit::Ranges::Except::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimit::Ranges::Except::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Logging::RateLimit::Console::Console()
    :
    ranges(this, {"range"})
    , all(std::make_shared<Native::Logging::RateLimit::Console::All>())
{
    all->parent = this;

    yang_name = "console"; yang_parent_name = "rate-limit"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::RateLimit::Console::~Console()
{
}

bool Native::Logging::RateLimit::Console::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ranges.len(); index++)
    {
        if(ranges[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Logging::RateLimit::Console::has_operation() const
{
    for (std::size_t index=0; index<ranges.len(); index++)
    {
        if(ranges[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Logging::RateLimit::Console::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimit::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::Console::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::RateLimit::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ranges")
    {
        auto ent_ = std::make_shared<Native::Logging::RateLimit::Console::Ranges>();
        ent_->parent = this;
        ranges.append(ent_);
        return ent_;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Logging::RateLimit::Console::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::RateLimit::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ranges.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Native::Logging::RateLimit::Console::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::RateLimit::Console::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::RateLimit::Console::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ranges" || name == "all")
        return true;
    return false;
}

Native::Logging::RateLimit::Console::Ranges::Ranges()
    :
    range{YType::uint16, "range"}
        ,
    except(nullptr) // presence node
{

    yang_name = "ranges"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::RateLimit::Console::Ranges::~Ranges()
{
}

bool Native::Logging::RateLimit::Console::Ranges::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| (except !=  nullptr && except->has_data());
}

bool Native::Logging::RateLimit::Console::Ranges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (except !=  nullptr && except->has_operation());
}

std::string Native::Logging::RateLimit::Console::Ranges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/console/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimit::Console::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::Console::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::RateLimit::Console::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "except")
    {
        if(except == nullptr)
        {
            except = std::make_shared<Native::Logging::RateLimit::Console::Ranges::Except>();
        }
        return except;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::RateLimit::Console::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(except != nullptr)
    {
        _children["except"] = except;
    }

    return _children;
}

void Native::Logging::RateLimit::Console::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimit::Console::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimit::Console::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "except" || name == "range")
        return true;
    return false;
}

Native::Logging::RateLimit::Console::Ranges::Except::Except()
    :
    range{YType::str, "range"}
{

    yang_name = "except"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Logging::RateLimit::Console::Ranges::Except::~Except()
{
}

bool Native::Logging::RateLimit::Console::Ranges::Except::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set;
}

bool Native::Logging::RateLimit::Console::Ranges::Except::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Native::Logging::RateLimit::Console::Ranges::Except::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "except";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::Console::Ranges::Except::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::RateLimit::Console::Ranges::Except::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::RateLimit::Console::Ranges::Except::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::RateLimit::Console::Ranges::Except::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimit::Console::Ranges::Except::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimit::Console::Ranges::Except::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Logging::RateLimit::Console::All::All()
    :
    ranges(this, {"range"})
{

    yang_name = "all"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::RateLimit::Console::All::~All()
{
}

bool Native::Logging::RateLimit::Console::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ranges.len(); index++)
    {
        if(ranges[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Logging::RateLimit::Console::All::has_operation() const
{
    for (std::size_t index=0; index<ranges.len(); index++)
    {
        if(ranges[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Logging::RateLimit::Console::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/console/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimit::Console::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::Console::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::RateLimit::Console::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ranges")
    {
        auto ent_ = std::make_shared<Native::Logging::RateLimit::Console::All::Ranges>();
        ent_->parent = this;
        ranges.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::RateLimit::Console::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ranges.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Logging::RateLimit::Console::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::RateLimit::Console::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::RateLimit::Console::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ranges")
        return true;
    return false;
}

Native::Logging::RateLimit::Console::All::Ranges::Ranges()
    :
    range{YType::uint16, "range"}
        ,
    except(nullptr) // presence node
{

    yang_name = "ranges"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::RateLimit::Console::All::Ranges::~Ranges()
{
}

bool Native::Logging::RateLimit::Console::All::Ranges::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| (except !=  nullptr && except->has_data());
}

bool Native::Logging::RateLimit::Console::All::Ranges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (except !=  nullptr && except->has_operation());
}

std::string Native::Logging::RateLimit::Console::All::Ranges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/console/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimit::Console::All::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::Console::All::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::RateLimit::Console::All::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "except")
    {
        if(except == nullptr)
        {
            except = std::make_shared<Native::Logging::RateLimit::Console::All::Ranges::Except>();
        }
        return except;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::RateLimit::Console::All::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(except != nullptr)
    {
        _children["except"] = except;
    }

    return _children;
}

void Native::Logging::RateLimit::Console::All::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimit::Console::All::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimit::Console::All::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "except" || name == "range")
        return true;
    return false;
}

Native::Logging::RateLimit::Console::All::Ranges::Except::Except()
    :
    range{YType::str, "range"}
{

    yang_name = "except"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Logging::RateLimit::Console::All::Ranges::Except::~Except()
{
}

bool Native::Logging::RateLimit::Console::All::Ranges::Except::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set;
}

bool Native::Logging::RateLimit::Console::All::Ranges::Except::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Native::Logging::RateLimit::Console::All::Ranges::Except::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "except";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::Console::All::Ranges::Except::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::RateLimit::Console::All::Ranges::Except::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::RateLimit::Console::All::Ranges::Except::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::RateLimit::Console::All::Ranges::Except::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimit::Console::All::Ranges::Except::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimit::Console::All::Ranges::Except::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Logging::RateLimit::All::All()
    :
    ranges(this, {"range"})
{

    yang_name = "all"; yang_parent_name = "rate-limit"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::RateLimit::All::~All()
{
}

bool Native::Logging::RateLimit::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ranges.len(); index++)
    {
        if(ranges[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Logging::RateLimit::All::has_operation() const
{
    for (std::size_t index=0; index<ranges.len(); index++)
    {
        if(ranges[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Logging::RateLimit::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimit::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::RateLimit::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ranges")
    {
        auto ent_ = std::make_shared<Native::Logging::RateLimit::All::Ranges>();
        ent_->parent = this;
        ranges.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::RateLimit::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ranges.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Logging::RateLimit::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::RateLimit::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::RateLimit::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ranges")
        return true;
    return false;
}

Native::Logging::RateLimit::All::Ranges::Ranges()
    :
    range{YType::uint16, "range"}
        ,
    except(nullptr) // presence node
{

    yang_name = "ranges"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::RateLimit::All::Ranges::~Ranges()
{
}

bool Native::Logging::RateLimit::All::Ranges::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| (except !=  nullptr && except->has_data());
}

bool Native::Logging::RateLimit::All::Ranges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (except !=  nullptr && except->has_operation());
}

std::string Native::Logging::RateLimit::All::Ranges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimit::All::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::All::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::RateLimit::All::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "except")
    {
        if(except == nullptr)
        {
            except = std::make_shared<Native::Logging::RateLimit::All::Ranges::Except>();
        }
        return except;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::RateLimit::All::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(except != nullptr)
    {
        _children["except"] = except;
    }

    return _children;
}

void Native::Logging::RateLimit::All::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimit::All::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimit::All::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "except" || name == "range")
        return true;
    return false;
}

Native::Logging::RateLimit::All::Ranges::Except::Except()
    :
    range{YType::str, "range"}
{

    yang_name = "except"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Logging::RateLimit::All::Ranges::Except::~Except()
{
}

bool Native::Logging::RateLimit::All::Ranges::Except::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set;
}

bool Native::Logging::RateLimit::All::Ranges::Except::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Native::Logging::RateLimit::All::Ranges::Except::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "except";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::All::Ranges::Except::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::RateLimit::All::Ranges::Except::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::RateLimit::All::Ranges::Except::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::RateLimit::All::Ranges::Except::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimit::All::Ranges::Except::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimit::All::Ranges::Except::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Logging::SourceInterface::SourceInterface()
    :
    interface_name{YType::str, "interface-name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "source-interface"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::SourceInterface::~SourceInterface()
{
}

bool Native::Logging::SourceInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| vrf.is_set;
}

bool Native::Logging::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Logging::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Logging::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "vrf")
        return true;
    return false;
}

Native::Logging::SnmpTrap::SnmpTrap()
    :
    alerts{YType::empty, "alerts"},
    critical{YType::empty, "critical"},
    debugging{YType::empty, "debugging"},
    emergencies{YType::empty, "emergencies"},
    errors{YType::empty, "errors"},
    informational{YType::empty, "informational"},
    notifications{YType::empty, "notifications"},
    warnings{YType::empty, "warnings"}
{

    yang_name = "snmp-trap"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Logging::SnmpTrap::~SnmpTrap()
{
}

bool Native::Logging::SnmpTrap::has_data() const
{
    if (is_presence_container) return true;
    return alerts.is_set
	|| critical.is_set
	|| debugging.is_set
	|| emergencies.is_set
	|| errors.is_set
	|| informational.is_set
	|| notifications.is_set
	|| warnings.is_set;
}

bool Native::Logging::SnmpTrap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alerts.yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(debugging.yfilter)
	|| ydk::is_set(emergencies.yfilter)
	|| ydk::is_set(errors.yfilter)
	|| ydk::is_set(informational.yfilter)
	|| ydk::is_set(notifications.yfilter)
	|| ydk::is_set(warnings.yfilter);
}

std::string Native::Logging::SnmpTrap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::SnmpTrap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::SnmpTrap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alerts.is_set || is_set(alerts.yfilter)) leaf_name_data.push_back(alerts.get_name_leafdata());
    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (debugging.is_set || is_set(debugging.yfilter)) leaf_name_data.push_back(debugging.get_name_leafdata());
    if (emergencies.is_set || is_set(emergencies.yfilter)) leaf_name_data.push_back(emergencies.get_name_leafdata());
    if (errors.is_set || is_set(errors.yfilter)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (informational.is_set || is_set(informational.yfilter)) leaf_name_data.push_back(informational.get_name_leafdata());
    if (notifications.is_set || is_set(notifications.yfilter)) leaf_name_data.push_back(notifications.get_name_leafdata());
    if (warnings.is_set || is_set(warnings.yfilter)) leaf_name_data.push_back(warnings.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::SnmpTrap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::SnmpTrap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::SnmpTrap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alerts")
    {
        alerts = value;
        alerts.value_namespace = name_space;
        alerts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debugging")
    {
        debugging = value;
        debugging.value_namespace = name_space;
        debugging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "emergencies")
    {
        emergencies = value;
        emergencies.value_namespace = name_space;
        emergencies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors")
    {
        errors = value;
        errors.value_namespace = name_space;
        errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "informational")
    {
        informational = value;
        informational.value_namespace = name_space;
        informational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifications")
    {
        notifications = value;
        notifications.value_namespace = name_space;
        notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warnings")
    {
        warnings = value;
        warnings.value_namespace = name_space;
        warnings.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::SnmpTrap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alerts")
    {
        alerts.yfilter = yfilter;
    }
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "debugging")
    {
        debugging.yfilter = yfilter;
    }
    if(value_path == "emergencies")
    {
        emergencies.yfilter = yfilter;
    }
    if(value_path == "errors")
    {
        errors.yfilter = yfilter;
    }
    if(value_path == "informational")
    {
        informational.yfilter = yfilter;
    }
    if(value_path == "notifications")
    {
        notifications.yfilter = yfilter;
    }
    if(value_path == "warnings")
    {
        warnings.yfilter = yfilter;
    }
}

bool Native::Logging::SnmpTrap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alerts" || name == "critical" || name == "debugging" || name == "emergencies" || name == "errors" || name == "informational" || name == "notifications" || name == "warnings")
        return true;
    return false;
}

Native::Logging::Trap::Trap()
    :
    trap_default{YType::empty, "trap-default"},
    severity{YType::str, "severity"}
{

    yang_name = "trap"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Logging::Trap::~Trap()
{
}

bool Native::Logging::Trap::has_data() const
{
    if (is_presence_container) return true;
    return trap_default.is_set
	|| severity.is_set;
}

bool Native::Logging::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trap_default.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Native::Logging::Trap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_default.is_set || is_set(trap_default.yfilter)) leaf_name_data.push_back(trap_default.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Logging::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Logging::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Logging::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trap-default")
    {
        trap_default = value;
        trap_default.value_namespace = name_space;
        trap_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trap-default")
    {
        trap_default.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::Logging::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-default" || name == "severity")
        return true;
    return false;
}

const Enum::YLeaf Native::TableMap::Default_::copy {0, "copy"};
const Enum::YLeaf Native::TableMap::Default_::ignore {1, "ignore"};

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

const Enum::YLeaf Native::PseudowireClass::Encapsulation::l2tpv2 {0, "l2tpv2"};
const Enum::YLeaf Native::PseudowireClass::Encapsulation::l2tpv3 {1, "l2tpv3"};
const Enum::YLeaf Native::PseudowireClass::Encapsulation::mpls {2, "mpls"};
const Enum::YLeaf Native::PseudowireClass::Encapsulation::udp {3, "udp"};

const Enum::YLeaf Native::PseudowireClass::Interworking::ethernet {0, "ethernet"};
const Enum::YLeaf Native::PseudowireClass::Interworking::ip {1, "ip"};
const Enum::YLeaf Native::PseudowireClass::Interworking::vlan {2, "vlan"};

const Enum::YLeaf Native::PseudowireClass::Sequencing::both {0, "both"};
const Enum::YLeaf Native::PseudowireClass::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::PseudowireClass::Sequencing::resync {2, "resync"};
const Enum::YLeaf Native::PseudowireClass::Sequencing::transmit {3, "transmit"};

const Enum::YLeaf Native::PseudowireClass::Ip::Protocol::l2tp {0, "l2tp"};
const Enum::YLeaf Native::PseudowireClass::Ip::Protocol::uti {1, "uti"};

const Enum::YLeaf Native::PseudowireClass::LoadBalance::Flow::Ethernet::dst_mac {0, "dst-mac"};
const Enum::YLeaf Native::PseudowireClass::LoadBalance::Flow::Ethernet::src_dst_mac {1, "src-dst-mac"};
const Enum::YLeaf Native::PseudowireClass::LoadBalance::Flow::Ethernet::src_mac {2, "src-mac"};

const Enum::YLeaf Native::PseudowireClass::ProtocolMpls::Protocol::ldp {0, "ldp"};
const Enum::YLeaf Native::PseudowireClass::ProtocolMpls::Protocol::none {1, "none"};

const Enum::YLeaf Native::PseudowireClass::ProtocolL2tpv2::Protocol::l2tpv2 {0, "l2tpv2"};
const Enum::YLeaf Native::PseudowireClass::ProtocolL2tpv2::Protocol::none {1, "none"};

const Enum::YLeaf Native::PseudowireClass::ProtocolL2tpv3::Protocol::l2tpv3 {0, "l2tpv3"};
const Enum::YLeaf Native::PseudowireClass::ProtocolL2tpv3::Protocol::l2tpv3ietf {1, "l2tpv3ietf"};
const Enum::YLeaf Native::PseudowireClass::ProtocolL2tpv3::Protocol::none {2, "none"};

const Enum::YLeaf Native::Clock::SummerTime::RecurringStart::first {0, "first"};
const Enum::YLeaf Native::Clock::SummerTime::RecurringStart::last {1, "last"};

const Enum::YLeaf Native::Clock::SummerTime::RecurringEnd::first {0, "first"};
const Enum::YLeaf Native::Clock::SummerTime::RecurringEnd::last {1, "last"};

const Enum::YLeaf Native::Clock::Timezone::Offset::Y__PLUS__ {0, "+"};
const Enum::YLeaf Native::Clock::Timezone::Offset::Y_ {1, "-"};

const Enum::YLeaf Native::Logging::Alarm::critical {0, "critical"};
const Enum::YLeaf Native::Logging::Alarm::informational {1, "informational"};
const Enum::YLeaf Native::Logging::Alarm::major_ {2, "major"};
const Enum::YLeaf Native::Logging::Alarm::minor {3, "minor"};

const Enum::YLeaf Native::Logging::Facility::auth {0, "auth"};
const Enum::YLeaf Native::Logging::Facility::cron {1, "cron"};
const Enum::YLeaf Native::Logging::Facility::daemon {2, "daemon"};
const Enum::YLeaf Native::Logging::Facility::kern {3, "kern"};
const Enum::YLeaf Native::Logging::Facility::local0 {4, "local0"};
const Enum::YLeaf Native::Logging::Facility::local1 {5, "local1"};
const Enum::YLeaf Native::Logging::Facility::local2 {6, "local2"};
const Enum::YLeaf Native::Logging::Facility::local3 {7, "local3"};
const Enum::YLeaf Native::Logging::Facility::local4 {8, "local4"};
const Enum::YLeaf Native::Logging::Facility::local5 {9, "local5"};
const Enum::YLeaf Native::Logging::Facility::local6 {10, "local6"};
const Enum::YLeaf Native::Logging::Facility::local7 {11, "local7"};
const Enum::YLeaf Native::Logging::Facility::lpr {12, "lpr"};
const Enum::YLeaf Native::Logging::Facility::mail {13, "mail"};
const Enum::YLeaf Native::Logging::Facility::news {14, "news"};
const Enum::YLeaf Native::Logging::Facility::sys10 {15, "sys10"};
const Enum::YLeaf Native::Logging::Facility::sys11 {16, "sys11"};
const Enum::YLeaf Native::Logging::Facility::sys12 {17, "sys12"};
const Enum::YLeaf Native::Logging::Facility::sys13 {18, "sys13"};
const Enum::YLeaf Native::Logging::Facility::sys14 {19, "sys14"};
const Enum::YLeaf Native::Logging::Facility::sys9 {20, "sys9"};
const Enum::YLeaf Native::Logging::Facility::syslog {21, "syslog"};
const Enum::YLeaf Native::Logging::Facility::user {22, "user"};
const Enum::YLeaf Native::Logging::Facility::uucp {23, "uucp"};

const Enum::YLeaf Native::Logging::History::SeverityLevel::emergencies {0, "emergencies"};
const Enum::YLeaf Native::Logging::History::SeverityLevel::alerts {1, "alerts"};
const Enum::YLeaf Native::Logging::History::SeverityLevel::critical {2, "critical"};
const Enum::YLeaf Native::Logging::History::SeverityLevel::errors {3, "errors"};
const Enum::YLeaf Native::Logging::History::SeverityLevel::warnings {4, "warnings"};
const Enum::YLeaf Native::Logging::History::SeverityLevel::notifications {5, "notifications"};
const Enum::YLeaf Native::Logging::History::SeverityLevel::informational {6, "informational"};
const Enum::YLeaf Native::Logging::History::SeverityLevel::debugging {7, "debugging"};

const Enum::YLeaf Native::Logging::OriginId::TypeValue::hostname {0, "hostname"};
const Enum::YLeaf Native::Logging::OriginId::TypeValue::ip {1, "ip"};
const Enum::YLeaf Native::Logging::OriginId::TypeValue::ipv6 {2, "ipv6"};

const Enum::YLeaf Native::Logging::Trap::Severity::alerts {0, "alerts"};
const Enum::YLeaf Native::Logging::Trap::Severity::critical {1, "critical"};
const Enum::YLeaf Native::Logging::Trap::Severity::debugging {2, "debugging"};
const Enum::YLeaf Native::Logging::Trap::Severity::emergencies {3, "emergencies"};
const Enum::YLeaf Native::Logging::Trap::Severity::errors {4, "errors"};
const Enum::YLeaf Native::Logging::Trap::Severity::informational {5, "informational"};
const Enum::YLeaf Native::Logging::Trap::Severity::notifications {6, "notifications"};
const Enum::YLeaf Native::Logging::Trap::Severity::warnings {7, "warnings"};


}
}

