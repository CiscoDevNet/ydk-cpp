
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_manageability_perfmgmt_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_manageability_perfmgmt_cfg {

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::InitMsgsRcvd()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::int32, "value"},
    end_range_value{YType::int32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "init-msgs-rcvd"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::~InitMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::LabelReleaseMsgsSent()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::int32, "value"},
    end_range_value{YType::int32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "label-release-msgs-sent"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::~LabelReleaseMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::InitMsgsSent()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::int32, "value"},
    end_range_value{YType::int32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "init-msgs-sent"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::~InitMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::LabelMappingMsgsRcvd()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::int32, "value"},
    end_range_value{YType::int32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "label-mapping-msgs-rcvd"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::~LabelMappingMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::KeepaliveMsgsRcvd()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::int32, "value"},
    end_range_value{YType::int32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "keepalive-msgs-rcvd"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::~KeepaliveMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::LabelMappingMsgsSent()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::int32, "value"},
    end_range_value{YType::int32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "label-mapping-msgs-sent"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::~LabelMappingMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::KeepaliveMsgsSent()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::int32, "value"},
    end_range_value{YType::int32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "keepalive-msgs-sent"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::~KeepaliveMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::AddressMsgsRcvd()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::int32, "value"},
    end_range_value{YType::int32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "address-msgs-rcvd"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::~AddressMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::AddressMsgsSent()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::int32, "value"},
    end_range_value{YType::int32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "address-msgs-sent"; yang_parent_name = "ldp-mpls-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::~AddressMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterface()
    :
    basic_counter_interface_templates(std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates>())
{
    basic_counter_interface_templates->parent = this;

    yang_name = "basic-counter-interface"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::BasicCounterInterface::~BasicCounterInterface()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::has_data() const
{
    return (basic_counter_interface_templates !=  nullptr && basic_counter_interface_templates->has_data());
}

bool PerfMgmt::Threshold::BasicCounterInterface::has_operation() const
{
    return is_set(yfilter)
	|| (basic_counter_interface_templates !=  nullptr && basic_counter_interface_templates->has_operation());
}

std::string PerfMgmt::Threshold::BasicCounterInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::BasicCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counter-interface-templates")
    {
        if(basic_counter_interface_templates == nullptr)
        {
            basic_counter_interface_templates = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates>();
        }
        return basic_counter_interface_templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_counter_interface_templates != nullptr)
    {
        children["basic-counter-interface-templates"] = basic_counter_interface_templates;
    }

    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::BasicCounterInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-counter-interface-templates")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplates()
{

    yang_name = "basic-counter-interface-templates"; yang_parent_name = "basic-counter-interface"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::~BasicCounterInterfaceTemplates()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::has_data() const
{
    for (std::size_t index=0; index<basic_counter_interface_template.size(); index++)
    {
        if(basic_counter_interface_template[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::has_operation() const
{
    for (std::size_t index=0; index<basic_counter_interface_template.size(); index++)
    {
        if(basic_counter_interface_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/basic-counter-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface-templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counter-interface-template")
    {
        auto c = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate>();
        c->parent = this;
        basic_counter_interface_template.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : basic_counter_interface_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-counter-interface-template")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::BasicCounterInterfaceTemplate()
    :
    template_name{YType::str, "template-name"},
    sample_interval{YType::uint32, "sample-interval"},
    reg_exp_group{YType::str, "reg-exp-group"},
    vrf_group{YType::str, "vrf-group"}
    	,
    in_octets(nullptr) // presence node
	,out_octets(nullptr) // presence node
	,output_queue_drops(nullptr) // presence node
	,input_total_errors(nullptr) // presence node
	,output_total_drops(nullptr) // presence node
	,out_packets(nullptr) // presence node
	,output_total_errors(nullptr) // presence node
	,in_packets(nullptr) // presence node
	,input_queue_drops(nullptr) // presence node
	,input_total_drops(nullptr) // presence node
{

    yang_name = "basic-counter-interface-template"; yang_parent_name = "basic-counter-interface-templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::~BasicCounterInterfaceTemplate()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::has_data() const
{
    return template_name.is_set
	|| sample_interval.is_set
	|| reg_exp_group.is_set
	|| vrf_group.is_set
	|| (in_octets !=  nullptr && in_octets->has_data())
	|| (out_octets !=  nullptr && out_octets->has_data())
	|| (output_queue_drops !=  nullptr && output_queue_drops->has_data())
	|| (input_total_errors !=  nullptr && input_total_errors->has_data())
	|| (output_total_drops !=  nullptr && output_total_drops->has_data())
	|| (out_packets !=  nullptr && out_packets->has_data())
	|| (output_total_errors !=  nullptr && output_total_errors->has_data())
	|| (in_packets !=  nullptr && in_packets->has_data())
	|| (input_queue_drops !=  nullptr && input_queue_drops->has_data())
	|| (input_total_drops !=  nullptr && input_total_drops->has_data());
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(reg_exp_group.yfilter)
	|| ydk::is_set(vrf_group.yfilter)
	|| (in_octets !=  nullptr && in_octets->has_operation())
	|| (out_octets !=  nullptr && out_octets->has_operation())
	|| (output_queue_drops !=  nullptr && output_queue_drops->has_operation())
	|| (input_total_errors !=  nullptr && input_total_errors->has_operation())
	|| (output_total_drops !=  nullptr && output_total_drops->has_operation())
	|| (out_packets !=  nullptr && out_packets->has_operation())
	|| (output_total_errors !=  nullptr && output_total_errors->has_operation())
	|| (in_packets !=  nullptr && in_packets->has_operation())
	|| (input_queue_drops !=  nullptr && input_queue_drops->has_operation())
	|| (input_total_drops !=  nullptr && input_total_drops->has_operation());
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/basic-counter-interface/basic-counter-interface-templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface-template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.yfilter)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.yfilter)) leaf_name_data.push_back(vrf_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-octets")
    {
        if(in_octets == nullptr)
        {
            in_octets = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets>();
        }
        return in_octets;
    }

    if(child_yang_name == "out-octets")
    {
        if(out_octets == nullptr)
        {
            out_octets = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets>();
        }
        return out_octets;
    }

    if(child_yang_name == "output-queue-drops")
    {
        if(output_queue_drops == nullptr)
        {
            output_queue_drops = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops>();
        }
        return output_queue_drops;
    }

    if(child_yang_name == "input-total-errors")
    {
        if(input_total_errors == nullptr)
        {
            input_total_errors = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors>();
        }
        return input_total_errors;
    }

    if(child_yang_name == "output-total-drops")
    {
        if(output_total_drops == nullptr)
        {
            output_total_drops = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops>();
        }
        return output_total_drops;
    }

    if(child_yang_name == "out-packets")
    {
        if(out_packets == nullptr)
        {
            out_packets = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets>();
        }
        return out_packets;
    }

    if(child_yang_name == "output-total-errors")
    {
        if(output_total_errors == nullptr)
        {
            output_total_errors = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors>();
        }
        return output_total_errors;
    }

    if(child_yang_name == "in-packets")
    {
        if(in_packets == nullptr)
        {
            in_packets = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets>();
        }
        return in_packets;
    }

    if(child_yang_name == "input-queue-drops")
    {
        if(input_queue_drops == nullptr)
        {
            input_queue_drops = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops>();
        }
        return input_queue_drops;
    }

    if(child_yang_name == "input-total-drops")
    {
        if(input_total_drops == nullptr)
        {
            input_total_drops = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops>();
        }
        return input_total_drops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(in_octets != nullptr)
    {
        children["in-octets"] = in_octets;
    }

    if(out_octets != nullptr)
    {
        children["out-octets"] = out_octets;
    }

    if(output_queue_drops != nullptr)
    {
        children["output-queue-drops"] = output_queue_drops;
    }

    if(input_total_errors != nullptr)
    {
        children["input-total-errors"] = input_total_errors;
    }

    if(output_total_drops != nullptr)
    {
        children["output-total-drops"] = output_total_drops;
    }

    if(out_packets != nullptr)
    {
        children["out-packets"] = out_packets;
    }

    if(output_total_errors != nullptr)
    {
        children["output-total-errors"] = output_total_errors;
    }

    if(in_packets != nullptr)
    {
        children["in-packets"] = in_packets;
    }

    if(input_queue_drops != nullptr)
    {
        children["input-queue-drops"] = input_queue_drops;
    }

    if(input_total_drops != nullptr)
    {
        children["input-total-drops"] = input_total_drops;
    }

    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
        reg_exp_group.value_namespace = name_space;
        reg_exp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
        vrf_group.value_namespace = name_space;
        vrf_group.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group.yfilter = yfilter;
    }
    if(value_path == "vrf-group")
    {
        vrf_group.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-octets" || name == "out-octets" || name == "output-queue-drops" || name == "input-total-errors" || name == "output-total-drops" || name == "out-packets" || name == "output-total-errors" || name == "in-packets" || name == "input-queue-drops" || name == "input-total-drops" || name == "template-name" || name == "sample-interval" || name == "reg-exp-group" || name == "vrf-group")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::InOctets()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "in-octets"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::~InOctets()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::OutOctets()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "out-octets"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::~OutOctets()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::OutputQueueDrops()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-queue-drops"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::~OutputQueueDrops()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-queue-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::InputTotalErrors()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-total-errors"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::~InputTotalErrors()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-total-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::OutputTotalDrops()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-total-drops"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::~OutputTotalDrops()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-total-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::OutPackets()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "out-packets"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::~OutPackets()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::OutputTotalErrors()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-total-errors"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::~OutputTotalErrors()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-total-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::InPackets()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "in-packets"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::~InPackets()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::InputQueueDrops()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-queue-drops"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::~InputQueueDrops()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-queue-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::InputTotalDrops()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-total-drops"; yang_parent_name = "basic-counter-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::~InputTotalDrops()
{
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-total-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::Bgp()
    :
    bgp_templates(std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates>())
{
    bgp_templates->parent = this;

    yang_name = "bgp"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::Bgp::~Bgp()
{
}

bool PerfMgmt::Threshold::Bgp::has_data() const
{
    return (bgp_templates !=  nullptr && bgp_templates->has_data());
}

bool PerfMgmt::Threshold::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (bgp_templates !=  nullptr && bgp_templates->has_operation());
}

std::string PerfMgmt::Threshold::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-templates")
    {
        if(bgp_templates == nullptr)
        {
            bgp_templates = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates>();
        }
        return bgp_templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bgp_templates != nullptr)
    {
        children["bgp-templates"] = bgp_templates;
    }

    return children;
}

void PerfMgmt::Threshold::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-templates")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplates()
{

    yang_name = "bgp-templates"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::~BgpTemplates()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::has_data() const
{
    for (std::size_t index=0; index<bgp_template.size(); index++)
    {
        if(bgp_template[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::has_operation() const
{
    for (std::size_t index=0; index<bgp_template.size(); index++)
    {
        if(bgp_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-template")
    {
        auto c = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate>();
        c->parent = this;
        bgp_template.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bgp_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-template")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::BgpTemplate()
    :
    template_name{YType::str, "template-name"},
    sample_interval{YType::uint32, "sample-interval"}
    	,
    output_update_messages(nullptr) // presence node
	,errors_received(nullptr) // presence node
	,conn_established(nullptr) // presence node
	,output_messages(nullptr) // presence node
	,conn_dropped(nullptr) // presence node
	,input_update_messages(nullptr) // presence node
	,errors_sent(nullptr) // presence node
	,input_messages(nullptr) // presence node
{

    yang_name = "bgp-template"; yang_parent_name = "bgp-templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::~BgpTemplate()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::has_data() const
{
    return template_name.is_set
	|| sample_interval.is_set
	|| (output_update_messages !=  nullptr && output_update_messages->has_data())
	|| (errors_received !=  nullptr && errors_received->has_data())
	|| (conn_established !=  nullptr && conn_established->has_data())
	|| (output_messages !=  nullptr && output_messages->has_data())
	|| (conn_dropped !=  nullptr && conn_dropped->has_data())
	|| (input_update_messages !=  nullptr && input_update_messages->has_data())
	|| (errors_sent !=  nullptr && errors_sent->has_data())
	|| (input_messages !=  nullptr && input_messages->has_data());
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| (output_update_messages !=  nullptr && output_update_messages->has_operation())
	|| (errors_received !=  nullptr && errors_received->has_operation())
	|| (conn_established !=  nullptr && conn_established->has_operation())
	|| (output_messages !=  nullptr && output_messages->has_operation())
	|| (conn_dropped !=  nullptr && conn_dropped->has_operation())
	|| (input_update_messages !=  nullptr && input_update_messages->has_operation())
	|| (errors_sent !=  nullptr && errors_sent->has_operation())
	|| (input_messages !=  nullptr && input_messages->has_operation());
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/bgp/bgp-templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output-update-messages")
    {
        if(output_update_messages == nullptr)
        {
            output_update_messages = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages>();
        }
        return output_update_messages;
    }

    if(child_yang_name == "errors-received")
    {
        if(errors_received == nullptr)
        {
            errors_received = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived>();
        }
        return errors_received;
    }

    if(child_yang_name == "conn-established")
    {
        if(conn_established == nullptr)
        {
            conn_established = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished>();
        }
        return conn_established;
    }

    if(child_yang_name == "output-messages")
    {
        if(output_messages == nullptr)
        {
            output_messages = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages>();
        }
        return output_messages;
    }

    if(child_yang_name == "conn-dropped")
    {
        if(conn_dropped == nullptr)
        {
            conn_dropped = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped>();
        }
        return conn_dropped;
    }

    if(child_yang_name == "input-update-messages")
    {
        if(input_update_messages == nullptr)
        {
            input_update_messages = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages>();
        }
        return input_update_messages;
    }

    if(child_yang_name == "errors-sent")
    {
        if(errors_sent == nullptr)
        {
            errors_sent = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent>();
        }
        return errors_sent;
    }

    if(child_yang_name == "input-messages")
    {
        if(input_messages == nullptr)
        {
            input_messages = std::make_shared<PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages>();
        }
        return input_messages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(output_update_messages != nullptr)
    {
        children["output-update-messages"] = output_update_messages;
    }

    if(errors_received != nullptr)
    {
        children["errors-received"] = errors_received;
    }

    if(conn_established != nullptr)
    {
        children["conn-established"] = conn_established;
    }

    if(output_messages != nullptr)
    {
        children["output-messages"] = output_messages;
    }

    if(conn_dropped != nullptr)
    {
        children["conn-dropped"] = conn_dropped;
    }

    if(input_update_messages != nullptr)
    {
        children["input-update-messages"] = input_update_messages;
    }

    if(errors_sent != nullptr)
    {
        children["errors-sent"] = errors_sent;
    }

    if(input_messages != nullptr)
    {
        children["input-messages"] = input_messages;
    }

    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output-update-messages" || name == "errors-received" || name == "conn-established" || name == "output-messages" || name == "conn-dropped" || name == "input-update-messages" || name == "errors-sent" || name == "input-messages" || name == "template-name" || name == "sample-interval")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::OutputUpdateMessages()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-update-messages"; yang_parent_name = "bgp-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::~OutputUpdateMessages()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-update-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::ErrorsReceived()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "errors-received"; yang_parent_name = "bgp-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::~ErrorsReceived()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errors-received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::ConnEstablished()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "conn-established"; yang_parent_name = "bgp-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::~ConnEstablished()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conn-established";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::OutputMessages()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-messages"; yang_parent_name = "bgp-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::~OutputMessages()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::ConnDropped()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "conn-dropped"; yang_parent_name = "bgp-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::~ConnDropped()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conn-dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::InputUpdateMessages()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-update-messages"; yang_parent_name = "bgp-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::~InputUpdateMessages()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-update-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::ErrorsSent()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "errors-sent"; yang_parent_name = "bgp-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::~ErrorsSent()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errors-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::InputMessages()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-messages"; yang_parent_name = "bgp-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::~InputMessages()
{
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : ospfv2_protocol_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
	,input_lsa_acks_lsa(nullptr) // presence node
	,output_db_ds_lsa(nullptr) // presence node
	,input_db_ds_lsa(nullptr) // presence node
	,input_lsa_updates(nullptr) // presence node
	,output_db_ds(nullptr) // presence node
	,output_lsa_updates_lsa(nullptr) // presence node
	,input_db_ds(nullptr) // presence node
	,input_lsa_updates_lsa(nullptr) // presence node
	,output_packets(nullptr) // presence node
	,input_packets(nullptr) // presence node
	,output_hello_packets(nullptr) // presence node
	,input_hello_packets(nullptr) // presence node
	,output_ls_requests(nullptr) // presence node
	,output_lsa_acks_lsa(nullptr) // presence node
	,output_lsa_acks(nullptr) // presence node
	,input_lsa_acks(nullptr) // presence node
	,output_lsa_updates(nullptr) // presence node
	,output_ls_requests_lsa(nullptr) // presence node
	,input_ls_requests_lsa(nullptr) // presence node
	,input_ls_requests(nullptr) // presence node
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
	|| (input_lsa_acks_lsa !=  nullptr && input_lsa_acks_lsa->has_data())
	|| (output_db_ds_lsa !=  nullptr && output_db_ds_lsa->has_data())
	|| (input_db_ds_lsa !=  nullptr && input_db_ds_lsa->has_data())
	|| (input_lsa_updates !=  nullptr && input_lsa_updates->has_data())
	|| (output_db_ds !=  nullptr && output_db_ds->has_data())
	|| (output_lsa_updates_lsa !=  nullptr && output_lsa_updates_lsa->has_data())
	|| (input_db_ds !=  nullptr && input_db_ds->has_data())
	|| (input_lsa_updates_lsa !=  nullptr && input_lsa_updates_lsa->has_data())
	|| (output_packets !=  nullptr && output_packets->has_data())
	|| (input_packets !=  nullptr && input_packets->has_data())
	|| (output_hello_packets !=  nullptr && output_hello_packets->has_data())
	|| (input_hello_packets !=  nullptr && input_hello_packets->has_data())
	|| (output_ls_requests !=  nullptr && output_ls_requests->has_data())
	|| (output_lsa_acks_lsa !=  nullptr && output_lsa_acks_lsa->has_data())
	|| (output_lsa_acks !=  nullptr && output_lsa_acks->has_data())
	|| (input_lsa_acks !=  nullptr && input_lsa_acks->has_data())
	|| (output_lsa_updates !=  nullptr && output_lsa_updates->has_data())
	|| (output_ls_requests_lsa !=  nullptr && output_ls_requests_lsa->has_data())
	|| (input_ls_requests_lsa !=  nullptr && input_ls_requests_lsa->has_data())
	|| (input_ls_requests !=  nullptr && input_ls_requests->has_data());
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| (checksum_errors !=  nullptr && checksum_errors->has_operation())
	|| (input_lsa_acks_lsa !=  nullptr && input_lsa_acks_lsa->has_operation())
	|| (output_db_ds_lsa !=  nullptr && output_db_ds_lsa->has_operation())
	|| (input_db_ds_lsa !=  nullptr && input_db_ds_lsa->has_operation())
	|| (input_lsa_updates !=  nullptr && input_lsa_updates->has_operation())
	|| (output_db_ds !=  nullptr && output_db_ds->has_operation())
	|| (output_lsa_updates_lsa !=  nullptr && output_lsa_updates_lsa->has_operation())
	|| (input_db_ds !=  nullptr && input_db_ds->has_operation())
	|| (input_lsa_updates_lsa !=  nullptr && input_lsa_updates_lsa->has_operation())
	|| (output_packets !=  nullptr && output_packets->has_operation())
	|| (input_packets !=  nullptr && input_packets->has_operation())
	|| (output_hello_packets !=  nullptr && output_hello_packets->has_operation())
	|| (input_hello_packets !=  nullptr && input_hello_packets->has_operation())
	|| (output_ls_requests !=  nullptr && output_ls_requests->has_operation())
	|| (output_lsa_acks_lsa !=  nullptr && output_lsa_acks_lsa->has_operation())
	|| (output_lsa_acks !=  nullptr && output_lsa_acks->has_operation())
	|| (input_lsa_acks !=  nullptr && input_lsa_acks->has_operation())
	|| (output_lsa_updates !=  nullptr && output_lsa_updates->has_operation())
	|| (output_ls_requests_lsa !=  nullptr && output_ls_requests_lsa->has_operation())
	|| (input_ls_requests_lsa !=  nullptr && input_ls_requests_lsa->has_operation())
	|| (input_ls_requests !=  nullptr && input_ls_requests->has_operation());
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

    if(child_yang_name == "input-lsa-acks-lsa")
    {
        if(input_lsa_acks_lsa == nullptr)
        {
            input_lsa_acks_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa>();
        }
        return input_lsa_acks_lsa;
    }

    if(child_yang_name == "output-db-ds-lsa")
    {
        if(output_db_ds_lsa == nullptr)
        {
            output_db_ds_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa>();
        }
        return output_db_ds_lsa;
    }

    if(child_yang_name == "input-db-ds-lsa")
    {
        if(input_db_ds_lsa == nullptr)
        {
            input_db_ds_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa>();
        }
        return input_db_ds_lsa;
    }

    if(child_yang_name == "input-lsa-updates")
    {
        if(input_lsa_updates == nullptr)
        {
            input_lsa_updates = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates>();
        }
        return input_lsa_updates;
    }

    if(child_yang_name == "output-db-ds")
    {
        if(output_db_ds == nullptr)
        {
            output_db_ds = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs>();
        }
        return output_db_ds;
    }

    if(child_yang_name == "output-lsa-updates-lsa")
    {
        if(output_lsa_updates_lsa == nullptr)
        {
            output_lsa_updates_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa>();
        }
        return output_lsa_updates_lsa;
    }

    if(child_yang_name == "input-db-ds")
    {
        if(input_db_ds == nullptr)
        {
            input_db_ds = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs>();
        }
        return input_db_ds;
    }

    if(child_yang_name == "input-lsa-updates-lsa")
    {
        if(input_lsa_updates_lsa == nullptr)
        {
            input_lsa_updates_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa>();
        }
        return input_lsa_updates_lsa;
    }

    if(child_yang_name == "output-packets")
    {
        if(output_packets == nullptr)
        {
            output_packets = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets>();
        }
        return output_packets;
    }

    if(child_yang_name == "input-packets")
    {
        if(input_packets == nullptr)
        {
            input_packets = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets>();
        }
        return input_packets;
    }

    if(child_yang_name == "output-hello-packets")
    {
        if(output_hello_packets == nullptr)
        {
            output_hello_packets = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets>();
        }
        return output_hello_packets;
    }

    if(child_yang_name == "input-hello-packets")
    {
        if(input_hello_packets == nullptr)
        {
            input_hello_packets = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets>();
        }
        return input_hello_packets;
    }

    if(child_yang_name == "output-ls-requests")
    {
        if(output_ls_requests == nullptr)
        {
            output_ls_requests = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests>();
        }
        return output_ls_requests;
    }

    if(child_yang_name == "output-lsa-acks-lsa")
    {
        if(output_lsa_acks_lsa == nullptr)
        {
            output_lsa_acks_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa>();
        }
        return output_lsa_acks_lsa;
    }

    if(child_yang_name == "output-lsa-acks")
    {
        if(output_lsa_acks == nullptr)
        {
            output_lsa_acks = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks>();
        }
        return output_lsa_acks;
    }

    if(child_yang_name == "input-lsa-acks")
    {
        if(input_lsa_acks == nullptr)
        {
            input_lsa_acks = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks>();
        }
        return input_lsa_acks;
    }

    if(child_yang_name == "output-lsa-updates")
    {
        if(output_lsa_updates == nullptr)
        {
            output_lsa_updates = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates>();
        }
        return output_lsa_updates;
    }

    if(child_yang_name == "output-ls-requests-lsa")
    {
        if(output_ls_requests_lsa == nullptr)
        {
            output_ls_requests_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa>();
        }
        return output_ls_requests_lsa;
    }

    if(child_yang_name == "input-ls-requests-lsa")
    {
        if(input_ls_requests_lsa == nullptr)
        {
            input_ls_requests_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa>();
        }
        return input_ls_requests_lsa;
    }

    if(child_yang_name == "input-ls-requests")
    {
        if(input_ls_requests == nullptr)
        {
            input_ls_requests = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests>();
        }
        return input_ls_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(checksum_errors != nullptr)
    {
        children["checksum-errors"] = checksum_errors;
    }

    if(input_lsa_acks_lsa != nullptr)
    {
        children["input-lsa-acks-lsa"] = input_lsa_acks_lsa;
    }

    if(output_db_ds_lsa != nullptr)
    {
        children["output-db-ds-lsa"] = output_db_ds_lsa;
    }

    if(input_db_ds_lsa != nullptr)
    {
        children["input-db-ds-lsa"] = input_db_ds_lsa;
    }

    if(input_lsa_updates != nullptr)
    {
        children["input-lsa-updates"] = input_lsa_updates;
    }

    if(output_db_ds != nullptr)
    {
        children["output-db-ds"] = output_db_ds;
    }

    if(output_lsa_updates_lsa != nullptr)
    {
        children["output-lsa-updates-lsa"] = output_lsa_updates_lsa;
    }

    if(input_db_ds != nullptr)
    {
        children["input-db-ds"] = input_db_ds;
    }

    if(input_lsa_updates_lsa != nullptr)
    {
        children["input-lsa-updates-lsa"] = input_lsa_updates_lsa;
    }

    if(output_packets != nullptr)
    {
        children["output-packets"] = output_packets;
    }

    if(input_packets != nullptr)
    {
        children["input-packets"] = input_packets;
    }

    if(output_hello_packets != nullptr)
    {
        children["output-hello-packets"] = output_hello_packets;
    }

    if(input_hello_packets != nullptr)
    {
        children["input-hello-packets"] = input_hello_packets;
    }

    if(output_ls_requests != nullptr)
    {
        children["output-ls-requests"] = output_ls_requests;
    }

    if(output_lsa_acks_lsa != nullptr)
    {
        children["output-lsa-acks-lsa"] = output_lsa_acks_lsa;
    }

    if(output_lsa_acks != nullptr)
    {
        children["output-lsa-acks"] = output_lsa_acks;
    }

    if(input_lsa_acks != nullptr)
    {
        children["input-lsa-acks"] = input_lsa_acks;
    }

    if(output_lsa_updates != nullptr)
    {
        children["output-lsa-updates"] = output_lsa_updates;
    }

    if(output_ls_requests_lsa != nullptr)
    {
        children["output-ls-requests-lsa"] = output_ls_requests_lsa;
    }

    if(input_ls_requests_lsa != nullptr)
    {
        children["input-ls-requests-lsa"] = input_ls_requests_lsa;
    }

    if(input_ls_requests != nullptr)
    {
        children["input-ls-requests"] = input_ls_requests;
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
    if(name == "checksum-errors" || name == "input-lsa-acks-lsa" || name == "output-db-ds-lsa" || name == "input-db-ds-lsa" || name == "input-lsa-updates" || name == "output-db-ds" || name == "output-lsa-updates-lsa" || name == "input-db-ds" || name == "input-lsa-updates-lsa" || name == "output-packets" || name == "input-packets" || name == "output-hello-packets" || name == "input-hello-packets" || name == "output-ls-requests" || name == "output-lsa-acks-lsa" || name == "output-lsa-acks" || name == "input-lsa-acks" || name == "output-lsa-updates" || name == "output-ls-requests-lsa" || name == "input-ls-requests-lsa" || name == "input-ls-requests" || name == "template-name" || name == "sample-interval")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::ChecksumErrors()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "checksum-errors"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::~ChecksumErrors()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::ChecksumErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::InputLsaAcksLsa()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-lsa-acks-lsa"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::~InputLsaAcksLsa()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcksLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::OutputDbDsLsa()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-db-ds-lsa"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::~OutputDbDsLsa()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDsLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::InputDbDsLsa()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-db-ds-lsa"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::~InputDbDsLsa()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDsLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::InputLsaUpdates()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-lsa-updates"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::~InputLsaUpdates()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::OutputDbDs()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-db-ds"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::~OutputDbDs()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputDbDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::OutputLsaUpdatesLsa()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-lsa-updates-lsa"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::~OutputLsaUpdatesLsa()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdatesLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::InputDbDs()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-db-ds"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::~InputDbDs()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputDbDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::InputLsaUpdatesLsa()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-lsa-updates-lsa"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::~InputLsaUpdatesLsa()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaUpdatesLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::OutputPackets()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-packets"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::~OutputPackets()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::InputPackets()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-packets"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::~InputPackets()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::OutputHelloPackets()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-hello-packets"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::~OutputHelloPackets()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputHelloPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::InputHelloPackets()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-hello-packets"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::~InputHelloPackets()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputHelloPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::OutputLsRequests()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-ls-requests"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::~OutputLsRequests()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::OutputLsaAcksLsa()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-lsa-acks-lsa"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::~OutputLsaAcksLsa()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcksLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::OutputLsaAcks()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-lsa-acks"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::~OutputLsaAcks()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaAcks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::InputLsaAcks()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-lsa-acks"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::~InputLsaAcks()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsaAcks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::OutputLsaUpdates()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-lsa-updates"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::~OutputLsaUpdates()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsaUpdates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::OutputLsRequestsLsa()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-ls-requests-lsa"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::~OutputLsRequestsLsa()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::OutputLsRequestsLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::InputLsRequestsLsa()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-ls-requests-lsa"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::~InputLsRequestsLsa()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequestsLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::InputLsRequests()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-ls-requests"; yang_parent_name = "ospfv2-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::~InputLsRequests()
{
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv2Protocol::Ospfv2ProtocolTemplates::Ospfv2ProtocolTemplate::InputLsRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::CpuNode::CpuNode()
    :
    cpu_node_templates(std::make_shared<PerfMgmt::Threshold::CpuNode::CpuNodeTemplates>())
{
    cpu_node_templates->parent = this;

    yang_name = "cpu-node"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::CpuNode::~CpuNode()
{
}

bool PerfMgmt::Threshold::CpuNode::has_data() const
{
    return (cpu_node_templates !=  nullptr && cpu_node_templates->has_data());
}

bool PerfMgmt::Threshold::CpuNode::has_operation() const
{
    return is_set(yfilter)
	|| (cpu_node_templates !=  nullptr && cpu_node_templates->has_operation());
}

std::string PerfMgmt::Threshold::CpuNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::CpuNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::CpuNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::CpuNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-node-templates")
    {
        if(cpu_node_templates == nullptr)
        {
            cpu_node_templates = std::make_shared<PerfMgmt::Threshold::CpuNode::CpuNodeTemplates>();
        }
        return cpu_node_templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::CpuNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cpu_node_templates != nullptr)
    {
        children["cpu-node-templates"] = cpu_node_templates;
    }

    return children;
}

void PerfMgmt::Threshold::CpuNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::CpuNode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::CpuNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-node-templates")
        return true;
    return false;
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplates()
{

    yang_name = "cpu-node-templates"; yang_parent_name = "cpu-node"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::~CpuNodeTemplates()
{
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::has_data() const
{
    for (std::size_t index=0; index<cpu_node_template.size(); index++)
    {
        if(cpu_node_template[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::has_operation() const
{
    for (std::size_t index=0; index<cpu_node_template.size(); index++)
    {
        if(cpu_node_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/cpu-node/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-node-templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-node-template")
    {
        auto c = std::make_shared<PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate>();
        c->parent = this;
        cpu_node_template.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cpu_node_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-node-template")
        return true;
    return false;
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::CpuNodeTemplate()
    :
    template_name{YType::str, "template-name"},
    sample_interval{YType::uint32, "sample-interval"}
    	,
    average_cpu_used(nullptr) // presence node
	,no_processes(nullptr) // presence node
{

    yang_name = "cpu-node-template"; yang_parent_name = "cpu-node-templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::~CpuNodeTemplate()
{
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::has_data() const
{
    return template_name.is_set
	|| sample_interval.is_set
	|| (average_cpu_used !=  nullptr && average_cpu_used->has_data())
	|| (no_processes !=  nullptr && no_processes->has_data());
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| (average_cpu_used !=  nullptr && average_cpu_used->has_operation())
	|| (no_processes !=  nullptr && no_processes->has_operation());
}

std::string PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/cpu-node/cpu-node-templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-node-template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "average-cpu-used")
    {
        if(average_cpu_used == nullptr)
        {
            average_cpu_used = std::make_shared<PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed>();
        }
        return average_cpu_used;
    }

    if(child_yang_name == "no-processes")
    {
        if(no_processes == nullptr)
        {
            no_processes = std::make_shared<PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses>();
        }
        return no_processes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(average_cpu_used != nullptr)
    {
        children["average-cpu-used"] = average_cpu_used;
    }

    if(no_processes != nullptr)
    {
        children["no-processes"] = no_processes;
    }

    return children;
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-cpu-used" || name == "no-processes" || name == "template-name" || name == "sample-interval")
        return true;
    return false;
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::AverageCpuUsed()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "average-cpu-used"; yang_parent_name = "cpu-node-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::~AverageCpuUsed()
{
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average-cpu-used";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::NoProcesses()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::int32, "value"},
    end_range_value{YType::int32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "no-processes"; yang_parent_name = "cpu-node-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::~NoProcesses()
{
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-processes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterface()
    :
    data_rate_interface_templates(std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates>())
{
    data_rate_interface_templates->parent = this;

    yang_name = "data-rate-interface"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::DataRateInterface::~DataRateInterface()
{
}

bool PerfMgmt::Threshold::DataRateInterface::has_data() const
{
    return (data_rate_interface_templates !=  nullptr && data_rate_interface_templates->has_data());
}

bool PerfMgmt::Threshold::DataRateInterface::has_operation() const
{
    return is_set(yfilter)
	|| (data_rate_interface_templates !=  nullptr && data_rate_interface_templates->has_operation());
}

std::string PerfMgmt::Threshold::DataRateInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::DataRateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-rate-interface-templates")
    {
        if(data_rate_interface_templates == nullptr)
        {
            data_rate_interface_templates = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates>();
        }
        return data_rate_interface_templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data_rate_interface_templates != nullptr)
    {
        children["data-rate-interface-templates"] = data_rate_interface_templates;
    }

    return children;
}

void PerfMgmt::Threshold::DataRateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::DataRateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::DataRateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-rate-interface-templates")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplates()
{

    yang_name = "data-rate-interface-templates"; yang_parent_name = "data-rate-interface"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::~DataRateInterfaceTemplates()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::has_data() const
{
    for (std::size_t index=0; index<data_rate_interface_template.size(); index++)
    {
        if(data_rate_interface_template[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::has_operation() const
{
    for (std::size_t index=0; index<data_rate_interface_template.size(); index++)
    {
        if(data_rate_interface_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/data-rate-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface-templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-rate-interface-template")
    {
        auto c = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate>();
        c->parent = this;
        data_rate_interface_template.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : data_rate_interface_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-rate-interface-template")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::DataRateInterfaceTemplate()
    :
    template_name{YType::str, "template-name"},
    sample_interval{YType::uint32, "sample-interval"},
    reg_exp_group{YType::str, "reg-exp-group"},
    vrf_group{YType::str, "vrf-group"}
    	,
    input_data_rate(nullptr) // presence node
	,bandwidth(nullptr) // presence node
	,output_packet_rate(nullptr) // presence node
	,input_peak_pkts(nullptr) // presence node
	,output_peak_rate(nullptr) // presence node
	,output_data_rate(nullptr) // presence node
	,input_packet_rate(nullptr) // presence node
	,output_peak_pkts(nullptr) // presence node
	,input_peak_rate(nullptr) // presence node
{

    yang_name = "data-rate-interface-template"; yang_parent_name = "data-rate-interface-templates"; is_top_level_class = false; has_list_ancestor = false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::~DataRateInterfaceTemplate()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::has_data() const
{
    return template_name.is_set
	|| sample_interval.is_set
	|| reg_exp_group.is_set
	|| vrf_group.is_set
	|| (input_data_rate !=  nullptr && input_data_rate->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (output_packet_rate !=  nullptr && output_packet_rate->has_data())
	|| (input_peak_pkts !=  nullptr && input_peak_pkts->has_data())
	|| (output_peak_rate !=  nullptr && output_peak_rate->has_data())
	|| (output_data_rate !=  nullptr && output_data_rate->has_data())
	|| (input_packet_rate !=  nullptr && input_packet_rate->has_data())
	|| (output_peak_pkts !=  nullptr && output_peak_pkts->has_data())
	|| (input_peak_rate !=  nullptr && input_peak_rate->has_data());
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(reg_exp_group.yfilter)
	|| ydk::is_set(vrf_group.yfilter)
	|| (input_data_rate !=  nullptr && input_data_rate->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (output_packet_rate !=  nullptr && output_packet_rate->has_operation())
	|| (input_peak_pkts !=  nullptr && input_peak_pkts->has_operation())
	|| (output_peak_rate !=  nullptr && output_peak_rate->has_operation())
	|| (output_data_rate !=  nullptr && output_data_rate->has_operation())
	|| (input_packet_rate !=  nullptr && input_packet_rate->has_operation())
	|| (output_peak_pkts !=  nullptr && output_peak_pkts->has_operation())
	|| (input_peak_rate !=  nullptr && input_peak_rate->has_operation());
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/data-rate-interface/data-rate-interface-templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface-template" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.yfilter)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.yfilter)) leaf_name_data.push_back(vrf_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-data-rate")
    {
        if(input_data_rate == nullptr)
        {
            input_data_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate>();
        }
        return input_data_rate;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "output-packet-rate")
    {
        if(output_packet_rate == nullptr)
        {
            output_packet_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate>();
        }
        return output_packet_rate;
    }

    if(child_yang_name == "input-peak-pkts")
    {
        if(input_peak_pkts == nullptr)
        {
            input_peak_pkts = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts>();
        }
        return input_peak_pkts;
    }

    if(child_yang_name == "output-peak-rate")
    {
        if(output_peak_rate == nullptr)
        {
            output_peak_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate>();
        }
        return output_peak_rate;
    }

    if(child_yang_name == "output-data-rate")
    {
        if(output_data_rate == nullptr)
        {
            output_data_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate>();
        }
        return output_data_rate;
    }

    if(child_yang_name == "input-packet-rate")
    {
        if(input_packet_rate == nullptr)
        {
            input_packet_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate>();
        }
        return input_packet_rate;
    }

    if(child_yang_name == "output-peak-pkts")
    {
        if(output_peak_pkts == nullptr)
        {
            output_peak_pkts = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts>();
        }
        return output_peak_pkts;
    }

    if(child_yang_name == "input-peak-rate")
    {
        if(input_peak_rate == nullptr)
        {
            input_peak_rate = std::make_shared<PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate>();
        }
        return input_peak_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input_data_rate != nullptr)
    {
        children["input-data-rate"] = input_data_rate;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(output_packet_rate != nullptr)
    {
        children["output-packet-rate"] = output_packet_rate;
    }

    if(input_peak_pkts != nullptr)
    {
        children["input-peak-pkts"] = input_peak_pkts;
    }

    if(output_peak_rate != nullptr)
    {
        children["output-peak-rate"] = output_peak_rate;
    }

    if(output_data_rate != nullptr)
    {
        children["output-data-rate"] = output_data_rate;
    }

    if(input_packet_rate != nullptr)
    {
        children["input-packet-rate"] = input_packet_rate;
    }

    if(output_peak_pkts != nullptr)
    {
        children["output-peak-pkts"] = output_peak_pkts;
    }

    if(input_peak_rate != nullptr)
    {
        children["input-peak-rate"] = input_peak_rate;
    }

    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
        reg_exp_group.value_namespace = name_space;
        reg_exp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
        vrf_group.value_namespace = name_space;
        vrf_group.value_namespace_prefix = name_space_prefix;
    }
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group.yfilter = yfilter;
    }
    if(value_path == "vrf-group")
    {
        vrf_group.yfilter = yfilter;
    }
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-data-rate" || name == "bandwidth" || name == "output-packet-rate" || name == "input-peak-pkts" || name == "output-peak-rate" || name == "output-data-rate" || name == "input-packet-rate" || name == "output-peak-pkts" || name == "input-peak-rate" || name == "template-name" || name == "sample-interval" || name == "reg-exp-group" || name == "vrf-group")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::InputDataRate()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-data-rate"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::~InputDataRate()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-data-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::Bandwidth()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "bandwidth"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::~Bandwidth()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::OutputPacketRate()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-packet-rate"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::~OutputPacketRate()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::InputPeakPkts()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-peak-pkts"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::~InputPeakPkts()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::OutputPeakRate()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-peak-rate"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::~OutputPeakRate()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::OutputDataRate()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-data-rate"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::~OutputDataRate()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::InputPacketRate()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-packet-rate"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::~InputPacketRate()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
}

std::string PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-packet-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::OutputPeakPkts()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-peak-pkts"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::~OutputPeakPkts()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::InputPeakRate()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-peak-rate"; yang_parent_name = "data-rate-interface-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::~InputPeakRate()
{
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : process_node_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
	,peak_memory(nullptr) // presence node
	,no_threads(nullptr) // presence node
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
	|| (peak_memory !=  nullptr && peak_memory->has_data())
	|| (no_threads !=  nullptr && no_threads->has_data());
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| (average_cpu_used !=  nullptr && average_cpu_used->has_operation())
	|| (peak_memory !=  nullptr && peak_memory->has_operation())
	|| (no_threads !=  nullptr && no_threads->has_operation());
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

    if(child_yang_name == "peak-memory")
    {
        if(peak_memory == nullptr)
        {
            peak_memory = std::make_shared<PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory>();
        }
        return peak_memory;
    }

    if(child_yang_name == "no-threads")
    {
        if(no_threads == nullptr)
        {
            no_threads = std::make_shared<PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads>();
        }
        return no_threads;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(average_cpu_used != nullptr)
    {
        children["average-cpu-used"] = average_cpu_used;
    }

    if(peak_memory != nullptr)
    {
        children["peak-memory"] = peak_memory;
    }

    if(no_threads != nullptr)
    {
        children["no-threads"] = no_threads;
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
    if(name == "average-cpu-used" || name == "peak-memory" || name == "no-threads" || name == "template-name" || name == "sample-interval")
        return true;
    return false;
}

PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::AverageCpuUsed()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "average-cpu-used"; yang_parent_name = "process-node-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::~AverageCpuUsed()
{
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::AverageCpuUsed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::PeakMemory()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::int32, "value"},
    end_range_value{YType::int32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "peak-memory"; yang_parent_name = "process-node-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::~PeakMemory()
{
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::PeakMemory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::NoThreads()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "no-threads"; yang_parent_name = "process-node-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::~NoThreads()
{
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::ProcessNode::ProcessNodeTemplates::ProcessNodeTemplate::NoThreads::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : memory_node_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    peak_memory(nullptr) // presence node
	,curr_memory(nullptr) // presence node
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
	|| (peak_memory !=  nullptr && peak_memory->has_data())
	|| (curr_memory !=  nullptr && curr_memory->has_data());
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| (peak_memory !=  nullptr && peak_memory->has_operation())
	|| (curr_memory !=  nullptr && curr_memory->has_operation());
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
    if(child_yang_name == "peak-memory")
    {
        if(peak_memory == nullptr)
        {
            peak_memory = std::make_shared<PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory>();
        }
        return peak_memory;
    }

    if(child_yang_name == "curr-memory")
    {
        if(curr_memory == nullptr)
        {
            curr_memory = std::make_shared<PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory>();
        }
        return curr_memory;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peak_memory != nullptr)
    {
        children["peak-memory"] = peak_memory;
    }

    if(curr_memory != nullptr)
    {
        children["curr-memory"] = curr_memory;
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
    if(name == "peak-memory" || name == "curr-memory" || name == "template-name" || name == "sample-interval")
        return true;
    return false;
}

PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::PeakMemory()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "peak-memory"; yang_parent_name = "memory-node-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::~PeakMemory()
{
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::PeakMemory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::CurrMemory()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::int32, "value"},
    end_range_value{YType::int32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "curr-memory"; yang_parent_name = "memory-node-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::~CurrMemory()
{
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::MemoryNode::MemoryNodeTemplates::MemoryNodeTemplate::CurrMemory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
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
    char count=0;
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
    char count=0;
    count = 0;
    for (auto const & c : ospfv3_protocol_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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
    input_lsa_acks_lsa(nullptr) // presence node
	,output_db_ds_lsa(nullptr) // presence node
	,input_db_ds_lsa(nullptr) // presence node
	,input_lsa_updates(nullptr) // presence node
	,output_db_ds(nullptr) // presence node
	,output_lsa_updates_lsa(nullptr) // presence node
	,input_db_ds(nullptr) // presence node
	,input_lsa_updates_lsa(nullptr) // presence node
	,output_packets(nullptr) // presence node
	,input_packets(nullptr) // presence node
	,output_hello_packets(nullptr) // presence node
	,input_hello_packets(nullptr) // presence node
	,output_ls_requests(nullptr) // presence node
	,output_lsa_acks_lsa(nullptr) // presence node
	,output_lsa_acks(nullptr) // presence node
	,input_lsa_acks(nullptr) // presence node
	,output_lsa_updates(nullptr) // presence node
	,output_ls_requests_lsa(nullptr) // presence node
	,input_ls_requests_lsa(nullptr) // presence node
	,input_ls_requests(nullptr) // presence node
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
	|| (input_lsa_acks_lsa !=  nullptr && input_lsa_acks_lsa->has_data())
	|| (output_db_ds_lsa !=  nullptr && output_db_ds_lsa->has_data())
	|| (input_db_ds_lsa !=  nullptr && input_db_ds_lsa->has_data())
	|| (input_lsa_updates !=  nullptr && input_lsa_updates->has_data())
	|| (output_db_ds !=  nullptr && output_db_ds->has_data())
	|| (output_lsa_updates_lsa !=  nullptr && output_lsa_updates_lsa->has_data())
	|| (input_db_ds !=  nullptr && input_db_ds->has_data())
	|| (input_lsa_updates_lsa !=  nullptr && input_lsa_updates_lsa->has_data())
	|| (output_packets !=  nullptr && output_packets->has_data())
	|| (input_packets !=  nullptr && input_packets->has_data())
	|| (output_hello_packets !=  nullptr && output_hello_packets->has_data())
	|| (input_hello_packets !=  nullptr && input_hello_packets->has_data())
	|| (output_ls_requests !=  nullptr && output_ls_requests->has_data())
	|| (output_lsa_acks_lsa !=  nullptr && output_lsa_acks_lsa->has_data())
	|| (output_lsa_acks !=  nullptr && output_lsa_acks->has_data())
	|| (input_lsa_acks !=  nullptr && input_lsa_acks->has_data())
	|| (output_lsa_updates !=  nullptr && output_lsa_updates->has_data())
	|| (output_ls_requests_lsa !=  nullptr && output_ls_requests_lsa->has_data())
	|| (input_ls_requests_lsa !=  nullptr && input_ls_requests_lsa->has_data())
	|| (input_ls_requests !=  nullptr && input_ls_requests->has_data());
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| (input_lsa_acks_lsa !=  nullptr && input_lsa_acks_lsa->has_operation())
	|| (output_db_ds_lsa !=  nullptr && output_db_ds_lsa->has_operation())
	|| (input_db_ds_lsa !=  nullptr && input_db_ds_lsa->has_operation())
	|| (input_lsa_updates !=  nullptr && input_lsa_updates->has_operation())
	|| (output_db_ds !=  nullptr && output_db_ds->has_operation())
	|| (output_lsa_updates_lsa !=  nullptr && output_lsa_updates_lsa->has_operation())
	|| (input_db_ds !=  nullptr && input_db_ds->has_operation())
	|| (input_lsa_updates_lsa !=  nullptr && input_lsa_updates_lsa->has_operation())
	|| (output_packets !=  nullptr && output_packets->has_operation())
	|| (input_packets !=  nullptr && input_packets->has_operation())
	|| (output_hello_packets !=  nullptr && output_hello_packets->has_operation())
	|| (input_hello_packets !=  nullptr && input_hello_packets->has_operation())
	|| (output_ls_requests !=  nullptr && output_ls_requests->has_operation())
	|| (output_lsa_acks_lsa !=  nullptr && output_lsa_acks_lsa->has_operation())
	|| (output_lsa_acks !=  nullptr && output_lsa_acks->has_operation())
	|| (input_lsa_acks !=  nullptr && input_lsa_acks->has_operation())
	|| (output_lsa_updates !=  nullptr && output_lsa_updates->has_operation())
	|| (output_ls_requests_lsa !=  nullptr && output_ls_requests_lsa->has_operation())
	|| (input_ls_requests_lsa !=  nullptr && input_ls_requests_lsa->has_operation())
	|| (input_ls_requests !=  nullptr && input_ls_requests->has_operation());
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
    if(child_yang_name == "input-lsa-acks-lsa")
    {
        if(input_lsa_acks_lsa == nullptr)
        {
            input_lsa_acks_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa>();
        }
        return input_lsa_acks_lsa;
    }

    if(child_yang_name == "output-db-ds-lsa")
    {
        if(output_db_ds_lsa == nullptr)
        {
            output_db_ds_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa>();
        }
        return output_db_ds_lsa;
    }

    if(child_yang_name == "input-db-ds-lsa")
    {
        if(input_db_ds_lsa == nullptr)
        {
            input_db_ds_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa>();
        }
        return input_db_ds_lsa;
    }

    if(child_yang_name == "input-lsa-updates")
    {
        if(input_lsa_updates == nullptr)
        {
            input_lsa_updates = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates>();
        }
        return input_lsa_updates;
    }

    if(child_yang_name == "output-db-ds")
    {
        if(output_db_ds == nullptr)
        {
            output_db_ds = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs>();
        }
        return output_db_ds;
    }

    if(child_yang_name == "output-lsa-updates-lsa")
    {
        if(output_lsa_updates_lsa == nullptr)
        {
            output_lsa_updates_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa>();
        }
        return output_lsa_updates_lsa;
    }

    if(child_yang_name == "input-db-ds")
    {
        if(input_db_ds == nullptr)
        {
            input_db_ds = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs>();
        }
        return input_db_ds;
    }

    if(child_yang_name == "input-lsa-updates-lsa")
    {
        if(input_lsa_updates_lsa == nullptr)
        {
            input_lsa_updates_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa>();
        }
        return input_lsa_updates_lsa;
    }

    if(child_yang_name == "output-packets")
    {
        if(output_packets == nullptr)
        {
            output_packets = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets>();
        }
        return output_packets;
    }

    if(child_yang_name == "input-packets")
    {
        if(input_packets == nullptr)
        {
            input_packets = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets>();
        }
        return input_packets;
    }

    if(child_yang_name == "output-hello-packets")
    {
        if(output_hello_packets == nullptr)
        {
            output_hello_packets = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets>();
        }
        return output_hello_packets;
    }

    if(child_yang_name == "input-hello-packets")
    {
        if(input_hello_packets == nullptr)
        {
            input_hello_packets = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets>();
        }
        return input_hello_packets;
    }

    if(child_yang_name == "output-ls-requests")
    {
        if(output_ls_requests == nullptr)
        {
            output_ls_requests = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests>();
        }
        return output_ls_requests;
    }

    if(child_yang_name == "output-lsa-acks-lsa")
    {
        if(output_lsa_acks_lsa == nullptr)
        {
            output_lsa_acks_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa>();
        }
        return output_lsa_acks_lsa;
    }

    if(child_yang_name == "output-lsa-acks")
    {
        if(output_lsa_acks == nullptr)
        {
            output_lsa_acks = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks>();
        }
        return output_lsa_acks;
    }

    if(child_yang_name == "input-lsa-acks")
    {
        if(input_lsa_acks == nullptr)
        {
            input_lsa_acks = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks>();
        }
        return input_lsa_acks;
    }

    if(child_yang_name == "output-lsa-updates")
    {
        if(output_lsa_updates == nullptr)
        {
            output_lsa_updates = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates>();
        }
        return output_lsa_updates;
    }

    if(child_yang_name == "output-ls-requests-lsa")
    {
        if(output_ls_requests_lsa == nullptr)
        {
            output_ls_requests_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa>();
        }
        return output_ls_requests_lsa;
    }

    if(child_yang_name == "input-ls-requests-lsa")
    {
        if(input_ls_requests_lsa == nullptr)
        {
            input_ls_requests_lsa = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa>();
        }
        return input_ls_requests_lsa;
    }

    if(child_yang_name == "input-ls-requests")
    {
        if(input_ls_requests == nullptr)
        {
            input_ls_requests = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests>();
        }
        return input_ls_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input_lsa_acks_lsa != nullptr)
    {
        children["input-lsa-acks-lsa"] = input_lsa_acks_lsa;
    }

    if(output_db_ds_lsa != nullptr)
    {
        children["output-db-ds-lsa"] = output_db_ds_lsa;
    }

    if(input_db_ds_lsa != nullptr)
    {
        children["input-db-ds-lsa"] = input_db_ds_lsa;
    }

    if(input_lsa_updates != nullptr)
    {
        children["input-lsa-updates"] = input_lsa_updates;
    }

    if(output_db_ds != nullptr)
    {
        children["output-db-ds"] = output_db_ds;
    }

    if(output_lsa_updates_lsa != nullptr)
    {
        children["output-lsa-updates-lsa"] = output_lsa_updates_lsa;
    }

    if(input_db_ds != nullptr)
    {
        children["input-db-ds"] = input_db_ds;
    }

    if(input_lsa_updates_lsa != nullptr)
    {
        children["input-lsa-updates-lsa"] = input_lsa_updates_lsa;
    }

    if(output_packets != nullptr)
    {
        children["output-packets"] = output_packets;
    }

    if(input_packets != nullptr)
    {
        children["input-packets"] = input_packets;
    }

    if(output_hello_packets != nullptr)
    {
        children["output-hello-packets"] = output_hello_packets;
    }

    if(input_hello_packets != nullptr)
    {
        children["input-hello-packets"] = input_hello_packets;
    }

    if(output_ls_requests != nullptr)
    {
        children["output-ls-requests"] = output_ls_requests;
    }

    if(output_lsa_acks_lsa != nullptr)
    {
        children["output-lsa-acks-lsa"] = output_lsa_acks_lsa;
    }

    if(output_lsa_acks != nullptr)
    {
        children["output-lsa-acks"] = output_lsa_acks;
    }

    if(input_lsa_acks != nullptr)
    {
        children["input-lsa-acks"] = input_lsa_acks;
    }

    if(output_lsa_updates != nullptr)
    {
        children["output-lsa-updates"] = output_lsa_updates;
    }

    if(output_ls_requests_lsa != nullptr)
    {
        children["output-ls-requests-lsa"] = output_ls_requests_lsa;
    }

    if(input_ls_requests_lsa != nullptr)
    {
        children["input-ls-requests-lsa"] = input_ls_requests_lsa;
    }

    if(input_ls_requests != nullptr)
    {
        children["input-ls-requests"] = input_ls_requests;
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
    if(name == "input-lsa-acks-lsa" || name == "output-db-ds-lsa" || name == "input-db-ds-lsa" || name == "input-lsa-updates" || name == "output-db-ds" || name == "output-lsa-updates-lsa" || name == "input-db-ds" || name == "input-lsa-updates-lsa" || name == "output-packets" || name == "input-packets" || name == "output-hello-packets" || name == "input-hello-packets" || name == "output-ls-requests" || name == "output-lsa-acks-lsa" || name == "output-lsa-acks" || name == "input-lsa-acks" || name == "output-lsa-updates" || name == "output-ls-requests-lsa" || name == "input-ls-requests-lsa" || name == "input-ls-requests" || name == "template-name" || name == "sample-interval")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::InputLsaAcksLsa()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-lsa-acks-lsa"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::~InputLsaAcksLsa()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcksLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::OutputDbDsLsa()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-db-ds-lsa"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::~OutputDbDsLsa()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDsLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::InputDbDsLsa()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-db-ds-lsa"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::~InputDbDsLsa()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDsLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::InputLsaUpdates()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-lsa-updates"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::~InputLsaUpdates()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::OutputDbDs()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-db-ds"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::~OutputDbDs()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputDbDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::OutputLsaUpdatesLsa()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-lsa-updates-lsa"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::~OutputLsaUpdatesLsa()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdatesLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::InputDbDs()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-db-ds"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::~InputDbDs()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputDbDs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::InputLsaUpdatesLsa()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-lsa-updates-lsa"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::~InputLsaUpdatesLsa()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaUpdatesLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::OutputPackets()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-packets"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::~OutputPackets()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::InputPackets()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-packets"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::~InputPackets()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::OutputHelloPackets()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-hello-packets"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::~OutputHelloPackets()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputHelloPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::InputHelloPackets()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-hello-packets"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::~InputHelloPackets()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputHelloPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::OutputLsRequests()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-ls-requests"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::~OutputLsRequests()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::OutputLsaAcksLsa()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-lsa-acks-lsa"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::~OutputLsaAcksLsa()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcksLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::OutputLsaAcks()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-lsa-acks"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::~OutputLsaAcks()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaAcks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::InputLsaAcks()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-lsa-acks"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::~InputLsaAcks()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsaAcks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::OutputLsaUpdates()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-lsa-updates"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::~OutputLsaUpdates()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsaUpdates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::OutputLsRequestsLsa()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "output-ls-requests-lsa"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::~OutputLsRequestsLsa()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::OutputLsRequestsLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::InputLsRequestsLsa()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-ls-requests-lsa"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::~InputLsRequestsLsa()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequestsLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::InputLsRequests()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"},
    end_range_value{YType::uint32, "end-range-value"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"}
{

    yang_name = "input-ls-requests"; yang_parent_name = "ospfv3-protocol-template"; is_top_level_class = false; has_list_ancestor = true;
}

PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::~InputLsRequests()
{
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::has_data() const
{
    return operator_.is_set
	|| value_.is_set
	|| end_range_value.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set;
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(end_range_value.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(rearm_type.yfilter)
	|| ydk::is_set(rearm_window.yfilter);
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

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (end_range_value.is_set || is_set(end_range_value.yfilter)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.yfilter)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.yfilter)) leaf_name_data.push_back(rearm_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range-value")
    {
        end_range_value = value;
        end_range_value.value_namespace = name_space;
        end_range_value.value_namespace_prefix = name_space_prefix;
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
}

void PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "end-range-value")
    {
        end_range_value.yfilter = yfilter;
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
}

bool PerfMgmt::Threshold::Ospfv3Protocol::Ospfv3ProtocolTemplates::Ospfv3ProtocolTemplate::InputLsRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value" || name == "end-range-value" || name == "percent" || name == "rearm-type" || name == "rearm-window")
        return true;
    return false;
}


}
}

