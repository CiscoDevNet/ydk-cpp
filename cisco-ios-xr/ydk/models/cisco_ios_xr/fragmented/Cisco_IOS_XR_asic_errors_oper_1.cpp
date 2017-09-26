
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asic_errors_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asic_errors_oper {

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
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
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
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
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
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

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
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

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
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
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
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

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::MultipleBitSoftErrors()
{

    yang_name = "multiple-bit-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::~MultipleBitSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multiple-bit-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{

    yang_name = "error"; yang_parent_name = "multiple-bit-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::has_data() const
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
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::has_operation() const
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
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::has_operation() const
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

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::get_name_leaf_data() const
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

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
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
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
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
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
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
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
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
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
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

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
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

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
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
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
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

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::OutofResourceSoft()
{

    yang_name = "outof-resource-soft"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::~OutofResourceSoft()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outof-resource-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{

    yang_name = "error"; yang_parent_name = "outof-resource-soft"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::has_data() const
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
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::has_operation() const
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
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::has_operation() const
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

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::get_name_leaf_data() const
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

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::ParityHardErrors()
{

    yang_name = "parity-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::~ParityHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{

    yang_name = "error"; yang_parent_name = "parity-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::has_data() const
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
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::has_operation() const
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
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::has_operation() const
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

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::get_name_leaf_data() const
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

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
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
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
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
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
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
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
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
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
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

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
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

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
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
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
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
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
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
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
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
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
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
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
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

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
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

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
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
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
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

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::ResetSoftErrors()
{

    yang_name = "reset-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::~ResetSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{

    yang_name = "error"; yang_parent_name = "reset-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::has_data() const
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
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::has_operation() const
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
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::has_operation() const
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

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::get_name_leaf_data() const
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

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::SingleBitHardErrors()
{

    yang_name = "single-bit-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::~SingleBitHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-bit-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{

    yang_name = "error"; yang_parent_name = "single-bit-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::has_data() const
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
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::has_operation() const
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
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::has_operation() const
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

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::get_name_leaf_data() const
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

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::SingleBitSoftErrors()
{

    yang_name = "single-bit-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::~SingleBitSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-bit-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{

    yang_name = "error"; yang_parent_name = "single-bit-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::has_data() const
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
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::has_operation() const
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
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::has_operation() const
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

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::get_name_leaf_data() const
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

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::TimeOutHardErrors()
{

    yang_name = "time-out-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::~TimeOutHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-out-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{

    yang_name = "error"; yang_parent_name = "time-out-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::has_data() const
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
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::has_operation() const
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
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::has_operation() const
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

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::get_name_leaf_data() const
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

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::TimeOutSoftErrors()
{

    yang_name = "time-out-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::~TimeOutSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-out-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{

    yang_name = "error"; yang_parent_name = "time-out-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::has_data() const
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
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::has_operation() const
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
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::has_operation() const
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

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::get_name_leaf_data() const
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

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
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
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
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
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
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
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
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
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
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

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
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

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
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
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
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

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::UcodeSoftErrors()
{

    yang_name = "ucode-soft-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::~UcodeSoftErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucode-soft-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{

    yang_name = "error"; yang_parent_name = "ucode-soft-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::has_data() const
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
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::has_operation() const
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
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::has_operation() const
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

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::get_name_leaf_data() const
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

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at-time" || name == "at-time-nsec" || name == "counter-val" || name == "error-desc" || name == "error-regval")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::UnexpectedHardErrors()
{

    yang_name = "unexpected-hard-errors"; yang_parent_name = "error-path"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::~UnexpectedHardErrors()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::has_data() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::has_operation() const
{
    for (std::size_t index=0; index<error.size(); index++)
    {
        if(error[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unexpected-hard-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error")
    {
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error>();
        c->parent = this;
        error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::Error()
    :
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
{

    yang_name = "error"; yang_parent_name = "unexpected-hard-errors"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::~Error()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::has_data() const
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
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::has_operation() const
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
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr>();
        c->parent = this;
        last_err.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(width.yfilter);
}

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csrs-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::LastErr()
    :
    at_time{YType::uint64, "at-time"},
    at_time_nsec{YType::uint64, "at-time-nsec"},
    counter_val{YType::uint32, "counter-val"},
    error_desc{YType::str, "error-desc"},
    error_regval{YType::uint8, "error-regval"}
{

    yang_name = "last-err"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::~LastErr()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::has_data() const
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::has_operation() const
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

std::string AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::get_name_leaf_data() const
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

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr::has_leaf_or_child_of_name(const std::string & name) const
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
        for(auto const & c : error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : error)
    {
        children[c->get_segment_path()] = c;
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
    alarm_on{YType::boolean, "alarm-on"},
    asic_info{YType::str, "asic-info"},
    count{YType::uint32, "count"},
    intr_type{YType::uint32, "intr-type"},
    last_cleared{YType::uint64, "last-cleared"},
    leaf_id{YType::uint32, "leaf-id"},
    name{YType::str, "name"},
    node_key{YType::uint32, "node-key"},
    period_hi{YType::uint32, "period-hi"},
    period_lo{YType::uint32, "period-lo"},
    thresh_hi{YType::uint32, "thresh-hi"},
    thresh_lo{YType::uint32, "thresh-lo"}
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
    return alarm_on.is_set
	|| asic_info.is_set
	|| count.is_set
	|| intr_type.is_set
	|| last_cleared.is_set
	|| leaf_id.is_set
	|| name.is_set
	|| node_key.is_set
	|| period_hi.is_set
	|| period_lo.is_set
	|| thresh_hi.is_set
	|| thresh_lo.is_set;
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
	|| ydk::is_set(alarm_on.yfilter)
	|| ydk::is_set(asic_info.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(intr_type.yfilter)
	|| ydk::is_set(last_cleared.yfilter)
	|| ydk::is_set(leaf_id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(node_key.yfilter)
	|| ydk::is_set(period_hi.yfilter)
	|| ydk::is_set(period_lo.yfilter)
	|| ydk::is_set(thresh_hi.yfilter)
	|| ydk::is_set(thresh_lo.yfilter);
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

    if (alarm_on.is_set || is_set(alarm_on.yfilter)) leaf_name_data.push_back(alarm_on.get_name_leafdata());
    if (asic_info.is_set || is_set(asic_info.yfilter)) leaf_name_data.push_back(asic_info.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (intr_type.is_set || is_set(intr_type.yfilter)) leaf_name_data.push_back(intr_type.get_name_leafdata());
    if (last_cleared.is_set || is_set(last_cleared.yfilter)) leaf_name_data.push_back(last_cleared.get_name_leafdata());
    if (leaf_id.is_set || is_set(leaf_id.yfilter)) leaf_name_data.push_back(leaf_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (node_key.is_set || is_set(node_key.yfilter)) leaf_name_data.push_back(node_key.get_name_leafdata());
    if (period_hi.is_set || is_set(period_hi.yfilter)) leaf_name_data.push_back(period_hi.get_name_leafdata());
    if (period_lo.is_set || is_set(period_lo.yfilter)) leaf_name_data.push_back(period_lo.get_name_leafdata());
    if (thresh_hi.is_set || is_set(thresh_hi.yfilter)) leaf_name_data.push_back(thresh_hi.get_name_leafdata());
    if (thresh_lo.is_set || is_set(thresh_lo.yfilter)) leaf_name_data.push_back(thresh_lo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csrs-info")
    {
        for(auto const & c : csrs_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo>();
        c->parent = this;
        csrs_info.push_back(c);
        return c;
    }

    if(child_yang_name == "last-err")
    {
        for(auto const & c : last_err)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : csrs_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : last_err)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-on")
    {
        alarm_on = value;
        alarm_on.value_namespace = name_space;
        alarm_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic-info")
    {
        asic_info = value;
        asic_info.value_namespace = name_space;
        asic_info.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared")
    {
        last_cleared = value;
        last_cleared.value_namespace = name_space;
        last_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-id")
    {
        leaf_id = value;
        leaf_id.value_namespace = name_space;
        leaf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-key")
    {
        node_key = value;
        node_key.value_namespace = name_space;
        node_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-hi")
    {
        period_hi = value;
        period_hi.value_namespace = name_space;
        period_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-lo")
    {
        period_lo = value;
        period_lo.value_namespace = name_space;
        period_lo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi = value;
        thresh_hi.value_namespace = name_space;
        thresh_hi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo = value;
        thresh_lo.value_namespace = name_space;
        thresh_lo.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-on")
    {
        alarm_on.yfilter = yfilter;
    }
    if(value_path == "asic-info")
    {
        asic_info.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "intr-type")
    {
        intr_type.yfilter = yfilter;
    }
    if(value_path == "last-cleared")
    {
        last_cleared.yfilter = yfilter;
    }
    if(value_path == "leaf-id")
    {
        leaf_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "node-key")
    {
        node_key.yfilter = yfilter;
    }
    if(value_path == "period-hi")
    {
        period_hi.yfilter = yfilter;
    }
    if(value_path == "period-lo")
    {
        period_lo.yfilter = yfilter;
    }
    if(value_path == "thresh-hi")
    {
        thresh_hi.yfilter = yfilter;
    }
    if(value_path == "thresh-lo")
    {
        thresh_lo.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrs-info" || name == "last-err" || name == "alarm-on" || name == "asic-info" || name == "count" || name == "intr-type" || name == "last-cleared" || name == "leaf-id" || name == "name" || name == "node-key" || name == "period-hi" || name == "period-lo" || name == "thresh-hi" || name == "thresh-lo")
        return true;
    return false;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo::CsrsInfo()
    :
    address{YType::uint64, "address"},
    name{YType::str, "name"},
    width{YType::uint32, "width"}
{

    yang_name = "csrs-info"; yang_parent_name = "error"; is_top_level_class = false; has_list_ancestor = true;
}

AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo::~CsrsInfo()
{
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo::has_data() const
{
    return address.is_set
	|| name.is_set
	|| width.is_set;
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(name.yfilter)
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

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
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
    return children;
}

void AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name" || name == "width")
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


}
}

