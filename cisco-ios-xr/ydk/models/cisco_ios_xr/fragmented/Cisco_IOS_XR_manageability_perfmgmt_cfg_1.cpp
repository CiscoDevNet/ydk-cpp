
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_manageability_perfmgmt_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_manageability_perfmgmt_cfg {

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::InputPeakPkts()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-peak-pkts"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::~InputPeakPkts()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-peak-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::InputPeakRate()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-peak-rate"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::~InputPeakRate()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::OutputDataRate()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-data-rate"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::~OutputDataRate()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-data-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::OutputPacketRate()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-packet-rate"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::~OutputPacketRate()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-packet-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::OutputPeakPkts()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-peak-pkts"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::~OutputPeakPkts()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-peak-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::OutputPeakRate()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-peak-rate"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::~OutputPeakRate()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-peak-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterface()
    :
    generic_counter_interface_templates(std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates>())
{
    generic_counter_interface_templates->parent = this;

    yang_name = "generic-counter-interface"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::GenericCounterInterface::~GenericCounterInterface()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::has_data() const
{
    return (generic_counter_interface_templates !=  nullptr && generic_counter_interface_templates->has_data());
}

bool PerfMgmt::Threshold::GenericCounterInterface::has_operation() const
{
    return is_set(yfilter)
	|| (generic_counter_interface_templates !=  nullptr && generic_counter_interface_templates->has_operation());
}

std::string PerfMgmt::Threshold::GenericCounterInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::GenericCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-counter-interface-templates")
    {
        if(generic_counter_interface_templates == nullptr)
        {
            generic_counter_interface_templates = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates>();
        }
        return generic_counter_interface_templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generic_counter_interface_templates != nullptr)
    {
        children["generic-counter-interface-templates"] = generic_counter_interface_templates;
    }

    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::GenericCounterInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-counter-interface-templates")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplates()
{

    yang_name = "generic-counter-interface-templates"; yang_parent_name = "generic-counter-interface"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::~GenericCounterInterfaceTemplates()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::has_data() const
{
    for (std::size_t index=0; index<generic_counter_interface_template.size(); index++)
    {
        if(generic_counter_interface_template[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::has_operation() const
{
    for (std::size_t index=0; index<generic_counter_interface_template.size(); index++)
    {
        if(generic_counter_interface_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/generic-counter-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interface-templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-counter-interface-template")
    {
        for(auto const & c : generic_counter_interface_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate>();
        c->parent = this;
        generic_counter_interface_template.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : generic_counter_interface_template)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-counter-interface-template")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::GenericCounterInterfaceTemplate()
    :
    template_name{YType::str, "template-name"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    vrf_group{YType::str, "vrf-group"}
    	,
    in_broadcast_pkts(nullptr) // presence node
	,in_multicast_pkts(nullptr) // presence node
	,in_octets(nullptr) // presence node
	,in_packets(nullptr) // presence node
	,in_ucast_pkts(nullptr) // presence node
	,input_crc(nullptr) // presence node
	,input_frame(nullptr) // presence node
	,input_overrun(nullptr) // presence node
	,input_queue_drops(nullptr) // presence node
	,input_total_drops(nullptr) // presence node
	,input_total_errors(nullptr) // presence node
	,input_unknown_proto(nullptr) // presence node
	,out_broadcast_pkts(nullptr) // presence node
	,out_multicast_pkts(nullptr) // presence node
	,out_octets(nullptr) // presence node
	,out_packets(nullptr) // presence node
	,out_ucast_pkts(nullptr) // presence node
	,output_total_drops(nullptr) // presence node
	,output_total_errors(nullptr) // presence node
	,output_underrun(nullptr) // presence node
{

    yang_name = "generic-counter-interface-template"; yang_parent_name = "generic-counter-interface-templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::~GenericCounterInterfaceTemplate()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::has_data() const
{
    return template_name.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| vrf_group.is_set
	|| (in_broadcast_pkts !=  nullptr && in_broadcast_pkts->has_data())
	|| (in_multicast_pkts !=  nullptr && in_multicast_pkts->has_data())
	|| (in_octets !=  nullptr && in_octets->has_data())
	|| (in_packets !=  nullptr && in_packets->has_data())
	|| (in_ucast_pkts !=  nullptr && in_ucast_pkts->has_data())
	|| (input_crc !=  nullptr && input_crc->has_data())
	|| (input_frame !=  nullptr && input_frame->has_data())
	|| (input_overrun !=  nullptr && input_overrun->has_data())
	|| (input_queue_drops !=  nullptr && input_queue_drops->has_data())
	|| (input_total_drops !=  nullptr && input_total_drops->has_data())
	|| (input_total_errors !=  nullptr && input_total_errors->has_data())
	|| (input_unknown_proto !=  nullptr && input_unknown_proto->has_data())
	|| (out_broadcast_pkts !=  nullptr && out_broadcast_pkts->has_data())
	|| (out_multicast_pkts !=  nullptr && out_multicast_pkts->has_data())
	|| (out_octets !=  nullptr && out_octets->has_data())
	|| (out_packets !=  nullptr && out_packets->has_data())
	|| (out_ucast_pkts !=  nullptr && out_ucast_pkts->has_data())
	|| (output_total_drops !=  nullptr && output_total_drops->has_data())
	|| (output_total_errors !=  nullptr && output_total_errors->has_data())
	|| (output_underrun !=  nullptr && output_underrun->has_data());
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(reg_exp_group.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(vrf_group.yfilter)
	|| (in_broadcast_pkts !=  nullptr && in_broadcast_pkts->has_operation())
	|| (in_multicast_pkts !=  nullptr && in_multicast_pkts->has_operation())
	|| (in_octets !=  nullptr && in_octets->has_operation())
	|| (in_packets !=  nullptr && in_packets->has_operation())
	|| (in_ucast_pkts !=  nullptr && in_ucast_pkts->has_operation())
	|| (input_crc !=  nullptr && input_crc->has_operation())
	|| (input_frame !=  nullptr && input_frame->has_operation())
	|| (input_overrun !=  nullptr && input_overrun->has_operation())
	|| (input_queue_drops !=  nullptr && input_queue_drops->has_operation())
	|| (input_total_drops !=  nullptr && input_total_drops->has_operation())
	|| (input_total_errors !=  nullptr && input_total_errors->has_operation())
	|| (input_unknown_proto !=  nullptr && input_unknown_proto->has_operation())
	|| (out_broadcast_pkts !=  nullptr && out_broadcast_pkts->has_operation())
	|| (out_multicast_pkts !=  nullptr && out_multicast_pkts->has_operation())
	|| (out_octets !=  nullptr && out_octets->has_operation())
	|| (out_packets !=  nullptr && out_packets->has_operation())
	|| (out_ucast_pkts !=  nullptr && out_ucast_pkts->has_operation())
	|| (output_total_drops !=  nullptr && output_total_drops->has_operation())
	|| (output_total_errors !=  nullptr && output_total_errors->has_operation())
	|| (output_underrun !=  nullptr && output_underrun->has_operation());
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/generic-counter-interface/generic-counter-interface-templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interface-template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.yfilter)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.yfilter)) leaf_name_data.push_back(vrf_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-broadcast-pkts")
    {
        if(in_broadcast_pkts == nullptr)
        {
            in_broadcast_pkts = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts>();
        }
        return in_broadcast_pkts;
    }

    if(child_yang_name == "in-multicast-pkts")
    {
        if(in_multicast_pkts == nullptr)
        {
            in_multicast_pkts = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts>();
        }
        return in_multicast_pkts;
    }

    if(child_yang_name == "in-octets")
    {
        if(in_octets == nullptr)
        {
            in_octets = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets>();
        }
        return in_octets;
    }

    if(child_yang_name == "in-packets")
    {
        if(in_packets == nullptr)
        {
            in_packets = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets>();
        }
        return in_packets;
    }

    if(child_yang_name == "in-ucast-pkts")
    {
        if(in_ucast_pkts == nullptr)
        {
            in_ucast_pkts = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts>();
        }
        return in_ucast_pkts;
    }

    if(child_yang_name == "input-crc")
    {
        if(input_crc == nullptr)
        {
            input_crc = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc>();
        }
        return input_crc;
    }

    if(child_yang_name == "input-frame")
    {
        if(input_frame == nullptr)
        {
            input_frame = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame>();
        }
        return input_frame;
    }

    if(child_yang_name == "input-overrun")
    {
        if(input_overrun == nullptr)
        {
            input_overrun = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun>();
        }
        return input_overrun;
    }

    if(child_yang_name == "input-queue-drops")
    {
        if(input_queue_drops == nullptr)
        {
            input_queue_drops = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops>();
        }
        return input_queue_drops;
    }

    if(child_yang_name == "input-total-drops")
    {
        if(input_total_drops == nullptr)
        {
            input_total_drops = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops>();
        }
        return input_total_drops;
    }

    if(child_yang_name == "input-total-errors")
    {
        if(input_total_errors == nullptr)
        {
            input_total_errors = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors>();
        }
        return input_total_errors;
    }

    if(child_yang_name == "input-unknown-proto")
    {
        if(input_unknown_proto == nullptr)
        {
            input_unknown_proto = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto>();
        }
        return input_unknown_proto;
    }

    if(child_yang_name == "out-broadcast-pkts")
    {
        if(out_broadcast_pkts == nullptr)
        {
            out_broadcast_pkts = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts>();
        }
        return out_broadcast_pkts;
    }

    if(child_yang_name == "out-multicast-pkts")
    {
        if(out_multicast_pkts == nullptr)
        {
            out_multicast_pkts = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts>();
        }
        return out_multicast_pkts;
    }

    if(child_yang_name == "out-octets")
    {
        if(out_octets == nullptr)
        {
            out_octets = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets>();
        }
        return out_octets;
    }

    if(child_yang_name == "out-packets")
    {
        if(out_packets == nullptr)
        {
            out_packets = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets>();
        }
        return out_packets;
    }

    if(child_yang_name == "out-ucast-pkts")
    {
        if(out_ucast_pkts == nullptr)
        {
            out_ucast_pkts = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts>();
        }
        return out_ucast_pkts;
    }

    if(child_yang_name == "output-total-drops")
    {
        if(output_total_drops == nullptr)
        {
            output_total_drops = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops>();
        }
        return output_total_drops;
    }

    if(child_yang_name == "output-total-errors")
    {
        if(output_total_errors == nullptr)
        {
            output_total_errors = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors>();
        }
        return output_total_errors;
    }

    if(child_yang_name == "output-underrun")
    {
        if(output_underrun == nullptr)
        {
            output_underrun = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun>();
        }
        return output_underrun;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in_broadcast_pkts != nullptr)
    {
        children["in-broadcast-pkts"] = in_broadcast_pkts;
    }

    if(in_multicast_pkts != nullptr)
    {
        children["in-multicast-pkts"] = in_multicast_pkts;
    }

    if(in_octets != nullptr)
    {
        children["in-octets"] = in_octets;
    }

    if(in_packets != nullptr)
    {
        children["in-packets"] = in_packets;
    }

    if(in_ucast_pkts != nullptr)
    {
        children["in-ucast-pkts"] = in_ucast_pkts;
    }

    if(input_crc != nullptr)
    {
        children["input-crc"] = input_crc;
    }

    if(input_frame != nullptr)
    {
        children["input-frame"] = input_frame;
    }

    if(input_overrun != nullptr)
    {
        children["input-overrun"] = input_overrun;
    }

    if(input_queue_drops != nullptr)
    {
        children["input-queue-drops"] = input_queue_drops;
    }

    if(input_total_drops != nullptr)
    {
        children["input-total-drops"] = input_total_drops;
    }

    if(input_total_errors != nullptr)
    {
        children["input-total-errors"] = input_total_errors;
    }

    if(input_unknown_proto != nullptr)
    {
        children["input-unknown-proto"] = input_unknown_proto;
    }

    if(out_broadcast_pkts != nullptr)
    {
        children["out-broadcast-pkts"] = out_broadcast_pkts;
    }

    if(out_multicast_pkts != nullptr)
    {
        children["out-multicast-pkts"] = out_multicast_pkts;
    }

    if(out_octets != nullptr)
    {
        children["out-octets"] = out_octets;
    }

    if(out_packets != nullptr)
    {
        children["out-packets"] = out_packets;
    }

    if(out_ucast_pkts != nullptr)
    {
        children["out-ucast-pkts"] = out_ucast_pkts;
    }

    if(output_total_drops != nullptr)
    {
        children["output-total-drops"] = output_total_drops;
    }

    if(output_total_errors != nullptr)
    {
        children["output-total-errors"] = output_total_errors;
    }

    if(output_underrun != nullptr)
    {
        children["output-underrun"] = output_underrun;
    }

    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
        reg_exp_group.value_namespace = name_space;
        reg_exp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
        vrf_group.value_namespace = name_space;
        vrf_group.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "vrf-group")
    {
        vrf_group.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-broadcast-pkts" || name == "in-multicast-pkts" || name == "in-octets" || name == "in-packets" || name == "in-ucast-pkts" || name == "input-crc" || name == "input-frame" || name == "input-overrun" || name == "input-queue-drops" || name == "input-total-drops" || name == "input-total-errors" || name == "input-unknown-proto" || name == "out-broadcast-pkts" || name == "out-multicast-pkts" || name == "out-octets" || name == "out-packets" || name == "out-ucast-pkts" || name == "output-total-drops" || name == "output-total-errors" || name == "output-underrun" || name == "template-name" || name == "reg-exp-group" || name == "sample-interval" || name == "vrf-group")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::InBroadcastPkts()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "in-broadcast-pkts"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::~InBroadcastPkts()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-broadcast-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::InMulticastPkts()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "in-multicast-pkts"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::~InMulticastPkts()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-multicast-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::InOctets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "in-octets"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::~InOctets()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::InPackets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "in-packets"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::~InPackets()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::InUcastPkts()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "in-ucast-pkts"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::~InUcastPkts()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ucast-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::InputCrc()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-crc"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::~InputCrc()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::InputFrame()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-frame"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::~InputFrame()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-frame";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::InputOverrun()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-overrun"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::~InputOverrun()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-overrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::InputQueueDrops()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-queue-drops"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::~InputQueueDrops()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-queue-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::InputTotalDrops()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-total-drops"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::~InputTotalDrops()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-total-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::InputTotalErrors()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-total-errors"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::~InputTotalErrors()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-total-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::InputUnknownProto()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-unknown-proto"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::~InputUnknownProto()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-unknown-proto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::OutBroadcastPkts()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "out-broadcast-pkts"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::~OutBroadcastPkts()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-broadcast-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::OutMulticastPkts()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "out-multicast-pkts"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::~OutMulticastPkts()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-multicast-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::OutOctets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "out-octets"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::~OutOctets()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::OutPackets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "out-packets"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::~OutPackets()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::OutUcastPkts()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "out-ucast-pkts"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::~OutUcastPkts()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ucast-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::OutputTotalDrops()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-total-drops"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::~OutputTotalDrops()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-total-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::OutputTotalErrors()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-total-errors"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::~OutputTotalErrors()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-total-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::OutputUnderrun()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-underrun"; yang_parent_name = "generic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::~OutputUnderrun()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-underrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMpls()
    :
    ldp_mpls_templates(std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates>())
{
    ldp_mpls_templates->parent = this;

    yang_name = "ldp-mpls"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::LdpMpls::~LdpMpls()
{
}

bool PerfMgmt::Threshold::LdpMpls::has_data() const
{
    return (ldp_mpls_templates !=  nullptr && ldp_mpls_templates->has_data());
}

bool PerfMgmt::Threshold::LdpMpls::has_operation() const
{
    return is_set(yfilter)
	|| (ldp_mpls_templates !=  nullptr && ldp_mpls_templates->has_operation());
}

std::string PerfMgmt::Threshold::LdpMpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::LdpMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-mpls-templates")
    {
        if(ldp_mpls_templates == nullptr)
        {
            ldp_mpls_templates = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates>();
        }
        return ldp_mpls_templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ldp_mpls_templates != nullptr)
    {
        children["ldp-mpls-templates"] = ldp_mpls_templates;
    }

    return children;
}

void PerfMgmt::Threshold::LdpMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::LdpMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::LdpMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp-mpls-templates")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplates()
{

    yang_name = "ldp-mpls-templates"; yang_parent_name = "ldp-mpls"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::~LdpMplsTemplates()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::has_data() const
{
    for (std::size_t index=0; index<ldp_mpls_template.size(); index++)
    {
        if(ldp_mpls_template[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::has_operation() const
{
    for (std::size_t index=0; index<ldp_mpls_template.size(); index++)
    {
        if(ldp_mpls_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/ldp-mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-mpls-templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-mpls-template")
    {
        for(auto const & c : ldp_mpls_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate>();
        c->parent = this;
        ldp_mpls_template.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ldp_mpls_template)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp-mpls-template")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LdpMplsTemplate()
    :
    template_name{YType::str, "template-name"},
    sample_interval{YType::uint32, "sample-interval"}
    	,
    address_msgs_rcvd(nullptr) // presence node
	,address_msgs_sent(nullptr) // presence node
	,address_withdraw_msgs_rcvd(nullptr) // presence node
	,address_withdraw_msgs_sent(nullptr) // presence node
	,init_msgs_rcvd(nullptr) // presence node
	,init_msgs_sent(nullptr) // presence node
	,keepalive_msgs_rcvd(nullptr) // presence node
	,keepalive_msgs_sent(nullptr) // presence node
	,label_mapping_msgs_rcvd(nullptr) // presence node
	,label_mapping_msgs_sent(nullptr) // presence node
	,label_release_msgs_rcvd(nullptr) // presence node
	,label_release_msgs_sent(nullptr) // presence node
	,label_withdraw_msgs_rcvd(nullptr) // presence node
	,label_withdraw_msgs_sent(nullptr) // presence node
	,notification_msgs_rcvd(nullptr) // presence node
	,notification_msgs_sent(nullptr) // presence node
	,total_msgs_rcvd(nullptr) // presence node
	,total_msgs_sent(nullptr) // presence node
{

    yang_name = "ldp-mpls-template"; yang_parent_name = "ldp-mpls-templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::~LdpMplsTemplate()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::has_data() const
{
    return template_name.is_set
	|| sample_interval.is_set
	|| (address_msgs_rcvd !=  nullptr && address_msgs_rcvd->has_data())
	|| (address_msgs_sent !=  nullptr && address_msgs_sent->has_data())
	|| (address_withdraw_msgs_rcvd !=  nullptr && address_withdraw_msgs_rcvd->has_data())
	|| (address_withdraw_msgs_sent !=  nullptr && address_withdraw_msgs_sent->has_data())
	|| (init_msgs_rcvd !=  nullptr && init_msgs_rcvd->has_data())
	|| (init_msgs_sent !=  nullptr && init_msgs_sent->has_data())
	|| (keepalive_msgs_rcvd !=  nullptr && keepalive_msgs_rcvd->has_data())
	|| (keepalive_msgs_sent !=  nullptr && keepalive_msgs_sent->has_data())
	|| (label_mapping_msgs_rcvd !=  nullptr && label_mapping_msgs_rcvd->has_data())
	|| (label_mapping_msgs_sent !=  nullptr && label_mapping_msgs_sent->has_data())
	|| (label_release_msgs_rcvd !=  nullptr && label_release_msgs_rcvd->has_data())
	|| (label_release_msgs_sent !=  nullptr && label_release_msgs_sent->has_data())
	|| (label_withdraw_msgs_rcvd !=  nullptr && label_withdraw_msgs_rcvd->has_data())
	|| (label_withdraw_msgs_sent !=  nullptr && label_withdraw_msgs_sent->has_data())
	|| (notification_msgs_rcvd !=  nullptr && notification_msgs_rcvd->has_data())
	|| (notification_msgs_sent !=  nullptr && notification_msgs_sent->has_data())
	|| (total_msgs_rcvd !=  nullptr && total_msgs_rcvd->has_data())
	|| (total_msgs_sent !=  nullptr && total_msgs_sent->has_data());
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| (address_msgs_rcvd !=  nullptr && address_msgs_rcvd->has_operation())
	|| (address_msgs_sent !=  nullptr && address_msgs_sent->has_operation())
	|| (address_withdraw_msgs_rcvd !=  nullptr && address_withdraw_msgs_rcvd->has_operation())
	|| (address_withdraw_msgs_sent !=  nullptr && address_withdraw_msgs_sent->has_operation())
	|| (init_msgs_rcvd !=  nullptr && init_msgs_rcvd->has_operation())
	|| (init_msgs_sent !=  nullptr && init_msgs_sent->has_operation())
	|| (keepalive_msgs_rcvd !=  nullptr && keepalive_msgs_rcvd->has_operation())
	|| (keepalive_msgs_sent !=  nullptr && keepalive_msgs_sent->has_operation())
	|| (label_mapping_msgs_rcvd !=  nullptr && label_mapping_msgs_rcvd->has_operation())
	|| (label_mapping_msgs_sent !=  nullptr && label_mapping_msgs_sent->has_operation())
	|| (label_release_msgs_rcvd !=  nullptr && label_release_msgs_rcvd->has_operation())
	|| (label_release_msgs_sent !=  nullptr && label_release_msgs_sent->has_operation())
	|| (label_withdraw_msgs_rcvd !=  nullptr && label_withdraw_msgs_rcvd->has_operation())
	|| (label_withdraw_msgs_sent !=  nullptr && label_withdraw_msgs_sent->has_operation())
	|| (notification_msgs_rcvd !=  nullptr && notification_msgs_rcvd->has_operation())
	|| (notification_msgs_sent !=  nullptr && notification_msgs_sent->has_operation())
	|| (total_msgs_rcvd !=  nullptr && total_msgs_rcvd->has_operation())
	|| (total_msgs_sent !=  nullptr && total_msgs_sent->has_operation());
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/ldp-mpls/ldp-mpls-templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-mpls-template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-msgs-rcvd")
    {
        if(address_msgs_rcvd == nullptr)
        {
            address_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd>();
        }
        return address_msgs_rcvd;
    }

    if(child_yang_name == "address-msgs-sent")
    {
        if(address_msgs_sent == nullptr)
        {
            address_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent>();
        }
        return address_msgs_sent;
    }

    if(child_yang_name == "address-withdraw-msgs-rcvd")
    {
        if(address_withdraw_msgs_rcvd == nullptr)
        {
            address_withdraw_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd>();
        }
        return address_withdraw_msgs_rcvd;
    }

    if(child_yang_name == "address-withdraw-msgs-sent")
    {
        if(address_withdraw_msgs_sent == nullptr)
        {
            address_withdraw_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent>();
        }
        return address_withdraw_msgs_sent;
    }

    if(child_yang_name == "init-msgs-rcvd")
    {
        if(init_msgs_rcvd == nullptr)
        {
            init_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd>();
        }
        return init_msgs_rcvd;
    }

    if(child_yang_name == "init-msgs-sent")
    {
        if(init_msgs_sent == nullptr)
        {
            init_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent>();
        }
        return init_msgs_sent;
    }

    if(child_yang_name == "keepalive-msgs-rcvd")
    {
        if(keepalive_msgs_rcvd == nullptr)
        {
            keepalive_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd>();
        }
        return keepalive_msgs_rcvd;
    }

    if(child_yang_name == "keepalive-msgs-sent")
    {
        if(keepalive_msgs_sent == nullptr)
        {
            keepalive_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent>();
        }
        return keepalive_msgs_sent;
    }

    if(child_yang_name == "label-mapping-msgs-rcvd")
    {
        if(label_mapping_msgs_rcvd == nullptr)
        {
            label_mapping_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd>();
        }
        return label_mapping_msgs_rcvd;
    }

    if(child_yang_name == "label-mapping-msgs-sent")
    {
        if(label_mapping_msgs_sent == nullptr)
        {
            label_mapping_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent>();
        }
        return label_mapping_msgs_sent;
    }

    if(child_yang_name == "label-release-msgs-rcvd")
    {
        if(label_release_msgs_rcvd == nullptr)
        {
            label_release_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd>();
        }
        return label_release_msgs_rcvd;
    }

    if(child_yang_name == "label-release-msgs-sent")
    {
        if(label_release_msgs_sent == nullptr)
        {
            label_release_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent>();
        }
        return label_release_msgs_sent;
    }

    if(child_yang_name == "label-withdraw-msgs-rcvd")
    {
        if(label_withdraw_msgs_rcvd == nullptr)
        {
            label_withdraw_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd>();
        }
        return label_withdraw_msgs_rcvd;
    }

    if(child_yang_name == "label-withdraw-msgs-sent")
    {
        if(label_withdraw_msgs_sent == nullptr)
        {
            label_withdraw_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent>();
        }
        return label_withdraw_msgs_sent;
    }

    if(child_yang_name == "notification-msgs-rcvd")
    {
        if(notification_msgs_rcvd == nullptr)
        {
            notification_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd>();
        }
        return notification_msgs_rcvd;
    }

    if(child_yang_name == "notification-msgs-sent")
    {
        if(notification_msgs_sent == nullptr)
        {
            notification_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent>();
        }
        return notification_msgs_sent;
    }

    if(child_yang_name == "total-msgs-rcvd")
    {
        if(total_msgs_rcvd == nullptr)
        {
            total_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd>();
        }
        return total_msgs_rcvd;
    }

    if(child_yang_name == "total-msgs-sent")
    {
        if(total_msgs_sent == nullptr)
        {
            total_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent>();
        }
        return total_msgs_sent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_msgs_rcvd != nullptr)
    {
        children["address-msgs-rcvd"] = address_msgs_rcvd;
    }

    if(address_msgs_sent != nullptr)
    {
        children["address-msgs-sent"] = address_msgs_sent;
    }

    if(address_withdraw_msgs_rcvd != nullptr)
    {
        children["address-withdraw-msgs-rcvd"] = address_withdraw_msgs_rcvd;
    }

    if(address_withdraw_msgs_sent != nullptr)
    {
        children["address-withdraw-msgs-sent"] = address_withdraw_msgs_sent;
    }

    if(init_msgs_rcvd != nullptr)
    {
        children["init-msgs-rcvd"] = init_msgs_rcvd;
    }

    if(init_msgs_sent != nullptr)
    {
        children["init-msgs-sent"] = init_msgs_sent;
    }

    if(keepalive_msgs_rcvd != nullptr)
    {
        children["keepalive-msgs-rcvd"] = keepalive_msgs_rcvd;
    }

    if(keepalive_msgs_sent != nullptr)
    {
        children["keepalive-msgs-sent"] = keepalive_msgs_sent;
    }

    if(label_mapping_msgs_rcvd != nullptr)
    {
        children["label-mapping-msgs-rcvd"] = label_mapping_msgs_rcvd;
    }

    if(label_mapping_msgs_sent != nullptr)
    {
        children["label-mapping-msgs-sent"] = label_mapping_msgs_sent;
    }

    if(label_release_msgs_rcvd != nullptr)
    {
        children["label-release-msgs-rcvd"] = label_release_msgs_rcvd;
    }

    if(label_release_msgs_sent != nullptr)
    {
        children["label-release-msgs-sent"] = label_release_msgs_sent;
    }

    if(label_withdraw_msgs_rcvd != nullptr)
    {
        children["label-withdraw-msgs-rcvd"] = label_withdraw_msgs_rcvd;
    }

    if(label_withdraw_msgs_sent != nullptr)
    {
        children["label-withdraw-msgs-sent"] = label_withdraw_msgs_sent;
    }

    if(notification_msgs_rcvd != nullptr)
    {
        children["notification-msgs-rcvd"] = notification_msgs_rcvd;
    }

    if(notification_msgs_sent != nullptr)
    {
        children["notification-msgs-sent"] = notification_msgs_sent;
    }

    if(total_msgs_rcvd != nullptr)
    {
        children["total-msgs-rcvd"] = total_msgs_rcvd;
    }

    if(total_msgs_sent != nullptr)
    {
        children["total-msgs-sent"] = total_msgs_sent;
    }

    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-msgs-rcvd" || name == "address-msgs-sent" || name == "address-withdraw-msgs-rcvd" || name == "address-withdraw-msgs-sent" || name == "init-msgs-rcvd" || name == "init-msgs-sent" || name == "keepalive-msgs-rcvd" || name == "keepalive-msgs-sent" || name == "label-mapping-msgs-rcvd" || name == "label-mapping-msgs-sent" || name == "label-release-msgs-rcvd" || name == "label-release-msgs-sent" || name == "label-withdraw-msgs-rcvd" || name == "label-withdraw-msgs-sent" || name == "notification-msgs-rcvd" || name == "notification-msgs-sent" || name == "total-msgs-rcvd" || name == "total-msgs-sent" || name == "template-name" || name == "sample-interval")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::AddressMsgsRcvd()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "address-msgs-rcvd"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::~AddressMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-msgs-rcvd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::AddressMsgsSent()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "address-msgs-sent"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::~AddressMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-msgs-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::AddressWithdrawMsgsRcvd()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "address-withdraw-msgs-rcvd"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::~AddressWithdrawMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-withdraw-msgs-rcvd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::AddressWithdrawMsgsSent()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "address-withdraw-msgs-sent"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::~AddressWithdrawMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-withdraw-msgs-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::InitMsgsRcvd()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "init-msgs-rcvd"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::~InitMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-msgs-rcvd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::InitMsgsSent()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "init-msgs-sent"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::~InitMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-msgs-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::KeepaliveMsgsRcvd()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "keepalive-msgs-rcvd"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::~KeepaliveMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-msgs-rcvd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::KeepaliveMsgsSent()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "keepalive-msgs-sent"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::~KeepaliveMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-msgs-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::LabelMappingMsgsRcvd()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "label-mapping-msgs-rcvd"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::~LabelMappingMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-mapping-msgs-rcvd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::LabelMappingMsgsSent()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "label-mapping-msgs-sent"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::~LabelMappingMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-mapping-msgs-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::LabelReleaseMsgsRcvd()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "label-release-msgs-rcvd"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::~LabelReleaseMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-release-msgs-rcvd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::LabelReleaseMsgsSent()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "label-release-msgs-sent"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::~LabelReleaseMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-release-msgs-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::LabelWithdrawMsgsRcvd()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "label-withdraw-msgs-rcvd"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::~LabelWithdrawMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-withdraw-msgs-rcvd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::LabelWithdrawMsgsSent()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "label-withdraw-msgs-sent"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::~LabelWithdrawMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-withdraw-msgs-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::NotificationMsgsRcvd()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "notification-msgs-rcvd"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::~NotificationMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification-msgs-rcvd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::NotificationMsgsSent()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "notification-msgs-sent"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::~NotificationMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification-msgs-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::TotalMsgsRcvd()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "total-msgs-rcvd"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::~TotalMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-msgs-rcvd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::TotalMsgsSent()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "total-msgs-sent"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::~TotalMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-msgs-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::MemoryNode::MemoryNode()
    :
    memory_node_templates(std::make_shared<PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates>())
{
    memory_node_templates->parent = this;

    yang_name = "memory-node"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::MemoryNode::~MemoryNode()
{
}

bool PerfMgmt::Threshold::MemoryNode::has_data() const
{
    return (memory_node_templates !=  nullptr && memory_node_templates->has_data());
}

bool PerfMgmt::Threshold::MemoryNode::has_operation() const
{
    return is_set(yfilter)
	|| (memory_node_templates !=  nullptr && memory_node_templates->has_operation());
}

std::string PerfMgmt::Threshold::MemoryNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::MemoryNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::MemoryNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::MemoryNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "memory-node-templates")
    {
        if(memory_node_templates == nullptr)
        {
            memory_node_templates = std::make_shared<PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates>();
        }
        return memory_node_templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::MemoryNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(memory_node_templates != nullptr)
    {
        children["memory-node-templates"] = memory_node_templates;
    }

    return children;
}

void PerfMgmt::Threshold::MemoryNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::MemoryNode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::MemoryNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-node-templates")
        return true;
    return false;
}

PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplates()
{

    yang_name = "memory-node-templates"; yang_parent_name = "memory-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::~MemoryNodeTemplates()
{
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::has_data() const
{
    for (std::size_t index=0; index<memory_node_template.size(); index++)
    {
        if(memory_node_template[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::has_operation() const
{
    for (std::size_t index=0; index<memory_node_template.size(); index++)
    {
        if(memory_node_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/memory-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-node-templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "memory-node-template")
    {
        for(auto const & c : memory_node_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate>();
        c->parent = this;
        memory_node_template.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : memory_node_template)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-node-template")
        return true;
    return false;
}

PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::MemoryNodeTemplate()
    :
    template_name{YType::str, "template-name"},
    sample_interval{YType::uint32, "sample-interval"}
    	,
    curr_memory(nullptr) // presence node
	,peak_memory(nullptr) // presence node
{

    yang_name = "memory-node-template"; yang_parent_name = "memory-node-templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::~MemoryNodeTemplate()
{
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::has_data() const
{
    return template_name.is_set
	|| sample_interval.is_set
	|| (curr_memory !=  nullptr && curr_memory->has_data())
	|| (peak_memory !=  nullptr && peak_memory->has_data());
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| (curr_memory !=  nullptr && curr_memory->has_operation())
	|| (peak_memory !=  nullptr && peak_memory->has_operation());
}

std::string PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/memory-node/memory-node-templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-node-template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "curr-memory")
    {
        if(curr_memory == nullptr)
        {
            curr_memory = std::make_shared<PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory>();
        }
        return curr_memory;
    }

    if(child_yang_name == "peak-memory")
    {
        if(peak_memory == nullptr)
        {
            peak_memory = std::make_shared<PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory>();
        }
        return peak_memory;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(curr_memory != nullptr)
    {
        children["curr-memory"] = curr_memory;
    }

    if(peak_memory != nullptr)
    {
        children["peak-memory"] = peak_memory;
    }

    return children;
}

void PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "curr-memory" || name == "peak-memory" || name == "template-name" || name == "sample-interval")
        return true;
    return false;
}

PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::CurrMemory()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "curr-memory"; yang_parent_name = "memory-node-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::~CurrMemory()
{
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "curr-memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::PeakMemory()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "peak-memory"; yang_parent_name = "memory-node-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::~PeakMemory()
{
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2Protocol()
    :
    ospfv2_protocol_templates(std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates>())
{
    ospfv2_protocol_templates->parent = this;

    yang_name = "ospfv2-protocol"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::Ospfv2Protocol::~Ospfv2Protocol()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::has_data() const
{
    return (ospfv2_protocol_templates !=  nullptr && ospfv2_protocol_templates->has_data());
}

bool PerfMgmt::Threshold::Ospfv2Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (ospfv2_protocol_templates !=  nullptr && ospfv2_protocol_templates->has_operation());
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-protocol-templates")
    {
        if(ospfv2_protocol_templates == nullptr)
        {
            ospfv2_protocol_templates = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates>();
        }
        return ospfv2_protocol_templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ospfv2_protocol_templates != nullptr)
    {
        children["ospfv2-protocol-templates"] = ospfv2_protocol_templates;
    }

    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::Ospfv2Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-protocol-templates")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplates()
{

    yang_name = "ospfv2-protocol-templates"; yang_parent_name = "ospfv2-protocol"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::~Ospfv2ProtocolTemplates()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::has_data() const
{
    for (std::size_t index=0; index<ospfv2_protocol_template.size(); index++)
    {
        if(ospfv2_protocol_template[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_protocol_template.size(); index++)
    {
        if(ospfv2_protocol_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/ospfv2-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol-templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-protocol-template")
    {
        for(auto const & c : ospfv2_protocol_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate>();
        c->parent = this;
        ospfv2_protocol_template.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfv2_protocol_template)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-protocol-template")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::Ospfv2ProtocolTemplate()
    :
    template_name{YType::str, "template-name"},
    sample_interval{YType::uint32, "sample-interval"}
    	,
    checksum_errors(nullptr) // presence node
	,input_db_ds(nullptr) // presence node
	,input_db_ds_lsa(nullptr) // presence node
	,input_hello_packets(nullptr) // presence node
	,input_ls_requests(nullptr) // presence node
	,input_ls_requests_lsa(nullptr) // presence node
	,input_lsa_acks(nullptr) // presence node
	,input_lsa_acks_lsa(nullptr) // presence node
	,input_lsa_updates(nullptr) // presence node
	,input_lsa_updates_lsa(nullptr) // presence node
	,input_packets(nullptr) // presence node
	,output_db_ds(nullptr) // presence node
	,output_db_ds_lsa(nullptr) // presence node
	,output_hello_packets(nullptr) // presence node
	,output_ls_requests(nullptr) // presence node
	,output_ls_requests_lsa(nullptr) // presence node
	,output_lsa_acks(nullptr) // presence node
	,output_lsa_acks_lsa(nullptr) // presence node
	,output_lsa_updates(nullptr) // presence node
	,output_lsa_updates_lsa(nullptr) // presence node
	,output_packets(nullptr) // presence node
{

    yang_name = "ospfv2-protocol-template"; yang_parent_name = "ospfv2-protocol-templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::~Ospfv2ProtocolTemplate()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::has_data() const
{
    return template_name.is_set
	|| sample_interval.is_set
	|| (checksum_errors !=  nullptr && checksum_errors->has_data())
	|| (input_db_ds !=  nullptr && input_db_ds->has_data())
	|| (input_db_ds_lsa !=  nullptr && input_db_ds_lsa->has_data())
	|| (input_hello_packets !=  nullptr && input_hello_packets->has_data())
	|| (input_ls_requests !=  nullptr && input_ls_requests->has_data())
	|| (input_ls_requests_lsa !=  nullptr && input_ls_requests_lsa->has_data())
	|| (input_lsa_acks !=  nullptr && input_lsa_acks->has_data())
	|| (input_lsa_acks_lsa !=  nullptr && input_lsa_acks_lsa->has_data())
	|| (input_lsa_updates !=  nullptr && input_lsa_updates->has_data())
	|| (input_lsa_updates_lsa !=  nullptr && input_lsa_updates_lsa->has_data())
	|| (input_packets !=  nullptr && input_packets->has_data())
	|| (output_db_ds !=  nullptr && output_db_ds->has_data())
	|| (output_db_ds_lsa !=  nullptr && output_db_ds_lsa->has_data())
	|| (output_hello_packets !=  nullptr && output_hello_packets->has_data())
	|| (output_ls_requests !=  nullptr && output_ls_requests->has_data())
	|| (output_ls_requests_lsa !=  nullptr && output_ls_requests_lsa->has_data())
	|| (output_lsa_acks !=  nullptr && output_lsa_acks->has_data())
	|| (output_lsa_acks_lsa !=  nullptr && output_lsa_acks_lsa->has_data())
	|| (output_lsa_updates !=  nullptr && output_lsa_updates->has_data())
	|| (output_lsa_updates_lsa !=  nullptr && output_lsa_updates_lsa->has_data())
	|| (output_packets !=  nullptr && output_packets->has_data());
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| (checksum_errors !=  nullptr && checksum_errors->has_operation())
	|| (input_db_ds !=  nullptr && input_db_ds->has_operation())
	|| (input_db_ds_lsa !=  nullptr && input_db_ds_lsa->has_operation())
	|| (input_hello_packets !=  nullptr && input_hello_packets->has_operation())
	|| (input_ls_requests !=  nullptr && input_ls_requests->has_operation())
	|| (input_ls_requests_lsa !=  nullptr && input_ls_requests_lsa->has_operation())
	|| (input_lsa_acks !=  nullptr && input_lsa_acks->has_operation())
	|| (input_lsa_acks_lsa !=  nullptr && input_lsa_acks_lsa->has_operation())
	|| (input_lsa_updates !=  nullptr && input_lsa_updates->has_operation())
	|| (input_lsa_updates_lsa !=  nullptr && input_lsa_updates_lsa->has_operation())
	|| (input_packets !=  nullptr && input_packets->has_operation())
	|| (output_db_ds !=  nullptr && output_db_ds->has_operation())
	|| (output_db_ds_lsa !=  nullptr && output_db_ds_lsa->has_operation())
	|| (output_hello_packets !=  nullptr && output_hello_packets->has_operation())
	|| (output_ls_requests !=  nullptr && output_ls_requests->has_operation())
	|| (output_ls_requests_lsa !=  nullptr && output_ls_requests_lsa->has_operation())
	|| (output_lsa_acks !=  nullptr && output_lsa_acks->has_operation())
	|| (output_lsa_acks_lsa !=  nullptr && output_lsa_acks_lsa->has_operation())
	|| (output_lsa_updates !=  nullptr && output_lsa_updates->has_operation())
	|| (output_lsa_updates_lsa !=  nullptr && output_lsa_updates_lsa->has_operation())
	|| (output_packets !=  nullptr && output_packets->has_operation());
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/ospfv2-protocol/ospfv2-protocol-templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol-template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checksum-errors")
    {
        if(checksum_errors == nullptr)
        {
            checksum_errors = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors>();
        }
        return checksum_errors;
    }

    if(child_yang_name == "input-db-ds")
    {
        if(input_db_ds == nullptr)
        {
            input_db_ds = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs>();
        }
        return input_db_ds;
    }

    if(child_yang_name == "input-db-ds-lsa")
    {
        if(input_db_ds_lsa == nullptr)
        {
            input_db_ds_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa>();
        }
        return input_db_ds_lsa;
    }

    if(child_yang_name == "input-hello-packets")
    {
        if(input_hello_packets == nullptr)
        {
            input_hello_packets = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets>();
        }
        return input_hello_packets;
    }

    if(child_yang_name == "input-ls-requests")
    {
        if(input_ls_requests == nullptr)
        {
            input_ls_requests = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests>();
        }
        return input_ls_requests;
    }

    if(child_yang_name == "input-ls-requests-lsa")
    {
        if(input_ls_requests_lsa == nullptr)
        {
            input_ls_requests_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa>();
        }
        return input_ls_requests_lsa;
    }

    if(child_yang_name == "input-lsa-acks")
    {
        if(input_lsa_acks == nullptr)
        {
            input_lsa_acks = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks>();
        }
        return input_lsa_acks;
    }

    if(child_yang_name == "input-lsa-acks-lsa")
    {
        if(input_lsa_acks_lsa == nullptr)
        {
            input_lsa_acks_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa>();
        }
        return input_lsa_acks_lsa;
    }

    if(child_yang_name == "input-lsa-updates")
    {
        if(input_lsa_updates == nullptr)
        {
            input_lsa_updates = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates>();
        }
        return input_lsa_updates;
    }

    if(child_yang_name == "input-lsa-updates-lsa")
    {
        if(input_lsa_updates_lsa == nullptr)
        {
            input_lsa_updates_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa>();
        }
        return input_lsa_updates_lsa;
    }

    if(child_yang_name == "input-packets")
    {
        if(input_packets == nullptr)
        {
            input_packets = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets>();
        }
        return input_packets;
    }

    if(child_yang_name == "output-db-ds")
    {
        if(output_db_ds == nullptr)
        {
            output_db_ds = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs>();
        }
        return output_db_ds;
    }

    if(child_yang_name == "output-db-ds-lsa")
    {
        if(output_db_ds_lsa == nullptr)
        {
            output_db_ds_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa>();
        }
        return output_db_ds_lsa;
    }

    if(child_yang_name == "output-hello-packets")
    {
        if(output_hello_packets == nullptr)
        {
            output_hello_packets = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets>();
        }
        return output_hello_packets;
    }

    if(child_yang_name == "output-ls-requests")
    {
        if(output_ls_requests == nullptr)
        {
            output_ls_requests = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests>();
        }
        return output_ls_requests;
    }

    if(child_yang_name == "output-ls-requests-lsa")
    {
        if(output_ls_requests_lsa == nullptr)
        {
            output_ls_requests_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa>();
        }
        return output_ls_requests_lsa;
    }

    if(child_yang_name == "output-lsa-acks")
    {
        if(output_lsa_acks == nullptr)
        {
            output_lsa_acks = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks>();
        }
        return output_lsa_acks;
    }

    if(child_yang_name == "output-lsa-acks-lsa")
    {
        if(output_lsa_acks_lsa == nullptr)
        {
            output_lsa_acks_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa>();
        }
        return output_lsa_acks_lsa;
    }

    if(child_yang_name == "output-lsa-updates")
    {
        if(output_lsa_updates == nullptr)
        {
            output_lsa_updates = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates>();
        }
        return output_lsa_updates;
    }

    if(child_yang_name == "output-lsa-updates-lsa")
    {
        if(output_lsa_updates_lsa == nullptr)
        {
            output_lsa_updates_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa>();
        }
        return output_lsa_updates_lsa;
    }

    if(child_yang_name == "output-packets")
    {
        if(output_packets == nullptr)
        {
            output_packets = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets>();
        }
        return output_packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(checksum_errors != nullptr)
    {
        children["checksum-errors"] = checksum_errors;
    }

    if(input_db_ds != nullptr)
    {
        children["input-db-ds"] = input_db_ds;
    }

    if(input_db_ds_lsa != nullptr)
    {
        children["input-db-ds-lsa"] = input_db_ds_lsa;
    }

    if(input_hello_packets != nullptr)
    {
        children["input-hello-packets"] = input_hello_packets;
    }

    if(input_ls_requests != nullptr)
    {
        children["input-ls-requests"] = input_ls_requests;
    }

    if(input_ls_requests_lsa != nullptr)
    {
        children["input-ls-requests-lsa"] = input_ls_requests_lsa;
    }

    if(input_lsa_acks != nullptr)
    {
        children["input-lsa-acks"] = input_lsa_acks;
    }

    if(input_lsa_acks_lsa != nullptr)
    {
        children["input-lsa-acks-lsa"] = input_lsa_acks_lsa;
    }

    if(input_lsa_updates != nullptr)
    {
        children["input-lsa-updates"] = input_lsa_updates;
    }

    if(input_lsa_updates_lsa != nullptr)
    {
        children["input-lsa-updates-lsa"] = input_lsa_updates_lsa;
    }

    if(input_packets != nullptr)
    {
        children["input-packets"] = input_packets;
    }

    if(output_db_ds != nullptr)
    {
        children["output-db-ds"] = output_db_ds;
    }

    if(output_db_ds_lsa != nullptr)
    {
        children["output-db-ds-lsa"] = output_db_ds_lsa;
    }

    if(output_hello_packets != nullptr)
    {
        children["output-hello-packets"] = output_hello_packets;
    }

    if(output_ls_requests != nullptr)
    {
        children["output-ls-requests"] = output_ls_requests;
    }

    if(output_ls_requests_lsa != nullptr)
    {
        children["output-ls-requests-lsa"] = output_ls_requests_lsa;
    }

    if(output_lsa_acks != nullptr)
    {
        children["output-lsa-acks"] = output_lsa_acks;
    }

    if(output_lsa_acks_lsa != nullptr)
    {
        children["output-lsa-acks-lsa"] = output_lsa_acks_lsa;
    }

    if(output_lsa_updates != nullptr)
    {
        children["output-lsa-updates"] = output_lsa_updates;
    }

    if(output_lsa_updates_lsa != nullptr)
    {
        children["output-lsa-updates-lsa"] = output_lsa_updates_lsa;
    }

    if(output_packets != nullptr)
    {
        children["output-packets"] = output_packets;
    }

    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checksum-errors" || name == "input-db-ds" || name == "input-db-ds-lsa" || name == "input-hello-packets" || name == "input-ls-requests" || name == "input-ls-requests-lsa" || name == "input-lsa-acks" || name == "input-lsa-acks-lsa" || name == "input-lsa-updates" || name == "input-lsa-updates-lsa" || name == "input-packets" || name == "output-db-ds" || name == "output-db-ds-lsa" || name == "output-hello-packets" || name == "output-ls-requests" || name == "output-ls-requests-lsa" || name == "output-lsa-acks" || name == "output-lsa-acks-lsa" || name == "output-lsa-updates" || name == "output-lsa-updates-lsa" || name == "output-packets" || name == "template-name" || name == "sample-interval")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::ChecksumErrors()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "checksum-errors"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::~ChecksumErrors()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checksum-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::InputDbDs()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-db-ds"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::~InputDbDs()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-db-ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::InputDbDsLsa()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-db-ds-lsa"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::~InputDbDsLsa()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-db-ds-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::InputHelloPackets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-hello-packets"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::~InputHelloPackets()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-hello-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::InputLsRequests()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-ls-requests"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::~InputLsRequests()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-ls-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::InputLsRequestsLsa()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-ls-requests-lsa"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::~InputLsRequestsLsa()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-ls-requests-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::InputLsaAcks()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-lsa-acks"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::~InputLsaAcks()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-lsa-acks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::InputLsaAcksLsa()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-lsa-acks-lsa"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::~InputLsaAcksLsa()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-lsa-acks-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::InputLsaUpdates()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-lsa-updates"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::~InputLsaUpdates()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-lsa-updates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::InputLsaUpdatesLsa()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-lsa-updates-lsa"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::~InputLsaUpdatesLsa()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-lsa-updates-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::InputPackets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-packets"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::~InputPackets()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::OutputDbDs()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-db-ds"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::~OutputDbDs()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-db-ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::OutputDbDsLsa()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-db-ds-lsa"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::~OutputDbDsLsa()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-db-ds-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::OutputHelloPackets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-hello-packets"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::~OutputHelloPackets()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-hello-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::OutputLsRequests()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-ls-requests"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::~OutputLsRequests()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-ls-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::OutputLsRequestsLsa()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-ls-requests-lsa"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::~OutputLsRequestsLsa()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-ls-requests-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::OutputLsaAcks()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-lsa-acks"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::~OutputLsaAcks()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-lsa-acks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::OutputLsaAcksLsa()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-lsa-acks-lsa"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::~OutputLsaAcksLsa()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-lsa-acks-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::OutputLsaUpdates()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-lsa-updates"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::~OutputLsaUpdates()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-lsa-updates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::OutputLsaUpdatesLsa()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-lsa-updates-lsa"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::~OutputLsaUpdatesLsa()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-lsa-updates-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::OutputPackets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-packets"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::~OutputPackets()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3Protocol()
    :
    ospfv3_protocol_templates(std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates>())
{
    ospfv3_protocol_templates->parent = this;

    yang_name = "ospfv3-protocol"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::Ospfv3Protocol::~Ospfv3Protocol()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::has_data() const
{
    return (ospfv3_protocol_templates !=  nullptr && ospfv3_protocol_templates->has_data());
}

bool PerfMgmt::Threshold::Ospfv3Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (ospfv3_protocol_templates !=  nullptr && ospfv3_protocol_templates->has_operation());
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv3-protocol-templates")
    {
        if(ospfv3_protocol_templates == nullptr)
        {
            ospfv3_protocol_templates = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates>();
        }
        return ospfv3_protocol_templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ospfv3_protocol_templates != nullptr)
    {
        children["ospfv3-protocol-templates"] = ospfv3_protocol_templates;
    }

    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::Ospfv3Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv3-protocol-templates")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplates()
{

    yang_name = "ospfv3-protocol-templates"; yang_parent_name = "ospfv3-protocol"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::~Ospfv3ProtocolTemplates()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::has_data() const
{
    for (std::size_t index=0; index<ospfv3_protocol_template.size(); index++)
    {
        if(ospfv3_protocol_template[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::has_operation() const
{
    for (std::size_t index=0; index<ospfv3_protocol_template.size(); index++)
    {
        if(ospfv3_protocol_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/ospfv3-protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol-templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv3-protocol-template")
    {
        for(auto const & c : ospfv3_protocol_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate>();
        c->parent = this;
        ospfv3_protocol_template.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfv3_protocol_template)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv3-protocol-template")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::Ospfv3ProtocolTemplate()
    :
    template_name{YType::str, "template-name"},
    sample_interval{YType::uint32, "sample-interval"}
    	,
    input_db_ds(nullptr) // presence node
	,input_db_ds_lsa(nullptr) // presence node
	,input_hello_packets(nullptr) // presence node
	,input_ls_requests(nullptr) // presence node
	,input_ls_requests_lsa(nullptr) // presence node
	,input_lsa_acks(nullptr) // presence node
	,input_lsa_acks_lsa(nullptr) // presence node
	,input_lsa_updates(nullptr) // presence node
	,input_lsa_updates_lsa(nullptr) // presence node
	,input_packets(nullptr) // presence node
	,output_db_ds(nullptr) // presence node
	,output_db_ds_lsa(nullptr) // presence node
	,output_hello_packets(nullptr) // presence node
	,output_ls_requests(nullptr) // presence node
	,output_ls_requests_lsa(nullptr) // presence node
	,output_lsa_acks(nullptr) // presence node
	,output_lsa_acks_lsa(nullptr) // presence node
	,output_lsa_updates(nullptr) // presence node
	,output_lsa_updates_lsa(nullptr) // presence node
	,output_packets(nullptr) // presence node
{

    yang_name = "ospfv3-protocol-template"; yang_parent_name = "ospfv3-protocol-templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::~Ospfv3ProtocolTemplate()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::has_data() const
{
    return template_name.is_set
	|| sample_interval.is_set
	|| (input_db_ds !=  nullptr && input_db_ds->has_data())
	|| (input_db_ds_lsa !=  nullptr && input_db_ds_lsa->has_data())
	|| (input_hello_packets !=  nullptr && input_hello_packets->has_data())
	|| (input_ls_requests !=  nullptr && input_ls_requests->has_data())
	|| (input_ls_requests_lsa !=  nullptr && input_ls_requests_lsa->has_data())
	|| (input_lsa_acks !=  nullptr && input_lsa_acks->has_data())
	|| (input_lsa_acks_lsa !=  nullptr && input_lsa_acks_lsa->has_data())
	|| (input_lsa_updates !=  nullptr && input_lsa_updates->has_data())
	|| (input_lsa_updates_lsa !=  nullptr && input_lsa_updates_lsa->has_data())
	|| (input_packets !=  nullptr && input_packets->has_data())
	|| (output_db_ds !=  nullptr && output_db_ds->has_data())
	|| (output_db_ds_lsa !=  nullptr && output_db_ds_lsa->has_data())
	|| (output_hello_packets !=  nullptr && output_hello_packets->has_data())
	|| (output_ls_requests !=  nullptr && output_ls_requests->has_data())
	|| (output_ls_requests_lsa !=  nullptr && output_ls_requests_lsa->has_data())
	|| (output_lsa_acks !=  nullptr && output_lsa_acks->has_data())
	|| (output_lsa_acks_lsa !=  nullptr && output_lsa_acks_lsa->has_data())
	|| (output_lsa_updates !=  nullptr && output_lsa_updates->has_data())
	|| (output_lsa_updates_lsa !=  nullptr && output_lsa_updates_lsa->has_data())
	|| (output_packets !=  nullptr && output_packets->has_data());
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| (input_db_ds !=  nullptr && input_db_ds->has_operation())
	|| (input_db_ds_lsa !=  nullptr && input_db_ds_lsa->has_operation())
	|| (input_hello_packets !=  nullptr && input_hello_packets->has_operation())
	|| (input_ls_requests !=  nullptr && input_ls_requests->has_operation())
	|| (input_ls_requests_lsa !=  nullptr && input_ls_requests_lsa->has_operation())
	|| (input_lsa_acks !=  nullptr && input_lsa_acks->has_operation())
	|| (input_lsa_acks_lsa !=  nullptr && input_lsa_acks_lsa->has_operation())
	|| (input_lsa_updates !=  nullptr && input_lsa_updates->has_operation())
	|| (input_lsa_updates_lsa !=  nullptr && input_lsa_updates_lsa->has_operation())
	|| (input_packets !=  nullptr && input_packets->has_operation())
	|| (output_db_ds !=  nullptr && output_db_ds->has_operation())
	|| (output_db_ds_lsa !=  nullptr && output_db_ds_lsa->has_operation())
	|| (output_hello_packets !=  nullptr && output_hello_packets->has_operation())
	|| (output_ls_requests !=  nullptr && output_ls_requests->has_operation())
	|| (output_ls_requests_lsa !=  nullptr && output_ls_requests_lsa->has_operation())
	|| (output_lsa_acks !=  nullptr && output_lsa_acks->has_operation())
	|| (output_lsa_acks_lsa !=  nullptr && output_lsa_acks_lsa->has_operation())
	|| (output_lsa_updates !=  nullptr && output_lsa_updates->has_operation())
	|| (output_lsa_updates_lsa !=  nullptr && output_lsa_updates_lsa->has_operation())
	|| (output_packets !=  nullptr && output_packets->has_operation());
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/ospfv3-protocol/ospfv3-protocol-templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol-template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-db-ds")
    {
        if(input_db_ds == nullptr)
        {
            input_db_ds = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs>();
        }
        return input_db_ds;
    }

    if(child_yang_name == "input-db-ds-lsa")
    {
        if(input_db_ds_lsa == nullptr)
        {
            input_db_ds_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa>();
        }
        return input_db_ds_lsa;
    }

    if(child_yang_name == "input-hello-packets")
    {
        if(input_hello_packets == nullptr)
        {
            input_hello_packets = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets>();
        }
        return input_hello_packets;
    }

    if(child_yang_name == "input-ls-requests")
    {
        if(input_ls_requests == nullptr)
        {
            input_ls_requests = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests>();
        }
        return input_ls_requests;
    }

    if(child_yang_name == "input-ls-requests-lsa")
    {
        if(input_ls_requests_lsa == nullptr)
        {
            input_ls_requests_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa>();
        }
        return input_ls_requests_lsa;
    }

    if(child_yang_name == "input-lsa-acks")
    {
        if(input_lsa_acks == nullptr)
        {
            input_lsa_acks = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks>();
        }
        return input_lsa_acks;
    }

    if(child_yang_name == "input-lsa-acks-lsa")
    {
        if(input_lsa_acks_lsa == nullptr)
        {
            input_lsa_acks_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa>();
        }
        return input_lsa_acks_lsa;
    }

    if(child_yang_name == "input-lsa-updates")
    {
        if(input_lsa_updates == nullptr)
        {
            input_lsa_updates = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates>();
        }
        return input_lsa_updates;
    }

    if(child_yang_name == "input-lsa-updates-lsa")
    {
        if(input_lsa_updates_lsa == nullptr)
        {
            input_lsa_updates_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa>();
        }
        return input_lsa_updates_lsa;
    }

    if(child_yang_name == "input-packets")
    {
        if(input_packets == nullptr)
        {
            input_packets = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets>();
        }
        return input_packets;
    }

    if(child_yang_name == "output-db-ds")
    {
        if(output_db_ds == nullptr)
        {
            output_db_ds = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs>();
        }
        return output_db_ds;
    }

    if(child_yang_name == "output-db-ds-lsa")
    {
        if(output_db_ds_lsa == nullptr)
        {
            output_db_ds_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa>();
        }
        return output_db_ds_lsa;
    }

    if(child_yang_name == "output-hello-packets")
    {
        if(output_hello_packets == nullptr)
        {
            output_hello_packets = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets>();
        }
        return output_hello_packets;
    }

    if(child_yang_name == "output-ls-requests")
    {
        if(output_ls_requests == nullptr)
        {
            output_ls_requests = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests>();
        }
        return output_ls_requests;
    }

    if(child_yang_name == "output-ls-requests-lsa")
    {
        if(output_ls_requests_lsa == nullptr)
        {
            output_ls_requests_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa>();
        }
        return output_ls_requests_lsa;
    }

    if(child_yang_name == "output-lsa-acks")
    {
        if(output_lsa_acks == nullptr)
        {
            output_lsa_acks = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks>();
        }
        return output_lsa_acks;
    }

    if(child_yang_name == "output-lsa-acks-lsa")
    {
        if(output_lsa_acks_lsa == nullptr)
        {
            output_lsa_acks_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa>();
        }
        return output_lsa_acks_lsa;
    }

    if(child_yang_name == "output-lsa-updates")
    {
        if(output_lsa_updates == nullptr)
        {
            output_lsa_updates = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates>();
        }
        return output_lsa_updates;
    }

    if(child_yang_name == "output-lsa-updates-lsa")
    {
        if(output_lsa_updates_lsa == nullptr)
        {
            output_lsa_updates_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa>();
        }
        return output_lsa_updates_lsa;
    }

    if(child_yang_name == "output-packets")
    {
        if(output_packets == nullptr)
        {
            output_packets = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets>();
        }
        return output_packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_db_ds != nullptr)
    {
        children["input-db-ds"] = input_db_ds;
    }

    if(input_db_ds_lsa != nullptr)
    {
        children["input-db-ds-lsa"] = input_db_ds_lsa;
    }

    if(input_hello_packets != nullptr)
    {
        children["input-hello-packets"] = input_hello_packets;
    }

    if(input_ls_requests != nullptr)
    {
        children["input-ls-requests"] = input_ls_requests;
    }

    if(input_ls_requests_lsa != nullptr)
    {
        children["input-ls-requests-lsa"] = input_ls_requests_lsa;
    }

    if(input_lsa_acks != nullptr)
    {
        children["input-lsa-acks"] = input_lsa_acks;
    }

    if(input_lsa_acks_lsa != nullptr)
    {
        children["input-lsa-acks-lsa"] = input_lsa_acks_lsa;
    }

    if(input_lsa_updates != nullptr)
    {
        children["input-lsa-updates"] = input_lsa_updates;
    }

    if(input_lsa_updates_lsa != nullptr)
    {
        children["input-lsa-updates-lsa"] = input_lsa_updates_lsa;
    }

    if(input_packets != nullptr)
    {
        children["input-packets"] = input_packets;
    }

    if(output_db_ds != nullptr)
    {
        children["output-db-ds"] = output_db_ds;
    }

    if(output_db_ds_lsa != nullptr)
    {
        children["output-db-ds-lsa"] = output_db_ds_lsa;
    }

    if(output_hello_packets != nullptr)
    {
        children["output-hello-packets"] = output_hello_packets;
    }

    if(output_ls_requests != nullptr)
    {
        children["output-ls-requests"] = output_ls_requests;
    }

    if(output_ls_requests_lsa != nullptr)
    {
        children["output-ls-requests-lsa"] = output_ls_requests_lsa;
    }

    if(output_lsa_acks != nullptr)
    {
        children["output-lsa-acks"] = output_lsa_acks;
    }

    if(output_lsa_acks_lsa != nullptr)
    {
        children["output-lsa-acks-lsa"] = output_lsa_acks_lsa;
    }

    if(output_lsa_updates != nullptr)
    {
        children["output-lsa-updates"] = output_lsa_updates;
    }

    if(output_lsa_updates_lsa != nullptr)
    {
        children["output-lsa-updates-lsa"] = output_lsa_updates_lsa;
    }

    if(output_packets != nullptr)
    {
        children["output-packets"] = output_packets;
    }

    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-db-ds" || name == "input-db-ds-lsa" || name == "input-hello-packets" || name == "input-ls-requests" || name == "input-ls-requests-lsa" || name == "input-lsa-acks" || name == "input-lsa-acks-lsa" || name == "input-lsa-updates" || name == "input-lsa-updates-lsa" || name == "input-packets" || name == "output-db-ds" || name == "output-db-ds-lsa" || name == "output-hello-packets" || name == "output-ls-requests" || name == "output-ls-requests-lsa" || name == "output-lsa-acks" || name == "output-lsa-acks-lsa" || name == "output-lsa-updates" || name == "output-lsa-updates-lsa" || name == "output-packets" || name == "template-name" || name == "sample-interval")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::InputDbDs()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-db-ds"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::~InputDbDs()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-db-ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::InputDbDsLsa()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-db-ds-lsa"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::~InputDbDsLsa()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-db-ds-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::InputHelloPackets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-hello-packets"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::~InputHelloPackets()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-hello-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::InputLsRequests()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-ls-requests"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::~InputLsRequests()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-ls-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::InputLsRequestsLsa()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-ls-requests-lsa"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::~InputLsRequestsLsa()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-ls-requests-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::InputLsaAcks()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-lsa-acks"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::~InputLsaAcks()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-lsa-acks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::InputLsaAcksLsa()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-lsa-acks-lsa"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::~InputLsaAcksLsa()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-lsa-acks-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::InputLsaUpdates()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-lsa-updates"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::~InputLsaUpdates()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-lsa-updates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::InputLsaUpdatesLsa()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-lsa-updates-lsa"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::~InputLsaUpdatesLsa()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-lsa-updates-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::InputPackets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "input-packets"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::~InputPackets()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::OutputDbDs()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-db-ds"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::~OutputDbDs()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-db-ds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::OutputDbDsLsa()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-db-ds-lsa"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::~OutputDbDsLsa()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-db-ds-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::OutputHelloPackets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-hello-packets"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::~OutputHelloPackets()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-hello-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::OutputLsRequests()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-ls-requests"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::~OutputLsRequests()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-ls-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::OutputLsRequestsLsa()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-ls-requests-lsa"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::~OutputLsRequestsLsa()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-ls-requests-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::OutputLsaAcks()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-lsa-acks"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::~OutputLsaAcks()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-lsa-acks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::OutputLsaAcksLsa()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-lsa-acks-lsa"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::~OutputLsaAcksLsa()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-lsa-acks-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::OutputLsaUpdates()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-lsa-updates"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::~OutputLsaUpdates()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-lsa-updates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::OutputLsaUpdatesLsa()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-lsa-updates-lsa"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::~OutputLsaUpdatesLsa()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-lsa-updates-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::OutputPackets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "output-packets"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::~OutputPackets()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::ProcessNode::ProcessNode()
    :
    process_node_templates(std::make_shared<PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates>())
{
    process_node_templates->parent = this;

    yang_name = "process-node"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::ProcessNode::~ProcessNode()
{
}

bool PerfMgmt::Threshold::ProcessNode::has_data() const
{
    return (process_node_templates !=  nullptr && process_node_templates->has_data());
}

bool PerfMgmt::Threshold::ProcessNode::has_operation() const
{
    return is_set(yfilter)
	|| (process_node_templates !=  nullptr && process_node_templates->has_operation());
}

std::string PerfMgmt::Threshold::ProcessNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::ProcessNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::ProcessNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::ProcessNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-node-templates")
    {
        if(process_node_templates == nullptr)
        {
            process_node_templates = std::make_shared<PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates>();
        }
        return process_node_templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::ProcessNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(process_node_templates != nullptr)
    {
        children["process-node-templates"] = process_node_templates;
    }

    return children;
}

void PerfMgmt::Threshold::ProcessNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::ProcessNode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::ProcessNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-node-templates")
        return true;
    return false;
}

PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplates()
{

    yang_name = "process-node-templates"; yang_parent_name = "process-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::~ProcessNodeTemplates()
{
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::has_data() const
{
    for (std::size_t index=0; index<process_node_template.size(); index++)
    {
        if(process_node_template[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::has_operation() const
{
    for (std::size_t index=0; index<process_node_template.size(); index++)
    {
        if(process_node_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/process-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-node-templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-node-template")
    {
        for(auto const & c : process_node_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate>();
        c->parent = this;
        process_node_template.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : process_node_template)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-node-template")
        return true;
    return false;
}

PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::ProcessNodeTemplate()
    :
    template_name{YType::str, "template-name"},
    sample_interval{YType::uint32, "sample-interval"}
    	,
    average_cpu_used(nullptr) // presence node
	,no_threads(nullptr) // presence node
	,peak_memory(nullptr) // presence node
{

    yang_name = "process-node-template"; yang_parent_name = "process-node-templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::~ProcessNodeTemplate()
{
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::has_data() const
{
    return template_name.is_set
	|| sample_interval.is_set
	|| (average_cpu_used !=  nullptr && average_cpu_used->has_data())
	|| (no_threads !=  nullptr && no_threads->has_data())
	|| (peak_memory !=  nullptr && peak_memory->has_data());
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| (average_cpu_used !=  nullptr && average_cpu_used->has_operation())
	|| (no_threads !=  nullptr && no_threads->has_operation())
	|| (peak_memory !=  nullptr && peak_memory->has_operation());
}

std::string PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/process-node/process-node-templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-node-template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "average-cpu-used")
    {
        if(average_cpu_used == nullptr)
        {
            average_cpu_used = std::make_shared<PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed>();
        }
        return average_cpu_used;
    }

    if(child_yang_name == "no-threads")
    {
        if(no_threads == nullptr)
        {
            no_threads = std::make_shared<PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads>();
        }
        return no_threads;
    }

    if(child_yang_name == "peak-memory")
    {
        if(peak_memory == nullptr)
        {
            peak_memory = std::make_shared<PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory>();
        }
        return peak_memory;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(average_cpu_used != nullptr)
    {
        children["average-cpu-used"] = average_cpu_used;
    }

    if(no_threads != nullptr)
    {
        children["no-threads"] = no_threads;
    }

    if(peak_memory != nullptr)
    {
        children["peak-memory"] = peak_memory;
    }

    return children;
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-cpu-used" || name == "no-threads" || name == "peak-memory" || name == "template-name" || name == "sample-interval")
        return true;
    return false;
}

PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::AverageCpuUsed()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "average-cpu-used"; yang_parent_name = "process-node-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::~AverageCpuUsed()
{
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average-cpu-used";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::NoThreads()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{

    yang_name = "no-threads"; yang_parent_name = "process-node-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::~NoThreads()
{
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-threads";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}

PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::PeakMemory()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{

    yang_name = "peak-memory"; yang_parent_name = "process-node-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::~PeakMemory()
{
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
        rearm_type.value_namespace = name_space;
        rearm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
        rearm_window.value_namespace = name_space;
        rearm_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "rearm-type")
    {
        rearm_type.yfilter = yfilter;
    }
    if(value_path == "rearm-window")
    {
        rearm_window.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-range-value" || name == "operator" || name == "percent" || name == "rearm-type" || name == "rearm-window" || name == "value")
        return true;
    return false;
}


}
}

