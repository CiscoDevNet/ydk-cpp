
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_45.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_46.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_68.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_policymgr_oper {

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::Pfc()
    :
    pfc_pause_set{YType::uint32, "pfc-pause-set"},
    buffer_size_flag{YType::uint32, "buffer-size-flag"}
    	,
    buffer_size(std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize>())
	,pause_threshold(std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold>())
	,resume_threshold(std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold>())
{
    buffer_size->parent = this;
    pause_threshold->parent = this;
    resume_threshold->parent = this;

    yang_name = "pfc"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::~Pfc()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::has_data() const
{
    return pfc_pause_set.is_set
	|| buffer_size_flag.is_set
	|| (buffer_size !=  nullptr && buffer_size->has_data())
	|| (pause_threshold !=  nullptr && pause_threshold->has_data())
	|| (resume_threshold !=  nullptr && resume_threshold->has_data());
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfc_pause_set.yfilter)
	|| ydk::is_set(buffer_size_flag.yfilter)
	|| (buffer_size !=  nullptr && buffer_size->has_operation())
	|| (pause_threshold !=  nullptr && pause_threshold->has_operation())
	|| (resume_threshold !=  nullptr && resume_threshold->has_operation());
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfc_pause_set.is_set || is_set(pfc_pause_set.yfilter)) leaf_name_data.push_back(pfc_pause_set.get_name_leafdata());
    if (buffer_size_flag.is_set || is_set(buffer_size_flag.yfilter)) leaf_name_data.push_back(buffer_size_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buffer-size")
    {
        if(buffer_size == nullptr)
        {
            buffer_size = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize>();
        }
        return buffer_size;
    }

    if(child_yang_name == "pause-threshold")
    {
        if(pause_threshold == nullptr)
        {
            pause_threshold = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold>();
        }
        return pause_threshold;
    }

    if(child_yang_name == "resume-threshold")
    {
        if(resume_threshold == nullptr)
        {
            resume_threshold = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold>();
        }
        return resume_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(buffer_size != nullptr)
    {
        children["buffer-size"] = buffer_size;
    }

    if(pause_threshold != nullptr)
    {
        children["pause-threshold"] = pause_threshold;
    }

    if(resume_threshold != nullptr)
    {
        children["resume-threshold"] = resume_threshold;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfc-pause-set")
    {
        pfc_pause_set = value;
        pfc_pause_set.value_namespace = name_space;
        pfc_pause_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffer-size-flag")
    {
        buffer_size_flag = value;
        buffer_size_flag.value_namespace = name_space;
        buffer_size_flag.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfc-pause-set")
    {
        pfc_pause_set.yfilter = yfilter;
    }
    if(value_path == "buffer-size-flag")
    {
        buffer_size_flag.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buffer-size" || name == "pause-threshold" || name == "resume-threshold" || name == "pfc-pause-set" || name == "buffer-size-flag")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::BufferSize()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "buffer-size"; yang_parent_name = "pfc"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::~BufferSize()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::PauseThreshold()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "pause-threshold"; yang_parent_name = "pfc"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::~PauseThreshold()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::ResumeThreshold()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "resume-threshold"; yang_parent_name = "pfc"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::~ResumeThreshold()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resume-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::FlowParm()
    :
    max_mon_flows{YType::uint32, "max-mon-flows"},
    mon_interval{YType::uint32, "mon-interval"},
    intvl_hist{YType::uint32, "intvl-hist"},
    flow_timeout{YType::uint32, "flow-timeout"}
{

    yang_name = "flow-parm"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::~FlowParm()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::has_data() const
{
    return max_mon_flows.is_set
	|| mon_interval.is_set
	|| intvl_hist.is_set
	|| flow_timeout.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_mon_flows.yfilter)
	|| ydk::is_set(mon_interval.yfilter)
	|| ydk::is_set(intvl_hist.yfilter)
	|| ydk::is_set(flow_timeout.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-parm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_mon_flows.is_set || is_set(max_mon_flows.yfilter)) leaf_name_data.push_back(max_mon_flows.get_name_leafdata());
    if (mon_interval.is_set || is_set(mon_interval.yfilter)) leaf_name_data.push_back(mon_interval.get_name_leafdata());
    if (intvl_hist.is_set || is_set(intvl_hist.yfilter)) leaf_name_data.push_back(intvl_hist.get_name_leafdata());
    if (flow_timeout.is_set || is_set(flow_timeout.yfilter)) leaf_name_data.push_back(flow_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-mon-flows")
    {
        max_mon_flows = value;
        max_mon_flows.value_namespace = name_space;
        max_mon_flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mon-interval")
    {
        mon_interval = value;
        mon_interval.value_namespace = name_space;
        mon_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intvl-hist")
    {
        intvl_hist = value;
        intvl_hist.value_namespace = name_space;
        intvl_hist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-timeout")
    {
        flow_timeout = value;
        flow_timeout.value_namespace = name_space;
        flow_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-mon-flows")
    {
        max_mon_flows.yfilter = yfilter;
    }
    if(value_path == "mon-interval")
    {
        mon_interval.yfilter = yfilter;
    }
    if(value_path == "intvl-hist")
    {
        intvl_hist.yfilter = yfilter;
    }
    if(value_path == "flow-timeout")
    {
        flow_timeout.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-mon-flows" || name == "mon-interval" || name == "intvl-hist" || name == "flow-timeout")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::Ipcbr()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    ip_pkt_rate{YType::uint32, "ip-pkt-rate"},
    media_pkt_size{YType::uint32, "media-pkt-size"},
    media_pkts_per_ip{YType::uint32, "media-pkts-per-ip"}
    	,
    ip_bit_rate(std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate>())
	,media_bit_rate(std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate>())
{
    ip_bit_rate->parent = this;
    media_bit_rate->parent = this;

    yang_name = "ipcbr"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::~Ipcbr()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::has_data() const
{
    return action_metric_type.is_set
	|| ip_pkt_rate.is_set
	|| media_pkt_size.is_set
	|| media_pkts_per_ip.is_set
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_data())
	|| (media_bit_rate !=  nullptr && media_bit_rate->has_data());
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_metric_type.yfilter)
	|| ydk::is_set(ip_pkt_rate.yfilter)
	|| ydk::is_set(media_pkt_size.yfilter)
	|| ydk::is_set(media_pkts_per_ip.yfilter)
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_operation())
	|| (media_bit_rate !=  nullptr && media_bit_rate->has_operation());
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.yfilter)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (ip_pkt_rate.is_set || is_set(ip_pkt_rate.yfilter)) leaf_name_data.push_back(ip_pkt_rate.get_name_leafdata());
    if (media_pkt_size.is_set || is_set(media_pkt_size.yfilter)) leaf_name_data.push_back(media_pkt_size.get_name_leafdata());
    if (media_pkts_per_ip.is_set || is_set(media_pkts_per_ip.yfilter)) leaf_name_data.push_back(media_pkts_per_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-bit-rate")
    {
        if(ip_bit_rate == nullptr)
        {
            ip_bit_rate = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate>();
        }
        return ip_bit_rate;
    }

    if(child_yang_name == "media-bit-rate")
    {
        if(media_bit_rate == nullptr)
        {
            media_bit_rate = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate>();
        }
        return media_bit_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_bit_rate != nullptr)
    {
        children["ip-bit-rate"] = ip_bit_rate;
    }

    if(media_bit_rate != nullptr)
    {
        children["media-bit-rate"] = media_bit_rate;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
        action_metric_type.value_namespace = name_space;
        action_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate = value;
        ip_pkt_rate.value_namespace = name_space;
        ip_pkt_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-pkt-size")
    {
        media_pkt_size = value;
        media_pkt_size.value_namespace = name_space;
        media_pkt_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-pkts-per-ip")
    {
        media_pkts_per_ip = value;
        media_pkts_per_ip.value_namespace = name_space;
        media_pkts_per_ip.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type.yfilter = yfilter;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate.yfilter = yfilter;
    }
    if(value_path == "media-pkt-size")
    {
        media_pkt_size.yfilter = yfilter;
    }
    if(value_path == "media-pkts-per-ip")
    {
        media_pkts_per_ip.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-bit-rate" || name == "media-bit-rate" || name == "action-metric-type" || name == "ip-pkt-rate" || name == "media-pkt-size" || name == "media-pkts-per-ip")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::IpBitRate()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "ip-bit-rate"; yang_parent_name = "ipcbr"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::~IpBitRate()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-bit-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::MediaBitRate()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "media-bit-rate"; yang_parent_name = "ipcbr"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::~MediaBitRate()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-bit-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::Rtp()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    min_sequential{YType::uint32, "min-sequential"},
    max_dropout{YType::uint32, "max-dropout"},
    max_misorder{YType::uint32, "max-misorder"},
    seq_ext_cop4{YType::uint32, "seq-ext-cop4"}
{

    yang_name = "rtp"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::~Rtp()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::has_data() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_data())
            return true;
    }
    return action_metric_type.is_set
	|| min_sequential.is_set
	|| max_dropout.is_set
	|| max_misorder.is_set
	|| seq_ext_cop4.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::has_operation() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_metric_type.yfilter)
	|| ydk::is_set(min_sequential.yfilter)
	|| ydk::is_set(max_dropout.yfilter)
	|| ydk::is_set(max_misorder.yfilter)
	|| ydk::is_set(seq_ext_cop4.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.yfilter)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (min_sequential.is_set || is_set(min_sequential.yfilter)) leaf_name_data.push_back(min_sequential.get_name_leafdata());
    if (max_dropout.is_set || is_set(max_dropout.yfilter)) leaf_name_data.push_back(max_dropout.get_name_leafdata());
    if (max_misorder.is_set || is_set(max_misorder.yfilter)) leaf_name_data.push_back(max_misorder.get_name_leafdata());
    if (seq_ext_cop4.is_set || is_set(seq_ext_cop4.yfilter)) leaf_name_data.push_back(seq_ext_cop4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-rate")
    {
        for(auto const & c : clock_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate>();
        c->parent = this;
        clock_rate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clock_rate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
        action_metric_type.value_namespace = name_space;
        action_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-sequential")
    {
        min_sequential = value;
        min_sequential.value_namespace = name_space;
        min_sequential.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-dropout")
    {
        max_dropout = value;
        max_dropout.value_namespace = name_space;
        max_dropout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-misorder")
    {
        max_misorder = value;
        max_misorder.value_namespace = name_space;
        max_misorder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-ext-cop4")
    {
        seq_ext_cop4 = value;
        seq_ext_cop4.value_namespace = name_space;
        seq_ext_cop4.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type.yfilter = yfilter;
    }
    if(value_path == "min-sequential")
    {
        min_sequential.yfilter = yfilter;
    }
    if(value_path == "max-dropout")
    {
        max_dropout.yfilter = yfilter;
    }
    if(value_path == "max-misorder")
    {
        max_misorder.yfilter = yfilter;
    }
    if(value_path == "seq-ext-cop4")
    {
        seq_ext_cop4.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-rate" || name == "action-metric-type" || name == "min-sequential" || name == "max-dropout" || name == "max-misorder" || name == "seq-ext-cop4")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::ClockRate()
    :
    pt{YType::uint32, "pt"},
    frequency{YType::uint32, "frequency"}
{

    yang_name = "clock-rate"; yang_parent_name = "rtp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::~ClockRate()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::has_data() const
{
    return pt.is_set
	|| frequency.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pt.yfilter)
	|| ydk::is_set(frequency.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pt.is_set || is_set(pt.yfilter)) leaf_name_data.push_back(pt.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pt")
    {
        pt = value;
        pt.value_namespace = name_space;
        pt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pt")
    {
        pt.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pt" || name == "frequency")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::RtpMmr()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    min_sequential{YType::uint32, "min-sequential"},
    max_dropout{YType::uint32, "max-dropout"},
    max_misorder{YType::uint32, "max-misorder"},
    seq_ext_cop4{YType::uint32, "seq-ext-cop4"}
{

    yang_name = "rtp-mmr"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::~RtpMmr()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::has_data() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_data())
            return true;
    }
    return action_metric_type.is_set
	|| min_sequential.is_set
	|| max_dropout.is_set
	|| max_misorder.is_set
	|| seq_ext_cop4.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::has_operation() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_metric_type.yfilter)
	|| ydk::is_set(min_sequential.yfilter)
	|| ydk::is_set(max_dropout.yfilter)
	|| ydk::is_set(max_misorder.yfilter)
	|| ydk::is_set(seq_ext_cop4.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp-mmr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.yfilter)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (min_sequential.is_set || is_set(min_sequential.yfilter)) leaf_name_data.push_back(min_sequential.get_name_leafdata());
    if (max_dropout.is_set || is_set(max_dropout.yfilter)) leaf_name_data.push_back(max_dropout.get_name_leafdata());
    if (max_misorder.is_set || is_set(max_misorder.yfilter)) leaf_name_data.push_back(max_misorder.get_name_leafdata());
    if (seq_ext_cop4.is_set || is_set(seq_ext_cop4.yfilter)) leaf_name_data.push_back(seq_ext_cop4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-rate")
    {
        for(auto const & c : clock_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate>();
        c->parent = this;
        clock_rate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clock_rate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
        action_metric_type.value_namespace = name_space;
        action_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-sequential")
    {
        min_sequential = value;
        min_sequential.value_namespace = name_space;
        min_sequential.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-dropout")
    {
        max_dropout = value;
        max_dropout.value_namespace = name_space;
        max_dropout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-misorder")
    {
        max_misorder = value;
        max_misorder.value_namespace = name_space;
        max_misorder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-ext-cop4")
    {
        seq_ext_cop4 = value;
        seq_ext_cop4.value_namespace = name_space;
        seq_ext_cop4.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type.yfilter = yfilter;
    }
    if(value_path == "min-sequential")
    {
        min_sequential.yfilter = yfilter;
    }
    if(value_path == "max-dropout")
    {
        max_dropout.yfilter = yfilter;
    }
    if(value_path == "max-misorder")
    {
        max_misorder.yfilter = yfilter;
    }
    if(value_path == "seq-ext-cop4")
    {
        seq_ext_cop4.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-rate" || name == "action-metric-type" || name == "min-sequential" || name == "max-dropout" || name == "max-misorder" || name == "seq-ext-cop4")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::ClockRate()
    :
    pt{YType::uint32, "pt"},
    frequency{YType::uint32, "frequency"}
{

    yang_name = "clock-rate"; yang_parent_name = "rtp-mmr"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::~ClockRate()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::has_data() const
{
    return pt.is_set
	|| frequency.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pt.yfilter)
	|| ydk::is_set(frequency.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pt.is_set || is_set(pt.yfilter)) leaf_name_data.push_back(pt.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pt")
    {
        pt = value;
        pt.value_namespace = name_space;
        pt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pt")
    {
        pt.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pt" || name == "frequency")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::RtpJ2K()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    min_sequential{YType::uint32, "min-sequential"},
    max_dropout{YType::uint32, "max-dropout"},
    max_misorder{YType::uint32, "max-misorder"},
    seq_ext_cop4{YType::uint32, "seq-ext-cop4"}
{

    yang_name = "rtp-j2k"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::~RtpJ2K()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::has_data() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_data())
            return true;
    }
    return action_metric_type.is_set
	|| min_sequential.is_set
	|| max_dropout.is_set
	|| max_misorder.is_set
	|| seq_ext_cop4.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::has_operation() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_metric_type.yfilter)
	|| ydk::is_set(min_sequential.yfilter)
	|| ydk::is_set(max_dropout.yfilter)
	|| ydk::is_set(max_misorder.yfilter)
	|| ydk::is_set(seq_ext_cop4.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp-j2k";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.yfilter)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (min_sequential.is_set || is_set(min_sequential.yfilter)) leaf_name_data.push_back(min_sequential.get_name_leafdata());
    if (max_dropout.is_set || is_set(max_dropout.yfilter)) leaf_name_data.push_back(max_dropout.get_name_leafdata());
    if (max_misorder.is_set || is_set(max_misorder.yfilter)) leaf_name_data.push_back(max_misorder.get_name_leafdata());
    if (seq_ext_cop4.is_set || is_set(seq_ext_cop4.yfilter)) leaf_name_data.push_back(seq_ext_cop4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-rate")
    {
        for(auto const & c : clock_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate>();
        c->parent = this;
        clock_rate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clock_rate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
        action_metric_type.value_namespace = name_space;
        action_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-sequential")
    {
        min_sequential = value;
        min_sequential.value_namespace = name_space;
        min_sequential.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-dropout")
    {
        max_dropout = value;
        max_dropout.value_namespace = name_space;
        max_dropout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-misorder")
    {
        max_misorder = value;
        max_misorder.value_namespace = name_space;
        max_misorder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-ext-cop4")
    {
        seq_ext_cop4 = value;
        seq_ext_cop4.value_namespace = name_space;
        seq_ext_cop4.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type.yfilter = yfilter;
    }
    if(value_path == "min-sequential")
    {
        min_sequential.yfilter = yfilter;
    }
    if(value_path == "max-dropout")
    {
        max_dropout.yfilter = yfilter;
    }
    if(value_path == "max-misorder")
    {
        max_misorder.yfilter = yfilter;
    }
    if(value_path == "seq-ext-cop4")
    {
        seq_ext_cop4.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-rate" || name == "action-metric-type" || name == "min-sequential" || name == "max-dropout" || name == "max-misorder" || name == "seq-ext-cop4")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::ClockRate()
    :
    pt{YType::uint32, "pt"},
    frequency{YType::uint32, "frequency"}
{

    yang_name = "clock-rate"; yang_parent_name = "rtp-j2k"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::~ClockRate()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::has_data() const
{
    return pt.is_set
	|| frequency.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pt.yfilter)
	|| ydk::is_set(frequency.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pt.is_set || is_set(pt.yfilter)) leaf_name_data.push_back(pt.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pt")
    {
        pt = value;
        pt.value_namespace = name_space;
        pt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pt")
    {
        pt.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pt" || name == "frequency")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::RtpVoice()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    min_sequential{YType::uint32, "min-sequential"},
    max_dropout{YType::uint32, "max-dropout"},
    max_misorder{YType::uint32, "max-misorder"},
    seq_ext_cop4{YType::uint32, "seq-ext-cop4"}
{

    yang_name = "rtp-voice"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::~RtpVoice()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::has_data() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_data())
            return true;
    }
    return action_metric_type.is_set
	|| min_sequential.is_set
	|| max_dropout.is_set
	|| max_misorder.is_set
	|| seq_ext_cop4.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::has_operation() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_metric_type.yfilter)
	|| ydk::is_set(min_sequential.yfilter)
	|| ydk::is_set(max_dropout.yfilter)
	|| ydk::is_set(max_misorder.yfilter)
	|| ydk::is_set(seq_ext_cop4.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp-voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.yfilter)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (min_sequential.is_set || is_set(min_sequential.yfilter)) leaf_name_data.push_back(min_sequential.get_name_leafdata());
    if (max_dropout.is_set || is_set(max_dropout.yfilter)) leaf_name_data.push_back(max_dropout.get_name_leafdata());
    if (max_misorder.is_set || is_set(max_misorder.yfilter)) leaf_name_data.push_back(max_misorder.get_name_leafdata());
    if (seq_ext_cop4.is_set || is_set(seq_ext_cop4.yfilter)) leaf_name_data.push_back(seq_ext_cop4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-rate")
    {
        for(auto const & c : clock_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate>();
        c->parent = this;
        clock_rate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clock_rate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
        action_metric_type.value_namespace = name_space;
        action_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-sequential")
    {
        min_sequential = value;
        min_sequential.value_namespace = name_space;
        min_sequential.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-dropout")
    {
        max_dropout = value;
        max_dropout.value_namespace = name_space;
        max_dropout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-misorder")
    {
        max_misorder = value;
        max_misorder.value_namespace = name_space;
        max_misorder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-ext-cop4")
    {
        seq_ext_cop4 = value;
        seq_ext_cop4.value_namespace = name_space;
        seq_ext_cop4.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type.yfilter = yfilter;
    }
    if(value_path == "min-sequential")
    {
        min_sequential.yfilter = yfilter;
    }
    if(value_path == "max-dropout")
    {
        max_dropout.yfilter = yfilter;
    }
    if(value_path == "max-misorder")
    {
        max_misorder.yfilter = yfilter;
    }
    if(value_path == "seq-ext-cop4")
    {
        seq_ext_cop4.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-rate" || name == "action-metric-type" || name == "min-sequential" || name == "max-dropout" || name == "max-misorder" || name == "seq-ext-cop4")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::ClockRate()
    :
    pt{YType::uint32, "pt"},
    frequency{YType::uint32, "frequency"}
{

    yang_name = "clock-rate"; yang_parent_name = "rtp-voice"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::~ClockRate()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::has_data() const
{
    return pt.is_set
	|| frequency.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pt.yfilter)
	|| ydk::is_set(frequency.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pt.is_set || is_set(pt.yfilter)) leaf_name_data.push_back(pt.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pt")
    {
        pt = value;
        pt.value_namespace = name_space;
        pt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pt")
    {
        pt.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pt" || name == "frequency")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::Mdi()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    filtered_pkt_rate{YType::uint32, "filtered-pkt-rate"},
    ip_pkt_rate{YType::uint32, "ip-pkt-rate"},
    pids{YType::uint32, "pids"}
    	,
    ip_bit_rate(std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate>())
{
    ip_bit_rate->parent = this;

    yang_name = "mdi"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::~Mdi()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::has_data() const
{
    for (auto const & leaf : pids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return action_metric_type.is_set
	|| filtered_pkt_rate.is_set
	|| ip_pkt_rate.is_set
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_data());
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::has_operation() const
{
    for (auto const & leaf : pids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_metric_type.yfilter)
	|| ydk::is_set(filtered_pkt_rate.yfilter)
	|| ydk::is_set(ip_pkt_rate.yfilter)
	|| ydk::is_set(pids.yfilter)
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_operation());
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.yfilter)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (filtered_pkt_rate.is_set || is_set(filtered_pkt_rate.yfilter)) leaf_name_data.push_back(filtered_pkt_rate.get_name_leafdata());
    if (ip_pkt_rate.is_set || is_set(ip_pkt_rate.yfilter)) leaf_name_data.push_back(ip_pkt_rate.get_name_leafdata());

    auto pids_name_datas = pids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pids_name_datas.begin(), pids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-bit-rate")
    {
        if(ip_bit_rate == nullptr)
        {
            ip_bit_rate = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate>();
        }
        return ip_bit_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_bit_rate != nullptr)
    {
        children["ip-bit-rate"] = ip_bit_rate;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
        action_metric_type.value_namespace = name_space;
        action_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filtered-pkt-rate")
    {
        filtered_pkt_rate = value;
        filtered_pkt_rate.value_namespace = name_space;
        filtered_pkt_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate = value;
        ip_pkt_rate.value_namespace = name_space;
        ip_pkt_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pids")
    {
        pids.append(value);
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type.yfilter = yfilter;
    }
    if(value_path == "filtered-pkt-rate")
    {
        filtered_pkt_rate.yfilter = yfilter;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate.yfilter = yfilter;
    }
    if(value_path == "pids")
    {
        pids.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-bit-rate" || name == "action-metric-type" || name == "filtered-pkt-rate" || name == "ip-pkt-rate" || name == "pids")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::IpBitRate()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "ip-bit-rate"; yang_parent_name = "mdi"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::~IpBitRate()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-bit-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::MdiRtp()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    filtered_pkt_rate{YType::uint32, "filtered-pkt-rate"},
    ip_pkt_rate{YType::uint32, "ip-pkt-rate"},
    pids{YType::uint32, "pids"}
    	,
    ip_bit_rate(std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate>())
{
    ip_bit_rate->parent = this;

    yang_name = "mdi-rtp"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::~MdiRtp()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::has_data() const
{
    for (auto const & leaf : pids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return action_metric_type.is_set
	|| filtered_pkt_rate.is_set
	|| ip_pkt_rate.is_set
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_data());
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::has_operation() const
{
    for (auto const & leaf : pids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_metric_type.yfilter)
	|| ydk::is_set(filtered_pkt_rate.yfilter)
	|| ydk::is_set(ip_pkt_rate.yfilter)
	|| ydk::is_set(pids.yfilter)
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_operation());
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdi-rtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.yfilter)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (filtered_pkt_rate.is_set || is_set(filtered_pkt_rate.yfilter)) leaf_name_data.push_back(filtered_pkt_rate.get_name_leafdata());
    if (ip_pkt_rate.is_set || is_set(ip_pkt_rate.yfilter)) leaf_name_data.push_back(ip_pkt_rate.get_name_leafdata());

    auto pids_name_datas = pids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pids_name_datas.begin(), pids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-bit-rate")
    {
        if(ip_bit_rate == nullptr)
        {
            ip_bit_rate = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate>();
        }
        return ip_bit_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_bit_rate != nullptr)
    {
        children["ip-bit-rate"] = ip_bit_rate;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
        action_metric_type.value_namespace = name_space;
        action_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filtered-pkt-rate")
    {
        filtered_pkt_rate = value;
        filtered_pkt_rate.value_namespace = name_space;
        filtered_pkt_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate = value;
        ip_pkt_rate.value_namespace = name_space;
        ip_pkt_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pids")
    {
        pids.append(value);
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type.yfilter = yfilter;
    }
    if(value_path == "filtered-pkt-rate")
    {
        filtered_pkt_rate.yfilter = yfilter;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate.yfilter = yfilter;
    }
    if(value_path == "pids")
    {
        pids.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-bit-rate" || name == "action-metric-type" || name == "filtered-pkt-rate" || name == "ip-pkt-rate" || name == "pids")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::IpBitRate()
    :
    value_{YType::uint32, "value"},
    unit{YType::enumeration, "unit"}
{

    yang_name = "ip-bit-rate"; yang_parent_name = "mdi-rtp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::~IpBitRate()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::has_data() const
{
    return value_.is_set
	|| unit.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(unit.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-bit-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "unit")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::Fmm()
    :
    fmm_name{YType::str, "fmm-name"}
{

    yang_name = "fmm"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::~Fmm()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::has_data() const
{
    return fmm_name.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fmm_name.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fmm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fmm_name.is_set || is_set(fmm_name.yfilter)) leaf_name_data.push_back(fmm_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fmm-name")
    {
        fmm_name = value;
        fmm_name.value_namespace = name_space;
        fmm_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fmm-name")
    {
        fmm_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fmm-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::Pbf()
{

    yang_name = "pbf"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::~Pbf()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::has_data() const
{
    for (std::size_t index=0; index<action_pbf_info_array.size(); index++)
    {
        if(action_pbf_info_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::has_operation() const
{
    for (std::size_t index=0; index<action_pbf_info_array.size(); index++)
    {
        if(action_pbf_info_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-pbf-info-array")
    {
        for(auto const & c : action_pbf_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray>();
        c->parent = this;
        action_pbf_info_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_pbf_info_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-pbf-info-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::ActionPbfInfoArray()
    :
    addr{YType::str, "addr"},
    vrf{YType::str, "vrf"},
    rt_type{YType::uint8, "rt-type"},
    rt{YType::str, "rt"}
{

    yang_name = "action-pbf-info-array"; yang_parent_name = "pbf"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::~ActionPbfInfoArray()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::has_data() const
{
    return addr.is_set
	|| vrf.is_set
	|| rt_type.is_set
	|| rt.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(rt_type.yfilter)
	|| ydk::is_set(rt.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-pbf-info-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());
    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "vrf" || name == "rt-type" || name == "rt")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::Ipv4Nh()
{

    yang_name = "ipv4-nh"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::~Ipv4Nh()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::has_data() const
{
    for (std::size_t index=0; index<action_ipv4_nh_info_array.size(); index++)
    {
        if(action_ipv4_nh_info_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::has_operation() const
{
    for (std::size_t index=0; index<action_ipv4_nh_info_array.size(); index++)
    {
        if(action_ipv4_nh_info_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-nh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-ipv4-nh-info-array")
    {
        for(auto const & c : action_ipv4_nh_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray>();
        c->parent = this;
        action_ipv4_nh_info_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_ipv4_nh_info_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-ipv4-nh-info-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::ActionIpv4NhInfoArray()
    :
    nh_addr{YType::str, "nh-addr"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "action-ipv4-nh-info-array"; yang_parent_name = "ipv4-nh"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::~ActionIpv4NhInfoArray()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::has_data() const
{
    return nh_addr.is_set
	|| vrf_name.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nh_addr.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-ipv4-nh-info-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_addr.is_set || is_set(nh_addr.yfilter)) leaf_name_data.push_back(nh_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nh-addr")
    {
        nh_addr = value;
        nh_addr.value_namespace = name_space;
        nh_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nh-addr")
    {
        nh_addr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-addr" || name == "vrf-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::Ipv6Nh()
{

    yang_name = "ipv6-nh"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::~Ipv6Nh()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::has_data() const
{
    for (std::size_t index=0; index<action_ipv6_nh_info_array.size(); index++)
    {
        if(action_ipv6_nh_info_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::has_operation() const
{
    for (std::size_t index=0; index<action_ipv6_nh_info_array.size(); index++)
    {
        if(action_ipv6_nh_info_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-nh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-ipv6-nh-info-array")
    {
        for(auto const & c : action_ipv6_nh_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray>();
        c->parent = this;
        action_ipv6_nh_info_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_ipv6_nh_info_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-ipv6-nh-info-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::ActionIpv6NhInfoArray()
    :
    nh_addr{YType::str, "nh-addr"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "action-ipv6-nh-info-array"; yang_parent_name = "ipv6-nh"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::~ActionIpv6NhInfoArray()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::has_data() const
{
    return nh_addr.is_set
	|| vrf_name.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nh_addr.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-ipv6-nh-info-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_addr.is_set || is_set(nh_addr.yfilter)) leaf_name_data.push_back(nh_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nh-addr")
    {
        nh_addr = value;
        nh_addr.value_namespace = name_space;
        nh_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nh-addr")
    {
        nh_addr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-addr" || name == "vrf-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetails()
{

    yang_name = "policy-map-details"; yang_parent_name = "policy-map-type"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::~PolicyMapDetails()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::has_data() const
{
    for (std::size_t index=0; index<policy_map_detail.size(); index++)
    {
        if(policy_map_detail[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::has_operation() const
{
    for (std::size_t index=0; index<policy_map_detail.size(); index++)
    {
        if(policy_map_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map-detail")
    {
        for(auto const & c : policy_map_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail>();
        c->parent = this;
        policy_map_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_map_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-detail")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::PolicyMapDetail()
    :
    policy_map_name{YType::str, "policy-map-name"},
    object_type{YType::enumeration, "object-type"},
    total_objects{YType::uint32, "total-objects"},
    transient{YType::boolean, "transient"}
{

    yang_name = "policy-map-detail"; yang_parent_name = "policy-map-details"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::~PolicyMapDetail()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<objects.size(); index++)
    {
        if(objects[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_data())
            return true;
    }
    return policy_map_name.is_set
	|| object_type.is_set
	|| total_objects.is_set
	|| transient.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<objects.size(); index++)
    {
        if(objects[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter)
	|| ydk::is_set(object_type.yfilter)
	|| ydk::is_set(total_objects.yfilter)
	|| ydk::is_set(transient.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-detail" <<"[policy-map-name='" <<policy_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());
    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (total_objects.is_set || is_set(total_objects.yfilter)) leaf_name_data.push_back(total_objects.get_name_leafdata());
    if (transient.is_set || is_set(transient.yfilter)) leaf_name_data.push_back(transient.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    if(child_yang_name == "objects")
    {
        for(auto const & c : objects)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Objects>();
        c->parent = this;
        objects.push_back(c);
        return c;
    }

    if(child_yang_name == "class-map-reference")
    {
        for(auto const & c : class_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference>();
        c->parent = this;
        class_map_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : objects)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : class_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-objects")
    {
        total_objects = value;
        total_objects.value_namespace = name_space;
        total_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transient")
    {
        transient = value;
        transient.value_namespace = name_space;
        transient.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
    if(value_path == "total-objects")
    {
        total_objects.yfilter = yfilter;
    }
    if(value_path == "transient")
    {
        transient.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference" || name == "objects" || name == "class-map-reference" || name == "policy-map-name" || name == "object-type" || name == "total-objects" || name == "transient")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::Reference()
    :
    total_internal_reference_objects{YType::uint32, "total-internal-reference-objects"},
    total_class_maps{YType::uint32, "total-class-maps"},
    total_flows{YType::uint32, "total-flows"}
{

    yang_name = "reference"; yang_parent_name = "policy-map-detail"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::~Reference()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::has_data() const
{
    return total_internal_reference_objects.is_set
	|| total_class_maps.is_set
	|| total_flows.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_internal_reference_objects.yfilter)
	|| ydk::is_set(total_class_maps.yfilter)
	|| ydk::is_set(total_flows.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_internal_reference_objects.is_set || is_set(total_internal_reference_objects.yfilter)) leaf_name_data.push_back(total_internal_reference_objects.get_name_leafdata());
    if (total_class_maps.is_set || is_set(total_class_maps.yfilter)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_flows.is_set || is_set(total_flows.yfilter)) leaf_name_data.push_back(total_flows.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects = value;
        total_internal_reference_objects.value_namespace = name_space;
        total_internal_reference_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
        total_class_maps.value_namespace = name_space;
        total_class_maps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-flows")
    {
        total_flows = value;
        total_flows.value_namespace = name_space;
        total_flows.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects.yfilter = yfilter;
    }
    if(value_path == "total-class-maps")
    {
        total_class_maps.yfilter = yfilter;
    }
    if(value_path == "total-flows")
    {
        total_flows.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-internal-reference-objects" || name == "total-class-maps" || name == "total-flows")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Objects::Objects()
    :
    object_name{YType::str, "object-name"}
{

    yang_name = "objects"; yang_parent_name = "policy-map-detail"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Objects::~Objects()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Objects::has_data() const
{
    return object_name.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Objects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Objects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Objects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Objects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Objects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Objects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Objects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Objects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::ClassMapReference()
    :
    total_reference_objects{YType::uint32, "total-reference-objects"}
{

    yang_name = "class-map-reference"; yang_parent_name = "policy-map-detail"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::~ClassMapReference()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::has_data() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_data())
            return true;
    }
    return total_reference_objects.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::has_operation() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(total_reference_objects.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_reference_objects.is_set || is_set(total_reference_objects.yfilter)) leaf_name_data.push_back(total_reference_objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map-reference")
    {
        for(auto const & c : policy_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference>();
        c->parent = this;
        policy_map_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects = value;
        total_reference_objects.value_namespace = name_space;
        total_reference_objects.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-reference" || name == "total-reference-objects")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::PolicyMapReference()
    :
    object_type{YType::enumeration, "object-type"},
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "policy-map-reference"; yang_parent_name = "class-map-reference"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::~PolicyMapReference()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::has_data() const
{
    return object_type.is_set
	|| policy_map_name.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_type.yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-type" || name == "policy-map-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapTypes()
{

    yang_name = "transient-policy-map-types"; yang_parent_name = "policy-map"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::~TransientPolicyMapTypes()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::has_data() const
{
    for (std::size_t index=0; index<transient_policy_map_type.size(); index++)
    {
        if(transient_policy_map_type[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::has_operation() const
{
    for (std::size_t index=0; index<transient_policy_map_type.size(); index++)
    {
        if(transient_policy_map_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/policy-map/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transient-policy-map-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transient-policy-map-type")
    {
        for(auto const & c : transient_policy_map_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType>();
        c->parent = this;
        transient_policy_map_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : transient_policy_map_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transient-policy-map-type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientPolicyMapType()
    :
    type{YType::enumeration, "type"}
    	,
    transient_list_unuseds(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds>())
{
    transient_list_unuseds->parent = this;

    yang_name = "transient-policy-map-type"; yang_parent_name = "transient-policy-map-types"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::~TransientPolicyMapType()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::has_data() const
{
    return type.is_set
	|| (transient_list_unuseds !=  nullptr && transient_list_unuseds->has_data());
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (transient_list_unuseds !=  nullptr && transient_list_unuseds->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/policy-map/transient-policy-map-types/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transient-policy-map-type" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transient-list-unuseds")
    {
        if(transient_list_unuseds == nullptr)
        {
            transient_list_unuseds = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds>();
        }
        return transient_list_unuseds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transient_list_unuseds != nullptr)
    {
        children["transient-list-unuseds"] = transient_list_unuseds;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transient-list-unuseds" || name == "type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnuseds()
{

    yang_name = "transient-list-unuseds"; yang_parent_name = "transient-policy-map-type"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::~TransientListUnuseds()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::has_data() const
{
    for (std::size_t index=0; index<transient_list_unused.size(); index++)
    {
        if(transient_list_unused[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::has_operation() const
{
    for (std::size_t index=0; index<transient_list_unused.size(); index++)
    {
        if(transient_list_unused[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transient-list-unuseds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transient-list-unused")
    {
        for(auto const & c : transient_list_unused)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused>();
        c->parent = this;
        transient_list_unused.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : transient_list_unused)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transient-list-unused")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::TransientListUnused()
    :
    policy_map_name{YType::str, "policy-map-name"},
    object_type{YType::enumeration, "object-type"},
    total_objects{YType::uint32, "total-objects"},
    transient{YType::boolean, "transient"}
{

    yang_name = "transient-list-unused"; yang_parent_name = "transient-list-unuseds"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::~TransientListUnused()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<objects.size(); index++)
    {
        if(objects[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_data())
            return true;
    }
    return policy_map_name.is_set
	|| object_type.is_set
	|| total_objects.is_set
	|| transient.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<objects.size(); index++)
    {
        if(objects[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter)
	|| ydk::is_set(object_type.yfilter)
	|| ydk::is_set(total_objects.yfilter)
	|| ydk::is_set(transient.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transient-list-unused" <<"[policy-map-name='" <<policy_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());
    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (total_objects.is_set || is_set(total_objects.yfilter)) leaf_name_data.push_back(total_objects.get_name_leafdata());
    if (transient.is_set || is_set(transient.yfilter)) leaf_name_data.push_back(transient.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    if(child_yang_name == "objects")
    {
        for(auto const & c : objects)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects>();
        c->parent = this;
        objects.push_back(c);
        return c;
    }

    if(child_yang_name == "class-map-reference")
    {
        for(auto const & c : class_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference>();
        c->parent = this;
        class_map_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : objects)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : class_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-objects")
    {
        total_objects = value;
        total_objects.value_namespace = name_space;
        total_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transient")
    {
        transient = value;
        transient.value_namespace = name_space;
        transient.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
    if(value_path == "total-objects")
    {
        total_objects.yfilter = yfilter;
    }
    if(value_path == "transient")
    {
        transient.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference" || name == "objects" || name == "class-map-reference" || name == "policy-map-name" || name == "object-type" || name == "total-objects" || name == "transient")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::Reference()
    :
    total_internal_reference_objects{YType::uint32, "total-internal-reference-objects"},
    total_class_maps{YType::uint32, "total-class-maps"},
    total_flows{YType::uint32, "total-flows"}
{

    yang_name = "reference"; yang_parent_name = "transient-list-unused"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::~Reference()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::has_data() const
{
    return total_internal_reference_objects.is_set
	|| total_class_maps.is_set
	|| total_flows.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_internal_reference_objects.yfilter)
	|| ydk::is_set(total_class_maps.yfilter)
	|| ydk::is_set(total_flows.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_internal_reference_objects.is_set || is_set(total_internal_reference_objects.yfilter)) leaf_name_data.push_back(total_internal_reference_objects.get_name_leafdata());
    if (total_class_maps.is_set || is_set(total_class_maps.yfilter)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_flows.is_set || is_set(total_flows.yfilter)) leaf_name_data.push_back(total_flows.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects = value;
        total_internal_reference_objects.value_namespace = name_space;
        total_internal_reference_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
        total_class_maps.value_namespace = name_space;
        total_class_maps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-flows")
    {
        total_flows = value;
        total_flows.value_namespace = name_space;
        total_flows.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects.yfilter = yfilter;
    }
    if(value_path == "total-class-maps")
    {
        total_class_maps.yfilter = yfilter;
    }
    if(value_path == "total-flows")
    {
        total_flows.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-internal-reference-objects" || name == "total-class-maps" || name == "total-flows")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::Objects()
    :
    object_name{YType::str, "object-name"}
{

    yang_name = "objects"; yang_parent_name = "transient-list-unused"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::~Objects()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::has_data() const
{
    return object_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Objects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::ClassMapReference()
    :
    total_reference_objects{YType::uint32, "total-reference-objects"}
{

    yang_name = "class-map-reference"; yang_parent_name = "transient-list-unused"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::~ClassMapReference()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::has_data() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_data())
            return true;
    }
    return total_reference_objects.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::has_operation() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(total_reference_objects.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_reference_objects.is_set || is_set(total_reference_objects.yfilter)) leaf_name_data.push_back(total_reference_objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map-reference")
    {
        for(auto const & c : policy_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference>();
        c->parent = this;
        policy_map_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects = value;
        total_reference_objects.value_namespace = name_space;
        total_reference_objects.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-reference" || name == "total-reference-objects")
        return true;
    return false;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::PolicyMapReference()
    :
    object_type{YType::enumeration, "object-type"},
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "policy-map-reference"; yang_parent_name = "class-map-reference"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::~PolicyMapReference()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::has_data() const
{
    return object_type.is_set
	|| policy_map_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_type.yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-type" || name == "policy-map-name")
        return true;
    return false;
}

PolicyManager::Global::Summary::Summary()
    :
    total_class_maps{YType::uint32, "total-class-maps"},
    total_class_map_types{YType::uint32, "total-class-map-types"},
    total_policy_maps{YType::uint32, "total-policy-maps"},
    total_policy_map_types{YType::uint32, "total-policy-map-types"}
{

    yang_name = "summary"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Global::Summary::~Summary()
{
}

bool PolicyManager::Global::Summary::has_data() const
{
    for (std::size_t index=0; index<class_maps.size(); index++)
    {
        if(class_maps[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<policy_maps.size(); index++)
    {
        if(policy_maps[index]->has_data())
            return true;
    }
    return total_class_maps.is_set
	|| total_class_map_types.is_set
	|| total_policy_maps.is_set
	|| total_policy_map_types.is_set;
}

bool PolicyManager::Global::Summary::has_operation() const
{
    for (std::size_t index=0; index<class_maps.size(); index++)
    {
        if(class_maps[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<policy_maps.size(); index++)
    {
        if(policy_maps[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(total_class_maps.yfilter)
	|| ydk::is_set(total_class_map_types.yfilter)
	|| ydk::is_set(total_policy_maps.yfilter)
	|| ydk::is_set(total_policy_map_types.yfilter);
}

std::string PolicyManager::Global::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Global::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_class_maps.is_set || is_set(total_class_maps.yfilter)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_class_map_types.is_set || is_set(total_class_map_types.yfilter)) leaf_name_data.push_back(total_class_map_types.get_name_leafdata());
    if (total_policy_maps.is_set || is_set(total_policy_maps.yfilter)) leaf_name_data.push_back(total_policy_maps.get_name_leafdata());
    if (total_policy_map_types.is_set || is_set(total_policy_map_types.yfilter)) leaf_name_data.push_back(total_policy_map_types.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-maps")
    {
        for(auto const & c : class_maps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::ClassMaps>();
        c->parent = this;
        class_maps.push_back(c);
        return c;
    }

    if(child_yang_name == "policy-maps")
    {
        for(auto const & c : policy_maps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::PolicyMaps>();
        c->parent = this;
        policy_maps.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_maps)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : policy_maps)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
        total_class_maps.value_namespace = name_space;
        total_class_maps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-class-map-types")
    {
        total_class_map_types = value;
        total_class_map_types.value_namespace = name_space;
        total_class_map_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-policy-maps")
    {
        total_policy_maps = value;
        total_policy_maps.value_namespace = name_space;
        total_policy_maps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-policy-map-types")
    {
        total_policy_map_types = value;
        total_policy_map_types.value_namespace = name_space;
        total_policy_map_types.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-class-maps")
    {
        total_class_maps.yfilter = yfilter;
    }
    if(value_path == "total-class-map-types")
    {
        total_class_map_types.yfilter = yfilter;
    }
    if(value_path == "total-policy-maps")
    {
        total_policy_maps.yfilter = yfilter;
    }
    if(value_path == "total-policy-map-types")
    {
        total_policy_map_types.yfilter = yfilter;
    }
}

bool PolicyManager::Global::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-maps" || name == "policy-maps" || name == "total-class-maps" || name == "total-class-map-types" || name == "total-policy-maps" || name == "total-policy-map-types")
        return true;
    return false;
}

PolicyManager::Global::Summary::ClassMaps::ClassMaps()
    :
    object_type{YType::enumeration, "object-type"},
    total_objects{YType::uint32, "total-objects"},
    transient{YType::boolean, "transient"}
{

    yang_name = "class-maps"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Global::Summary::ClassMaps::~ClassMaps()
{
}

bool PolicyManager::Global::Summary::ClassMaps::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<objects.size(); index++)
    {
        if(objects[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_data())
            return true;
    }
    return object_type.is_set
	|| total_objects.is_set
	|| transient.is_set;
}

bool PolicyManager::Global::Summary::ClassMaps::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<objects.size(); index++)
    {
        if(objects[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object_type.yfilter)
	|| ydk::is_set(total_objects.yfilter)
	|| ydk::is_set(transient.yfilter);
}

std::string PolicyManager::Global::Summary::ClassMaps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Global::Summary::ClassMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::Summary::ClassMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (total_objects.is_set || is_set(total_objects.yfilter)) leaf_name_data.push_back(total_objects.get_name_leafdata());
    if (transient.is_set || is_set(transient.yfilter)) leaf_name_data.push_back(transient.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::ClassMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::ClassMaps::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    if(child_yang_name == "objects")
    {
        for(auto const & c : objects)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::ClassMaps::Objects>();
        c->parent = this;
        objects.push_back(c);
        return c;
    }

    if(child_yang_name == "class-map-reference")
    {
        for(auto const & c : class_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::ClassMaps::ClassMapReference>();
        c->parent = this;
        class_map_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::Summary::ClassMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : objects)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : class_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::Summary::ClassMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-objects")
    {
        total_objects = value;
        total_objects.value_namespace = name_space;
        total_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transient")
    {
        transient = value;
        transient.value_namespace = name_space;
        transient.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::Summary::ClassMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
    if(value_path == "total-objects")
    {
        total_objects.yfilter = yfilter;
    }
    if(value_path == "transient")
    {
        transient.yfilter = yfilter;
    }
}

bool PolicyManager::Global::Summary::ClassMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference" || name == "objects" || name == "class-map-reference" || name == "object-type" || name == "total-objects" || name == "transient")
        return true;
    return false;
}

PolicyManager::Global::Summary::ClassMaps::Reference::Reference()
    :
    total_internal_reference_objects{YType::uint32, "total-internal-reference-objects"},
    total_class_maps{YType::uint32, "total-class-maps"},
    total_flows{YType::uint32, "total-flows"}
{

    yang_name = "reference"; yang_parent_name = "class-maps"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Global::Summary::ClassMaps::Reference::~Reference()
{
}

bool PolicyManager::Global::Summary::ClassMaps::Reference::has_data() const
{
    return total_internal_reference_objects.is_set
	|| total_class_maps.is_set
	|| total_flows.is_set;
}

bool PolicyManager::Global::Summary::ClassMaps::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_internal_reference_objects.yfilter)
	|| ydk::is_set(total_class_maps.yfilter)
	|| ydk::is_set(total_flows.yfilter);
}

std::string PolicyManager::Global::Summary::ClassMaps::Reference::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/class-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Global::Summary::ClassMaps::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::Summary::ClassMaps::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_internal_reference_objects.is_set || is_set(total_internal_reference_objects.yfilter)) leaf_name_data.push_back(total_internal_reference_objects.get_name_leafdata());
    if (total_class_maps.is_set || is_set(total_class_maps.yfilter)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_flows.is_set || is_set(total_flows.yfilter)) leaf_name_data.push_back(total_flows.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::ClassMaps::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::Summary::ClassMaps::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::Summary::ClassMaps::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects = value;
        total_internal_reference_objects.value_namespace = name_space;
        total_internal_reference_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
        total_class_maps.value_namespace = name_space;
        total_class_maps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-flows")
    {
        total_flows = value;
        total_flows.value_namespace = name_space;
        total_flows.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::Summary::ClassMaps::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects.yfilter = yfilter;
    }
    if(value_path == "total-class-maps")
    {
        total_class_maps.yfilter = yfilter;
    }
    if(value_path == "total-flows")
    {
        total_flows.yfilter = yfilter;
    }
}

bool PolicyManager::Global::Summary::ClassMaps::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-internal-reference-objects" || name == "total-class-maps" || name == "total-flows")
        return true;
    return false;
}

PolicyManager::Global::Summary::ClassMaps::Objects::Objects()
    :
    object_name{YType::str, "object-name"}
{

    yang_name = "objects"; yang_parent_name = "class-maps"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Global::Summary::ClassMaps::Objects::~Objects()
{
}

bool PolicyManager::Global::Summary::ClassMaps::Objects::has_data() const
{
    return object_name.is_set;
}

bool PolicyManager::Global::Summary::ClassMaps::Objects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter);
}

std::string PolicyManager::Global::Summary::ClassMaps::Objects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/class-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Global::Summary::ClassMaps::Objects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::Summary::ClassMaps::Objects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::ClassMaps::Objects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::Summary::ClassMaps::Objects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::Summary::ClassMaps::Objects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::Summary::ClassMaps::Objects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::Summary::ClassMaps::Objects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name")
        return true;
    return false;
}

PolicyManager::Global::Summary::ClassMaps::ClassMapReference::ClassMapReference()
    :
    total_reference_objects{YType::uint32, "total-reference-objects"}
{

    yang_name = "class-map-reference"; yang_parent_name = "class-maps"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Global::Summary::ClassMaps::ClassMapReference::~ClassMapReference()
{
}

bool PolicyManager::Global::Summary::ClassMaps::ClassMapReference::has_data() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_data())
            return true;
    }
    return total_reference_objects.is_set;
}

bool PolicyManager::Global::Summary::ClassMaps::ClassMapReference::has_operation() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(total_reference_objects.yfilter);
}

std::string PolicyManager::Global::Summary::ClassMaps::ClassMapReference::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/class-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Global::Summary::ClassMaps::ClassMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::Summary::ClassMaps::ClassMapReference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_reference_objects.is_set || is_set(total_reference_objects.yfilter)) leaf_name_data.push_back(total_reference_objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::ClassMaps::ClassMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map-reference")
    {
        for(auto const & c : policy_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::ClassMaps::ClassMapReference::PolicyMapReference>();
        c->parent = this;
        policy_map_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::Summary::ClassMaps::ClassMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::Summary::ClassMaps::ClassMapReference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects = value;
        total_reference_objects.value_namespace = name_space;
        total_reference_objects.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::Summary::ClassMaps::ClassMapReference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects.yfilter = yfilter;
    }
}

bool PolicyManager::Global::Summary::ClassMaps::ClassMapReference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-reference" || name == "total-reference-objects")
        return true;
    return false;
}

PolicyManager::Global::Summary::ClassMaps::ClassMapReference::PolicyMapReference::PolicyMapReference()
    :
    object_type{YType::enumeration, "object-type"},
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "policy-map-reference"; yang_parent_name = "class-map-reference"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Global::Summary::ClassMaps::ClassMapReference::PolicyMapReference::~PolicyMapReference()
{
}

bool PolicyManager::Global::Summary::ClassMaps::ClassMapReference::PolicyMapReference::has_data() const
{
    return object_type.is_set
	|| policy_map_name.is_set;
}

bool PolicyManager::Global::Summary::ClassMaps::ClassMapReference::PolicyMapReference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_type.yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string PolicyManager::Global::Summary::ClassMaps::ClassMapReference::PolicyMapReference::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/class-maps/class-map-reference/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Global::Summary::ClassMaps::ClassMapReference::PolicyMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::Summary::ClassMaps::ClassMapReference::PolicyMapReference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::ClassMaps::ClassMapReference::PolicyMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::Summary::ClassMaps::ClassMapReference::PolicyMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::Summary::ClassMaps::ClassMapReference::PolicyMapReference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::Summary::ClassMaps::ClassMapReference::PolicyMapReference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::Summary::ClassMaps::ClassMapReference::PolicyMapReference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-type" || name == "policy-map-name")
        return true;
    return false;
}

PolicyManager::Global::Summary::PolicyMaps::PolicyMaps()
    :
    object_type{YType::enumeration, "object-type"},
    total_objects{YType::uint32, "total-objects"},
    transient{YType::boolean, "transient"}
{

    yang_name = "policy-maps"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Global::Summary::PolicyMaps::~PolicyMaps()
{
}

bool PolicyManager::Global::Summary::PolicyMaps::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<objects.size(); index++)
    {
        if(objects[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_data())
            return true;
    }
    return object_type.is_set
	|| total_objects.is_set
	|| transient.is_set;
}

bool PolicyManager::Global::Summary::PolicyMaps::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<objects.size(); index++)
    {
        if(objects[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object_type.yfilter)
	|| ydk::is_set(total_objects.yfilter)
	|| ydk::is_set(transient.yfilter);
}

std::string PolicyManager::Global::Summary::PolicyMaps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Global::Summary::PolicyMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::Summary::PolicyMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (total_objects.is_set || is_set(total_objects.yfilter)) leaf_name_data.push_back(total_objects.get_name_leafdata());
    if (transient.is_set || is_set(transient.yfilter)) leaf_name_data.push_back(transient.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::PolicyMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::PolicyMaps::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    if(child_yang_name == "objects")
    {
        for(auto const & c : objects)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::PolicyMaps::Objects>();
        c->parent = this;
        objects.push_back(c);
        return c;
    }

    if(child_yang_name == "class-map-reference")
    {
        for(auto const & c : class_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::PolicyMaps::ClassMapReference>();
        c->parent = this;
        class_map_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::Summary::PolicyMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : objects)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : class_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::Summary::PolicyMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-objects")
    {
        total_objects = value;
        total_objects.value_namespace = name_space;
        total_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transient")
    {
        transient = value;
        transient.value_namespace = name_space;
        transient.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::Summary::PolicyMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
    if(value_path == "total-objects")
    {
        total_objects.yfilter = yfilter;
    }
    if(value_path == "transient")
    {
        transient.yfilter = yfilter;
    }
}

bool PolicyManager::Global::Summary::PolicyMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference" || name == "objects" || name == "class-map-reference" || name == "object-type" || name == "total-objects" || name == "transient")
        return true;
    return false;
}

PolicyManager::Global::Summary::PolicyMaps::Reference::Reference()
    :
    total_internal_reference_objects{YType::uint32, "total-internal-reference-objects"},
    total_class_maps{YType::uint32, "total-class-maps"},
    total_flows{YType::uint32, "total-flows"}
{

    yang_name = "reference"; yang_parent_name = "policy-maps"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Global::Summary::PolicyMaps::Reference::~Reference()
{
}

bool PolicyManager::Global::Summary::PolicyMaps::Reference::has_data() const
{
    return total_internal_reference_objects.is_set
	|| total_class_maps.is_set
	|| total_flows.is_set;
}

bool PolicyManager::Global::Summary::PolicyMaps::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_internal_reference_objects.yfilter)
	|| ydk::is_set(total_class_maps.yfilter)
	|| ydk::is_set(total_flows.yfilter);
}

std::string PolicyManager::Global::Summary::PolicyMaps::Reference::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/policy-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Global::Summary::PolicyMaps::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::Summary::PolicyMaps::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_internal_reference_objects.is_set || is_set(total_internal_reference_objects.yfilter)) leaf_name_data.push_back(total_internal_reference_objects.get_name_leafdata());
    if (total_class_maps.is_set || is_set(total_class_maps.yfilter)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_flows.is_set || is_set(total_flows.yfilter)) leaf_name_data.push_back(total_flows.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::PolicyMaps::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::Summary::PolicyMaps::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::Summary::PolicyMaps::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects = value;
        total_internal_reference_objects.value_namespace = name_space;
        total_internal_reference_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
        total_class_maps.value_namespace = name_space;
        total_class_maps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-flows")
    {
        total_flows = value;
        total_flows.value_namespace = name_space;
        total_flows.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::Summary::PolicyMaps::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects.yfilter = yfilter;
    }
    if(value_path == "total-class-maps")
    {
        total_class_maps.yfilter = yfilter;
    }
    if(value_path == "total-flows")
    {
        total_flows.yfilter = yfilter;
    }
}

bool PolicyManager::Global::Summary::PolicyMaps::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-internal-reference-objects" || name == "total-class-maps" || name == "total-flows")
        return true;
    return false;
}

PolicyManager::Global::Summary::PolicyMaps::Objects::Objects()
    :
    object_name{YType::str, "object-name"}
{

    yang_name = "objects"; yang_parent_name = "policy-maps"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Global::Summary::PolicyMaps::Objects::~Objects()
{
}

bool PolicyManager::Global::Summary::PolicyMaps::Objects::has_data() const
{
    return object_name.is_set;
}

bool PolicyManager::Global::Summary::PolicyMaps::Objects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter);
}

std::string PolicyManager::Global::Summary::PolicyMaps::Objects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/policy-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Global::Summary::PolicyMaps::Objects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::Summary::PolicyMaps::Objects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::PolicyMaps::Objects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::Summary::PolicyMaps::Objects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::Summary::PolicyMaps::Objects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::Summary::PolicyMaps::Objects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::Summary::PolicyMaps::Objects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name")
        return true;
    return false;
}

PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::ClassMapReference()
    :
    total_reference_objects{YType::uint32, "total-reference-objects"}
{

    yang_name = "class-map-reference"; yang_parent_name = "policy-maps"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::~ClassMapReference()
{
}

bool PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::has_data() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_data())
            return true;
    }
    return total_reference_objects.is_set;
}

bool PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::has_operation() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(total_reference_objects.yfilter);
}

std::string PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/policy-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_reference_objects.is_set || is_set(total_reference_objects.yfilter)) leaf_name_data.push_back(total_reference_objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map-reference")
    {
        for(auto const & c : policy_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::PolicyMapReference>();
        c->parent = this;
        policy_map_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects = value;
        total_reference_objects.value_namespace = name_space;
        total_reference_objects.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects.yfilter = yfilter;
    }
}

bool PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-reference" || name == "total-reference-objects")
        return true;
    return false;
}

PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::PolicyMapReference::PolicyMapReference()
    :
    object_type{YType::enumeration, "object-type"},
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "policy-map-reference"; yang_parent_name = "class-map-reference"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::PolicyMapReference::~PolicyMapReference()
{
}

bool PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::PolicyMapReference::has_data() const
{
    return object_type.is_set
	|| policy_map_name.is_set;
}

bool PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::PolicyMapReference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_type.yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::PolicyMapReference::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/policy-maps/class-map-reference/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::PolicyMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::PolicyMapReference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::PolicyMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::PolicyMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::PolicyMapReference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::PolicyMapReference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::Summary::PolicyMaps::ClassMapReference::PolicyMapReference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-type" || name == "policy-map-name")
        return true;
    return false;
}

PolicyManager::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "policy-manager"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Nodes::~Nodes()
{
}

bool PolicyManager::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

PolicyManager::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    target_policy_map_types(std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes>())
	,class_map(std::make_shared<PolicyManager::Nodes::Node::ClassMap>())
	,policy_map(std::make_shared<PolicyManager::Nodes::Node::PolicyMap>())
	,summary(std::make_shared<PolicyManager::Nodes::Node::Summary>())
{
    target_policy_map_types->parent = this;
    class_map->parent = this;
    policy_map->parent = this;
    summary->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

PolicyManager::Nodes::Node::~Node()
{
}

bool PolicyManager::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (target_policy_map_types !=  nullptr && target_policy_map_types->has_data())
	|| (class_map !=  nullptr && class_map->has_data())
	|| (policy_map !=  nullptr && policy_map->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool PolicyManager::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (target_policy_map_types !=  nullptr && target_policy_map_types->has_operation())
	|| (class_map !=  nullptr && class_map->has_operation())
	|| (policy_map !=  nullptr && policy_map->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string PolicyManager::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PolicyManager::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target-policy-map-types")
    {
        if(target_policy_map_types == nullptr)
        {
            target_policy_map_types = std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes>();
        }
        return target_policy_map_types;
    }

    if(child_yang_name == "class-map")
    {
        if(class_map == nullptr)
        {
            class_map = std::make_shared<PolicyManager::Nodes::Node::ClassMap>();
        }
        return class_map;
    }

    if(child_yang_name == "policy-map")
    {
        if(policy_map == nullptr)
        {
            policy_map = std::make_shared<PolicyManager::Nodes::Node::PolicyMap>();
        }
        return policy_map;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<PolicyManager::Nodes::Node::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(target_policy_map_types != nullptr)
    {
        children["target-policy-map-types"] = target_policy_map_types;
    }

    if(class_map != nullptr)
    {
        children["class-map"] = class_map;
    }

    if(policy_map != nullptr)
    {
        children["policy-map"] = policy_map;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void PolicyManager::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-policy-map-types" || name == "class-map" || name == "policy-map" || name == "summary" || name == "node-name")
        return true;
    return false;
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapTypes()
{

    yang_name = "target-policy-map-types"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::~TargetPolicyMapTypes()
{
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::has_data() const
{
    for (std::size_t index=0; index<target_policy_map_type.size(); index++)
    {
        if(target_policy_map_type[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::has_operation() const
{
    for (std::size_t index=0; index<target_policy_map_type.size(); index++)
    {
        if(target_policy_map_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::TargetPolicyMapTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-policy-map-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::TargetPolicyMapTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::TargetPolicyMapTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target-policy-map-type")
    {
        for(auto const & c : target_policy_map_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType>();
        c->parent = this;
        target_policy_map_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::TargetPolicyMapTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : target_policy_map_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-policy-map-type")
        return true;
    return false;
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetPolicyMapType()
    :
    type{YType::enumeration, "type"}
    	,
    policy_map_targets(std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets>())
	,policy_map_target_summary(std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary>())
	,target_summary_per_policy_maps(std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps>())
{
    policy_map_targets->parent = this;
    policy_map_target_summary->parent = this;
    target_summary_per_policy_maps->parent = this;

    yang_name = "target-policy-map-type"; yang_parent_name = "target-policy-map-types"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::~TargetPolicyMapType()
{
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::has_data() const
{
    return type.is_set
	|| (policy_map_targets !=  nullptr && policy_map_targets->has_data())
	|| (policy_map_target_summary !=  nullptr && policy_map_target_summary->has_data())
	|| (target_summary_per_policy_maps !=  nullptr && target_summary_per_policy_maps->has_data());
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (policy_map_targets !=  nullptr && policy_map_targets->has_operation())
	|| (policy_map_target_summary !=  nullptr && policy_map_target_summary->has_operation())
	|| (target_summary_per_policy_maps !=  nullptr && target_summary_per_policy_maps->has_operation());
}

std::string PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-policy-map-type" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map-targets")
    {
        if(policy_map_targets == nullptr)
        {
            policy_map_targets = std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets>();
        }
        return policy_map_targets;
    }

    if(child_yang_name == "policy-map-target-summary")
    {
        if(policy_map_target_summary == nullptr)
        {
            policy_map_target_summary = std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary>();
        }
        return policy_map_target_summary;
    }

    if(child_yang_name == "target-summary-per-policy-maps")
    {
        if(target_summary_per_policy_maps == nullptr)
        {
            target_summary_per_policy_maps = std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps>();
        }
        return target_summary_per_policy_maps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy_map_targets != nullptr)
    {
        children["policy-map-targets"] = policy_map_targets;
    }

    if(policy_map_target_summary != nullptr)
    {
        children["policy-map-target-summary"] = policy_map_target_summary;
    }

    if(target_summary_per_policy_maps != nullptr)
    {
        children["target-summary-per-policy-maps"] = target_summary_per_policy_maps;
    }

    return children;
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-targets" || name == "policy-map-target-summary" || name == "target-summary-per-policy-maps" || name == "type")
        return true;
    return false;
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTargets()
{

    yang_name = "policy-map-targets"; yang_parent_name = "target-policy-map-type"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::~PolicyMapTargets()
{
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::has_data() const
{
    for (std::size_t index=0; index<policy_map_target.size(); index++)
    {
        if(policy_map_target[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::has_operation() const
{
    for (std::size_t index=0; index<policy_map_target.size(); index++)
    {
        if(policy_map_target[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map-target")
    {
        for(auto const & c : policy_map_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget>();
        c->parent = this;
        policy_map_target.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_map_target)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-target")
        return true;
    return false;
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::PolicyMapTarget()
    :
    policy_map_name{YType::str, "policy-map-name"},
    targets{YType::str, "targets"},
    parent_targets{YType::str, "parent-targets"}
{

    yang_name = "policy-map-target"; yang_parent_name = "policy-map-targets"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::~PolicyMapTarget()
{
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::has_data() const
{
    for (auto const & leaf : targets.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : parent_targets.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return policy_map_name.is_set;
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::has_operation() const
{
    for (auto const & leaf : targets.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : parent_targets.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter)
	|| ydk::is_set(targets.yfilter)
	|| ydk::is_set(parent_targets.yfilter);
}

std::string PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-target" <<"[policy-map-name='" <<policy_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    auto targets_name_datas = targets.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), targets_name_datas.begin(), targets_name_datas.end());
    auto parent_targets_name_datas = parent_targets.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), parent_targets_name_datas.begin(), parent_targets_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targets")
    {
        targets.append(value);
    }
    if(value_path == "parent-targets")
    {
        parent_targets.append(value);
    }
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
    if(value_path == "targets")
    {
        targets.yfilter = yfilter;
    }
    if(value_path == "parent-targets")
    {
        parent_targets.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name" || name == "targets" || name == "parent-targets")
        return true;
    return false;
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::PolicyMapTargetSummary()
    :
    total_policy_maps_input_direction{YType::uint32, "total-policy-maps-input-direction"},
    total_policy_maps_output_direction{YType::uint32, "total-policy-maps-output-direction"},
    total_child_policy_maps_input_direction{YType::uint32, "total-child-policy-maps-input-direction"},
    total_child_policy_maps_output_direction{YType::uint32, "total-child-policy-maps-output-direction"},
    total_interfaces_input_direction{YType::uint32, "total-interfaces-input-direction"},
    total_interfaces_output_direction{YType::uint32, "total-interfaces-output-direction"}
{

    yang_name = "policy-map-target-summary"; yang_parent_name = "target-policy-map-type"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::~PolicyMapTargetSummary()
{
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::has_data() const
{
    return total_policy_maps_input_direction.is_set
	|| total_policy_maps_output_direction.is_set
	|| total_child_policy_maps_input_direction.is_set
	|| total_child_policy_maps_output_direction.is_set
	|| total_interfaces_input_direction.is_set
	|| total_interfaces_output_direction.is_set;
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_policy_maps_input_direction.yfilter)
	|| ydk::is_set(total_policy_maps_output_direction.yfilter)
	|| ydk::is_set(total_child_policy_maps_input_direction.yfilter)
	|| ydk::is_set(total_child_policy_maps_output_direction.yfilter)
	|| ydk::is_set(total_interfaces_input_direction.yfilter)
	|| ydk::is_set(total_interfaces_output_direction.yfilter);
}

std::string PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-target-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_policy_maps_input_direction.is_set || is_set(total_policy_maps_input_direction.yfilter)) leaf_name_data.push_back(total_policy_maps_input_direction.get_name_leafdata());
    if (total_policy_maps_output_direction.is_set || is_set(total_policy_maps_output_direction.yfilter)) leaf_name_data.push_back(total_policy_maps_output_direction.get_name_leafdata());
    if (total_child_policy_maps_input_direction.is_set || is_set(total_child_policy_maps_input_direction.yfilter)) leaf_name_data.push_back(total_child_policy_maps_input_direction.get_name_leafdata());
    if (total_child_policy_maps_output_direction.is_set || is_set(total_child_policy_maps_output_direction.yfilter)) leaf_name_data.push_back(total_child_policy_maps_output_direction.get_name_leafdata());
    if (total_interfaces_input_direction.is_set || is_set(total_interfaces_input_direction.yfilter)) leaf_name_data.push_back(total_interfaces_input_direction.get_name_leafdata());
    if (total_interfaces_output_direction.is_set || is_set(total_interfaces_output_direction.yfilter)) leaf_name_data.push_back(total_interfaces_output_direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-policy-maps-input-direction")
    {
        total_policy_maps_input_direction = value;
        total_policy_maps_input_direction.value_namespace = name_space;
        total_policy_maps_input_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-policy-maps-output-direction")
    {
        total_policy_maps_output_direction = value;
        total_policy_maps_output_direction.value_namespace = name_space;
        total_policy_maps_output_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-child-policy-maps-input-direction")
    {
        total_child_policy_maps_input_direction = value;
        total_child_policy_maps_input_direction.value_namespace = name_space;
        total_child_policy_maps_input_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-child-policy-maps-output-direction")
    {
        total_child_policy_maps_output_direction = value;
        total_child_policy_maps_output_direction.value_namespace = name_space;
        total_child_policy_maps_output_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-interfaces-input-direction")
    {
        total_interfaces_input_direction = value;
        total_interfaces_input_direction.value_namespace = name_space;
        total_interfaces_input_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-interfaces-output-direction")
    {
        total_interfaces_output_direction = value;
        total_interfaces_output_direction.value_namespace = name_space;
        total_interfaces_output_direction.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-policy-maps-input-direction")
    {
        total_policy_maps_input_direction.yfilter = yfilter;
    }
    if(value_path == "total-policy-maps-output-direction")
    {
        total_policy_maps_output_direction.yfilter = yfilter;
    }
    if(value_path == "total-child-policy-maps-input-direction")
    {
        total_child_policy_maps_input_direction.yfilter = yfilter;
    }
    if(value_path == "total-child-policy-maps-output-direction")
    {
        total_child_policy_maps_output_direction.yfilter = yfilter;
    }
    if(value_path == "total-interfaces-input-direction")
    {
        total_interfaces_input_direction.yfilter = yfilter;
    }
    if(value_path == "total-interfaces-output-direction")
    {
        total_interfaces_output_direction.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-policy-maps-input-direction" || name == "total-policy-maps-output-direction" || name == "total-child-policy-maps-input-direction" || name == "total-child-policy-maps-output-direction" || name == "total-interfaces-input-direction" || name == "total-interfaces-output-direction")
        return true;
    return false;
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMaps()
{

    yang_name = "target-summary-per-policy-maps"; yang_parent_name = "target-policy-map-type"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::~TargetSummaryPerPolicyMaps()
{
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::has_data() const
{
    for (std::size_t index=0; index<target_summary_per_policy_map.size(); index++)
    {
        if(target_summary_per_policy_map[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::has_operation() const
{
    for (std::size_t index=0; index<target_summary_per_policy_map.size(); index++)
    {
        if(target_summary_per_policy_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-summary-per-policy-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "target-summary-per-policy-map")
    {
        for(auto const & c : target_summary_per_policy_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap>();
        c->parent = this;
        target_summary_per_policy_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : target_summary_per_policy_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target-summary-per-policy-map")
        return true;
    return false;
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::TargetSummaryPerPolicyMap()
    :
    policy_map_name{YType::str, "policy-map-name"},
    total_policy_maps_input_direction{YType::uint32, "total-policy-maps-input-direction"},
    total_policy_maps_output_direction{YType::uint32, "total-policy-maps-output-direction"},
    total_child_policy_maps_input_direction{YType::uint32, "total-child-policy-maps-input-direction"},
    total_child_policy_maps_output_direction{YType::uint32, "total-child-policy-maps-output-direction"},
    total_interfaces_input_direction{YType::uint32, "total-interfaces-input-direction"},
    total_interfaces_output_direction{YType::uint32, "total-interfaces-output-direction"}
{

    yang_name = "target-summary-per-policy-map"; yang_parent_name = "target-summary-per-policy-maps"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::~TargetSummaryPerPolicyMap()
{
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::has_data() const
{
    return policy_map_name.is_set
	|| total_policy_maps_input_direction.is_set
	|| total_policy_maps_output_direction.is_set
	|| total_child_policy_maps_input_direction.is_set
	|| total_child_policy_maps_output_direction.is_set
	|| total_interfaces_input_direction.is_set
	|| total_interfaces_output_direction.is_set;
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter)
	|| ydk::is_set(total_policy_maps_input_direction.yfilter)
	|| ydk::is_set(total_policy_maps_output_direction.yfilter)
	|| ydk::is_set(total_child_policy_maps_input_direction.yfilter)
	|| ydk::is_set(total_child_policy_maps_output_direction.yfilter)
	|| ydk::is_set(total_interfaces_input_direction.yfilter)
	|| ydk::is_set(total_interfaces_output_direction.yfilter);
}

std::string PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-summary-per-policy-map" <<"[policy-map-name='" <<policy_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());
    if (total_policy_maps_input_direction.is_set || is_set(total_policy_maps_input_direction.yfilter)) leaf_name_data.push_back(total_policy_maps_input_direction.get_name_leafdata());
    if (total_policy_maps_output_direction.is_set || is_set(total_policy_maps_output_direction.yfilter)) leaf_name_data.push_back(total_policy_maps_output_direction.get_name_leafdata());
    if (total_child_policy_maps_input_direction.is_set || is_set(total_child_policy_maps_input_direction.yfilter)) leaf_name_data.push_back(total_child_policy_maps_input_direction.get_name_leafdata());
    if (total_child_policy_maps_output_direction.is_set || is_set(total_child_policy_maps_output_direction.yfilter)) leaf_name_data.push_back(total_child_policy_maps_output_direction.get_name_leafdata());
    if (total_interfaces_input_direction.is_set || is_set(total_interfaces_input_direction.yfilter)) leaf_name_data.push_back(total_interfaces_input_direction.get_name_leafdata());
    if (total_interfaces_output_direction.is_set || is_set(total_interfaces_output_direction.yfilter)) leaf_name_data.push_back(total_interfaces_output_direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-policy-maps-input-direction")
    {
        total_policy_maps_input_direction = value;
        total_policy_maps_input_direction.value_namespace = name_space;
        total_policy_maps_input_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-policy-maps-output-direction")
    {
        total_policy_maps_output_direction = value;
        total_policy_maps_output_direction.value_namespace = name_space;
        total_policy_maps_output_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-child-policy-maps-input-direction")
    {
        total_child_policy_maps_input_direction = value;
        total_child_policy_maps_input_direction.value_namespace = name_space;
        total_child_policy_maps_input_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-child-policy-maps-output-direction")
    {
        total_child_policy_maps_output_direction = value;
        total_child_policy_maps_output_direction.value_namespace = name_space;
        total_child_policy_maps_output_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-interfaces-input-direction")
    {
        total_interfaces_input_direction = value;
        total_interfaces_input_direction.value_namespace = name_space;
        total_interfaces_input_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-interfaces-output-direction")
    {
        total_interfaces_output_direction = value;
        total_interfaces_output_direction.value_namespace = name_space;
        total_interfaces_output_direction.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
    if(value_path == "total-policy-maps-input-direction")
    {
        total_policy_maps_input_direction.yfilter = yfilter;
    }
    if(value_path == "total-policy-maps-output-direction")
    {
        total_policy_maps_output_direction.yfilter = yfilter;
    }
    if(value_path == "total-child-policy-maps-input-direction")
    {
        total_child_policy_maps_input_direction.yfilter = yfilter;
    }
    if(value_path == "total-child-policy-maps-output-direction")
    {
        total_child_policy_maps_output_direction.yfilter = yfilter;
    }
    if(value_path == "total-interfaces-input-direction")
    {
        total_interfaces_input_direction.yfilter = yfilter;
    }
    if(value_path == "total-interfaces-output-direction")
    {
        total_interfaces_output_direction.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name" || name == "total-policy-maps-input-direction" || name == "total-policy-maps-output-direction" || name == "total-child-policy-maps-input-direction" || name == "total-child-policy-maps-output-direction" || name == "total-interfaces-input-direction" || name == "total-interfaces-output-direction")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMap()
    :
    class_map_types(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes>())
{
    class_map_types->parent = this;

    yang_name = "class-map"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::~ClassMap()
{
}

bool PolicyManager::Nodes::Node::ClassMap::has_data() const
{
    return (class_map_types !=  nullptr && class_map_types->has_data());
}

bool PolicyManager::Nodes::Node::ClassMap::has_operation() const
{
    return is_set(yfilter)
	|| (class_map_types !=  nullptr && class_map_types->has_operation());
}

std::string PolicyManager::Nodes::Node::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map-types")
    {
        if(class_map_types == nullptr)
        {
            class_map_types = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes>();
        }
        return class_map_types;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(class_map_types != nullptr)
    {
        children["class-map-types"] = class_map_types;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map-types")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapTypes()
{

    yang_name = "class-map-types"; yang_parent_name = "class-map"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::~ClassMapTypes()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::has_data() const
{
    for (std::size_t index=0; index<class_map_type.size(); index++)
    {
        if(class_map_type[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::has_operation() const
{
    for (std::size_t index=0; index<class_map_type.size(); index++)
    {
        if(class_map_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map-type")
    {
        for(auto const & c : class_map_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType>();
        c->parent = this;
        class_map_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map-type")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapType()
    :
    type{YType::enumeration, "type"}
    	,
    class_map_details(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails>())
	,class_maps(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps>())
	,class_map_briefs(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapBriefs>())
{
    class_map_details->parent = this;
    class_maps->parent = this;
    class_map_briefs->parent = this;

    yang_name = "class-map-type"; yang_parent_name = "class-map-types"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::~ClassMapType()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::has_data() const
{
    return type.is_set
	|| (class_map_details !=  nullptr && class_map_details->has_data())
	|| (class_maps !=  nullptr && class_maps->has_data())
	|| (class_map_briefs !=  nullptr && class_map_briefs->has_data());
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (class_map_details !=  nullptr && class_map_details->has_operation())
	|| (class_maps !=  nullptr && class_maps->has_operation())
	|| (class_map_briefs !=  nullptr && class_map_briefs->has_operation());
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-type" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map-details")
    {
        if(class_map_details == nullptr)
        {
            class_map_details = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails>();
        }
        return class_map_details;
    }

    if(child_yang_name == "class-maps")
    {
        if(class_maps == nullptr)
        {
            class_maps = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps>();
        }
        return class_maps;
    }

    if(child_yang_name == "class-map-briefs")
    {
        if(class_map_briefs == nullptr)
        {
            class_map_briefs = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapBriefs>();
        }
        return class_map_briefs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(class_map_details != nullptr)
    {
        children["class-map-details"] = class_map_details;
    }

    if(class_maps != nullptr)
    {
        children["class-maps"] = class_maps;
    }

    if(class_map_briefs != nullptr)
    {
        children["class-map-briefs"] = class_map_briefs;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map-details" || name == "class-maps" || name == "class-map-briefs" || name == "type")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetails()
{

    yang_name = "class-map-details"; yang_parent_name = "class-map-type"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::~ClassMapDetails()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::has_data() const
{
    for (std::size_t index=0; index<class_map_detail.size(); index++)
    {
        if(class_map_detail[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::has_operation() const
{
    for (std::size_t index=0; index<class_map_detail.size(); index++)
    {
        if(class_map_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map-detail")
    {
        for(auto const & c : class_map_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail>();
        c->parent = this;
        class_map_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map-detail")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapDetail()
    :
    class_map_name{YType::str, "class-map-name"},
    object_type{YType::enumeration, "object-type"},
    total_objects{YType::uint32, "total-objects"},
    transient{YType::boolean, "transient"}
{

    yang_name = "class-map-detail"; yang_parent_name = "class-map-details"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::~ClassMapDetail()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::has_data() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<objects.size(); index++)
    {
        if(objects[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_data())
            return true;
    }
    return class_map_name.is_set
	|| object_type.is_set
	|| total_objects.is_set
	|| transient.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::has_operation() const
{
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<objects.size(); index++)
    {
        if(objects[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(class_map_name.yfilter)
	|| ydk::is_set(object_type.yfilter)
	|| ydk::is_set(total_objects.yfilter)
	|| ydk::is_set(transient.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-detail" <<"[class-map-name='" <<class_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_map_name.is_set || is_set(class_map_name.yfilter)) leaf_name_data.push_back(class_map_name.get_name_leafdata());
    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (total_objects.is_set || is_set(total_objects.yfilter)) leaf_name_data.push_back(total_objects.get_name_leafdata());
    if (transient.is_set || is_set(transient.yfilter)) leaf_name_data.push_back(transient.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference>();
        c->parent = this;
        reference.push_back(c);
        return c;
    }

    if(child_yang_name == "objects")
    {
        for(auto const & c : objects)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Objects>();
        c->parent = this;
        objects.push_back(c);
        return c;
    }

    if(child_yang_name == "class-map-reference")
    {
        for(auto const & c : class_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference>();
        c->parent = this;
        class_map_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reference)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : objects)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : class_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-map-name")
    {
        class_map_name = value;
        class_map_name.value_namespace = name_space;
        class_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-objects")
    {
        total_objects = value;
        total_objects.value_namespace = name_space;
        total_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transient")
    {
        transient = value;
        transient.value_namespace = name_space;
        transient.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-map-name")
    {
        class_map_name.yfilter = yfilter;
    }
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
    if(value_path == "total-objects")
    {
        total_objects.yfilter = yfilter;
    }
    if(value_path == "transient")
    {
        transient.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference" || name == "objects" || name == "class-map-reference" || name == "class-map-name" || name == "object-type" || name == "total-objects" || name == "transient")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::Reference()
    :
    total_internal_reference_objects{YType::uint32, "total-internal-reference-objects"},
    total_class_maps{YType::uint32, "total-class-maps"},
    total_flows{YType::uint32, "total-flows"}
{

    yang_name = "reference"; yang_parent_name = "class-map-detail"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::~Reference()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::has_data() const
{
    return total_internal_reference_objects.is_set
	|| total_class_maps.is_set
	|| total_flows.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_internal_reference_objects.yfilter)
	|| ydk::is_set(total_class_maps.yfilter)
	|| ydk::is_set(total_flows.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_internal_reference_objects.is_set || is_set(total_internal_reference_objects.yfilter)) leaf_name_data.push_back(total_internal_reference_objects.get_name_leafdata());
    if (total_class_maps.is_set || is_set(total_class_maps.yfilter)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_flows.is_set || is_set(total_flows.yfilter)) leaf_name_data.push_back(total_flows.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects = value;
        total_internal_reference_objects.value_namespace = name_space;
        total_internal_reference_objects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
        total_class_maps.value_namespace = name_space;
        total_class_maps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-flows")
    {
        total_flows = value;
        total_flows.value_namespace = name_space;
        total_flows.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects.yfilter = yfilter;
    }
    if(value_path == "total-class-maps")
    {
        total_class_maps.yfilter = yfilter;
    }
    if(value_path == "total-flows")
    {
        total_flows.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-internal-reference-objects" || name == "total-class-maps" || name == "total-flows")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Objects::Objects()
    :
    object_name{YType::str, "object-name"}
{

    yang_name = "objects"; yang_parent_name = "class-map-detail"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Objects::~Objects()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Objects::has_data() const
{
    return object_name.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Objects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Objects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Objects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Objects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Objects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Objects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Objects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Objects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::ClassMapReference()
    :
    total_reference_objects{YType::uint32, "total-reference-objects"}
{

    yang_name = "class-map-reference"; yang_parent_name = "class-map-detail"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::~ClassMapReference()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::has_data() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_data())
            return true;
    }
    return total_reference_objects.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::has_operation() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(total_reference_objects.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_reference_objects.is_set || is_set(total_reference_objects.yfilter)) leaf_name_data.push_back(total_reference_objects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map-reference")
    {
        for(auto const & c : policy_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference>();
        c->parent = this;
        policy_map_reference.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_map_reference)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects = value;
        total_reference_objects.value_namespace = name_space;
        total_reference_objects.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-reference" || name == "total-reference-objects")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference::PolicyMapReference()
    :
    object_type{YType::enumeration, "object-type"},
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "policy-map-reference"; yang_parent_name = "class-map-reference"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference::~PolicyMapReference()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference::has_data() const
{
    return object_type.is_set
	|| policy_map_name.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_type.yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-reference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-type" || name == "policy-map-name")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMaps()
{

    yang_name = "class-maps"; yang_parent_name = "class-map-type"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::~ClassMaps()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::has_data() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::has_operation() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map")
    {
        for(auto const & c : class_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_>();
        c->parent = this;
        class_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMap_()
    :
    class_map_name{YType::str, "class-map-name"}
{

    yang_name = "class-map"; yang_parent_name = "class-maps"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::~ClassMap_()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::has_data() const
{
    for (std::size_t index=0; index<class_map_bg.size(); index++)
    {
        if(class_map_bg[index]->has_data())
            return true;
    }
    return class_map_name.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::has_operation() const
{
    for (std::size_t index=0; index<class_map_bg.size(); index++)
    {
        if(class_map_bg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(class_map_name.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map" <<"[class-map-name='" <<class_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_map_name.is_set || is_set(class_map_name.yfilter)) leaf_name_data.push_back(class_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map-bg")
    {
        for(auto const & c : class_map_bg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg>();
        c->parent = this;
        class_map_bg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map_bg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-map-name")
    {
        class_map_name = value;
        class_map_name.value_namespace = name_space;
        class_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-map-name")
    {
        class_map_name.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map-bg" || name == "class-map-name")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::ClassMapBg()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"},
    description{YType::str, "description"}
    	,
    match_infop(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop>())
{
    match_infop->parent = this;

    yang_name = "class-map-bg"; yang_parent_name = "class-map"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::~ClassMapBg()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::has_data() const
{
    return name.is_set
	|| type.is_set
	|| mode.is_set
	|| description.is_set
	|| (match_infop !=  nullptr && match_infop->has_data());
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (match_infop !=  nullptr && match_infop->has_operation());
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-bg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-infop")
    {
        if(match_infop == nullptr)
        {
            match_infop = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop>();
        }
        return match_infop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match_infop != nullptr)
    {
        children["match-infop"] = match_infop;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-infop" || name == "name" || name == "type" || name == "mode" || name == "description")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::MatchInfop()
{

    yang_name = "match-infop"; yang_parent_name = "class-map-bg"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::~MatchInfop()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::has_data() const
{
    for (std::size_t index=0; index<class_match_info_st.size(); index++)
    {
        if(class_match_info_st[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::has_operation() const
{
    for (std::size_t index=0; index<class_match_info_st.size(); index++)
    {
        if(class_match_info_st[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-infop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-match-info-st")
    {
        for(auto const & c : class_match_info_st)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt>();
        c->parent = this;
        class_match_info_st.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_match_info_st)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-match-info-st")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::ClassMatchInfoSt()
    :
    flags{YType::uint32, "flags"}
    	,
    match_data(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData>())
{
    match_data->parent = this;

    yang_name = "class-match-info-st"; yang_parent_name = "match-infop"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::~ClassMatchInfoSt()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::has_data() const
{
    return flags.is_set
	|| (match_data !=  nullptr && match_data->has_data());
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (match_data !=  nullptr && match_data->has_operation());
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-match-info-st";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-data")
    {
        if(match_data == nullptr)
        {
            match_data = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData>();
        }
        return match_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match_data != nullptr)
    {
        children["match-data"] = match_data;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-data" || name == "flags")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MatchData()
    :
    type{YType::enumeration, "type"},
    mpls_top_eos{YType::uint8, "mpls-top-eos"},
    fragment_type{YType::uint8, "fragment-type"},
    authen_status{YType::enumeration, "authen-status"},
    mlp_negotiated{YType::enumeration, "mlp-negotiated"}
    	,
    ipv4_dscp(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp>())
	,ipv6_dscp(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp>())
	,dscp(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp>())
	,ipv4_prec(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec>())
	,ipv6_prec(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec>())
	,prec(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec>())
	,discard_class(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass>())
	,qos_group(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup>())
	,traffic_class(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass>())
	,proto(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto>())
	,icmp_v4(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4>())
	,icmp_v6(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6>())
	,ipv4_packet_len(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen>())
	,ipv6_packet_len(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen>())
	,packet_len(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen>())
	,flow_tag(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag>())
	,tcp_flag(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag>())
	,icmpv4_type(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type>())
	,icmpv4_code(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code>())
	,icmpv6_type(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type>())
	,icmpv6_code(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code>())
	,mpls_exp(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp>())
	,mpls_exp_imp(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp>())
	,mpls_disp_ipv4_acl(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl>())
	,mpls_disp_ipv6_acl(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl>())
	,mpls_top_label(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel>())
	,cos(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos>())
	,cos_inr(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr>())
	,dei(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei>())
	,dei_inr(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr>())
	,vlan(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan>())
	,vlan_inr(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr>())
	,fr_dlci(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci>())
	,src_mac(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac>())
	,dst_mac(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac>())
	,atm_clp(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp>())
	,fr_de(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe>())
	,ipv4_acl(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl>())
	,ipv6_acl(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl>())
	,ether_service_acl(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl>())
	,avail_id(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId>())
	,media_type(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType>())
	,subs_protocol(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol>())
	,dnis(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis>())
	,dnis_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex>())
	,domain(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain>())
	,domain_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex>())
	,nas_port(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort>())
	,service_name(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName>())
	,service_name_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex>())
	,src_addr_ipv4(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4>())
	,dst_addr_ipv4(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4>())
	,src_addr_ipv6(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6>())
	,dst_addr_ipv6(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6>())
	,src_addr_mac(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac>())
	,timer(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer>())
	,timer_regexp(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp>())
	,tunnel_name(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName>())
	,tunnel_name_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex>())
	,user_name(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName>())
	,user_name_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex>())
	,auth_username(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername>())
	,auth_username_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex>())
	,unauth_username(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername>())
	,unauth_username_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex>())
	,auth_domain(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain>())
	,auth_domain_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex>())
	,unauth_domain(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain>())
	,unauth_domain_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex>())
	,vendor_id(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId>())
	,vendor_id_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex>())
	,access_interface(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface>())
	,input_interface(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface>())
	,input_intfhdl(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl>())
	,ethertype(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype>())
	,flow_key_data(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData>())
	,dhcp_client_id(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId>())
	,dhcp_client_id_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex>())
	,circuit_id(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId>())
	,circuit_id_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex>())
	,remote_id(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId>())
	,remote_id_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex>())
	,src_port(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort>())
	,dst_port(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort>())
{
    ipv4_dscp->parent = this;
    ipv6_dscp->parent = this;
    dscp->parent = this;
    ipv4_prec->parent = this;
    ipv6_prec->parent = this;
    prec->parent = this;
    discard_class->parent = this;
    qos_group->parent = this;
    traffic_class->parent = this;
    proto->parent = this;
    icmp_v4->parent = this;
    icmp_v6->parent = this;
    ipv4_packet_len->parent = this;
    ipv6_packet_len->parent = this;
    packet_len->parent = this;
    flow_tag->parent = this;
    tcp_flag->parent = this;
    icmpv4_type->parent = this;
    icmpv4_code->parent = this;
    icmpv6_type->parent = this;
    icmpv6_code->parent = this;
    mpls_exp->parent = this;
    mpls_exp_imp->parent = this;
    mpls_disp_ipv4_acl->parent = this;
    mpls_disp_ipv6_acl->parent = this;
    mpls_top_label->parent = this;
    cos->parent = this;
    cos_inr->parent = this;
    dei->parent = this;
    dei_inr->parent = this;
    vlan->parent = this;
    vlan_inr->parent = this;
    fr_dlci->parent = this;
    src_mac->parent = this;
    dst_mac->parent = this;
    atm_clp->parent = this;
    fr_de->parent = this;
    ipv4_acl->parent = this;
    ipv6_acl->parent = this;
    ether_service_acl->parent = this;
    avail_id->parent = this;
    media_type->parent = this;
    subs_protocol->parent = this;
    dnis->parent = this;
    dnis_regex->parent = this;
    domain->parent = this;
    domain_regex->parent = this;
    nas_port->parent = this;
    service_name->parent = this;
    service_name_regex->parent = this;
    src_addr_ipv4->parent = this;
    dst_addr_ipv4->parent = this;
    src_addr_ipv6->parent = this;
    dst_addr_ipv6->parent = this;
    src_addr_mac->parent = this;
    timer->parent = this;
    timer_regexp->parent = this;
    tunnel_name->parent = this;
    tunnel_name_regex->parent = this;
    user_name->parent = this;
    user_name_regex->parent = this;
    auth_username->parent = this;
    auth_username_regex->parent = this;
    unauth_username->parent = this;
    unauth_username_regex->parent = this;
    auth_domain->parent = this;
    auth_domain_regex->parent = this;
    unauth_domain->parent = this;
    unauth_domain_regex->parent = this;
    vendor_id->parent = this;
    vendor_id_regex->parent = this;
    access_interface->parent = this;
    input_interface->parent = this;
    input_intfhdl->parent = this;
    ethertype->parent = this;
    flow_key_data->parent = this;
    dhcp_client_id->parent = this;
    dhcp_client_id_regex->parent = this;
    circuit_id->parent = this;
    circuit_id_regex->parent = this;
    remote_id->parent = this;
    remote_id_regex->parent = this;
    src_port->parent = this;
    dst_port->parent = this;

    yang_name = "match-data"; yang_parent_name = "class-match-info-st"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::~MatchData()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::has_data() const
{
    return type.is_set
	|| mpls_top_eos.is_set
	|| fragment_type.is_set
	|| authen_status.is_set
	|| mlp_negotiated.is_set
	|| (ipv4_dscp !=  nullptr && ipv4_dscp->has_data())
	|| (ipv6_dscp !=  nullptr && ipv6_dscp->has_data())
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ipv4_prec !=  nullptr && ipv4_prec->has_data())
	|| (ipv6_prec !=  nullptr && ipv6_prec->has_data())
	|| (prec !=  nullptr && prec->has_data())
	|| (discard_class !=  nullptr && discard_class->has_data())
	|| (qos_group !=  nullptr && qos_group->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data())
	|| (proto !=  nullptr && proto->has_data())
	|| (icmp_v4 !=  nullptr && icmp_v4->has_data())
	|| (icmp_v6 !=  nullptr && icmp_v6->has_data())
	|| (ipv4_packet_len !=  nullptr && ipv4_packet_len->has_data())
	|| (ipv6_packet_len !=  nullptr && ipv6_packet_len->has_data())
	|| (packet_len !=  nullptr && packet_len->has_data())
	|| (flow_tag !=  nullptr && flow_tag->has_data())
	|| (tcp_flag !=  nullptr && tcp_flag->has_data())
	|| (icmpv4_type !=  nullptr && icmpv4_type->has_data())
	|| (icmpv4_code !=  nullptr && icmpv4_code->has_data())
	|| (icmpv6_type !=  nullptr && icmpv6_type->has_data())
	|| (icmpv6_code !=  nullptr && icmpv6_code->has_data())
	|| (mpls_exp !=  nullptr && mpls_exp->has_data())
	|| (mpls_exp_imp !=  nullptr && mpls_exp_imp->has_data())
	|| (mpls_disp_ipv4_acl !=  nullptr && mpls_disp_ipv4_acl->has_data())
	|| (mpls_disp_ipv6_acl !=  nullptr && mpls_disp_ipv6_acl->has_data())
	|| (mpls_top_label !=  nullptr && mpls_top_label->has_data())
	|| (cos !=  nullptr && cos->has_data())
	|| (cos_inr !=  nullptr && cos_inr->has_data())
	|| (dei !=  nullptr && dei->has_data())
	|| (dei_inr !=  nullptr && dei_inr->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (vlan_inr !=  nullptr && vlan_inr->has_data())
	|| (fr_dlci !=  nullptr && fr_dlci->has_data())
	|| (src_mac !=  nullptr && src_mac->has_data())
	|| (dst_mac !=  nullptr && dst_mac->has_data())
	|| (atm_clp !=  nullptr && atm_clp->has_data())
	|| (fr_de !=  nullptr && fr_de->has_data())
	|| (ipv4_acl !=  nullptr && ipv4_acl->has_data())
	|| (ipv6_acl !=  nullptr && ipv6_acl->has_data())
	|| (ether_service_acl !=  nullptr && ether_service_acl->has_data())
	|| (avail_id !=  nullptr && avail_id->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (subs_protocol !=  nullptr && subs_protocol->has_data())
	|| (dnis !=  nullptr && dnis->has_data())
	|| (dnis_regex !=  nullptr && dnis_regex->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (domain_regex !=  nullptr && domain_regex->has_data())
	|| (nas_port !=  nullptr && nas_port->has_data())
	|| (service_name !=  nullptr && service_name->has_data())
	|| (service_name_regex !=  nullptr && service_name_regex->has_data())
	|| (src_addr_ipv4 !=  nullptr && src_addr_ipv4->has_data())
	|| (dst_addr_ipv4 !=  nullptr && dst_addr_ipv4->has_data())
	|| (src_addr_ipv6 !=  nullptr && src_addr_ipv6->has_data())
	|| (dst_addr_ipv6 !=  nullptr && dst_addr_ipv6->has_data())
	|| (src_addr_mac !=  nullptr && src_addr_mac->has_data())
	|| (timer !=  nullptr && timer->has_data())
	|| (timer_regexp !=  nullptr && timer_regexp->has_data())
	|| (tunnel_name !=  nullptr && tunnel_name->has_data())
	|| (tunnel_name_regex !=  nullptr && tunnel_name_regex->has_data())
	|| (user_name !=  nullptr && user_name->has_data())
	|| (user_name_regex !=  nullptr && user_name_regex->has_data())
	|| (auth_username !=  nullptr && auth_username->has_data())
	|| (auth_username_regex !=  nullptr && auth_username_regex->has_data())
	|| (unauth_username !=  nullptr && unauth_username->has_data())
	|| (unauth_username_regex !=  nullptr && unauth_username_regex->has_data())
	|| (auth_domain !=  nullptr && auth_domain->has_data())
	|| (auth_domain_regex !=  nullptr && auth_domain_regex->has_data())
	|| (unauth_domain !=  nullptr && unauth_domain->has_data())
	|| (unauth_domain_regex !=  nullptr && unauth_domain_regex->has_data())
	|| (vendor_id !=  nullptr && vendor_id->has_data())
	|| (vendor_id_regex !=  nullptr && vendor_id_regex->has_data())
	|| (access_interface !=  nullptr && access_interface->has_data())
	|| (input_interface !=  nullptr && input_interface->has_data())
	|| (input_intfhdl !=  nullptr && input_intfhdl->has_data())
	|| (ethertype !=  nullptr && ethertype->has_data())
	|| (flow_key_data !=  nullptr && flow_key_data->has_data())
	|| (dhcp_client_id !=  nullptr && dhcp_client_id->has_data())
	|| (dhcp_client_id_regex !=  nullptr && dhcp_client_id_regex->has_data())
	|| (circuit_id !=  nullptr && circuit_id->has_data())
	|| (circuit_id_regex !=  nullptr && circuit_id_regex->has_data())
	|| (remote_id !=  nullptr && remote_id->has_data())
	|| (remote_id_regex !=  nullptr && remote_id_regex->has_data())
	|| (src_port !=  nullptr && src_port->has_data())
	|| (dst_port !=  nullptr && dst_port->has_data());
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mpls_top_eos.yfilter)
	|| ydk::is_set(fragment_type.yfilter)
	|| ydk::is_set(authen_status.yfilter)
	|| ydk::is_set(mlp_negotiated.yfilter)
	|| (ipv4_dscp !=  nullptr && ipv4_dscp->has_operation())
	|| (ipv6_dscp !=  nullptr && ipv6_dscp->has_operation())
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ipv4_prec !=  nullptr && ipv4_prec->has_operation())
	|| (ipv6_prec !=  nullptr && ipv6_prec->has_operation())
	|| (prec !=  nullptr && prec->has_operation())
	|| (discard_class !=  nullptr && discard_class->has_operation())
	|| (qos_group !=  nullptr && qos_group->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation())
	|| (proto !=  nullptr && proto->has_operation())
	|| (icmp_v4 !=  nullptr && icmp_v4->has_operation())
	|| (icmp_v6 !=  nullptr && icmp_v6->has_operation())
	|| (ipv4_packet_len !=  nullptr && ipv4_packet_len->has_operation())
	|| (ipv6_packet_len !=  nullptr && ipv6_packet_len->has_operation())
	|| (packet_len !=  nullptr && packet_len->has_operation())
	|| (flow_tag !=  nullptr && flow_tag->has_operation())
	|| (tcp_flag !=  nullptr && tcp_flag->has_operation())
	|| (icmpv4_type !=  nullptr && icmpv4_type->has_operation())
	|| (icmpv4_code !=  nullptr && icmpv4_code->has_operation())
	|| (icmpv6_type !=  nullptr && icmpv6_type->has_operation())
	|| (icmpv6_code !=  nullptr && icmpv6_code->has_operation())
	|| (mpls_exp !=  nullptr && mpls_exp->has_operation())
	|| (mpls_exp_imp !=  nullptr && mpls_exp_imp->has_operation())
	|| (mpls_disp_ipv4_acl !=  nullptr && mpls_disp_ipv4_acl->has_operation())
	|| (mpls_disp_ipv6_acl !=  nullptr && mpls_disp_ipv6_acl->has_operation())
	|| (mpls_top_label !=  nullptr && mpls_top_label->has_operation())
	|| (cos !=  nullptr && cos->has_operation())
	|| (cos_inr !=  nullptr && cos_inr->has_operation())
	|| (dei !=  nullptr && dei->has_operation())
	|| (dei_inr !=  nullptr && dei_inr->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (vlan_inr !=  nullptr && vlan_inr->has_operation())
	|| (fr_dlci !=  nullptr && fr_dlci->has_operation())
	|| (src_mac !=  nullptr && src_mac->has_operation())
	|| (dst_mac !=  nullptr && dst_mac->has_operation())
	|| (atm_clp !=  nullptr && atm_clp->has_operation())
	|| (fr_de !=  nullptr && fr_de->has_operation())
	|| (ipv4_acl !=  nullptr && ipv4_acl->has_operation())
	|| (ipv6_acl !=  nullptr && ipv6_acl->has_operation())
	|| (ether_service_acl !=  nullptr && ether_service_acl->has_operation())
	|| (avail_id !=  nullptr && avail_id->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (subs_protocol !=  nullptr && subs_protocol->has_operation())
	|| (dnis !=  nullptr && dnis->has_operation())
	|| (dnis_regex !=  nullptr && dnis_regex->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (domain_regex !=  nullptr && domain_regex->has_operation())
	|| (nas_port !=  nullptr && nas_port->has_operation())
	|| (service_name !=  nullptr && service_name->has_operation())
	|| (service_name_regex !=  nullptr && service_name_regex->has_operation())
	|| (src_addr_ipv4 !=  nullptr && src_addr_ipv4->has_operation())
	|| (dst_addr_ipv4 !=  nullptr && dst_addr_ipv4->has_operation())
	|| (src_addr_ipv6 !=  nullptr && src_addr_ipv6->has_operation())
	|| (dst_addr_ipv6 !=  nullptr && dst_addr_ipv6->has_operation())
	|| (src_addr_mac !=  nullptr && src_addr_mac->has_operation())
	|| (timer !=  nullptr && timer->has_operation())
	|| (timer_regexp !=  nullptr && timer_regexp->has_operation())
	|| (tunnel_name !=  nullptr && tunnel_name->has_operation())
	|| (tunnel_name_regex !=  nullptr && tunnel_name_regex->has_operation())
	|| (user_name !=  nullptr && user_name->has_operation())
	|| (user_name_regex !=  nullptr && user_name_regex->has_operation())
	|| (auth_username !=  nullptr && auth_username->has_operation())
	|| (auth_username_regex !=  nullptr && auth_username_regex->has_operation())
	|| (unauth_username !=  nullptr && unauth_username->has_operation())
	|| (unauth_username_regex !=  nullptr && unauth_username_regex->has_operation())
	|| (auth_domain !=  nullptr && auth_domain->has_operation())
	|| (auth_domain_regex !=  nullptr && auth_domain_regex->has_operation())
	|| (unauth_domain !=  nullptr && unauth_domain->has_operation())
	|| (unauth_domain_regex !=  nullptr && unauth_domain_regex->has_operation())
	|| (vendor_id !=  nullptr && vendor_id->has_operation())
	|| (vendor_id_regex !=  nullptr && vendor_id_regex->has_operation())
	|| (access_interface !=  nullptr && access_interface->has_operation())
	|| (input_interface !=  nullptr && input_interface->has_operation())
	|| (input_intfhdl !=  nullptr && input_intfhdl->has_operation())
	|| (ethertype !=  nullptr && ethertype->has_operation())
	|| (flow_key_data !=  nullptr && flow_key_data->has_operation())
	|| (dhcp_client_id !=  nullptr && dhcp_client_id->has_operation())
	|| (dhcp_client_id_regex !=  nullptr && dhcp_client_id_regex->has_operation())
	|| (circuit_id !=  nullptr && circuit_id->has_operation())
	|| (circuit_id_regex !=  nullptr && circuit_id_regex->has_operation())
	|| (remote_id !=  nullptr && remote_id->has_operation())
	|| (remote_id_regex !=  nullptr && remote_id_regex->has_operation())
	|| (src_port !=  nullptr && src_port->has_operation())
	|| (dst_port !=  nullptr && dst_port->has_operation());
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mpls_top_eos.is_set || is_set(mpls_top_eos.yfilter)) leaf_name_data.push_back(mpls_top_eos.get_name_leafdata());
    if (fragment_type.is_set || is_set(fragment_type.yfilter)) leaf_name_data.push_back(fragment_type.get_name_leafdata());
    if (authen_status.is_set || is_set(authen_status.yfilter)) leaf_name_data.push_back(authen_status.get_name_leafdata());
    if (mlp_negotiated.is_set || is_set(mlp_negotiated.yfilter)) leaf_name_data.push_back(mlp_negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-dscp")
    {
        if(ipv4_dscp == nullptr)
        {
            ipv4_dscp = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp>();
        }
        return ipv4_dscp;
    }

    if(child_yang_name == "ipv6-dscp")
    {
        if(ipv6_dscp == nullptr)
        {
            ipv6_dscp = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp>();
        }
        return ipv6_dscp;
    }

    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ipv4-prec")
    {
        if(ipv4_prec == nullptr)
        {
            ipv4_prec = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec>();
        }
        return ipv4_prec;
    }

    if(child_yang_name == "ipv6-prec")
    {
        if(ipv6_prec == nullptr)
        {
            ipv6_prec = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec>();
        }
        return ipv6_prec;
    }

    if(child_yang_name == "prec")
    {
        if(prec == nullptr)
        {
            prec = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec>();
        }
        return prec;
    }

    if(child_yang_name == "discard-class")
    {
        if(discard_class == nullptr)
        {
            discard_class = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass>();
        }
        return discard_class;
    }

    if(child_yang_name == "qos-group")
    {
        if(qos_group == nullptr)
        {
            qos_group = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup>();
        }
        return qos_group;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass>();
        }
        return traffic_class;
    }

    if(child_yang_name == "proto")
    {
        if(proto == nullptr)
        {
            proto = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto>();
        }
        return proto;
    }

    if(child_yang_name == "icmp-v4")
    {
        if(icmp_v4 == nullptr)
        {
            icmp_v4 = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4>();
        }
        return icmp_v4;
    }

    if(child_yang_name == "icmp-v6")
    {
        if(icmp_v6 == nullptr)
        {
            icmp_v6 = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6>();
        }
        return icmp_v6;
    }

    if(child_yang_name == "ipv4-packet-len")
    {
        if(ipv4_packet_len == nullptr)
        {
            ipv4_packet_len = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen>();
        }
        return ipv4_packet_len;
    }

    if(child_yang_name == "ipv6-packet-len")
    {
        if(ipv6_packet_len == nullptr)
        {
            ipv6_packet_len = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen>();
        }
        return ipv6_packet_len;
    }

    if(child_yang_name == "packet-len")
    {
        if(packet_len == nullptr)
        {
            packet_len = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen>();
        }
        return packet_len;
    }

    if(child_yang_name == "flow-tag")
    {
        if(flow_tag == nullptr)
        {
            flow_tag = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag>();
        }
        return flow_tag;
    }

    if(child_yang_name == "tcp-flag")
    {
        if(tcp_flag == nullptr)
        {
            tcp_flag = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag>();
        }
        return tcp_flag;
    }

    if(child_yang_name == "icmpv4-type")
    {
        if(icmpv4_type == nullptr)
        {
            icmpv4_type = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type>();
        }
        return icmpv4_type;
    }

    if(child_yang_name == "icmpv4-code")
    {
        if(icmpv4_code == nullptr)
        {
            icmpv4_code = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code>();
        }
        return icmpv4_code;
    }

    if(child_yang_name == "icmpv6-type")
    {
        if(icmpv6_type == nullptr)
        {
            icmpv6_type = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type>();
        }
        return icmpv6_type;
    }

    if(child_yang_name == "icmpv6-code")
    {
        if(icmpv6_code == nullptr)
        {
            icmpv6_code = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code>();
        }
        return icmpv6_code;
    }

    if(child_yang_name == "mpls-exp")
    {
        if(mpls_exp == nullptr)
        {
            mpls_exp = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp>();
        }
        return mpls_exp;
    }

    if(child_yang_name == "mpls-exp-imp")
    {
        if(mpls_exp_imp == nullptr)
        {
            mpls_exp_imp = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp>();
        }
        return mpls_exp_imp;
    }

    if(child_yang_name == "mpls-disp-ipv4-acl")
    {
        if(mpls_disp_ipv4_acl == nullptr)
        {
            mpls_disp_ipv4_acl = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl>();
        }
        return mpls_disp_ipv4_acl;
    }

    if(child_yang_name == "mpls-disp-ipv6-acl")
    {
        if(mpls_disp_ipv6_acl == nullptr)
        {
            mpls_disp_ipv6_acl = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl>();
        }
        return mpls_disp_ipv6_acl;
    }

    if(child_yang_name == "mpls-top-label")
    {
        if(mpls_top_label == nullptr)
        {
            mpls_top_label = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel>();
        }
        return mpls_top_label;
    }

    if(child_yang_name == "cos")
    {
        if(cos == nullptr)
        {
            cos = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos>();
        }
        return cos;
    }

    if(child_yang_name == "cos-inr")
    {
        if(cos_inr == nullptr)
        {
            cos_inr = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr>();
        }
        return cos_inr;
    }

    if(child_yang_name == "dei")
    {
        if(dei == nullptr)
        {
            dei = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei>();
        }
        return dei;
    }

    if(child_yang_name == "dei-inr")
    {
        if(dei_inr == nullptr)
        {
            dei_inr = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr>();
        }
        return dei_inr;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "vlan-inr")
    {
        if(vlan_inr == nullptr)
        {
            vlan_inr = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr>();
        }
        return vlan_inr;
    }

    if(child_yang_name == "fr-dlci")
    {
        if(fr_dlci == nullptr)
        {
            fr_dlci = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci>();
        }
        return fr_dlci;
    }

    if(child_yang_name == "src-mac")
    {
        if(src_mac == nullptr)
        {
            src_mac = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac>();
        }
        return src_mac;
    }

    if(child_yang_name == "dst-mac")
    {
        if(dst_mac == nullptr)
        {
            dst_mac = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac>();
        }
        return dst_mac;
    }

    if(child_yang_name == "atm-clp")
    {
        if(atm_clp == nullptr)
        {
            atm_clp = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp>();
        }
        return atm_clp;
    }

    if(child_yang_name == "fr-de")
    {
        if(fr_de == nullptr)
        {
            fr_de = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe>();
        }
        return fr_de;
    }

    if(child_yang_name == "ipv4-acl")
    {
        if(ipv4_acl == nullptr)
        {
            ipv4_acl = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl>();
        }
        return ipv4_acl;
    }

    if(child_yang_name == "ipv6-acl")
    {
        if(ipv6_acl == nullptr)
        {
            ipv6_acl = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl>();
        }
        return ipv6_acl;
    }

    if(child_yang_name == "ether-service-acl")
    {
        if(ether_service_acl == nullptr)
        {
            ether_service_acl = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl>();
        }
        return ether_service_acl;
    }

    if(child_yang_name == "avail-id")
    {
        if(avail_id == nullptr)
        {
            avail_id = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId>();
        }
        return avail_id;
    }

    if(child_yang_name == "media-type")
    {
        if(media_type == nullptr)
        {
            media_type = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType>();
        }
        return media_type;
    }

    if(child_yang_name == "subs-protocol")
    {
        if(subs_protocol == nullptr)
        {
            subs_protocol = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol>();
        }
        return subs_protocol;
    }

    if(child_yang_name == "dnis")
    {
        if(dnis == nullptr)
        {
            dnis = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis>();
        }
        return dnis;
    }

    if(child_yang_name == "dnis-regex")
    {
        if(dnis_regex == nullptr)
        {
            dnis_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex>();
        }
        return dnis_regex;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "domain-regex")
    {
        if(domain_regex == nullptr)
        {
            domain_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex>();
        }
        return domain_regex;
    }

    if(child_yang_name == "nas-port")
    {
        if(nas_port == nullptr)
        {
            nas_port = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort>();
        }
        return nas_port;
    }

    if(child_yang_name == "service-name")
    {
        if(service_name == nullptr)
        {
            service_name = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName>();
        }
        return service_name;
    }

    if(child_yang_name == "service-name-regex")
    {
        if(service_name_regex == nullptr)
        {
            service_name_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex>();
        }
        return service_name_regex;
    }

    if(child_yang_name == "src-addr-ipv4")
    {
        if(src_addr_ipv4 == nullptr)
        {
            src_addr_ipv4 = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4>();
        }
        return src_addr_ipv4;
    }

    if(child_yang_name == "dst-addr-ipv4")
    {
        if(dst_addr_ipv4 == nullptr)
        {
            dst_addr_ipv4 = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4>();
        }
        return dst_addr_ipv4;
    }

    if(child_yang_name == "src-addr-ipv6")
    {
        if(src_addr_ipv6 == nullptr)
        {
            src_addr_ipv6 = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6>();
        }
        return src_addr_ipv6;
    }

    if(child_yang_name == "dst-addr-ipv6")
    {
        if(dst_addr_ipv6 == nullptr)
        {
            dst_addr_ipv6 = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6>();
        }
        return dst_addr_ipv6;
    }

    if(child_yang_name == "src-addr-mac")
    {
        if(src_addr_mac == nullptr)
        {
            src_addr_mac = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac>();
        }
        return src_addr_mac;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "timer-regexp")
    {
        if(timer_regexp == nullptr)
        {
            timer_regexp = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp>();
        }
        return timer_regexp;
    }

    if(child_yang_name == "tunnel-name")
    {
        if(tunnel_name == nullptr)
        {
            tunnel_name = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName>();
        }
        return tunnel_name;
    }

    if(child_yang_name == "tunnel-name-regex")
    {
        if(tunnel_name_regex == nullptr)
        {
            tunnel_name_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex>();
        }
        return tunnel_name_regex;
    }

    if(child_yang_name == "user-name")
    {
        if(user_name == nullptr)
        {
            user_name = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName>();
        }
        return user_name;
    }

    if(child_yang_name == "user-name-regex")
    {
        if(user_name_regex == nullptr)
        {
            user_name_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex>();
        }
        return user_name_regex;
    }

    if(child_yang_name == "auth-username")
    {
        if(auth_username == nullptr)
        {
            auth_username = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername>();
        }
        return auth_username;
    }

    if(child_yang_name == "auth-username-regex")
    {
        if(auth_username_regex == nullptr)
        {
            auth_username_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex>();
        }
        return auth_username_regex;
    }

    if(child_yang_name == "unauth-username")
    {
        if(unauth_username == nullptr)
        {
            unauth_username = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername>();
        }
        return unauth_username;
    }

    if(child_yang_name == "unauth-username-regex")
    {
        if(unauth_username_regex == nullptr)
        {
            unauth_username_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex>();
        }
        return unauth_username_regex;
    }

    if(child_yang_name == "auth-domain")
    {
        if(auth_domain == nullptr)
        {
            auth_domain = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain>();
        }
        return auth_domain;
    }

    if(child_yang_name == "auth-domain-regex")
    {
        if(auth_domain_regex == nullptr)
        {
            auth_domain_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex>();
        }
        return auth_domain_regex;
    }

    if(child_yang_name == "unauth-domain")
    {
        if(unauth_domain == nullptr)
        {
            unauth_domain = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain>();
        }
        return unauth_domain;
    }

    if(child_yang_name == "unauth-domain-regex")
    {
        if(unauth_domain_regex == nullptr)
        {
            unauth_domain_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex>();
        }
        return unauth_domain_regex;
    }

    if(child_yang_name == "vendor-id")
    {
        if(vendor_id == nullptr)
        {
            vendor_id = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId>();
        }
        return vendor_id;
    }

    if(child_yang_name == "vendor-id-regex")
    {
        if(vendor_id_regex == nullptr)
        {
            vendor_id_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex>();
        }
        return vendor_id_regex;
    }

    if(child_yang_name == "access-interface")
    {
        if(access_interface == nullptr)
        {
            access_interface = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface>();
        }
        return access_interface;
    }

    if(child_yang_name == "input-interface")
    {
        if(input_interface == nullptr)
        {
            input_interface = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface>();
        }
        return input_interface;
    }

    if(child_yang_name == "input-intfhdl")
    {
        if(input_intfhdl == nullptr)
        {
            input_intfhdl = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl>();
        }
        return input_intfhdl;
    }

    if(child_yang_name == "ethertype")
    {
        if(ethertype == nullptr)
        {
            ethertype = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype>();
        }
        return ethertype;
    }

    if(child_yang_name == "flow-key-data")
    {
        if(flow_key_data == nullptr)
        {
            flow_key_data = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData>();
        }
        return flow_key_data;
    }

    if(child_yang_name == "dhcp-client-id")
    {
        if(dhcp_client_id == nullptr)
        {
            dhcp_client_id = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId>();
        }
        return dhcp_client_id;
    }

    if(child_yang_name == "dhcp-client-id-regex")
    {
        if(dhcp_client_id_regex == nullptr)
        {
            dhcp_client_id_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex>();
        }
        return dhcp_client_id_regex;
    }

    if(child_yang_name == "circuit-id")
    {
        if(circuit_id == nullptr)
        {
            circuit_id = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId>();
        }
        return circuit_id;
    }

    if(child_yang_name == "circuit-id-regex")
    {
        if(circuit_id_regex == nullptr)
        {
            circuit_id_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex>();
        }
        return circuit_id_regex;
    }

    if(child_yang_name == "remote-id")
    {
        if(remote_id == nullptr)
        {
            remote_id = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId>();
        }
        return remote_id;
    }

    if(child_yang_name == "remote-id-regex")
    {
        if(remote_id_regex == nullptr)
        {
            remote_id_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex>();
        }
        return remote_id_regex;
    }

    if(child_yang_name == "src-port")
    {
        if(src_port == nullptr)
        {
            src_port = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort>();
        }
        return src_port;
    }

    if(child_yang_name == "dst-port")
    {
        if(dst_port == nullptr)
        {
            dst_port = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort>();
        }
        return dst_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_dscp != nullptr)
    {
        children["ipv4-dscp"] = ipv4_dscp;
    }

    if(ipv6_dscp != nullptr)
    {
        children["ipv6-dscp"] = ipv6_dscp;
    }

    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(ipv4_prec != nullptr)
    {
        children["ipv4-prec"] = ipv4_prec;
    }

    if(ipv6_prec != nullptr)
    {
        children["ipv6-prec"] = ipv6_prec;
    }

    if(prec != nullptr)
    {
        children["prec"] = prec;
    }

    if(discard_class != nullptr)
    {
        children["discard-class"] = discard_class;
    }

    if(qos_group != nullptr)
    {
        children["qos-group"] = qos_group;
    }

    if(traffic_class != nullptr)
    {
        children["traffic-class"] = traffic_class;
    }

    if(proto != nullptr)
    {
        children["proto"] = proto;
    }

    if(icmp_v4 != nullptr)
    {
        children["icmp-v4"] = icmp_v4;
    }

    if(icmp_v6 != nullptr)
    {
        children["icmp-v6"] = icmp_v6;
    }

    if(ipv4_packet_len != nullptr)
    {
        children["ipv4-packet-len"] = ipv4_packet_len;
    }

    if(ipv6_packet_len != nullptr)
    {
        children["ipv6-packet-len"] = ipv6_packet_len;
    }

    if(packet_len != nullptr)
    {
        children["packet-len"] = packet_len;
    }

    if(flow_tag != nullptr)
    {
        children["flow-tag"] = flow_tag;
    }

    if(tcp_flag != nullptr)
    {
        children["tcp-flag"] = tcp_flag;
    }

    if(icmpv4_type != nullptr)
    {
        children["icmpv4-type"] = icmpv4_type;
    }

    if(icmpv4_code != nullptr)
    {
        children["icmpv4-code"] = icmpv4_code;
    }

    if(icmpv6_type != nullptr)
    {
        children["icmpv6-type"] = icmpv6_type;
    }

    if(icmpv6_code != nullptr)
    {
        children["icmpv6-code"] = icmpv6_code;
    }

    if(mpls_exp != nullptr)
    {
        children["mpls-exp"] = mpls_exp;
    }

    if(mpls_exp_imp != nullptr)
    {
        children["mpls-exp-imp"] = mpls_exp_imp;
    }

    if(mpls_disp_ipv4_acl != nullptr)
    {
        children["mpls-disp-ipv4-acl"] = mpls_disp_ipv4_acl;
    }

    if(mpls_disp_ipv6_acl != nullptr)
    {
        children["mpls-disp-ipv6-acl"] = mpls_disp_ipv6_acl;
    }

    if(mpls_top_label != nullptr)
    {
        children["mpls-top-label"] = mpls_top_label;
    }

    if(cos != nullptr)
    {
        children["cos"] = cos;
    }

    if(cos_inr != nullptr)
    {
        children["cos-inr"] = cos_inr;
    }

    if(dei != nullptr)
    {
        children["dei"] = dei;
    }

    if(dei_inr != nullptr)
    {
        children["dei-inr"] = dei_inr;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    if(vlan_inr != nullptr)
    {
        children["vlan-inr"] = vlan_inr;
    }

    if(fr_dlci != nullptr)
    {
        children["fr-dlci"] = fr_dlci;
    }

    if(src_mac != nullptr)
    {
        children["src-mac"] = src_mac;
    }

    if(dst_mac != nullptr)
    {
        children["dst-mac"] = dst_mac;
    }

    if(atm_clp != nullptr)
    {
        children["atm-clp"] = atm_clp;
    }

    if(fr_de != nullptr)
    {
        children["fr-de"] = fr_de;
    }

    if(ipv4_acl != nullptr)
    {
        children["ipv4-acl"] = ipv4_acl;
    }

    if(ipv6_acl != nullptr)
    {
        children["ipv6-acl"] = ipv6_acl;
    }

    if(ether_service_acl != nullptr)
    {
        children["ether-service-acl"] = ether_service_acl;
    }

    if(avail_id != nullptr)
    {
        children["avail-id"] = avail_id;
    }

    if(media_type != nullptr)
    {
        children["media-type"] = media_type;
    }

    if(subs_protocol != nullptr)
    {
        children["subs-protocol"] = subs_protocol;
    }

    if(dnis != nullptr)
    {
        children["dnis"] = dnis;
    }

    if(dnis_regex != nullptr)
    {
        children["dnis-regex"] = dnis_regex;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(domain_regex != nullptr)
    {
        children["domain-regex"] = domain_regex;
    }

    if(nas_port != nullptr)
    {
        children["nas-port"] = nas_port;
    }

    if(service_name != nullptr)
    {
        children["service-name"] = service_name;
    }

    if(service_name_regex != nullptr)
    {
        children["service-name-regex"] = service_name_regex;
    }

    if(src_addr_ipv4 != nullptr)
    {
        children["src-addr-ipv4"] = src_addr_ipv4;
    }

    if(dst_addr_ipv4 != nullptr)
    {
        children["dst-addr-ipv4"] = dst_addr_ipv4;
    }

    if(src_addr_ipv6 != nullptr)
    {
        children["src-addr-ipv6"] = src_addr_ipv6;
    }

    if(dst_addr_ipv6 != nullptr)
    {
        children["dst-addr-ipv6"] = dst_addr_ipv6;
    }

    if(src_addr_mac != nullptr)
    {
        children["src-addr-mac"] = src_addr_mac;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    if(timer_regexp != nullptr)
    {
        children["timer-regexp"] = timer_regexp;
    }

    if(tunnel_name != nullptr)
    {
        children["tunnel-name"] = tunnel_name;
    }

    if(tunnel_name_regex != nullptr)
    {
        children["tunnel-name-regex"] = tunnel_name_regex;
    }

    if(user_name != nullptr)
    {
        children["user-name"] = user_name;
    }

    if(user_name_regex != nullptr)
    {
        children["user-name-regex"] = user_name_regex;
    }

    if(auth_username != nullptr)
    {
        children["auth-username"] = auth_username;
    }

    if(auth_username_regex != nullptr)
    {
        children["auth-username-regex"] = auth_username_regex;
    }

    if(unauth_username != nullptr)
    {
        children["unauth-username"] = unauth_username;
    }

    if(unauth_username_regex != nullptr)
    {
        children["unauth-username-regex"] = unauth_username_regex;
    }

    if(auth_domain != nullptr)
    {
        children["auth-domain"] = auth_domain;
    }

    if(auth_domain_regex != nullptr)
    {
        children["auth-domain-regex"] = auth_domain_regex;
    }

    if(unauth_domain != nullptr)
    {
        children["unauth-domain"] = unauth_domain;
    }

    if(unauth_domain_regex != nullptr)
    {
        children["unauth-domain-regex"] = unauth_domain_regex;
    }

    if(vendor_id != nullptr)
    {
        children["vendor-id"] = vendor_id;
    }

    if(vendor_id_regex != nullptr)
    {
        children["vendor-id-regex"] = vendor_id_regex;
    }

    if(access_interface != nullptr)
    {
        children["access-interface"] = access_interface;
    }

    if(input_interface != nullptr)
    {
        children["input-interface"] = input_interface;
    }

    if(input_intfhdl != nullptr)
    {
        children["input-intfhdl"] = input_intfhdl;
    }

    if(ethertype != nullptr)
    {
        children["ethertype"] = ethertype;
    }

    if(flow_key_data != nullptr)
    {
        children["flow-key-data"] = flow_key_data;
    }

    if(dhcp_client_id != nullptr)
    {
        children["dhcp-client-id"] = dhcp_client_id;
    }

    if(dhcp_client_id_regex != nullptr)
    {
        children["dhcp-client-id-regex"] = dhcp_client_id_regex;
    }

    if(circuit_id != nullptr)
    {
        children["circuit-id"] = circuit_id;
    }

    if(circuit_id_regex != nullptr)
    {
        children["circuit-id-regex"] = circuit_id_regex;
    }

    if(remote_id != nullptr)
    {
        children["remote-id"] = remote_id;
    }

    if(remote_id_regex != nullptr)
    {
        children["remote-id-regex"] = remote_id_regex;
    }

    if(src_port != nullptr)
    {
        children["src-port"] = src_port;
    }

    if(dst_port != nullptr)
    {
        children["dst-port"] = dst_port;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-top-eos")
    {
        mpls_top_eos = value;
        mpls_top_eos.value_namespace = name_space;
        mpls_top_eos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-type")
    {
        fragment_type = value;
        fragment_type.value_namespace = name_space;
        fragment_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-status")
    {
        authen_status = value;
        authen_status.value_namespace = name_space;
        authen_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlp-negotiated")
    {
        mlp_negotiated = value;
        mlp_negotiated.value_namespace = name_space;
        mlp_negotiated.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mpls-top-eos")
    {
        mpls_top_eos.yfilter = yfilter;
    }
    if(value_path == "fragment-type")
    {
        fragment_type.yfilter = yfilter;
    }
    if(value_path == "authen-status")
    {
        authen_status.yfilter = yfilter;
    }
    if(value_path == "mlp-negotiated")
    {
        mlp_negotiated.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-dscp" || name == "ipv6-dscp" || name == "dscp" || name == "ipv4-prec" || name == "ipv6-prec" || name == "prec" || name == "discard-class" || name == "qos-group" || name == "traffic-class" || name == "proto" || name == "icmp-v4" || name == "icmp-v6" || name == "ipv4-packet-len" || name == "ipv6-packet-len" || name == "packet-len" || name == "flow-tag" || name == "tcp-flag" || name == "icmpv4-type" || name == "icmpv4-code" || name == "icmpv6-type" || name == "icmpv6-code" || name == "mpls-exp" || name == "mpls-exp-imp" || name == "mpls-disp-ipv4-acl" || name == "mpls-disp-ipv6-acl" || name == "mpls-top-label" || name == "cos" || name == "cos-inr" || name == "dei" || name == "dei-inr" || name == "vlan" || name == "vlan-inr" || name == "fr-dlci" || name == "src-mac" || name == "dst-mac" || name == "atm-clp" || name == "fr-de" || name == "ipv4-acl" || name == "ipv6-acl" || name == "ether-service-acl" || name == "avail-id" || name == "media-type" || name == "subs-protocol" || name == "dnis" || name == "dnis-regex" || name == "domain" || name == "domain-regex" || name == "nas-port" || name == "service-name" || name == "service-name-regex" || name == "src-addr-ipv4" || name == "dst-addr-ipv4" || name == "src-addr-ipv6" || name == "dst-addr-ipv6" || name == "src-addr-mac" || name == "timer" || name == "timer-regexp" || name == "tunnel-name" || name == "tunnel-name-regex" || name == "user-name" || name == "user-name-regex" || name == "auth-username" || name == "auth-username-regex" || name == "unauth-username" || name == "unauth-username-regex" || name == "auth-domain" || name == "auth-domain-regex" || name == "unauth-domain" || name == "unauth-domain-regex" || name == "vendor-id" || name == "vendor-id-regex" || name == "access-interface" || name == "input-interface" || name == "input-intfhdl" || name == "ethertype" || name == "flow-key-data" || name == "dhcp-client-id" || name == "dhcp-client-id-regex" || name == "circuit-id" || name == "circuit-id-regex" || name == "remote-id" || name == "remote-id-regex" || name == "src-port" || name == "dst-port" || name == "type" || name == "mpls-top-eos" || name == "fragment-type" || name == "authen-status" || name == "mlp-negotiated")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Ipv4Dscp()
{

    yang_name = "ipv4-dscp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::~Ipv4Dscp()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "ipv4-dscp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Ipv6Dscp()
{

    yang_name = "ipv6-dscp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::~Ipv6Dscp()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "ipv6-dscp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Dscp()
{

    yang_name = "dscp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::~Dscp()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "dscp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::Ipv4Prec()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "ipv4-prec"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::~Ipv4Prec()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-prec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::Ipv6Prec()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "ipv6-prec"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::~Ipv6Prec()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::Prec()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "prec"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::~Prec()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::DiscardClass()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "discard-class"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::~DiscardClass()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::QosGroup()
{

    yang_name = "qos-group"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::~QosGroup()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "qos-group"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::TrafficClass()
{

    yang_name = "traffic-class"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::~TrafficClass()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "traffic-class"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Proto()
{

    yang_name = "proto"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::~Proto()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "proto"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::IcmpV4()
    :
    type{YType::uint8, "type"},
    code{YType::uint8, "code"}
{

    yang_name = "icmp-v4"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::~IcmpV4()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_data() const
{
    return type.is_set
	|| code.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(code.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "code")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::IcmpV6()
    :
    type{YType::uint8, "type"},
    code{YType::uint8, "code"}
{

    yang_name = "icmp-v6"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::~IcmpV6()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_data() const
{
    return type.is_set
	|| code.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(code.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "code")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Ipv4PacketLen()
{

    yang_name = "ipv4-packet-len"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::~Ipv4PacketLen()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-packet-len";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "ipv4-packet-len"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Ipv6PacketLen()
{

    yang_name = "ipv6-packet-len"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::~Ipv6PacketLen()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-packet-len";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "ipv6-packet-len"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::PacketLen()
{

    yang_name = "packet-len"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::~PacketLen()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-len";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "packet-len"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::FlowTag()
{

    yang_name = "flow-tag"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::~FlowTag()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "flow-tag"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::TcpFlag()
    :
    value_{YType::uint16, "value"},
    match_any{YType::boolean, "match-any"}
{

    yang_name = "tcp-flag"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::~TcpFlag()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::has_data() const
{
    return value_.is_set
	|| match_any.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(match_any.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (match_any.is_set || is_set(match_any.yfilter)) leaf_name_data.push_back(match_any.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-any")
    {
        match_any = value;
        match_any.value_namespace = name_space;
        match_any.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "match-any")
    {
        match_any.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "match-any")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Icmpv4Type()
{

    yang_name = "icmpv4-type"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::~Icmpv4Type()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv4-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv4-type"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Icmpv4Code()
{

    yang_name = "icmpv4-code"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::~Icmpv4Code()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv4-code";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv4-code"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Icmpv6Type()
{

    yang_name = "icmpv6-type"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::~Icmpv6Type()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv6-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv6-type"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Icmpv6Code()
{

    yang_name = "icmpv6-code"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::~Icmpv6Code()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv6-code";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::Uint8RngArray()
    :
    min{YType::uint8, "min"},
    max{YType::uint8, "max"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv6-code"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::MplsExp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "mpls-exp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::~MplsExp()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::MplsExpImp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "mpls-exp-imp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::~MplsExpImp()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp-imp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::MplsDispIpv4Acl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "mpls-disp-ipv4-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::~MplsDispIpv4Acl()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-disp-ipv4-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::MplsDispIpv6Acl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "mpls-disp-ipv6-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::~MplsDispIpv6Acl()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-disp-ipv6-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::MplsTopLabel()
{

    yang_name = "mpls-top-label"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::~MplsTopLabel()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::has_data() const
{
    for (std::size_t index=0; index<uint32_rng_array.size(); index++)
    {
        if(uint32_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::has_operation() const
{
    for (std::size_t index=0; index<uint32_rng_array.size(); index++)
    {
        if(uint32_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-top-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint32_rng_array")
    {
        for(auto const & c : uint32_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray>();
        c->parent = this;
        uint32_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint32_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint32_rng_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::Uint32RngArray()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "uint32_rng_array"; yang_parent_name = "mpls-top-label"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::~Uint32RngArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::Cos()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "cos"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::~Cos()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::CosInr()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "cos-inr"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::~CosInr()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-inr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::Dei()
    :
    bit_value{YType::uint32, "bit-value"}
{

    yang_name = "dei"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::~Dei()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::has_data() const
{
    return bit_value.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_value.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dei";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_value.is_set || is_set(bit_value.yfilter)) leaf_name_data.push_back(bit_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-value")
    {
        bit_value = value;
        bit_value.value_namespace = name_space;
        bit_value.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-value")
    {
        bit_value.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-value")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::DeiInr()
    :
    bit_value{YType::uint32, "bit-value"}
{

    yang_name = "dei-inr"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::~DeiInr()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::has_data() const
{
    return bit_value.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_value.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dei-inr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_value.is_set || is_set(bit_value.yfilter)) leaf_name_data.push_back(bit_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-value")
    {
        bit_value = value;
        bit_value.value_namespace = name_space;
        bit_value.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-value")
    {
        bit_value.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-value")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::Vlan()
{

    yang_name = "vlan"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::~Vlan()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::has_data() const
{
    for (std::size_t index=0; index<vlan_id_array.size(); index++)
    {
        if(vlan_id_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::has_operation() const
{
    for (std::size_t index=0; index<vlan_id_array.size(); index++)
    {
        if(vlan_id_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-id-array")
    {
        for(auto const & c : vlan_id_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray>();
        c->parent = this;
        vlan_id_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan_id_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id-array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::VlanIdArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"},
    mask{YType::uint16, "mask"}
{

    yang_name = "vlan-id-array"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::~VlanIdArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::has_data() const
{
    return min.is_set
	|| max.is_set
	|| mask.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max" || name == "mask")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::VlanInr()
{

    yang_name = "vlan-inr"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::~VlanInr()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-inr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "vlan-inr"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::FrDlci()
{

    yang_name = "fr-dlci"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::~FrDlci()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-dlci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::Uint16RngArray()
    :
    min{YType::uint16, "min"},
    max{YType::uint16, "max"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "fr-dlci"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::SrcMac()
    :
    mac_addr{YType::uint16, "mac-addr"},
    mask{YType::uint16, "mask"}
{

    yang_name = "src-mac"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::~SrcMac()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::has_data() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::has_operation() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_addr_name_datas = mac_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_addr_name_datas.begin(), mac_addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-addr")
    {
        mac_addr.append(value);
    }
    if(value_path == "mask")
    {
        mask.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-addr" || name == "mask")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::DstMac()
    :
    mac_addr{YType::uint16, "mac-addr"},
    mask{YType::uint16, "mask"}
{

    yang_name = "dst-mac"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::~DstMac()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::has_data() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::has_operation() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_addr_name_datas = mac_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_addr_name_datas.begin(), mac_addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-addr")
    {
        mac_addr.append(value);
    }
    if(value_path == "mask")
    {
        mask.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-addr" || name == "mask")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::AtmClp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "atm-clp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::~AtmClp()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm-clp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::FrDe()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "fr-de"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::~FrDe()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-de";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::Ipv4Acl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "ipv4-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::~Ipv4Acl()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::Ipv6Acl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "ipv6-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::~Ipv6Acl()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::EtherServiceAcl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "ether-service-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::~EtherServiceAcl()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-service-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::AvailId()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "avail-id"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::~AvailId()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avail-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::MediaType()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "media-type"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::~MediaType()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::SubsProtocol()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "subs-protocol"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::~SubsProtocol()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subs-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::Dnis()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "dnis"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::~Dnis()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::DnisRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "dnis-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::~DnisRegex()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnis-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::Domain()
{

    yang_name = "domain"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::~Domain()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::has_data() const
{
    for (std::size_t index=0; index<domain_array.size(); index++)
    {
        if(domain_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::has_operation() const
{
    for (std::size_t index=0; index<domain_array.size(); index++)
    {
        if(domain_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-array")
    {
        for(auto const & c : domain_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray>();
        c->parent = this;
        domain_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : domain_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::DomainArray()
    :
    domain_name{YType::str, "domain-name"},
    format_name{YType::str, "format-name"}
{

    yang_name = "domain-array"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::~DomainArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::has_data() const
{
    return domain_name.is_set
	|| format_name.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(format_name.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.yfilter)) leaf_name_data.push_back(format_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-name")
    {
        format_name = value;
        format_name.value_namespace = name_space;
        format_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "format-name")
    {
        format_name.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name" || name == "format-name")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainRegex()
{

    yang_name = "domain-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::~DomainRegex()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::has_data() const
{
    for (std::size_t index=0; index<domain_array.size(); index++)
    {
        if(domain_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::has_operation() const
{
    for (std::size_t index=0; index<domain_array.size(); index++)
    {
        if(domain_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-array")
    {
        for(auto const & c : domain_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray>();
        c->parent = this;
        domain_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : domain_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::DomainArray()
    :
    domain_name{YType::str, "domain-name"},
    format_name{YType::str, "format-name"}
{

    yang_name = "domain-array"; yang_parent_name = "domain-regex"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::~DomainArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::has_data() const
{
    return domain_name.is_set
	|| format_name.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(format_name.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.yfilter)) leaf_name_data.push_back(format_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-name")
    {
        format_name = value;
        format_name.value_namespace = name_space;
        format_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "format-name")
    {
        format_name.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name" || name == "format-name")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPort()
{

    yang_name = "nas-port"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::~NasPort()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::has_data() const
{
    for (std::size_t index=0; index<nas_port_array.size(); index++)
    {
        if(nas_port_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::has_operation() const
{
    for (std::size_t index=0; index<nas_port_array.size(); index++)
    {
        if(nas_port_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nas-port-array")
    {
        for(auto const & c : nas_port_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray>();
        c->parent = this;
        nas_port_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nas_port_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nas-port-array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::NasPortArray()
    :
    sub_id{YType::enumeration, "sub-id"},
    operator_{YType::enumeration, "operator"},
    value_{YType::uint32, "value"}
{

    yang_name = "nas-port-array"; yang_parent_name = "nas-port"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::~NasPortArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::has_data() const
{
    return sub_id.is_set
	|| operator_.is_set
	|| value_.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_id.yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-port-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_id.is_set || is_set(sub_id.yfilter)) leaf_name_data.push_back(sub_id.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-id")
    {
        sub_id = value;
        sub_id.value_namespace = name_space;
        sub_id.value_namespace_prefix = name_space_prefix;
    }
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
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-id")
    {
        sub_id.yfilter = yfilter;
    }
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-id" || name == "operator" || name == "value")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::ServiceName()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "service-name"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::~ServiceName()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::ServiceNameRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "service-name-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::~ServiceNameRegex()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::SrcAddrIpv4()
{

    yang_name = "src-addr-ipv4"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::~SrcAddrIpv4()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::has_data() const
{
    for (std::size_t index=0; index<ipv4_addr_array.size(); index++)
    {
        if(ipv4_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addr_array.size(); index++)
    {
        if(ipv4_addr_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-addr-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addr-array")
    {
        for(auto const & c : ipv4_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray>();
        c->parent = this;
        ipv4_addr_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_addr_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr-array")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::Ipv4AddrArray()
    :
    prefix{YType::str, "prefix"},
    mask{YType::str, "mask"}
{

    yang_name = "ipv4-addr-array"; yang_parent_name = "src-addr-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::~Ipv4AddrArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::has_data() const
{
    return prefix.is_set
	|| mask.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addr-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "mask")
        return true;
    return false;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::DstAddrIpv4()
{

    yang_name = "dst-addr-ipv4"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::~DstAddrIpv4()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::has_data() const
{
    for (std::size_t index=0; index<ipv4_addr_array.size(); index++)
    {
        if(ipv4_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addr_array.size(); index++)
    {
        if(ipv4_addr_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-addr-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addr-array")
    {
        for(auto const & c : ipv4_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray>();
        c->parent = this;
        ipv4_addr_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_addr_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr-array")
        return true;
    return false;
}


}
}

