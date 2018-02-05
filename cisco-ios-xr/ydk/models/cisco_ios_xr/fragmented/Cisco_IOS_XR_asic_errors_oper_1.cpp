
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asic_errors_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asic_errors_oper {

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::Error()
    :
    name{YType::str, "name"},
    asic_info{YType::str, "asic-info"},
    node_key{YType::uint32, "node-key"},
    alarm_on{YType::boolean, "alarm-on"},
    thresh_hi{YType::uint32, "thresh-hi"},
    period_hi{YType::uint32, "period-hi"},
    thresh_lo{YType::uint32, "thresh-lo"},
    period_lo{YType::uint32, "period-lo"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    leaf_id{YType::uint32, "leaf-id"},
    last_cleared{YType::uint64, "last-cleared"}
{

    yang_name = "error"; yang_parent_name = "asic-error-reset-soft"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return name.is_set
	|| asic_info.is_set
	|| node_key.is_set
	|| alarm_on.is_set
	|| thresh_hi.is_set
	|| period_hi.is_set
	|| thresh_lo.is_set
	|| period_lo.is_set
	|| count.is_set
	|| intr_type.is_set
	|| leaf_id.is_set
	|| last_cleared.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(last_cleared.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "name" || name == "asic-info" || name == "node-key" || name == "alarm-on" || name == "thresh-hi" || name == "period-hi" || name == "thresh-lo" || name == "period-lo" || name == "count" || name == "intr-type" || name == "leaf-id" || name == "last-cleared")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::CsrsInfo()
    :
    name{YType::str, "name"},
    address{YType::uint64, "address"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::has_data() const
{
    return name.is_set
	|| address.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "address" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::BackPressureSoftErrors()
{

    yang_name = "back-pressure-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::~BackPressureSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "back-pressure-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::Error()
    :
    name{YType::str, "name"},
    asic_info{YType::str, "asic-info"},
    node_key{YType::uint32, "node-key"},
    alarm_on{YType::boolean, "alarm-on"},
    thresh_hi{YType::uint32, "thresh-hi"},
    period_hi{YType::uint32, "period-hi"},
    thresh_lo{YType::uint32, "thresh-lo"},
    period_lo{YType::uint32, "period-lo"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    leaf_id{YType::uint32, "leaf-id"},
    last_cleared{YType::uint64, "last-cleared"}
{

    yang_name = "error"; yang_parent_name = "back-pressure-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return name.is_set
	|| asic_info.is_set
	|| node_key.is_set
	|| alarm_on.is_set
	|| thresh_hi.is_set
	|| period_hi.is_set
	|| thresh_lo.is_set
	|| period_lo.is_set
	|| count.is_set
	|| intr_type.is_set
	|| leaf_id.is_set
	|| last_cleared.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(last_cleared.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "name" || name == "asic-info" || name == "node-key" || name == "alarm-on" || name == "thresh-hi" || name == "period-hi" || name == "thresh-lo" || name == "period-lo" || name == "count" || name == "intr-type" || name == "leaf-id" || name == "last-cleared")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    name{YType::str, "name"},
    address{YType::uint64, "address"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::has_data() const
{
    return name.is_set
	|| address.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "address" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::GenericSoftErrors()
{

    yang_name = "generic-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::~GenericSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::Error()
    :
    name{YType::str, "name"},
    asic_info{YType::str, "asic-info"},
    node_key{YType::uint32, "node-key"},
    alarm_on{YType::boolean, "alarm-on"},
    thresh_hi{YType::uint32, "thresh-hi"},
    period_hi{YType::uint32, "period-hi"},
    thresh_lo{YType::uint32, "thresh-lo"},
    period_lo{YType::uint32, "period-lo"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    leaf_id{YType::uint32, "leaf-id"},
    last_cleared{YType::uint64, "last-cleared"}
{

    yang_name = "error"; yang_parent_name = "generic-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return name.is_set
	|| asic_info.is_set
	|| node_key.is_set
	|| alarm_on.is_set
	|| thresh_hi.is_set
	|| period_hi.is_set
	|| thresh_lo.is_set
	|| period_lo.is_set
	|| count.is_set
	|| intr_type.is_set
	|| leaf_id.is_set
	|| last_cleared.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(last_cleared.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "name" || name == "asic-info" || name == "node-key" || name == "alarm-on" || name == "thresh-hi" || name == "period-hi" || name == "thresh-lo" || name == "period-lo" || name == "count" || name == "intr-type" || name == "leaf-id" || name == "last-cleared")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    name{YType::str, "name"},
    address{YType::uint64, "address"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::has_data() const
{
    return name.is_set
	|| address.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "address" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::LinkSoftErrors()
{

    yang_name = "link-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::~LinkSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::Error()
    :
    name{YType::str, "name"},
    asic_info{YType::str, "asic-info"},
    node_key{YType::uint32, "node-key"},
    alarm_on{YType::boolean, "alarm-on"},
    thresh_hi{YType::uint32, "thresh-hi"},
    period_hi{YType::uint32, "period-hi"},
    thresh_lo{YType::uint32, "thresh-lo"},
    period_lo{YType::uint32, "period-lo"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    leaf_id{YType::uint32, "leaf-id"},
    last_cleared{YType::uint64, "last-cleared"}
{

    yang_name = "error"; yang_parent_name = "link-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return name.is_set
	|| asic_info.is_set
	|| node_key.is_set
	|| alarm_on.is_set
	|| thresh_hi.is_set
	|| period_hi.is_set
	|| thresh_lo.is_set
	|| period_lo.is_set
	|| count.is_set
	|| intr_type.is_set
	|| leaf_id.is_set
	|| last_cleared.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(last_cleared.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "name" || name == "asic-info" || name == "node-key" || name == "alarm-on" || name == "thresh-hi" || name == "period-hi" || name == "thresh-lo" || name == "period-lo" || name == "count" || name == "intr-type" || name == "leaf-id" || name == "last-cleared")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    name{YType::str, "name"},
    address{YType::uint64, "address"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::has_data() const
{
    return name.is_set
	|| address.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "address" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::ConfigurationSoftErrors()
{

    yang_name = "configuration-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::~ConfigurationSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::Error()
    :
    name{YType::str, "name"},
    asic_info{YType::str, "asic-info"},
    node_key{YType::uint32, "node-key"},
    alarm_on{YType::boolean, "alarm-on"},
    thresh_hi{YType::uint32, "thresh-hi"},
    period_hi{YType::uint32, "period-hi"},
    thresh_lo{YType::uint32, "thresh-lo"},
    period_lo{YType::uint32, "period-lo"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    leaf_id{YType::uint32, "leaf-id"},
    last_cleared{YType::uint64, "last-cleared"}
{

    yang_name = "error"; yang_parent_name = "configuration-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return name.is_set
	|| asic_info.is_set
	|| node_key.is_set
	|| alarm_on.is_set
	|| thresh_hi.is_set
	|| period_hi.is_set
	|| thresh_lo.is_set
	|| period_lo.is_set
	|| count.is_set
	|| intr_type.is_set
	|| leaf_id.is_set
	|| last_cleared.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(last_cleared.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "name" || name == "asic-info" || name == "node-key" || name == "alarm-on" || name == "thresh-hi" || name == "period-hi" || name == "thresh-lo" || name == "period-lo" || name == "count" || name == "intr-type" || name == "leaf-id" || name == "last-cleared")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    name{YType::str, "name"},
    address{YType::uint64, "address"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::has_data() const
{
    return name.is_set
	|| address.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "address" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::MultipleBitHardErrors()
{

    yang_name = "multiple-bit-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::~MultipleBitHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multiple-bit-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::Error()
    :
    name{YType::str, "name"},
    asic_info{YType::str, "asic-info"},
    node_key{YType::uint32, "node-key"},
    alarm_on{YType::boolean, "alarm-on"},
    thresh_hi{YType::uint32, "thresh-hi"},
    period_hi{YType::uint32, "period-hi"},
    thresh_lo{YType::uint32, "thresh-lo"},
    period_lo{YType::uint32, "period-lo"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    leaf_id{YType::uint32, "leaf-id"},
    last_cleared{YType::uint64, "last-cleared"}
{

    yang_name = "error"; yang_parent_name = "multiple-bit-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return name.is_set
	|| asic_info.is_set
	|| node_key.is_set
	|| alarm_on.is_set
	|| thresh_hi.is_set
	|| period_hi.is_set
	|| thresh_lo.is_set
	|| period_lo.is_set
	|| count.is_set
	|| intr_type.is_set
	|| leaf_id.is_set
	|| last_cleared.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(last_cleared.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "name" || name == "asic-info" || name == "node-key" || name == "alarm-on" || name == "thresh-hi" || name == "period-hi" || name == "thresh-lo" || name == "period-lo" || name == "count" || name == "intr-type" || name == "leaf-id" || name == "last-cleared")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    name{YType::str, "name"},
    address{YType::uint64, "address"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo::has_data() const
{
    return name.is_set
	|| address.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "address" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::UnexpectedSoftErrors()
{

    yang_name = "unexpected-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::~UnexpectedSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unexpected-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::Error()
    :
    name{YType::str, "name"},
    asic_info{YType::str, "asic-info"},
    node_key{YType::uint32, "node-key"},
    alarm_on{YType::boolean, "alarm-on"},
    thresh_hi{YType::uint32, "thresh-hi"},
    period_hi{YType::uint32, "period-hi"},
    thresh_lo{YType::uint32, "thresh-lo"},
    period_lo{YType::uint32, "period-lo"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    leaf_id{YType::uint32, "leaf-id"},
    last_cleared{YType::uint64, "last-cleared"}
{

    yang_name = "error"; yang_parent_name = "unexpected-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return name.is_set
	|| asic_info.is_set
	|| node_key.is_set
	|| alarm_on.is_set
	|| thresh_hi.is_set
	|| period_hi.is_set
	|| thresh_lo.is_set
	|| period_lo.is_set
	|| count.is_set
	|| intr_type.is_set
	|| leaf_id.is_set
	|| last_cleared.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(last_cleared.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "name" || name == "asic-info" || name == "node-key" || name == "alarm-on" || name == "thresh-hi" || name == "period-hi" || name == "thresh-lo" || name == "period-lo" || name == "count" || name == "intr-type" || name == "leaf-id" || name == "last-cleared")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    name{YType::str, "name"},
    address{YType::uint64, "address"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo::has_data() const
{
    return name.is_set
	|| address.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "address" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::OutofResourceHard()
{

    yang_name = "outof-resource-hard"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::~OutofResourceHard()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outof-resource-hard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::Error()
    :
    name{YType::str, "name"},
    asic_info{YType::str, "asic-info"},
    node_key{YType::uint32, "node-key"},
    alarm_on{YType::boolean, "alarm-on"},
    thresh_hi{YType::uint32, "thresh-hi"},
    period_hi{YType::uint32, "period-hi"},
    thresh_lo{YType::uint32, "thresh-lo"},
    period_lo{YType::uint32, "period-lo"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    leaf_id{YType::uint32, "leaf-id"},
    last_cleared{YType::uint64, "last-cleared"}
{

    yang_name = "error"; yang_parent_name = "outof-resource-hard"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return name.is_set
	|| asic_info.is_set
	|| node_key.is_set
	|| alarm_on.is_set
	|| thresh_hi.is_set
	|| period_hi.is_set
	|| thresh_lo.is_set
	|| period_lo.is_set
	|| count.is_set
	|| intr_type.is_set
	|| leaf_id.is_set
	|| last_cleared.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(last_cleared.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "name" || name == "asic-info" || name == "node-key" || name == "alarm-on" || name == "thresh-hi" || name == "period-hi" || name == "thresh-lo" || name == "period-lo" || name == "count" || name == "intr-type" || name == "leaf-id" || name == "last-cleared")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo::CsrsInfo()
    :
    name{YType::str, "name"},
    address{YType::uint64, "address"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo::has_data() const
{
    return name.is_set
	|| address.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "address" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::HardwareHardErrors()
{

    yang_name = "hardware-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::~HardwareHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::Error()
    :
    name{YType::str, "name"},
    asic_info{YType::str, "asic-info"},
    node_key{YType::uint32, "node-key"},
    alarm_on{YType::boolean, "alarm-on"},
    thresh_hi{YType::uint32, "thresh-hi"},
    period_hi{YType::uint32, "period-hi"},
    thresh_lo{YType::uint32, "thresh-lo"},
    period_lo{YType::uint32, "period-lo"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    leaf_id{YType::uint32, "leaf-id"},
    last_cleared{YType::uint64, "last-cleared"}
{

    yang_name = "error"; yang_parent_name = "hardware-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return name.is_set
	|| asic_info.is_set
	|| node_key.is_set
	|| alarm_on.is_set
	|| thresh_hi.is_set
	|| period_hi.is_set
	|| thresh_lo.is_set
	|| period_lo.is_set
	|| count.is_set
	|| intr_type.is_set
	|| leaf_id.is_set
	|| last_cleared.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(last_cleared.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "name" || name == "asic-info" || name == "node-key" || name == "alarm-on" || name == "thresh-hi" || name == "period-hi" || name == "thresh-lo" || name == "period-lo" || name == "count" || name == "intr-type" || name == "leaf-id" || name == "last-cleared")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    name{YType::str, "name"},
    address{YType::uint64, "address"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::has_data() const
{
    return name.is_set
	|| address.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "address" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::ParitySoftErrors()
{

    yang_name = "parity-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::~ParitySoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::Error()
    :
    name{YType::str, "name"},
    asic_info{YType::str, "asic-info"},
    node_key{YType::uint32, "node-key"},
    alarm_on{YType::boolean, "alarm-on"},
    thresh_hi{YType::uint32, "thresh-hi"},
    period_hi{YType::uint32, "period-hi"},
    thresh_lo{YType::uint32, "thresh-lo"},
    period_lo{YType::uint32, "period-lo"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    leaf_id{YType::uint32, "leaf-id"},
    last_cleared{YType::uint64, "last-cleared"}
{

    yang_name = "error"; yang_parent_name = "parity-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return name.is_set
	|| asic_info.is_set
	|| node_key.is_set
	|| alarm_on.is_set
	|| thresh_hi.is_set
	|| period_hi.is_set
	|| thresh_lo.is_set
	|| period_lo.is_set
	|| count.is_set
	|| intr_type.is_set
	|| leaf_id.is_set
	|| last_cleared.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(last_cleared.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "name" || name == "asic-info" || name == "node-key" || name == "alarm-on" || name == "thresh-hi" || name == "period-hi" || name == "thresh-lo" || name == "period-lo" || name == "count" || name == "intr-type" || name == "leaf-id" || name == "last-cleared")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    name{YType::str, "name"},
    address{YType::uint64, "address"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo::has_data() const
{
    return name.is_set
	|| address.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "address" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::DescriptorSoftErrors()
{

    yang_name = "descriptor-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::~DescriptorSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "descriptor-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::Error()
    :
    name{YType::str, "name"},
    asic_info{YType::str, "asic-info"},
    node_key{YType::uint32, "node-key"},
    alarm_on{YType::boolean, "alarm-on"},
    thresh_hi{YType::uint32, "thresh-hi"},
    period_hi{YType::uint32, "period-hi"},
    thresh_lo{YType::uint32, "thresh-lo"},
    period_lo{YType::uint32, "period-lo"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    leaf_id{YType::uint32, "leaf-id"},
    last_cleared{YType::uint64, "last-cleared"}
{

    yang_name = "error"; yang_parent_name = "descriptor-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return name.is_set
	|| asic_info.is_set
	|| node_key.is_set
	|| alarm_on.is_set
	|| thresh_hi.is_set
	|| period_hi.is_set
	|| thresh_lo.is_set
	|| period_lo.is_set
	|| count.is_set
	|| intr_type.is_set
	|| leaf_id.is_set
	|| last_cleared.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(last_cleared.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "name" || name == "asic-info" || name == "node-key" || name == "alarm-on" || name == "thresh-hi" || name == "period-hi" || name == "thresh-lo" || name == "period-lo" || name == "count" || name == "intr-type" || name == "leaf-id" || name == "last-cleared")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    name{YType::str, "name"},
    address{YType::uint64, "address"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::has_data() const
{
    return name.is_set
	|| address.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "address" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::InterfaceSoftErrors()
{

    yang_name = "interface-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::~InterfaceSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::Error()
    :
    name{YType::str, "name"},
    asic_info{YType::str, "asic-info"},
    node_key{YType::uint32, "node-key"},
    alarm_on{YType::boolean, "alarm-on"},
    thresh_hi{YType::uint32, "thresh-hi"},
    period_hi{YType::uint32, "period-hi"},
    thresh_lo{YType::uint32, "thresh-lo"},
    period_lo{YType::uint32, "period-lo"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    leaf_id{YType::uint32, "leaf-id"},
    last_cleared{YType::uint64, "last-cleared"}
{

    yang_name = "error"; yang_parent_name = "interface-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return name.is_set
	|| asic_info.is_set
	|| node_key.is_set
	|| alarm_on.is_set
	|| thresh_hi.is_set
	|| period_hi.is_set
	|| thresh_lo.is_set
	|| period_lo.is_set
	|| count.is_set
	|| intr_type.is_set
	|| leaf_id.is_set
	|| last_cleared.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(last_cleared.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "name" || name == "asic-info" || name == "node-key" || name == "alarm-on" || name == "thresh-hi" || name == "period-hi" || name == "thresh-lo" || name == "period-lo" || name == "count" || name == "intr-type" || name == "leaf-id" || name == "last-cleared")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    name{YType::str, "name"},
    address{YType::uint64, "address"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::has_data() const
{
    return name.is_set
	|| address.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "address" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::IoHardErrors()
{

    yang_name = "io-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::~IoHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "io-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::Error()
    :
    name{YType::str, "name"},
    asic_info{YType::str, "asic-info"},
    node_key{YType::uint32, "node-key"},
    alarm_on{YType::boolean, "alarm-on"},
    thresh_hi{YType::uint32, "thresh-hi"},
    period_hi{YType::uint32, "period-hi"},
    thresh_lo{YType::uint32, "thresh-lo"},
    period_lo{YType::uint32, "period-lo"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    leaf_id{YType::uint32, "leaf-id"},
    last_cleared{YType::uint64, "last-cleared"}
{

    yang_name = "error"; yang_parent_name = "io-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return name.is_set
	|| asic_info.is_set
	|| node_key.is_set
	|| alarm_on.is_set
	|| thresh_hi.is_set
	|| period_hi.is_set
	|| thresh_lo.is_set
	|| period_lo.is_set
	|| count.is_set
	|| intr_type.is_set
	|| leaf_id.is_set
	|| last_cleared.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(last_cleared.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "name" || name == "asic-info" || name == "node-key" || name == "alarm-on" || name == "thresh-hi" || name == "period-hi" || name == "thresh-lo" || name == "period-lo" || name == "count" || name == "intr-type" || name == "leaf-id" || name == "last-cleared")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    name{YType::str, "name"},
    address{YType::uint64, "address"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::has_data() const
{
    return name.is_set
	|| address.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "address" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::ResetHardErrors()
{

    yang_name = "reset-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::~ResetHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::Error()
    :
    name{YType::str, "name"},
    asic_info{YType::str, "asic-info"},
    node_key{YType::uint32, "node-key"},
    alarm_on{YType::boolean, "alarm-on"},
    thresh_hi{YType::uint32, "thresh-hi"},
    period_hi{YType::uint32, "period-hi"},
    thresh_lo{YType::uint32, "thresh-lo"},
    period_lo{YType::uint32, "period-lo"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    leaf_id{YType::uint32, "leaf-id"},
    last_cleared{YType::uint64, "last-cleared"}
{

    yang_name = "error"; yang_parent_name = "reset-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return name.is_set
	|| asic_info.is_set
	|| node_key.is_set
	|| alarm_on.is_set
	|| thresh_hi.is_set
	|| period_hi.is_set
	|| thresh_lo.is_set
	|| period_lo.is_set
	|| count.is_set
	|| intr_type.is_set
	|| leaf_id.is_set
	|| last_cleared.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(last_cleared.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "name" || name == "asic-info" || name == "node-key" || name == "alarm-on" || name == "thresh-hi" || name == "period-hi" || name == "thresh-lo" || name == "period-lo" || name == "count" || name == "intr-type" || name == "leaf-id" || name == "last-cleared")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    name{YType::str, "name"},
    address{YType::uint64, "address"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo::has_data() const
{
    return name.is_set
	|| address.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "address" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::UcodeHardErrors()
{

    yang_name = "ucode-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::~UcodeHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucode-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::Error()
    :
    name{YType::str, "name"},
    asic_info{YType::str, "asic-info"},
    node_key{YType::uint32, "node-key"},
    alarm_on{YType::boolean, "alarm-on"},
    thresh_hi{YType::uint32, "thresh-hi"},
    period_hi{YType::uint32, "period-hi"},
    thresh_lo{YType::uint32, "thresh-lo"},
    period_lo{YType::uint32, "period-lo"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    leaf_id{YType::uint32, "leaf-id"},
    last_cleared{YType::uint64, "last-cleared"}
{

    yang_name = "error"; yang_parent_name = "ucode-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return name.is_set
	|| asic_info.is_set
	|| node_key.is_set
	|| alarm_on.is_set
	|| thresh_hi.is_set
	|| period_hi.is_set
	|| thresh_lo.is_set
	|| period_lo.is_set
	|| count.is_set
	|| intr_type.is_set
	|| leaf_id.is_set
	|| last_cleared.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(last_cleared.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "name" || name == "asic-info" || name == "node-key" || name == "alarm-on" || name == "thresh-hi" || name == "period-hi" || name == "thresh-lo" || name == "period-lo" || name == "count" || name == "intr-type" || name == "leaf-id" || name == "last-cleared")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    name{YType::str, "name"},
    address{YType::uint64, "address"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo::has_data() const
{
    return name.is_set
	|| address.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "address" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::AsicErrorMbeHard()
{

    yang_name = "asic-error-mbe-hard"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::~AsicErrorMbeHard()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-error-mbe-hard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : error)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::Error()
    :
    name{YType::str, "name"},
    asic_info{YType::str, "asic-info"},
    node_key{YType::uint32, "node-key"},
    alarm_on{YType::boolean, "alarm-on"},
    thresh_hi{YType::uint32, "thresh-hi"},
    period_hi{YType::uint32, "period-hi"},
    thresh_lo{YType::uint32, "thresh-lo"},
    period_lo{YType::uint32, "period-lo"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    leaf_id{YType::uint32, "leaf-id"},
    last_cleared{YType::uint64, "last-cleared"}
{

    yang_name = "error"; yang_parent_name = "asic-error-mbe-hard"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::has_data() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_data())
            return true;
    }
    return name.is_set
	|| asic_info.is_set
	|| node_key.is_set
	|| alarm_on.is_set
	|| thresh_hi.is_set
	|| period_hi.is_set
	|| thresh_lo.is_set
	|| period_lo.is_set
	|| count.is_set
	|| intr_type.is_set
	|| leaf_id.is_set
	|| last_cleared.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::has_operation() const
{
    for (std::size_t index=0; index<csrs_info.size(); index++)
    {
        if(csrs_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<last_err.size(); index++)
    {
        if(last_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(last_cleared.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : csrs_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : last_err)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intr-type")
    {
        intr_type = value;
        intr_type.value_namespace = name_space;
        intr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "name" || name == "asic-info" || name == "node-key" || name == "alarm-on" || name == "thresh-hi" || name == "period-hi" || name == "thresh-lo" || name == "period-lo" || name == "count" || name == "intr-type" || name == "leaf-id" || name == "last-cleared")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::CsrsInfo()
    :
    name{YType::str, "name"},
    address{YType::uint64, "address"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::has_data() const
{
    return name.is_set
	|| address.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "address" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::has_data() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return at_time.is_set
	|| at_time_nsec.is_set
	|| counter_val.is_set
	|| error_desc.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::has_operation() const
{
    for (auto const & leaf : error_regval.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(at_time.yfilter)
	|| ydk::is_set(at_time_nsec.yfilter)
	|| ydk::is_set(counter_val.yfilter)
	|| ydk::is_set(error_desc.yfilter)
	|| ydk::is_set(error_regval.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (at_time.is_set || is_set(at_time.yfilter)) leaf_name_data.push_back(at_time.get_name_leafdata());
    if (at_time_nsec.is_set || is_set(at_time_nsec.yfilter)) leaf_name_data.push_back(at_time_nsec.get_name_leafdata());
    if (counter_val.is_set || is_set(counter_val.yfilter)) leaf_name_data.push_back(counter_val.get_name_leafdata());
    if (error_desc.is_set || is_set(error_desc.yfilter)) leaf_name_data.push_back(error_desc.get_name_leafdata());

    auto error_regval_name_datas = error_regval.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), error_regval_name_datas.begin(), error_regval_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "at-time")
    {
        at_time = value;
        at_time.value_namespace = name_space;
        at_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec = value;
        at_time_nsec.value_namespace = name_space;
        at_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-val")
    {
        counter_val = value;
        counter_val.value_namespace = name_space;
        counter_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-desc")
    {
        error_desc = value;
        error_desc.value_namespace = name_space;
        error_desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-regval")
    {
        error_regval.append(value);
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "at-time")
    {
        at_time.yfilter = yfilter;
    }
    if(value_path == "at-time-nsec")
    {
        at_time_nsec.yfilter = yfilter;
    }
    if(value_path == "counter-val")
    {
        counter_val.yfilter = yfilter;
    }
    if(value_path == "error-desc")
    {
        error_desc.yfilter = yfilter;
    }
    if(value_path == "error-regval")
    {
        error_regval.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}


}
}

