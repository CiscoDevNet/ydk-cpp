
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_45.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_68.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_46.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_policymgr_oper {

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::Pfc()
    :
    buffer_size_flag{YType::uint32, "buffer-size-flag"},
    pfc_pause_set{YType::uint32, "pfc-pause-set"}
    	,
    buffer_size(std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize>())
	,pause_threshold(std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold>())
	,resume_threshold(std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold>())
{
    buffer_size->parent = this;
    children["buffer-size"] = buffer_size;

    pause_threshold->parent = this;
    children["pause-threshold"] = pause_threshold;

    resume_threshold->parent = this;
    children["resume-threshold"] = resume_threshold;

    yang_name = "pfc"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::~Pfc()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::has_data() const
{
    return buffer_size_flag.is_set
	|| pfc_pause_set.is_set
	|| (buffer_size !=  nullptr && buffer_size->has_data())
	|| (pause_threshold !=  nullptr && pause_threshold->has_data())
	|| (resume_threshold !=  nullptr && resume_threshold->has_data());
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::has_operation() const
{
    return is_set(operation)
	|| is_set(buffer_size_flag.operation)
	|| is_set(pfc_pause_set.operation)
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

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pfc' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer_size_flag.is_set || is_set(buffer_size_flag.operation)) leaf_name_data.push_back(buffer_size_flag.get_name_leafdata());
    if (pfc_pause_set.is_set || is_set(pfc_pause_set.operation)) leaf_name_data.push_back(pfc_pause_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "buffer-size")
    {
        if(buffer_size != nullptr)
        {
            children["buffer-size"] = buffer_size;
        }
        else
        {
            buffer_size = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize>();
            buffer_size->parent = this;
            children["buffer-size"] = buffer_size;
        }
        return children.at("buffer-size");
    }

    if(child_yang_name == "pause-threshold")
    {
        if(pause_threshold != nullptr)
        {
            children["pause-threshold"] = pause_threshold;
        }
        else
        {
            pause_threshold = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold>();
            pause_threshold->parent = this;
            children["pause-threshold"] = pause_threshold;
        }
        return children.at("pause-threshold");
    }

    if(child_yang_name == "resume-threshold")
    {
        if(resume_threshold != nullptr)
        {
            children["resume-threshold"] = resume_threshold;
        }
        else
        {
            resume_threshold = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold>();
            resume_threshold->parent = this;
            children["resume-threshold"] = resume_threshold;
        }
        return children.at("resume-threshold");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_children()
{
    if(children.find("buffer-size") == children.end())
    {
        if(buffer_size != nullptr)
        {
            children["buffer-size"] = buffer_size;
        }
    }

    if(children.find("pause-threshold") == children.end())
    {
        if(pause_threshold != nullptr)
        {
            children["pause-threshold"] = pause_threshold;
        }
    }

    if(children.find("resume-threshold") == children.end())
    {
        if(resume_threshold != nullptr)
        {
            children["resume-threshold"] = resume_threshold;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buffer-size-flag")
    {
        buffer_size_flag = value;
    }
    if(value_path == "pfc-pause-set")
    {
        pfc_pause_set = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::BufferSize()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "buffer-size"; yang_parent_name = "pfc";
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::~BufferSize()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-size";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BufferSize' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::PauseThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "pause-threshold"; yang_parent_name = "pfc";
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::~PauseThreshold()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause-threshold";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PauseThreshold' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::ResumeThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "resume-threshold"; yang_parent_name = "pfc";
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::~ResumeThreshold()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resume-threshold";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResumeThreshold' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::FlowParm()
    :
    flow_timeout{YType::uint32, "flow-timeout"},
    intvl_hist{YType::uint32, "intvl-hist"},
    max_mon_flows{YType::uint32, "max-mon-flows"},
    mon_interval{YType::uint32, "mon-interval"}
{
    yang_name = "flow-parm"; yang_parent_name = "actp";
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::~FlowParm()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::has_data() const
{
    return flow_timeout.is_set
	|| intvl_hist.is_set
	|| max_mon_flows.is_set
	|| mon_interval.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_timeout.operation)
	|| is_set(intvl_hist.operation)
	|| is_set(max_mon_flows.operation)
	|| is_set(mon_interval.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-parm";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowParm' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_timeout.is_set || is_set(flow_timeout.operation)) leaf_name_data.push_back(flow_timeout.get_name_leafdata());
    if (intvl_hist.is_set || is_set(intvl_hist.operation)) leaf_name_data.push_back(intvl_hist.get_name_leafdata());
    if (max_mon_flows.is_set || is_set(max_mon_flows.operation)) leaf_name_data.push_back(max_mon_flows.get_name_leafdata());
    if (mon_interval.is_set || is_set(mon_interval.operation)) leaf_name_data.push_back(mon_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-timeout")
    {
        flow_timeout = value;
    }
    if(value_path == "intvl-hist")
    {
        intvl_hist = value;
    }
    if(value_path == "max-mon-flows")
    {
        max_mon_flows = value;
    }
    if(value_path == "mon-interval")
    {
        mon_interval = value;
    }
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
    children["ip-bit-rate"] = ip_bit_rate;

    media_bit_rate->parent = this;
    children["media-bit-rate"] = media_bit_rate;

    yang_name = "ipcbr"; yang_parent_name = "actp";
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
    return is_set(operation)
	|| is_set(action_metric_type.operation)
	|| is_set(ip_pkt_rate.operation)
	|| is_set(media_pkt_size.operation)
	|| is_set(media_pkts_per_ip.operation)
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_operation())
	|| (media_bit_rate !=  nullptr && media_bit_rate->has_operation());
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcbr";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipcbr' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.operation)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (ip_pkt_rate.is_set || is_set(ip_pkt_rate.operation)) leaf_name_data.push_back(ip_pkt_rate.get_name_leafdata());
    if (media_pkt_size.is_set || is_set(media_pkt_size.operation)) leaf_name_data.push_back(media_pkt_size.get_name_leafdata());
    if (media_pkts_per_ip.is_set || is_set(media_pkts_per_ip.operation)) leaf_name_data.push_back(media_pkts_per_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-bit-rate")
    {
        if(ip_bit_rate != nullptr)
        {
            children["ip-bit-rate"] = ip_bit_rate;
        }
        else
        {
            ip_bit_rate = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate>();
            ip_bit_rate->parent = this;
            children["ip-bit-rate"] = ip_bit_rate;
        }
        return children.at("ip-bit-rate");
    }

    if(child_yang_name == "media-bit-rate")
    {
        if(media_bit_rate != nullptr)
        {
            children["media-bit-rate"] = media_bit_rate;
        }
        else
        {
            media_bit_rate = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate>();
            media_bit_rate->parent = this;
            children["media-bit-rate"] = media_bit_rate;
        }
        return children.at("media-bit-rate");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_children()
{
    if(children.find("ip-bit-rate") == children.end())
    {
        if(ip_bit_rate != nullptr)
        {
            children["ip-bit-rate"] = ip_bit_rate;
        }
    }

    if(children.find("media-bit-rate") == children.end())
    {
        if(media_bit_rate != nullptr)
        {
            children["media-bit-rate"] = media_bit_rate;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate = value;
    }
    if(value_path == "media-pkt-size")
    {
        media_pkt_size = value;
    }
    if(value_path == "media-pkts-per-ip")
    {
        media_pkts_per_ip = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::IpBitRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "ip-bit-rate"; yang_parent_name = "ipcbr";
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::~IpBitRate()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-bit-rate";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpBitRate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::MediaBitRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "media-bit-rate"; yang_parent_name = "ipcbr";
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::~MediaBitRate()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-bit-rate";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MediaBitRate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::Rtp()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    max_dropout{YType::uint32, "max-dropout"},
    max_misorder{YType::uint32, "max-misorder"},
    min_sequential{YType::uint32, "min-sequential"},
    seq_ext_cop4{YType::uint32, "seq-ext-cop4"}
{
    yang_name = "rtp"; yang_parent_name = "actp";
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
	|| max_dropout.is_set
	|| max_misorder.is_set
	|| min_sequential.is_set
	|| seq_ext_cop4.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::has_operation() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_metric_type.operation)
	|| is_set(max_dropout.operation)
	|| is_set(max_misorder.operation)
	|| is_set(min_sequential.operation)
	|| is_set(seq_ext_cop4.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rtp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.operation)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (max_dropout.is_set || is_set(max_dropout.operation)) leaf_name_data.push_back(max_dropout.get_name_leafdata());
    if (max_misorder.is_set || is_set(max_misorder.operation)) leaf_name_data.push_back(max_misorder.get_name_leafdata());
    if (min_sequential.is_set || is_set(min_sequential.operation)) leaf_name_data.push_back(min_sequential.get_name_leafdata());
    if (seq_ext_cop4.is_set || is_set(seq_ext_cop4.operation)) leaf_name_data.push_back(seq_ext_cop4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "clock-rate")
    {
        for(auto const & c : clock_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate>();
        c->parent = this;
        clock_rate.push_back(std::move(c));
        children[segment_path] = clock_rate.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::get_children()
{
    for (auto const & c : clock_rate)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
    }
    if(value_path == "max-dropout")
    {
        max_dropout = value;
    }
    if(value_path == "max-misorder")
    {
        max_misorder = value;
    }
    if(value_path == "min-sequential")
    {
        min_sequential = value;
    }
    if(value_path == "seq-ext-cop4")
    {
        seq_ext_cop4 = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::ClockRate()
    :
    frequency{YType::uint32, "frequency"},
    pt{YType::uint32, "pt"}
{
    yang_name = "clock-rate"; yang_parent_name = "rtp";
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::~ClockRate()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::has_data() const
{
    return frequency.is_set
	|| pt.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::has_operation() const
{
    return is_set(operation)
	|| is_set(frequency.operation)
	|| is_set(pt.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-rate";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClockRate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (pt.is_set || is_set(pt.operation)) leaf_name_data.push_back(pt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frequency")
    {
        frequency = value;
    }
    if(value_path == "pt")
    {
        pt = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::RtpMmr()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    max_dropout{YType::uint32, "max-dropout"},
    max_misorder{YType::uint32, "max-misorder"},
    min_sequential{YType::uint32, "min-sequential"},
    seq_ext_cop4{YType::uint32, "seq-ext-cop4"}
{
    yang_name = "rtp-mmr"; yang_parent_name = "actp";
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
	|| max_dropout.is_set
	|| max_misorder.is_set
	|| min_sequential.is_set
	|| seq_ext_cop4.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::has_operation() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_metric_type.operation)
	|| is_set(max_dropout.operation)
	|| is_set(max_misorder.operation)
	|| is_set(min_sequential.operation)
	|| is_set(seq_ext_cop4.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp-mmr";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtpMmr' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.operation)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (max_dropout.is_set || is_set(max_dropout.operation)) leaf_name_data.push_back(max_dropout.get_name_leafdata());
    if (max_misorder.is_set || is_set(max_misorder.operation)) leaf_name_data.push_back(max_misorder.get_name_leafdata());
    if (min_sequential.is_set || is_set(min_sequential.operation)) leaf_name_data.push_back(min_sequential.get_name_leafdata());
    if (seq_ext_cop4.is_set || is_set(seq_ext_cop4.operation)) leaf_name_data.push_back(seq_ext_cop4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "clock-rate")
    {
        for(auto const & c : clock_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate>();
        c->parent = this;
        clock_rate.push_back(std::move(c));
        children[segment_path] = clock_rate.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::get_children()
{
    for (auto const & c : clock_rate)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
    }
    if(value_path == "max-dropout")
    {
        max_dropout = value;
    }
    if(value_path == "max-misorder")
    {
        max_misorder = value;
    }
    if(value_path == "min-sequential")
    {
        min_sequential = value;
    }
    if(value_path == "seq-ext-cop4")
    {
        seq_ext_cop4 = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::ClockRate()
    :
    frequency{YType::uint32, "frequency"},
    pt{YType::uint32, "pt"}
{
    yang_name = "clock-rate"; yang_parent_name = "rtp-mmr";
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::~ClockRate()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::has_data() const
{
    return frequency.is_set
	|| pt.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::has_operation() const
{
    return is_set(operation)
	|| is_set(frequency.operation)
	|| is_set(pt.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-rate";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClockRate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (pt.is_set || is_set(pt.operation)) leaf_name_data.push_back(pt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frequency")
    {
        frequency = value;
    }
    if(value_path == "pt")
    {
        pt = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::RtpJ2K()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    max_dropout{YType::uint32, "max-dropout"},
    max_misorder{YType::uint32, "max-misorder"},
    min_sequential{YType::uint32, "min-sequential"},
    seq_ext_cop4{YType::uint32, "seq-ext-cop4"}
{
    yang_name = "rtp-j2k"; yang_parent_name = "actp";
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
	|| max_dropout.is_set
	|| max_misorder.is_set
	|| min_sequential.is_set
	|| seq_ext_cop4.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::has_operation() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_metric_type.operation)
	|| is_set(max_dropout.operation)
	|| is_set(max_misorder.operation)
	|| is_set(min_sequential.operation)
	|| is_set(seq_ext_cop4.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp-j2k";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtpJ2K' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.operation)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (max_dropout.is_set || is_set(max_dropout.operation)) leaf_name_data.push_back(max_dropout.get_name_leafdata());
    if (max_misorder.is_set || is_set(max_misorder.operation)) leaf_name_data.push_back(max_misorder.get_name_leafdata());
    if (min_sequential.is_set || is_set(min_sequential.operation)) leaf_name_data.push_back(min_sequential.get_name_leafdata());
    if (seq_ext_cop4.is_set || is_set(seq_ext_cop4.operation)) leaf_name_data.push_back(seq_ext_cop4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "clock-rate")
    {
        for(auto const & c : clock_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate>();
        c->parent = this;
        clock_rate.push_back(std::move(c));
        children[segment_path] = clock_rate.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::get_children()
{
    for (auto const & c : clock_rate)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
    }
    if(value_path == "max-dropout")
    {
        max_dropout = value;
    }
    if(value_path == "max-misorder")
    {
        max_misorder = value;
    }
    if(value_path == "min-sequential")
    {
        min_sequential = value;
    }
    if(value_path == "seq-ext-cop4")
    {
        seq_ext_cop4 = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::ClockRate()
    :
    frequency{YType::uint32, "frequency"},
    pt{YType::uint32, "pt"}
{
    yang_name = "clock-rate"; yang_parent_name = "rtp-j2k";
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::~ClockRate()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::has_data() const
{
    return frequency.is_set
	|| pt.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::has_operation() const
{
    return is_set(operation)
	|| is_set(frequency.operation)
	|| is_set(pt.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-rate";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClockRate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (pt.is_set || is_set(pt.operation)) leaf_name_data.push_back(pt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frequency")
    {
        frequency = value;
    }
    if(value_path == "pt")
    {
        pt = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::RtpVoice()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    max_dropout{YType::uint32, "max-dropout"},
    max_misorder{YType::uint32, "max-misorder"},
    min_sequential{YType::uint32, "min-sequential"},
    seq_ext_cop4{YType::uint32, "seq-ext-cop4"}
{
    yang_name = "rtp-voice"; yang_parent_name = "actp";
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
	|| max_dropout.is_set
	|| max_misorder.is_set
	|| min_sequential.is_set
	|| seq_ext_cop4.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::has_operation() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_metric_type.operation)
	|| is_set(max_dropout.operation)
	|| is_set(max_misorder.operation)
	|| is_set(min_sequential.operation)
	|| is_set(seq_ext_cop4.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp-voice";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtpVoice' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.operation)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (max_dropout.is_set || is_set(max_dropout.operation)) leaf_name_data.push_back(max_dropout.get_name_leafdata());
    if (max_misorder.is_set || is_set(max_misorder.operation)) leaf_name_data.push_back(max_misorder.get_name_leafdata());
    if (min_sequential.is_set || is_set(min_sequential.operation)) leaf_name_data.push_back(min_sequential.get_name_leafdata());
    if (seq_ext_cop4.is_set || is_set(seq_ext_cop4.operation)) leaf_name_data.push_back(seq_ext_cop4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "clock-rate")
    {
        for(auto const & c : clock_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate>();
        c->parent = this;
        clock_rate.push_back(std::move(c));
        children[segment_path] = clock_rate.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::get_children()
{
    for (auto const & c : clock_rate)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
    }
    if(value_path == "max-dropout")
    {
        max_dropout = value;
    }
    if(value_path == "max-misorder")
    {
        max_misorder = value;
    }
    if(value_path == "min-sequential")
    {
        min_sequential = value;
    }
    if(value_path == "seq-ext-cop4")
    {
        seq_ext_cop4 = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::ClockRate()
    :
    frequency{YType::uint32, "frequency"},
    pt{YType::uint32, "pt"}
{
    yang_name = "clock-rate"; yang_parent_name = "rtp-voice";
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::~ClockRate()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::has_data() const
{
    return frequency.is_set
	|| pt.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::has_operation() const
{
    return is_set(operation)
	|| is_set(frequency.operation)
	|| is_set(pt.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-rate";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClockRate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (pt.is_set || is_set(pt.operation)) leaf_name_data.push_back(pt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frequency")
    {
        frequency = value;
    }
    if(value_path == "pt")
    {
        pt = value;
    }
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
    children["ip-bit-rate"] = ip_bit_rate;

    yang_name = "mdi"; yang_parent_name = "actp";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(action_metric_type.operation)
	|| is_set(filtered_pkt_rate.operation)
	|| is_set(ip_pkt_rate.operation)
	|| is_set(pids.operation)
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_operation());
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdi";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mdi' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.operation)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (filtered_pkt_rate.is_set || is_set(filtered_pkt_rate.operation)) leaf_name_data.push_back(filtered_pkt_rate.get_name_leafdata());
    if (ip_pkt_rate.is_set || is_set(ip_pkt_rate.operation)) leaf_name_data.push_back(ip_pkt_rate.get_name_leafdata());

    auto pids_name_datas = pids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pids_name_datas.begin(), pids_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-bit-rate")
    {
        if(ip_bit_rate != nullptr)
        {
            children["ip-bit-rate"] = ip_bit_rate;
        }
        else
        {
            ip_bit_rate = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate>();
            ip_bit_rate->parent = this;
            children["ip-bit-rate"] = ip_bit_rate;
        }
        return children.at("ip-bit-rate");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_children()
{
    if(children.find("ip-bit-rate") == children.end())
    {
        if(ip_bit_rate != nullptr)
        {
            children["ip-bit-rate"] = ip_bit_rate;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
    }
    if(value_path == "filtered-pkt-rate")
    {
        filtered_pkt_rate = value;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate = value;
    }
    if(value_path == "pids")
    {
        pids.append(value);
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::IpBitRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "ip-bit-rate"; yang_parent_name = "mdi";
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::~IpBitRate()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-bit-rate";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpBitRate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
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
    children["ip-bit-rate"] = ip_bit_rate;

    yang_name = "mdi-rtp"; yang_parent_name = "actp";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(action_metric_type.operation)
	|| is_set(filtered_pkt_rate.operation)
	|| is_set(ip_pkt_rate.operation)
	|| is_set(pids.operation)
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_operation());
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdi-rtp";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MdiRtp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.operation)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (filtered_pkt_rate.is_set || is_set(filtered_pkt_rate.operation)) leaf_name_data.push_back(filtered_pkt_rate.get_name_leafdata());
    if (ip_pkt_rate.is_set || is_set(ip_pkt_rate.operation)) leaf_name_data.push_back(ip_pkt_rate.get_name_leafdata());

    auto pids_name_datas = pids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pids_name_datas.begin(), pids_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-bit-rate")
    {
        if(ip_bit_rate != nullptr)
        {
            children["ip-bit-rate"] = ip_bit_rate;
        }
        else
        {
            ip_bit_rate = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate>();
            ip_bit_rate->parent = this;
            children["ip-bit-rate"] = ip_bit_rate;
        }
        return children.at("ip-bit-rate");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_children()
{
    if(children.find("ip-bit-rate") == children.end())
    {
        if(ip_bit_rate != nullptr)
        {
            children["ip-bit-rate"] = ip_bit_rate;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
    }
    if(value_path == "filtered-pkt-rate")
    {
        filtered_pkt_rate = value;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate = value;
    }
    if(value_path == "pids")
    {
        pids.append(value);
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::IpBitRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "ip-bit-rate"; yang_parent_name = "mdi-rtp";
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::~IpBitRate()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-bit-rate";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpBitRate' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::Fmm()
    :
    fmm_name{YType::str, "fmm-name"}
{
    yang_name = "fmm"; yang_parent_name = "actp";
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
    return is_set(operation)
	|| is_set(fmm_name.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fmm";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fmm' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fmm_name.is_set || is_set(fmm_name.operation)) leaf_name_data.push_back(fmm_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fmm-name")
    {
        fmm_name = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::Pbf()
{
    yang_name = "pbf"; yang_parent_name = "actp";
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
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbf";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pbf' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "action-pbf-info-array")
    {
        for(auto const & c : action_pbf_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray>();
        c->parent = this;
        action_pbf_info_array.push_back(std::move(c));
        children[segment_path] = action_pbf_info_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_children()
{
    for (auto const & c : action_pbf_info_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::ActionPbfInfoArray()
    :
    addr{YType::str, "addr"},
    rt{YType::str, "rt"},
    rt_type{YType::uint8, "rt-type"},
    vrf{YType::str, "vrf"}
{
    yang_name = "action-pbf-info-array"; yang_parent_name = "pbf";
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::~ActionPbfInfoArray()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::has_data() const
{
    return addr.is_set
	|| rt.is_set
	|| rt_type.is_set
	|| vrf.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::has_operation() const
{
    return is_set(operation)
	|| is_set(addr.operation)
	|| is_set(rt.operation)
	|| is_set(rt_type.operation)
	|| is_set(vrf.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-pbf-info-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionPbfInfoArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.operation)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (rt.is_set || is_set(rt.operation)) leaf_name_data.push_back(rt.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr")
    {
        addr = value;
    }
    if(value_path == "rt")
    {
        rt = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::Ipv4Nh()
{
    yang_name = "ipv4-nh"; yang_parent_name = "actp";
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
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-nh";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Nh' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "action-ipv4-nh-info-array")
    {
        for(auto const & c : action_ipv4_nh_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray>();
        c->parent = this;
        action_ipv4_nh_info_array.push_back(std::move(c));
        children[segment_path] = action_ipv4_nh_info_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_children()
{
    for (auto const & c : action_ipv4_nh_info_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::ActionIpv4NhInfoArray()
    :
    nh_addr{YType::str, "nh-addr"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "action-ipv4-nh-info-array"; yang_parent_name = "ipv4-nh";
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
    return is_set(operation)
	|| is_set(nh_addr.operation)
	|| is_set(vrf_name.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-ipv4-nh-info-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionIpv4NhInfoArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_addr.is_set || is_set(nh_addr.operation)) leaf_name_data.push_back(nh_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nh-addr")
    {
        nh_addr = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::Ipv6Nh()
{
    yang_name = "ipv6-nh"; yang_parent_name = "actp";
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
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-nh";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Nh' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "action-ipv6-nh-info-array")
    {
        for(auto const & c : action_ipv6_nh_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray>();
        c->parent = this;
        action_ipv6_nh_info_array.push_back(std::move(c));
        children[segment_path] = action_ipv6_nh_info_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_children()
{
    for (auto const & c : action_ipv6_nh_info_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::ActionIpv6NhInfoArray()
    :
    nh_addr{YType::str, "nh-addr"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "action-ipv6-nh-info-array"; yang_parent_name = "ipv6-nh";
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
    return is_set(operation)
	|| is_set(nh_addr.operation)
	|| is_set(vrf_name.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-ipv6-nh-info-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionIpv6NhInfoArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_addr.is_set || is_set(nh_addr.operation)) leaf_name_data.push_back(nh_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMaps::PolicyMap_::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nh-addr")
    {
        nh_addr = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetails()
{
    yang_name = "policy-map-details"; yang_parent_name = "policy-map-type";
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
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-details";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMapDetails' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-map-detail")
    {
        for(auto const & c : policy_map_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail>();
        c->parent = this;
        policy_map_detail.push_back(std::move(c));
        children[segment_path] = policy_map_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::get_children()
{
    for (auto const & c : policy_map_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::PolicyMapDetail()
    :
    policy_map_name{YType::str, "policy-map-name"},
    object_type{YType::enumeration, "object-type"},
    total_objects{YType::uint32, "total-objects"},
    transient{YType::boolean, "transient"}
{
    yang_name = "policy-map-detail"; yang_parent_name = "policy-map-details";
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::~PolicyMapDetail()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::has_data() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return policy_map_name.is_set
	|| object_type.is_set
	|| total_objects.is_set
	|| transient.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::has_operation() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(policy_map_name.operation)
	|| is_set(object_type.operation)
	|| is_set(total_objects.operation)
	|| is_set(transient.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-detail" <<"[policy-map-name='" <<policy_map_name <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMapDetail' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());
    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (total_objects.is_set || is_set(total_objects.operation)) leaf_name_data.push_back(total_objects.get_name_leafdata());
    if (transient.is_set || is_set(transient.operation)) leaf_name_data.push_back(transient.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-map-reference")
    {
        for(auto const & c : class_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference>();
        c->parent = this;
        class_map_reference.push_back(std::move(c));
        children[segment_path] = class_map_reference.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object>();
        c->parent = this;
        object.push_back(std::move(c));
        children[segment_path] = object.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference>();
        c->parent = this;
        reference.push_back(std::move(c));
        children[segment_path] = reference.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::get_children()
{
    for (auto const & c : class_map_reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "total-objects")
    {
        total_objects = value;
    }
    if(value_path == "transient")
    {
        transient = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::Reference()
    :
    total_class_maps{YType::uint32, "total-class-maps"},
    total_flows{YType::uint32, "total-flows"},
    total_internal_reference_objects{YType::uint32, "total-internal-reference-objects"}
{
    yang_name = "reference"; yang_parent_name = "policy-map-detail";
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::~Reference()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::has_data() const
{
    return total_class_maps.is_set
	|| total_flows.is_set
	|| total_internal_reference_objects.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(total_class_maps.operation)
	|| is_set(total_flows.operation)
	|| is_set(total_internal_reference_objects.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_class_maps.is_set || is_set(total_class_maps.operation)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_flows.is_set || is_set(total_flows.operation)) leaf_name_data.push_back(total_flows.get_name_leafdata());
    if (total_internal_reference_objects.is_set || is_set(total_internal_reference_objects.operation)) leaf_name_data.push_back(total_internal_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
    }
    if(value_path == "total-flows")
    {
        total_flows = value;
    }
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::Object()
    :
    object_name{YType::str, "object-name"}
{
    yang_name = "object"; yang_parent_name = "policy-map-detail";
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::~Object()
{
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::has_data() const
{
    return object_name.is_set;
}

bool PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Object' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::Object::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::ClassMapReference()
    :
    total_reference_objects{YType::uint32, "total-reference-objects"}
{
    yang_name = "class-map-reference"; yang_parent_name = "policy-map-detail";
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
    return is_set(operation)
	|| is_set(total_reference_objects.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-reference";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMapReference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_reference_objects.is_set || is_set(total_reference_objects.operation)) leaf_name_data.push_back(total_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-map-reference")
    {
        for(auto const & c : policy_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference>();
        c->parent = this;
        policy_map_reference.push_back(std::move(c));
        children[segment_path] = policy_map_reference.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::get_children()
{
    for (auto const & c : policy_map_reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects = value;
    }
}

PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::PolicyMapReference()
    :
    object_type{YType::enumeration, "object-type"},
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "policy-map-reference"; yang_parent_name = "class-map-reference";
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
    return is_set(operation)
	|| is_set(object_type.operation)
	|| is_set(policy_map_name.operation);
}

std::string PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-reference";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMapReference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::PolicyMapTypes::PolicyMapType::PolicyMapDetails::PolicyMapDetail::ClassMapReference::PolicyMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapTypes()
{
    yang_name = "transient-policy-map-types"; yang_parent_name = "policy-map";
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
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transient-policy-map-types";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/policy-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "transient-policy-map-type")
    {
        for(auto const & c : transient_policy_map_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType>();
        c->parent = this;
        transient_policy_map_type.push_back(std::move(c));
        children[segment_path] = transient_policy_map_type.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::get_children()
{
    for (auto const & c : transient_policy_map_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientPolicyMapType()
    :
    type{YType::enumeration, "type"}
    	,
    transient_list_unuseds(std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds>())
{
    transient_list_unuseds->parent = this;
    children["transient-list-unuseds"] = transient_list_unuseds;

    yang_name = "transient-policy-map-type"; yang_parent_name = "transient-policy-map-types";
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
    return is_set(operation)
	|| is_set(type.operation)
	|| (transient_list_unuseds !=  nullptr && transient_list_unuseds->has_operation());
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transient-policy-map-type" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/policy-map/transient-policy-map-types/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "transient-list-unuseds")
    {
        if(transient_list_unuseds != nullptr)
        {
            children["transient-list-unuseds"] = transient_list_unuseds;
        }
        else
        {
            transient_list_unuseds = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds>();
            transient_list_unuseds->parent = this;
            children["transient-list-unuseds"] = transient_list_unuseds;
        }
        return children.at("transient-list-unuseds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::get_children()
{
    if(children.find("transient-list-unuseds") == children.end())
    {
        if(transient_list_unuseds != nullptr)
        {
            children["transient-list-unuseds"] = transient_list_unuseds;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnuseds()
{
    yang_name = "transient-list-unuseds"; yang_parent_name = "transient-policy-map-type";
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
    return is_set(operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transient-list-unuseds";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransientListUnuseds' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "transient-list-unused")
    {
        for(auto const & c : transient_list_unused)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused>();
        c->parent = this;
        transient_list_unused.push_back(std::move(c));
        children[segment_path] = transient_list_unused.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::get_children()
{
    for (auto const & c : transient_list_unused)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::TransientListUnused()
    :
    policy_map_name{YType::str, "policy-map-name"},
    object_type{YType::enumeration, "object-type"},
    total_objects{YType::uint32, "total-objects"},
    transient{YType::boolean, "transient"}
{
    yang_name = "transient-list-unused"; yang_parent_name = "transient-list-unuseds";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::~TransientListUnused()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::has_data() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return policy_map_name.is_set
	|| object_type.is_set
	|| total_objects.is_set
	|| transient.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::has_operation() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(policy_map_name.operation)
	|| is_set(object_type.operation)
	|| is_set(total_objects.operation)
	|| is_set(transient.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transient-list-unused" <<"[policy-map-name='" <<policy_map_name <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransientListUnused' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());
    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (total_objects.is_set || is_set(total_objects.operation)) leaf_name_data.push_back(total_objects.get_name_leafdata());
    if (transient.is_set || is_set(transient.operation)) leaf_name_data.push_back(transient.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-map-reference")
    {
        for(auto const & c : class_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference>();
        c->parent = this;
        class_map_reference.push_back(std::move(c));
        children[segment_path] = class_map_reference.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object>();
        c->parent = this;
        object.push_back(std::move(c));
        children[segment_path] = object.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference>();
        c->parent = this;
        reference.push_back(std::move(c));
        children[segment_path] = reference.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::get_children()
{
    for (auto const & c : class_map_reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "total-objects")
    {
        total_objects = value;
    }
    if(value_path == "transient")
    {
        transient = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::Reference()
    :
    total_class_maps{YType::uint32, "total-class-maps"},
    total_flows{YType::uint32, "total-flows"},
    total_internal_reference_objects{YType::uint32, "total-internal-reference-objects"}
{
    yang_name = "reference"; yang_parent_name = "transient-list-unused";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::~Reference()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::has_data() const
{
    return total_class_maps.is_set
	|| total_flows.is_set
	|| total_internal_reference_objects.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(total_class_maps.operation)
	|| is_set(total_flows.operation)
	|| is_set(total_internal_reference_objects.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_class_maps.is_set || is_set(total_class_maps.operation)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_flows.is_set || is_set(total_flows.operation)) leaf_name_data.push_back(total_flows.get_name_leafdata());
    if (total_internal_reference_objects.is_set || is_set(total_internal_reference_objects.operation)) leaf_name_data.push_back(total_internal_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
    }
    if(value_path == "total-flows")
    {
        total_flows = value;
    }
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::Object()
    :
    object_name{YType::str, "object-name"}
{
    yang_name = "object"; yang_parent_name = "transient-list-unused";
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::~Object()
{
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::has_data() const
{
    return object_name.is_set;
}

bool PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Object' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::Object::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::ClassMapReference()
    :
    total_reference_objects{YType::uint32, "total-reference-objects"}
{
    yang_name = "class-map-reference"; yang_parent_name = "transient-list-unused";
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
    return is_set(operation)
	|| is_set(total_reference_objects.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-reference";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMapReference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_reference_objects.is_set || is_set(total_reference_objects.operation)) leaf_name_data.push_back(total_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-map-reference")
    {
        for(auto const & c : policy_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference>();
        c->parent = this;
        policy_map_reference.push_back(std::move(c));
        children[segment_path] = policy_map_reference.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::get_children()
{
    for (auto const & c : policy_map_reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects = value;
    }
}

PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::PolicyMapReference()
    :
    object_type{YType::enumeration, "object-type"},
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "policy-map-reference"; yang_parent_name = "class-map-reference";
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
    return is_set(operation)
	|| is_set(object_type.operation)
	|| is_set(policy_map_name.operation);
}

std::string PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-reference";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMapReference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::get_children()
{
    return children;
}

void PolicyManager::Global::PolicyMap::TransientPolicyMapTypes::TransientPolicyMapType::TransientListUnuseds::TransientListUnused::ClassMapReference::PolicyMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

PolicyManager::Global::Summary::Summary()
    :
    total_class_map_types{YType::uint32, "total-class-map-types"},
    total_class_maps{YType::uint32, "total-class-maps"},
    total_policy_map_types{YType::uint32, "total-policy-map-types"},
    total_policy_maps{YType::uint32, "total-policy-maps"}
{
    yang_name = "summary"; yang_parent_name = "global";
}

PolicyManager::Global::Summary::~Summary()
{
}

bool PolicyManager::Global::Summary::has_data() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<policy_map.size(); index++)
    {
        if(policy_map[index]->has_data())
            return true;
    }
    return total_class_map_types.is_set
	|| total_class_maps.is_set
	|| total_policy_map_types.is_set
	|| total_policy_maps.is_set;
}

bool PolicyManager::Global::Summary::has_operation() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<policy_map.size(); index++)
    {
        if(policy_map[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(total_class_map_types.operation)
	|| is_set(total_class_maps.operation)
	|| is_set(total_policy_map_types.operation)
	|| is_set(total_policy_maps.operation);
}

std::string PolicyManager::Global::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_class_map_types.is_set || is_set(total_class_map_types.operation)) leaf_name_data.push_back(total_class_map_types.get_name_leafdata());
    if (total_class_maps.is_set || is_set(total_class_maps.operation)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_policy_map_types.is_set || is_set(total_policy_map_types.operation)) leaf_name_data.push_back(total_policy_map_types.get_name_leafdata());
    if (total_policy_maps.is_set || is_set(total_policy_maps.operation)) leaf_name_data.push_back(total_policy_maps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-map")
    {
        for(auto const & c : class_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::ClassMap>();
        c->parent = this;
        class_map.push_back(std::move(c));
        children[segment_path] = class_map.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-map")
    {
        for(auto const & c : policy_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::PolicyMap>();
        c->parent = this;
        policy_map.push_back(std::move(c));
        children[segment_path] = policy_map.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::Summary::get_children()
{
    for (auto const & c : class_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : policy_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-class-map-types")
    {
        total_class_map_types = value;
    }
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
    }
    if(value_path == "total-policy-map-types")
    {
        total_policy_map_types = value;
    }
    if(value_path == "total-policy-maps")
    {
        total_policy_maps = value;
    }
}

PolicyManager::Global::Summary::ClassMap::ClassMap()
    :
    object_type{YType::enumeration, "object-type"},
    total_objects{YType::uint32, "total-objects"},
    transient{YType::boolean, "transient"}
{
    yang_name = "class-map"; yang_parent_name = "summary";
}

PolicyManager::Global::Summary::ClassMap::~ClassMap()
{
}

bool PolicyManager::Global::Summary::ClassMap::has_data() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return object_type.is_set
	|| total_objects.is_set
	|| transient.is_set;
}

bool PolicyManager::Global::Summary::ClassMap::has_operation() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(object_type.operation)
	|| is_set(total_objects.operation)
	|| is_set(transient.operation);
}

std::string PolicyManager::Global::Summary::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::Summary::ClassMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (total_objects.is_set || is_set(total_objects.operation)) leaf_name_data.push_back(total_objects.get_name_leafdata());
    if (transient.is_set || is_set(transient.operation)) leaf_name_data.push_back(transient.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-map-reference")
    {
        for(auto const & c : class_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::ClassMap::ClassMapReference>();
        c->parent = this;
        class_map_reference.push_back(std::move(c));
        children[segment_path] = class_map_reference.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::ClassMap::Object>();
        c->parent = this;
        object.push_back(std::move(c));
        children[segment_path] = object.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::ClassMap::Reference>();
        c->parent = this;
        reference.push_back(std::move(c));
        children[segment_path] = reference.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::Summary::ClassMap::get_children()
{
    for (auto const & c : class_map_reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::Summary::ClassMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "total-objects")
    {
        total_objects = value;
    }
    if(value_path == "transient")
    {
        transient = value;
    }
}

PolicyManager::Global::Summary::ClassMap::Reference::Reference()
    :
    total_class_maps{YType::uint32, "total-class-maps"},
    total_flows{YType::uint32, "total-flows"},
    total_internal_reference_objects{YType::uint32, "total-internal-reference-objects"}
{
    yang_name = "reference"; yang_parent_name = "class-map";
}

PolicyManager::Global::Summary::ClassMap::Reference::~Reference()
{
}

bool PolicyManager::Global::Summary::ClassMap::Reference::has_data() const
{
    return total_class_maps.is_set
	|| total_flows.is_set
	|| total_internal_reference_objects.is_set;
}

bool PolicyManager::Global::Summary::ClassMap::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(total_class_maps.operation)
	|| is_set(total_flows.operation)
	|| is_set(total_internal_reference_objects.operation);
}

std::string PolicyManager::Global::Summary::ClassMap::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::Summary::ClassMap::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/class-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_class_maps.is_set || is_set(total_class_maps.operation)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_flows.is_set || is_set(total_flows.operation)) leaf_name_data.push_back(total_flows.get_name_leafdata());
    if (total_internal_reference_objects.is_set || is_set(total_internal_reference_objects.operation)) leaf_name_data.push_back(total_internal_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::ClassMap::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::Summary::ClassMap::Reference::get_children()
{
    return children;
}

void PolicyManager::Global::Summary::ClassMap::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
    }
    if(value_path == "total-flows")
    {
        total_flows = value;
    }
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects = value;
    }
}

PolicyManager::Global::Summary::ClassMap::Object::Object()
    :
    object_name{YType::str, "object-name"}
{
    yang_name = "object"; yang_parent_name = "class-map";
}

PolicyManager::Global::Summary::ClassMap::Object::~Object()
{
}

bool PolicyManager::Global::Summary::ClassMap::Object::has_data() const
{
    return object_name.is_set;
}

bool PolicyManager::Global::Summary::ClassMap::Object::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation);
}

std::string PolicyManager::Global::Summary::ClassMap::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::Summary::ClassMap::Object::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/class-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::ClassMap::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::Summary::ClassMap::Object::get_children()
{
    return children;
}

void PolicyManager::Global::Summary::ClassMap::Object::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
}

PolicyManager::Global::Summary::ClassMap::ClassMapReference::ClassMapReference()
    :
    total_reference_objects{YType::uint32, "total-reference-objects"}
{
    yang_name = "class-map-reference"; yang_parent_name = "class-map";
}

PolicyManager::Global::Summary::ClassMap::ClassMapReference::~ClassMapReference()
{
}

bool PolicyManager::Global::Summary::ClassMap::ClassMapReference::has_data() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_data())
            return true;
    }
    return total_reference_objects.is_set;
}

bool PolicyManager::Global::Summary::ClassMap::ClassMapReference::has_operation() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(total_reference_objects.operation);
}

std::string PolicyManager::Global::Summary::ClassMap::ClassMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-reference";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::Summary::ClassMap::ClassMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/class-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_reference_objects.is_set || is_set(total_reference_objects.operation)) leaf_name_data.push_back(total_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::ClassMap::ClassMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-map-reference")
    {
        for(auto const & c : policy_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::ClassMap::ClassMapReference::PolicyMapReference>();
        c->parent = this;
        policy_map_reference.push_back(std::move(c));
        children[segment_path] = policy_map_reference.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::Summary::ClassMap::ClassMapReference::get_children()
{
    for (auto const & c : policy_map_reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::Summary::ClassMap::ClassMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects = value;
    }
}

PolicyManager::Global::Summary::ClassMap::ClassMapReference::PolicyMapReference::PolicyMapReference()
    :
    object_type{YType::enumeration, "object-type"},
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "policy-map-reference"; yang_parent_name = "class-map-reference";
}

PolicyManager::Global::Summary::ClassMap::ClassMapReference::PolicyMapReference::~PolicyMapReference()
{
}

bool PolicyManager::Global::Summary::ClassMap::ClassMapReference::PolicyMapReference::has_data() const
{
    return object_type.is_set
	|| policy_map_name.is_set;
}

bool PolicyManager::Global::Summary::ClassMap::ClassMapReference::PolicyMapReference::has_operation() const
{
    return is_set(operation)
	|| is_set(object_type.operation)
	|| is_set(policy_map_name.operation);
}

std::string PolicyManager::Global::Summary::ClassMap::ClassMapReference::PolicyMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-reference";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::Summary::ClassMap::ClassMapReference::PolicyMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/class-map/class-map-reference/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::ClassMap::ClassMapReference::PolicyMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::Summary::ClassMap::ClassMapReference::PolicyMapReference::get_children()
{
    return children;
}

void PolicyManager::Global::Summary::ClassMap::ClassMapReference::PolicyMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

PolicyManager::Global::Summary::PolicyMap::PolicyMap()
    :
    object_type{YType::enumeration, "object-type"},
    total_objects{YType::uint32, "total-objects"},
    transient{YType::boolean, "transient"}
{
    yang_name = "policy-map"; yang_parent_name = "summary";
}

PolicyManager::Global::Summary::PolicyMap::~PolicyMap()
{
}

bool PolicyManager::Global::Summary::PolicyMap::has_data() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return object_type.is_set
	|| total_objects.is_set
	|| transient.is_set;
}

bool PolicyManager::Global::Summary::PolicyMap::has_operation() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(object_type.operation)
	|| is_set(total_objects.operation)
	|| is_set(transient.operation);
}

std::string PolicyManager::Global::Summary::PolicyMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::Summary::PolicyMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (total_objects.is_set || is_set(total_objects.operation)) leaf_name_data.push_back(total_objects.get_name_leafdata());
    if (transient.is_set || is_set(transient.operation)) leaf_name_data.push_back(transient.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::PolicyMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-map-reference")
    {
        for(auto const & c : class_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::PolicyMap::ClassMapReference>();
        c->parent = this;
        class_map_reference.push_back(std::move(c));
        children[segment_path] = class_map_reference.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::PolicyMap::Object>();
        c->parent = this;
        object.push_back(std::move(c));
        children[segment_path] = object.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::PolicyMap::Reference>();
        c->parent = this;
        reference.push_back(std::move(c));
        children[segment_path] = reference.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::Summary::PolicyMap::get_children()
{
    for (auto const & c : class_map_reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::Summary::PolicyMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "total-objects")
    {
        total_objects = value;
    }
    if(value_path == "transient")
    {
        transient = value;
    }
}

PolicyManager::Global::Summary::PolicyMap::Reference::Reference()
    :
    total_class_maps{YType::uint32, "total-class-maps"},
    total_flows{YType::uint32, "total-flows"},
    total_internal_reference_objects{YType::uint32, "total-internal-reference-objects"}
{
    yang_name = "reference"; yang_parent_name = "policy-map";
}

PolicyManager::Global::Summary::PolicyMap::Reference::~Reference()
{
}

bool PolicyManager::Global::Summary::PolicyMap::Reference::has_data() const
{
    return total_class_maps.is_set
	|| total_flows.is_set
	|| total_internal_reference_objects.is_set;
}

bool PolicyManager::Global::Summary::PolicyMap::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(total_class_maps.operation)
	|| is_set(total_flows.operation)
	|| is_set(total_internal_reference_objects.operation);
}

std::string PolicyManager::Global::Summary::PolicyMap::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::Summary::PolicyMap::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/policy-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_class_maps.is_set || is_set(total_class_maps.operation)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_flows.is_set || is_set(total_flows.operation)) leaf_name_data.push_back(total_flows.get_name_leafdata());
    if (total_internal_reference_objects.is_set || is_set(total_internal_reference_objects.operation)) leaf_name_data.push_back(total_internal_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::PolicyMap::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::Summary::PolicyMap::Reference::get_children()
{
    return children;
}

void PolicyManager::Global::Summary::PolicyMap::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
    }
    if(value_path == "total-flows")
    {
        total_flows = value;
    }
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects = value;
    }
}

PolicyManager::Global::Summary::PolicyMap::Object::Object()
    :
    object_name{YType::str, "object-name"}
{
    yang_name = "object"; yang_parent_name = "policy-map";
}

PolicyManager::Global::Summary::PolicyMap::Object::~Object()
{
}

bool PolicyManager::Global::Summary::PolicyMap::Object::has_data() const
{
    return object_name.is_set;
}

bool PolicyManager::Global::Summary::PolicyMap::Object::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation);
}

std::string PolicyManager::Global::Summary::PolicyMap::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::Summary::PolicyMap::Object::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/policy-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::PolicyMap::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::Summary::PolicyMap::Object::get_children()
{
    return children;
}

void PolicyManager::Global::Summary::PolicyMap::Object::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
}

PolicyManager::Global::Summary::PolicyMap::ClassMapReference::ClassMapReference()
    :
    total_reference_objects{YType::uint32, "total-reference-objects"}
{
    yang_name = "class-map-reference"; yang_parent_name = "policy-map";
}

PolicyManager::Global::Summary::PolicyMap::ClassMapReference::~ClassMapReference()
{
}

bool PolicyManager::Global::Summary::PolicyMap::ClassMapReference::has_data() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_data())
            return true;
    }
    return total_reference_objects.is_set;
}

bool PolicyManager::Global::Summary::PolicyMap::ClassMapReference::has_operation() const
{
    for (std::size_t index=0; index<policy_map_reference.size(); index++)
    {
        if(policy_map_reference[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(total_reference_objects.operation);
}

std::string PolicyManager::Global::Summary::PolicyMap::ClassMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-reference";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::Summary::PolicyMap::ClassMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/policy-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_reference_objects.is_set || is_set(total_reference_objects.operation)) leaf_name_data.push_back(total_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::PolicyMap::ClassMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-map-reference")
    {
        for(auto const & c : policy_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Global::Summary::PolicyMap::ClassMapReference::PolicyMapReference>();
        c->parent = this;
        policy_map_reference.push_back(std::move(c));
        children[segment_path] = policy_map_reference.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::Summary::PolicyMap::ClassMapReference::get_children()
{
    for (auto const & c : policy_map_reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Global::Summary::PolicyMap::ClassMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects = value;
    }
}

PolicyManager::Global::Summary::PolicyMap::ClassMapReference::PolicyMapReference::PolicyMapReference()
    :
    object_type{YType::enumeration, "object-type"},
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "policy-map-reference"; yang_parent_name = "class-map-reference";
}

PolicyManager::Global::Summary::PolicyMap::ClassMapReference::PolicyMapReference::~PolicyMapReference()
{
}

bool PolicyManager::Global::Summary::PolicyMap::ClassMapReference::PolicyMapReference::has_data() const
{
    return object_type.is_set
	|| policy_map_name.is_set;
}

bool PolicyManager::Global::Summary::PolicyMap::ClassMapReference::PolicyMapReference::has_operation() const
{
    return is_set(operation)
	|| is_set(object_type.operation)
	|| is_set(policy_map_name.operation);
}

std::string PolicyManager::Global::Summary::PolicyMap::ClassMapReference::PolicyMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-reference";

    return path_buffer.str();

}

EntityPath PolicyManager::Global::Summary::PolicyMap::ClassMapReference::PolicyMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/global/summary/policy-map/class-map-reference/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Global::Summary::PolicyMap::ClassMapReference::PolicyMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Global::Summary::PolicyMap::ClassMapReference::PolicyMapReference::get_children()
{
    return children;
}

void PolicyManager::Global::Summary::PolicyMap::ClassMapReference::PolicyMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

PolicyManager::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "policy-manager";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    class_map(std::make_shared<PolicyManager::Nodes::Node::ClassMap>())
	,policy_map(std::make_shared<PolicyManager::Nodes::Node::PolicyMap>())
	,summary(std::make_shared<PolicyManager::Nodes::Node::Summary>())
	,target_policy_map_types(std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes>())
{
    class_map->parent = this;
    children["class-map"] = class_map;

    policy_map->parent = this;
    children["policy-map"] = policy_map;

    summary->parent = this;
    children["summary"] = summary;

    target_policy_map_types->parent = this;
    children["target-policy-map-types"] = target_policy_map_types;

    yang_name = "node"; yang_parent_name = "nodes";
}

PolicyManager::Nodes::Node::~Node()
{
}

bool PolicyManager::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (class_map !=  nullptr && class_map->has_data())
	|| (policy_map !=  nullptr && policy_map->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (target_policy_map_types !=  nullptr && target_policy_map_types->has_data());
}

bool PolicyManager::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (class_map !=  nullptr && class_map->has_operation())
	|| (policy_map !=  nullptr && policy_map->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (target_policy_map_types !=  nullptr && target_policy_map_types->has_operation());
}

std::string PolicyManager::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-oper:policy-manager/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-map")
    {
        if(class_map != nullptr)
        {
            children["class-map"] = class_map;
        }
        else
        {
            class_map = std::make_shared<PolicyManager::Nodes::Node::ClassMap>();
            class_map->parent = this;
            children["class-map"] = class_map;
        }
        return children.at("class-map");
    }

    if(child_yang_name == "policy-map")
    {
        if(policy_map != nullptr)
        {
            children["policy-map"] = policy_map;
        }
        else
        {
            policy_map = std::make_shared<PolicyManager::Nodes::Node::PolicyMap>();
            policy_map->parent = this;
            children["policy-map"] = policy_map;
        }
        return children.at("policy-map");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<PolicyManager::Nodes::Node::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "target-policy-map-types")
    {
        if(target_policy_map_types != nullptr)
        {
            children["target-policy-map-types"] = target_policy_map_types;
        }
        else
        {
            target_policy_map_types = std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes>();
            target_policy_map_types->parent = this;
            children["target-policy-map-types"] = target_policy_map_types;
        }
        return children.at("target-policy-map-types");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::get_children()
{
    if(children.find("class-map") == children.end())
    {
        if(class_map != nullptr)
        {
            children["class-map"] = class_map;
        }
    }

    if(children.find("policy-map") == children.end())
    {
        if(policy_map != nullptr)
        {
            children["policy-map"] = policy_map;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("target-policy-map-types") == children.end())
    {
        if(target_policy_map_types != nullptr)
        {
            children["target-policy-map-types"] = target_policy_map_types;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapTypes()
{
    yang_name = "target-policy-map-types"; yang_parent_name = "node";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::TargetPolicyMapTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-policy-map-types";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::TargetPolicyMapTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetPolicyMapTypes' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::TargetPolicyMapTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "target-policy-map-type")
    {
        for(auto const & c : target_policy_map_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType>();
        c->parent = this;
        target_policy_map_type.push_back(std::move(c));
        children[segment_path] = target_policy_map_type.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::TargetPolicyMapTypes::get_children()
{
    for (auto const & c : target_policy_map_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetPolicyMapType()
    :
    type{YType::enumeration, "type"}
    	,
    policy_map_target_summary(std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary>())
	,policy_map_targets(std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets>())
	,target_summary_per_policy_maps(std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps>())
{
    policy_map_target_summary->parent = this;
    children["policy-map-target-summary"] = policy_map_target_summary;

    policy_map_targets->parent = this;
    children["policy-map-targets"] = policy_map_targets;

    target_summary_per_policy_maps->parent = this;
    children["target-summary-per-policy-maps"] = target_summary_per_policy_maps;

    yang_name = "target-policy-map-type"; yang_parent_name = "target-policy-map-types";
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::~TargetPolicyMapType()
{
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::has_data() const
{
    return type.is_set
	|| (policy_map_target_summary !=  nullptr && policy_map_target_summary->has_data())
	|| (policy_map_targets !=  nullptr && policy_map_targets->has_data())
	|| (target_summary_per_policy_maps !=  nullptr && target_summary_per_policy_maps->has_data());
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (policy_map_target_summary !=  nullptr && policy_map_target_summary->has_operation())
	|| (policy_map_targets !=  nullptr && policy_map_targets->has_operation())
	|| (target_summary_per_policy_maps !=  nullptr && target_summary_per_policy_maps->has_operation());
}

std::string PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-policy-map-type" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetPolicyMapType' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-map-target-summary")
    {
        if(policy_map_target_summary != nullptr)
        {
            children["policy-map-target-summary"] = policy_map_target_summary;
        }
        else
        {
            policy_map_target_summary = std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary>();
            policy_map_target_summary->parent = this;
            children["policy-map-target-summary"] = policy_map_target_summary;
        }
        return children.at("policy-map-target-summary");
    }

    if(child_yang_name == "policy-map-targets")
    {
        if(policy_map_targets != nullptr)
        {
            children["policy-map-targets"] = policy_map_targets;
        }
        else
        {
            policy_map_targets = std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets>();
            policy_map_targets->parent = this;
            children["policy-map-targets"] = policy_map_targets;
        }
        return children.at("policy-map-targets");
    }

    if(child_yang_name == "target-summary-per-policy-maps")
    {
        if(target_summary_per_policy_maps != nullptr)
        {
            children["target-summary-per-policy-maps"] = target_summary_per_policy_maps;
        }
        else
        {
            target_summary_per_policy_maps = std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps>();
            target_summary_per_policy_maps->parent = this;
            children["target-summary-per-policy-maps"] = target_summary_per_policy_maps;
        }
        return children.at("target-summary-per-policy-maps");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::get_children()
{
    if(children.find("policy-map-target-summary") == children.end())
    {
        if(policy_map_target_summary != nullptr)
        {
            children["policy-map-target-summary"] = policy_map_target_summary;
        }
    }

    if(children.find("policy-map-targets") == children.end())
    {
        if(policy_map_targets != nullptr)
        {
            children["policy-map-targets"] = policy_map_targets;
        }
    }

    if(children.find("target-summary-per-policy-maps") == children.end())
    {
        if(target_summary_per_policy_maps != nullptr)
        {
            children["target-summary-per-policy-maps"] = target_summary_per_policy_maps;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTargets()
{
    yang_name = "policy-map-targets"; yang_parent_name = "target-policy-map-type";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-targets";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMapTargets' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-map-target")
    {
        for(auto const & c : policy_map_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget>();
        c->parent = this;
        policy_map_target.push_back(std::move(c));
        children[segment_path] = policy_map_target.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::get_children()
{
    for (auto const & c : policy_map_target)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::PolicyMapTarget()
    :
    policy_map_name{YType::str, "policy-map-name"},
    parent_target{YType::str, "parent-target"},
    target{YType::str, "target"}
{
    yang_name = "policy-map-target"; yang_parent_name = "policy-map-targets";
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::~PolicyMapTarget()
{
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::has_data() const
{
    for (auto const & leaf : parent_target.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : target.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return policy_map_name.is_set;
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::has_operation() const
{
    for (auto const & leaf : parent_target.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : target.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(policy_map_name.operation)
	|| is_set(parent_target.operation)
	|| is_set(target.operation);
}

std::string PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-target" <<"[policy-map-name='" <<policy_map_name <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMapTarget' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    auto parent_target_name_datas = parent_target.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), parent_target_name_datas.begin(), parent_target_name_datas.end());
    auto target_name_datas = target.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), target_name_datas.begin(), target_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargets::PolicyMapTarget::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
    if(value_path == "parent-target")
    {
        parent_target.append(value);
    }
    if(value_path == "target")
    {
        target.append(value);
    }
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::PolicyMapTargetSummary()
    :
    total_child_policy_maps_input_direction{YType::uint32, "total-child-policy-maps-input-direction"},
    total_child_policy_maps_output_direction{YType::uint32, "total-child-policy-maps-output-direction"},
    total_interfaces_input_direction{YType::uint32, "total-interfaces-input-direction"},
    total_interfaces_output_direction{YType::uint32, "total-interfaces-output-direction"},
    total_policy_maps_input_direction{YType::uint32, "total-policy-maps-input-direction"},
    total_policy_maps_output_direction{YType::uint32, "total-policy-maps-output-direction"}
{
    yang_name = "policy-map-target-summary"; yang_parent_name = "target-policy-map-type";
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::~PolicyMapTargetSummary()
{
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::has_data() const
{
    return total_child_policy_maps_input_direction.is_set
	|| total_child_policy_maps_output_direction.is_set
	|| total_interfaces_input_direction.is_set
	|| total_interfaces_output_direction.is_set
	|| total_policy_maps_input_direction.is_set
	|| total_policy_maps_output_direction.is_set;
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(total_child_policy_maps_input_direction.operation)
	|| is_set(total_child_policy_maps_output_direction.operation)
	|| is_set(total_interfaces_input_direction.operation)
	|| is_set(total_interfaces_output_direction.operation)
	|| is_set(total_policy_maps_input_direction.operation)
	|| is_set(total_policy_maps_output_direction.operation);
}

std::string PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-target-summary";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMapTargetSummary' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_child_policy_maps_input_direction.is_set || is_set(total_child_policy_maps_input_direction.operation)) leaf_name_data.push_back(total_child_policy_maps_input_direction.get_name_leafdata());
    if (total_child_policy_maps_output_direction.is_set || is_set(total_child_policy_maps_output_direction.operation)) leaf_name_data.push_back(total_child_policy_maps_output_direction.get_name_leafdata());
    if (total_interfaces_input_direction.is_set || is_set(total_interfaces_input_direction.operation)) leaf_name_data.push_back(total_interfaces_input_direction.get_name_leafdata());
    if (total_interfaces_output_direction.is_set || is_set(total_interfaces_output_direction.operation)) leaf_name_data.push_back(total_interfaces_output_direction.get_name_leafdata());
    if (total_policy_maps_input_direction.is_set || is_set(total_policy_maps_input_direction.operation)) leaf_name_data.push_back(total_policy_maps_input_direction.get_name_leafdata());
    if (total_policy_maps_output_direction.is_set || is_set(total_policy_maps_output_direction.operation)) leaf_name_data.push_back(total_policy_maps_output_direction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::PolicyMapTargetSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-child-policy-maps-input-direction")
    {
        total_child_policy_maps_input_direction = value;
    }
    if(value_path == "total-child-policy-maps-output-direction")
    {
        total_child_policy_maps_output_direction = value;
    }
    if(value_path == "total-interfaces-input-direction")
    {
        total_interfaces_input_direction = value;
    }
    if(value_path == "total-interfaces-output-direction")
    {
        total_interfaces_output_direction = value;
    }
    if(value_path == "total-policy-maps-input-direction")
    {
        total_policy_maps_input_direction = value;
    }
    if(value_path == "total-policy-maps-output-direction")
    {
        total_policy_maps_output_direction = value;
    }
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMaps()
{
    yang_name = "target-summary-per-policy-maps"; yang_parent_name = "target-policy-map-type";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-summary-per-policy-maps";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetSummaryPerPolicyMaps' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "target-summary-per-policy-map")
    {
        for(auto const & c : target_summary_per_policy_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap>();
        c->parent = this;
        target_summary_per_policy_map.push_back(std::move(c));
        children[segment_path] = target_summary_per_policy_map.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::get_children()
{
    for (auto const & c : target_summary_per_policy_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::TargetSummaryPerPolicyMap()
    :
    policy_map_name{YType::str, "policy-map-name"},
    total_child_policy_maps_input_direction{YType::uint32, "total-child-policy-maps-input-direction"},
    total_child_policy_maps_output_direction{YType::uint32, "total-child-policy-maps-output-direction"},
    total_interfaces_input_direction{YType::uint32, "total-interfaces-input-direction"},
    total_interfaces_output_direction{YType::uint32, "total-interfaces-output-direction"},
    total_policy_maps_input_direction{YType::uint32, "total-policy-maps-input-direction"},
    total_policy_maps_output_direction{YType::uint32, "total-policy-maps-output-direction"}
{
    yang_name = "target-summary-per-policy-map"; yang_parent_name = "target-summary-per-policy-maps";
}

PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::~TargetSummaryPerPolicyMap()
{
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::has_data() const
{
    return policy_map_name.is_set
	|| total_child_policy_maps_input_direction.is_set
	|| total_child_policy_maps_output_direction.is_set
	|| total_interfaces_input_direction.is_set
	|| total_interfaces_output_direction.is_set
	|| total_policy_maps_input_direction.is_set
	|| total_policy_maps_output_direction.is_set;
}

bool PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_map_name.operation)
	|| is_set(total_child_policy_maps_input_direction.operation)
	|| is_set(total_child_policy_maps_output_direction.operation)
	|| is_set(total_interfaces_input_direction.operation)
	|| is_set(total_interfaces_output_direction.operation)
	|| is_set(total_policy_maps_input_direction.operation)
	|| is_set(total_policy_maps_output_direction.operation);
}

std::string PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-summary-per-policy-map" <<"[policy-map-name='" <<policy_map_name <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetSummaryPerPolicyMap' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());
    if (total_child_policy_maps_input_direction.is_set || is_set(total_child_policy_maps_input_direction.operation)) leaf_name_data.push_back(total_child_policy_maps_input_direction.get_name_leafdata());
    if (total_child_policy_maps_output_direction.is_set || is_set(total_child_policy_maps_output_direction.operation)) leaf_name_data.push_back(total_child_policy_maps_output_direction.get_name_leafdata());
    if (total_interfaces_input_direction.is_set || is_set(total_interfaces_input_direction.operation)) leaf_name_data.push_back(total_interfaces_input_direction.get_name_leafdata());
    if (total_interfaces_output_direction.is_set || is_set(total_interfaces_output_direction.operation)) leaf_name_data.push_back(total_interfaces_output_direction.get_name_leafdata());
    if (total_policy_maps_input_direction.is_set || is_set(total_policy_maps_input_direction.operation)) leaf_name_data.push_back(total_policy_maps_input_direction.get_name_leafdata());
    if (total_policy_maps_output_direction.is_set || is_set(total_policy_maps_output_direction.operation)) leaf_name_data.push_back(total_policy_maps_output_direction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::TargetPolicyMapTypes::TargetPolicyMapType::TargetSummaryPerPolicyMaps::TargetSummaryPerPolicyMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
    if(value_path == "total-child-policy-maps-input-direction")
    {
        total_child_policy_maps_input_direction = value;
    }
    if(value_path == "total-child-policy-maps-output-direction")
    {
        total_child_policy_maps_output_direction = value;
    }
    if(value_path == "total-interfaces-input-direction")
    {
        total_interfaces_input_direction = value;
    }
    if(value_path == "total-interfaces-output-direction")
    {
        total_interfaces_output_direction = value;
    }
    if(value_path == "total-policy-maps-input-direction")
    {
        total_policy_maps_input_direction = value;
    }
    if(value_path == "total-policy-maps-output-direction")
    {
        total_policy_maps_output_direction = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMap()
    :
    class_map_types(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes>())
{
    class_map_types->parent = this;
    children["class-map-types"] = class_map_types;

    yang_name = "class-map"; yang_parent_name = "node";
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
    return is_set(operation)
	|| (class_map_types !=  nullptr && class_map_types->has_operation());
}

std::string PolicyManager::Nodes::Node::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMap' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-map-types")
    {
        if(class_map_types != nullptr)
        {
            children["class-map-types"] = class_map_types;
        }
        else
        {
            class_map_types = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes>();
            class_map_types->parent = this;
            children["class-map-types"] = class_map_types;
        }
        return children.at("class-map-types");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::get_children()
{
    if(children.find("class-map-types") == children.end())
    {
        if(class_map_types != nullptr)
        {
            children["class-map-types"] = class_map_types;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapTypes()
{
    yang_name = "class-map-types"; yang_parent_name = "class-map";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-types";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMapTypes' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-map-type")
    {
        for(auto const & c : class_map_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType>();
        c->parent = this;
        class_map_type.push_back(std::move(c));
        children[segment_path] = class_map_type.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::get_children()
{
    for (auto const & c : class_map_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapType()
    :
    type{YType::enumeration, "type"}
    	,
    class_map_briefs(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapBriefs>())
	,class_map_details(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails>())
	,class_maps(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps>())
{
    class_map_briefs->parent = this;
    children["class-map-briefs"] = class_map_briefs;

    class_map_details->parent = this;
    children["class-map-details"] = class_map_details;

    class_maps->parent = this;
    children["class-maps"] = class_maps;

    yang_name = "class-map-type"; yang_parent_name = "class-map-types";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::~ClassMapType()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::has_data() const
{
    return type.is_set
	|| (class_map_briefs !=  nullptr && class_map_briefs->has_data())
	|| (class_map_details !=  nullptr && class_map_details->has_data())
	|| (class_maps !=  nullptr && class_maps->has_data());
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (class_map_briefs !=  nullptr && class_map_briefs->has_operation())
	|| (class_map_details !=  nullptr && class_map_details->has_operation())
	|| (class_maps !=  nullptr && class_maps->has_operation());
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-type" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMapType' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-map-briefs")
    {
        if(class_map_briefs != nullptr)
        {
            children["class-map-briefs"] = class_map_briefs;
        }
        else
        {
            class_map_briefs = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapBriefs>();
            class_map_briefs->parent = this;
            children["class-map-briefs"] = class_map_briefs;
        }
        return children.at("class-map-briefs");
    }

    if(child_yang_name == "class-map-details")
    {
        if(class_map_details != nullptr)
        {
            children["class-map-details"] = class_map_details;
        }
        else
        {
            class_map_details = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails>();
            class_map_details->parent = this;
            children["class-map-details"] = class_map_details;
        }
        return children.at("class-map-details");
    }

    if(child_yang_name == "class-maps")
    {
        if(class_maps != nullptr)
        {
            children["class-maps"] = class_maps;
        }
        else
        {
            class_maps = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps>();
            class_maps->parent = this;
            children["class-maps"] = class_maps;
        }
        return children.at("class-maps");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::get_children()
{
    if(children.find("class-map-briefs") == children.end())
    {
        if(class_map_briefs != nullptr)
        {
            children["class-map-briefs"] = class_map_briefs;
        }
    }

    if(children.find("class-map-details") == children.end())
    {
        if(class_map_details != nullptr)
        {
            children["class-map-details"] = class_map_details;
        }
    }

    if(children.find("class-maps") == children.end())
    {
        if(class_maps != nullptr)
        {
            children["class-maps"] = class_maps;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetails()
{
    yang_name = "class-map-details"; yang_parent_name = "class-map-type";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-details";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMapDetails' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-map-detail")
    {
        for(auto const & c : class_map_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail>();
        c->parent = this;
        class_map_detail.push_back(std::move(c));
        children[segment_path] = class_map_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::get_children()
{
    for (auto const & c : class_map_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapDetail()
    :
    class_map_name{YType::str, "class-map-name"},
    object_type{YType::enumeration, "object-type"},
    total_objects{YType::uint32, "total-objects"},
    transient{YType::boolean, "transient"}
{
    yang_name = "class-map-detail"; yang_parent_name = "class-map-details";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::~ClassMapDetail()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::has_data() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_data())
            return true;
    }
    return class_map_name.is_set
	|| object_type.is_set
	|| total_objects.is_set
	|| transient.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::has_operation() const
{
    for (std::size_t index=0; index<class_map_reference.size(); index++)
    {
        if(class_map_reference[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reference.size(); index++)
    {
        if(reference[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(class_map_name.operation)
	|| is_set(object_type.operation)
	|| is_set(total_objects.operation)
	|| is_set(transient.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-detail" <<"[class-map-name='" <<class_map_name <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMapDetail' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_map_name.is_set || is_set(class_map_name.operation)) leaf_name_data.push_back(class_map_name.get_name_leafdata());
    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (total_objects.is_set || is_set(total_objects.operation)) leaf_name_data.push_back(total_objects.get_name_leafdata());
    if (transient.is_set || is_set(transient.operation)) leaf_name_data.push_back(transient.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-map-reference")
    {
        for(auto const & c : class_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference>();
        c->parent = this;
        class_map_reference.push_back(std::move(c));
        children[segment_path] = class_map_reference.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object>();
        c->parent = this;
        object.push_back(std::move(c));
        children[segment_path] = object.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "reference")
    {
        for(auto const & c : reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference>();
        c->parent = this;
        reference.push_back(std::move(c));
        children[segment_path] = reference.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::get_children()
{
    for (auto const & c : class_map_reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-map-name")
    {
        class_map_name = value;
    }
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "total-objects")
    {
        total_objects = value;
    }
    if(value_path == "transient")
    {
        transient = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::Reference()
    :
    total_class_maps{YType::uint32, "total-class-maps"},
    total_flows{YType::uint32, "total-flows"},
    total_internal_reference_objects{YType::uint32, "total-internal-reference-objects"}
{
    yang_name = "reference"; yang_parent_name = "class-map-detail";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::~Reference()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::has_data() const
{
    return total_class_maps.is_set
	|| total_flows.is_set
	|| total_internal_reference_objects.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::has_operation() const
{
    return is_set(operation)
	|| is_set(total_class_maps.operation)
	|| is_set(total_flows.operation)
	|| is_set(total_internal_reference_objects.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reference";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_class_maps.is_set || is_set(total_class_maps.operation)) leaf_name_data.push_back(total_class_maps.get_name_leafdata());
    if (total_flows.is_set || is_set(total_flows.operation)) leaf_name_data.push_back(total_flows.get_name_leafdata());
    if (total_internal_reference_objects.is_set || is_set(total_internal_reference_objects.operation)) leaf_name_data.push_back(total_internal_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Reference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-class-maps")
    {
        total_class_maps = value;
    }
    if(value_path == "total-flows")
    {
        total_flows = value;
    }
    if(value_path == "total-internal-reference-objects")
    {
        total_internal_reference_objects = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object::Object()
    :
    object_name{YType::str, "object-name"}
{
    yang_name = "object"; yang_parent_name = "class-map-detail";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object::~Object()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object::has_data() const
{
    return object_name.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Object' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::Object::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::ClassMapReference()
    :
    total_reference_objects{YType::uint32, "total-reference-objects"}
{
    yang_name = "class-map-reference"; yang_parent_name = "class-map-detail";
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
    return is_set(operation)
	|| is_set(total_reference_objects.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-reference";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMapReference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_reference_objects.is_set || is_set(total_reference_objects.operation)) leaf_name_data.push_back(total_reference_objects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-map-reference")
    {
        for(auto const & c : policy_map_reference)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference>();
        c->parent = this;
        policy_map_reference.push_back(std::move(c));
        children[segment_path] = policy_map_reference.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::get_children()
{
    for (auto const & c : policy_map_reference)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-reference-objects")
    {
        total_reference_objects = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference::PolicyMapReference()
    :
    object_type{YType::enumeration, "object-type"},
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "policy-map-reference"; yang_parent_name = "class-map-reference";
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
    return is_set(operation)
	|| is_set(object_type.operation)
	|| is_set(policy_map_name.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-reference";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMapReference' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (policy_map_name.is_set || is_set(policy_map_name.operation)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMapDetails::ClassMapDetail::ClassMapReference::PolicyMapReference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-type")
    {
        object_type = value;
    }
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMaps()
{
    yang_name = "class-maps"; yang_parent_name = "class-map-type";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-maps";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMaps' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-map")
    {
        for(auto const & c : class_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_>();
        c->parent = this;
        class_map.push_back(std::move(c));
        children[segment_path] = class_map.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::get_children()
{
    for (auto const & c : class_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMap_()
    :
    class_map_name{YType::str, "class-map-name"}
{
    yang_name = "class-map"; yang_parent_name = "class-maps";
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
    return is_set(operation)
	|| is_set(class_map_name.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map" <<"[class-map-name='" <<class_map_name <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMap_' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_map_name.is_set || is_set(class_map_name.operation)) leaf_name_data.push_back(class_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-map-bg")
    {
        for(auto const & c : class_map_bg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg>();
        c->parent = this;
        class_map_bg.push_back(std::move(c));
        children[segment_path] = class_map_bg.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::get_children()
{
    for (auto const & c : class_map_bg)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-map-name")
    {
        class_map_name = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::ClassMapBg()
    :
    chk_sum{YType::str, "chk-sum"},
    description{YType::str, "description"},
    flags{YType::uint32, "flags"},
    magic{YType::uint32, "magic"},
    match_count{YType::uint32, "match-count"},
    mode{YType::enumeration, "mode"},
    name{YType::str, "name"},
    type{YType::enumeration, "type"}
    	,
    match_infop(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop>())
{
    match_infop->parent = this;
    children["match-infop"] = match_infop;

    yang_name = "class-map-bg"; yang_parent_name = "class-map";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::~ClassMapBg()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::has_data() const
{
    return chk_sum.is_set
	|| description.is_set
	|| flags.is_set
	|| magic.is_set
	|| match_count.is_set
	|| mode.is_set
	|| name.is_set
	|| type.is_set
	|| (match_infop !=  nullptr && match_infop->has_data());
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::has_operation() const
{
    return is_set(operation)
	|| is_set(chk_sum.operation)
	|| is_set(description.operation)
	|| is_set(flags.operation)
	|| is_set(magic.operation)
	|| is_set(match_count.operation)
	|| is_set(mode.operation)
	|| is_set(name.operation)
	|| is_set(type.operation)
	|| (match_infop !=  nullptr && match_infop->has_operation());
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-bg";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMapBg' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chk_sum.is_set || is_set(chk_sum.operation)) leaf_name_data.push_back(chk_sum.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (magic.is_set || is_set(magic.operation)) leaf_name_data.push_back(magic.get_name_leafdata());
    if (match_count.is_set || is_set(match_count.operation)) leaf_name_data.push_back(match_count.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "match-infop")
    {
        if(match_infop != nullptr)
        {
            children["match-infop"] = match_infop;
        }
        else
        {
            match_infop = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop>();
            match_infop->parent = this;
            children["match-infop"] = match_infop;
        }
        return children.at("match-infop");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::get_children()
{
    if(children.find("match-infop") == children.end())
    {
        if(match_infop != nullptr)
        {
            children["match-infop"] = match_infop;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chk-sum")
    {
        chk_sum = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "magic")
    {
        magic = value;
    }
    if(value_path == "match-count")
    {
        match_count = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::MatchInfop()
{
    yang_name = "match-infop"; yang_parent_name = "class-map-bg";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-infop";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchInfop' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-match-info-st")
    {
        for(auto const & c : class_match_info_st)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt>();
        c->parent = this;
        class_match_info_st.push_back(std::move(c));
        children[segment_path] = class_match_info_st.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::get_children()
{
    for (auto const & c : class_match_info_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::ClassMatchInfoSt()
    :
    flags{YType::uint32, "flags"}
    	,
    match_data(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData>())
{
    match_data->parent = this;
    children["match-data"] = match_data;

    yang_name = "class-match-info-st"; yang_parent_name = "match-infop";
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
    return is_set(operation)
	|| is_set(flags.operation)
	|| (match_data !=  nullptr && match_data->has_operation());
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-match-info-st";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMatchInfoSt' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "match-data")
    {
        if(match_data != nullptr)
        {
            children["match-data"] = match_data;
        }
        else
        {
            match_data = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData>();
            match_data->parent = this;
            children["match-data"] = match_data;
        }
        return children.at("match-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::get_children()
{
    if(children.find("match-data") == children.end())
    {
        if(match_data != nullptr)
        {
            children["match-data"] = match_data;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flags")
    {
        flags = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MatchData()
    :
    authen_status{YType::enumeration, "authen-status"},
    fragment_type{YType::uint8, "fragment-type"},
    mlp_negotiated{YType::enumeration, "mlp-negotiated"},
    mpls_top_eos{YType::uint8, "mpls-top-eos"},
    type{YType::enumeration, "type"}
    	,
    access_interface(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface>())
	,atm_clp(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp>())
	,auth_domain(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain>())
	,auth_domain_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex>())
	,auth_username(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername>())
	,auth_username_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex>())
	,avail_id(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId>())
	,circuit_id(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId>())
	,circuit_id_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex>())
	,cos(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos>())
	,cos_inr(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr>())
	,dei(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei>())
	,dei_inr(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr>())
	,dhcp_client_id(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId>())
	,dhcp_client_id_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex>())
	,discard_class(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass>())
	,dnis(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis>())
	,dnis_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex>())
	,domain(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain>())
	,domain_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex>())
	,dscp(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp>())
	,dst_addr_ipv4(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4>())
	,dst_addr_ipv6(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6>())
	,dst_mac(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac>())
	,dst_port(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort>())
	,ether_service_acl(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl>())
	,ethertype(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype>())
	,flow_key_data(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData>())
	,flow_tag(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag>())
	,fr_de(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe>())
	,fr_dlci(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci>())
	,icmp_v4(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4>())
	,icmp_v6(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6>())
	,icmpv4_code(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code>())
	,icmpv4_type(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type>())
	,icmpv6_code(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code>())
	,icmpv6_type(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type>())
	,input_interface(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface>())
	,input_intfhdl(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl>())
	,ipv4_acl(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl>())
	,ipv4_dscp(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp>())
	,ipv4_packet_len(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen>())
	,ipv4_prec(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec>())
	,ipv6_acl(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl>())
	,ipv6_dscp(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp>())
	,ipv6_packet_len(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen>())
	,ipv6_prec(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec>())
	,media_type(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType>())
	,mpls_disp_ipv4_acl(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl>())
	,mpls_disp_ipv6_acl(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl>())
	,mpls_exp(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp>())
	,mpls_exp_imp(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp>())
	,mpls_top_label(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel>())
	,nas_port(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort>())
	,packet_len(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen>())
	,prec(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec>())
	,proto(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto>())
	,qos_group(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup>())
	,remote_id(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId>())
	,remote_id_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex>())
	,service_name(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName>())
	,service_name_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex>())
	,src_addr_ipv4(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4>())
	,src_addr_ipv6(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6>())
	,src_addr_mac(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac>())
	,src_mac(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac>())
	,src_port(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort>())
	,subs_protocol(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol>())
	,tcp_flag(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag>())
	,timer(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer>())
	,timer_regexp(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp>())
	,traffic_class(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass>())
	,tunnel_name(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName>())
	,tunnel_name_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex>())
	,unauth_domain(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain>())
	,unauth_domain_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex>())
	,unauth_username(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername>())
	,unauth_username_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex>())
	,user_name(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName>())
	,user_name_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex>())
	,vendor_id(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId>())
	,vendor_id_regex(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex>())
	,vlan(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan>())
	,vlan_inr(std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr>())
{
    access_interface->parent = this;
    children["access-interface"] = access_interface;

    atm_clp->parent = this;
    children["atm-clp"] = atm_clp;

    auth_domain->parent = this;
    children["auth-domain"] = auth_domain;

    auth_domain_regex->parent = this;
    children["auth-domain-regex"] = auth_domain_regex;

    auth_username->parent = this;
    children["auth-username"] = auth_username;

    auth_username_regex->parent = this;
    children["auth-username-regex"] = auth_username_regex;

    avail_id->parent = this;
    children["avail-id"] = avail_id;

    circuit_id->parent = this;
    children["circuit-id"] = circuit_id;

    circuit_id_regex->parent = this;
    children["circuit-id-regex"] = circuit_id_regex;

    cos->parent = this;
    children["cos"] = cos;

    cos_inr->parent = this;
    children["cos-inr"] = cos_inr;

    dei->parent = this;
    children["dei"] = dei;

    dei_inr->parent = this;
    children["dei-inr"] = dei_inr;

    dhcp_client_id->parent = this;
    children["dhcp-client-id"] = dhcp_client_id;

    dhcp_client_id_regex->parent = this;
    children["dhcp-client-id-regex"] = dhcp_client_id_regex;

    discard_class->parent = this;
    children["discard-class"] = discard_class;

    dnis->parent = this;
    children["dnis"] = dnis;

    dnis_regex->parent = this;
    children["dnis-regex"] = dnis_regex;

    domain->parent = this;
    children["domain"] = domain;

    domain_regex->parent = this;
    children["domain-regex"] = domain_regex;

    dscp->parent = this;
    children["dscp"] = dscp;

    dst_addr_ipv4->parent = this;
    children["dst-addr-ipv4"] = dst_addr_ipv4;

    dst_addr_ipv6->parent = this;
    children["dst-addr-ipv6"] = dst_addr_ipv6;

    dst_mac->parent = this;
    children["dst-mac"] = dst_mac;

    dst_port->parent = this;
    children["dst-port"] = dst_port;

    ether_service_acl->parent = this;
    children["ether-service-acl"] = ether_service_acl;

    ethertype->parent = this;
    children["ethertype"] = ethertype;

    flow_key_data->parent = this;
    children["flow-key-data"] = flow_key_data;

    flow_tag->parent = this;
    children["flow-tag"] = flow_tag;

    fr_de->parent = this;
    children["fr-de"] = fr_de;

    fr_dlci->parent = this;
    children["fr-dlci"] = fr_dlci;

    icmp_v4->parent = this;
    children["icmp-v4"] = icmp_v4;

    icmp_v6->parent = this;
    children["icmp-v6"] = icmp_v6;

    icmpv4_code->parent = this;
    children["icmpv4-code"] = icmpv4_code;

    icmpv4_type->parent = this;
    children["icmpv4-type"] = icmpv4_type;

    icmpv6_code->parent = this;
    children["icmpv6-code"] = icmpv6_code;

    icmpv6_type->parent = this;
    children["icmpv6-type"] = icmpv6_type;

    input_interface->parent = this;
    children["input-interface"] = input_interface;

    input_intfhdl->parent = this;
    children["input-intfhdl"] = input_intfhdl;

    ipv4_acl->parent = this;
    children["ipv4-acl"] = ipv4_acl;

    ipv4_dscp->parent = this;
    children["ipv4-dscp"] = ipv4_dscp;

    ipv4_packet_len->parent = this;
    children["ipv4-packet-len"] = ipv4_packet_len;

    ipv4_prec->parent = this;
    children["ipv4-prec"] = ipv4_prec;

    ipv6_acl->parent = this;
    children["ipv6-acl"] = ipv6_acl;

    ipv6_dscp->parent = this;
    children["ipv6-dscp"] = ipv6_dscp;

    ipv6_packet_len->parent = this;
    children["ipv6-packet-len"] = ipv6_packet_len;

    ipv6_prec->parent = this;
    children["ipv6-prec"] = ipv6_prec;

    media_type->parent = this;
    children["media-type"] = media_type;

    mpls_disp_ipv4_acl->parent = this;
    children["mpls-disp-ipv4-acl"] = mpls_disp_ipv4_acl;

    mpls_disp_ipv6_acl->parent = this;
    children["mpls-disp-ipv6-acl"] = mpls_disp_ipv6_acl;

    mpls_exp->parent = this;
    children["mpls-exp"] = mpls_exp;

    mpls_exp_imp->parent = this;
    children["mpls-exp-imp"] = mpls_exp_imp;

    mpls_top_label->parent = this;
    children["mpls-top-label"] = mpls_top_label;

    nas_port->parent = this;
    children["nas-port"] = nas_port;

    packet_len->parent = this;
    children["packet-len"] = packet_len;

    prec->parent = this;
    children["prec"] = prec;

    proto->parent = this;
    children["proto"] = proto;

    qos_group->parent = this;
    children["qos-group"] = qos_group;

    remote_id->parent = this;
    children["remote-id"] = remote_id;

    remote_id_regex->parent = this;
    children["remote-id-regex"] = remote_id_regex;

    service_name->parent = this;
    children["service-name"] = service_name;

    service_name_regex->parent = this;
    children["service-name-regex"] = service_name_regex;

    src_addr_ipv4->parent = this;
    children["src-addr-ipv4"] = src_addr_ipv4;

    src_addr_ipv6->parent = this;
    children["src-addr-ipv6"] = src_addr_ipv6;

    src_addr_mac->parent = this;
    children["src-addr-mac"] = src_addr_mac;

    src_mac->parent = this;
    children["src-mac"] = src_mac;

    src_port->parent = this;
    children["src-port"] = src_port;

    subs_protocol->parent = this;
    children["subs-protocol"] = subs_protocol;

    tcp_flag->parent = this;
    children["tcp-flag"] = tcp_flag;

    timer->parent = this;
    children["timer"] = timer;

    timer_regexp->parent = this;
    children["timer-regexp"] = timer_regexp;

    traffic_class->parent = this;
    children["traffic-class"] = traffic_class;

    tunnel_name->parent = this;
    children["tunnel-name"] = tunnel_name;

    tunnel_name_regex->parent = this;
    children["tunnel-name-regex"] = tunnel_name_regex;

    unauth_domain->parent = this;
    children["unauth-domain"] = unauth_domain;

    unauth_domain_regex->parent = this;
    children["unauth-domain-regex"] = unauth_domain_regex;

    unauth_username->parent = this;
    children["unauth-username"] = unauth_username;

    unauth_username_regex->parent = this;
    children["unauth-username-regex"] = unauth_username_regex;

    user_name->parent = this;
    children["user-name"] = user_name;

    user_name_regex->parent = this;
    children["user-name-regex"] = user_name_regex;

    vendor_id->parent = this;
    children["vendor-id"] = vendor_id;

    vendor_id_regex->parent = this;
    children["vendor-id-regex"] = vendor_id_regex;

    vlan->parent = this;
    children["vlan"] = vlan;

    vlan_inr->parent = this;
    children["vlan-inr"] = vlan_inr;

    yang_name = "match-data"; yang_parent_name = "class-match-info-st";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::~MatchData()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::has_data() const
{
    return authen_status.is_set
	|| fragment_type.is_set
	|| mlp_negotiated.is_set
	|| mpls_top_eos.is_set
	|| type.is_set
	|| (access_interface !=  nullptr && access_interface->has_data())
	|| (atm_clp !=  nullptr && atm_clp->has_data())
	|| (auth_domain !=  nullptr && auth_domain->has_data())
	|| (auth_domain_regex !=  nullptr && auth_domain_regex->has_data())
	|| (auth_username !=  nullptr && auth_username->has_data())
	|| (auth_username_regex !=  nullptr && auth_username_regex->has_data())
	|| (avail_id !=  nullptr && avail_id->has_data())
	|| (circuit_id !=  nullptr && circuit_id->has_data())
	|| (circuit_id_regex !=  nullptr && circuit_id_regex->has_data())
	|| (cos !=  nullptr && cos->has_data())
	|| (cos_inr !=  nullptr && cos_inr->has_data())
	|| (dei !=  nullptr && dei->has_data())
	|| (dei_inr !=  nullptr && dei_inr->has_data())
	|| (dhcp_client_id !=  nullptr && dhcp_client_id->has_data())
	|| (dhcp_client_id_regex !=  nullptr && dhcp_client_id_regex->has_data())
	|| (discard_class !=  nullptr && discard_class->has_data())
	|| (dnis !=  nullptr && dnis->has_data())
	|| (dnis_regex !=  nullptr && dnis_regex->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (domain_regex !=  nullptr && domain_regex->has_data())
	|| (dscp !=  nullptr && dscp->has_data())
	|| (dst_addr_ipv4 !=  nullptr && dst_addr_ipv4->has_data())
	|| (dst_addr_ipv6 !=  nullptr && dst_addr_ipv6->has_data())
	|| (dst_mac !=  nullptr && dst_mac->has_data())
	|| (dst_port !=  nullptr && dst_port->has_data())
	|| (ether_service_acl !=  nullptr && ether_service_acl->has_data())
	|| (ethertype !=  nullptr && ethertype->has_data())
	|| (flow_key_data !=  nullptr && flow_key_data->has_data())
	|| (flow_tag !=  nullptr && flow_tag->has_data())
	|| (fr_de !=  nullptr && fr_de->has_data())
	|| (fr_dlci !=  nullptr && fr_dlci->has_data())
	|| (icmp_v4 !=  nullptr && icmp_v4->has_data())
	|| (icmp_v6 !=  nullptr && icmp_v6->has_data())
	|| (icmpv4_code !=  nullptr && icmpv4_code->has_data())
	|| (icmpv4_type !=  nullptr && icmpv4_type->has_data())
	|| (icmpv6_code !=  nullptr && icmpv6_code->has_data())
	|| (icmpv6_type !=  nullptr && icmpv6_type->has_data())
	|| (input_interface !=  nullptr && input_interface->has_data())
	|| (input_intfhdl !=  nullptr && input_intfhdl->has_data())
	|| (ipv4_acl !=  nullptr && ipv4_acl->has_data())
	|| (ipv4_dscp !=  nullptr && ipv4_dscp->has_data())
	|| (ipv4_packet_len !=  nullptr && ipv4_packet_len->has_data())
	|| (ipv4_prec !=  nullptr && ipv4_prec->has_data())
	|| (ipv6_acl !=  nullptr && ipv6_acl->has_data())
	|| (ipv6_dscp !=  nullptr && ipv6_dscp->has_data())
	|| (ipv6_packet_len !=  nullptr && ipv6_packet_len->has_data())
	|| (ipv6_prec !=  nullptr && ipv6_prec->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (mpls_disp_ipv4_acl !=  nullptr && mpls_disp_ipv4_acl->has_data())
	|| (mpls_disp_ipv6_acl !=  nullptr && mpls_disp_ipv6_acl->has_data())
	|| (mpls_exp !=  nullptr && mpls_exp->has_data())
	|| (mpls_exp_imp !=  nullptr && mpls_exp_imp->has_data())
	|| (mpls_top_label !=  nullptr && mpls_top_label->has_data())
	|| (nas_port !=  nullptr && nas_port->has_data())
	|| (packet_len !=  nullptr && packet_len->has_data())
	|| (prec !=  nullptr && prec->has_data())
	|| (proto !=  nullptr && proto->has_data())
	|| (qos_group !=  nullptr && qos_group->has_data())
	|| (remote_id !=  nullptr && remote_id->has_data())
	|| (remote_id_regex !=  nullptr && remote_id_regex->has_data())
	|| (service_name !=  nullptr && service_name->has_data())
	|| (service_name_regex !=  nullptr && service_name_regex->has_data())
	|| (src_addr_ipv4 !=  nullptr && src_addr_ipv4->has_data())
	|| (src_addr_ipv6 !=  nullptr && src_addr_ipv6->has_data())
	|| (src_addr_mac !=  nullptr && src_addr_mac->has_data())
	|| (src_mac !=  nullptr && src_mac->has_data())
	|| (src_port !=  nullptr && src_port->has_data())
	|| (subs_protocol !=  nullptr && subs_protocol->has_data())
	|| (tcp_flag !=  nullptr && tcp_flag->has_data())
	|| (timer !=  nullptr && timer->has_data())
	|| (timer_regexp !=  nullptr && timer_regexp->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data())
	|| (tunnel_name !=  nullptr && tunnel_name->has_data())
	|| (tunnel_name_regex !=  nullptr && tunnel_name_regex->has_data())
	|| (unauth_domain !=  nullptr && unauth_domain->has_data())
	|| (unauth_domain_regex !=  nullptr && unauth_domain_regex->has_data())
	|| (unauth_username !=  nullptr && unauth_username->has_data())
	|| (unauth_username_regex !=  nullptr && unauth_username_regex->has_data())
	|| (user_name !=  nullptr && user_name->has_data())
	|| (user_name_regex !=  nullptr && user_name_regex->has_data())
	|| (vendor_id !=  nullptr && vendor_id->has_data())
	|| (vendor_id_regex !=  nullptr && vendor_id_regex->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (vlan_inr !=  nullptr && vlan_inr->has_data());
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::has_operation() const
{
    return is_set(operation)
	|| is_set(authen_status.operation)
	|| is_set(fragment_type.operation)
	|| is_set(mlp_negotiated.operation)
	|| is_set(mpls_top_eos.operation)
	|| is_set(type.operation)
	|| (access_interface !=  nullptr && access_interface->has_operation())
	|| (atm_clp !=  nullptr && atm_clp->has_operation())
	|| (auth_domain !=  nullptr && auth_domain->has_operation())
	|| (auth_domain_regex !=  nullptr && auth_domain_regex->has_operation())
	|| (auth_username !=  nullptr && auth_username->has_operation())
	|| (auth_username_regex !=  nullptr && auth_username_regex->has_operation())
	|| (avail_id !=  nullptr && avail_id->has_operation())
	|| (circuit_id !=  nullptr && circuit_id->has_operation())
	|| (circuit_id_regex !=  nullptr && circuit_id_regex->has_operation())
	|| (cos !=  nullptr && cos->has_operation())
	|| (cos_inr !=  nullptr && cos_inr->has_operation())
	|| (dei !=  nullptr && dei->has_operation())
	|| (dei_inr !=  nullptr && dei_inr->has_operation())
	|| (dhcp_client_id !=  nullptr && dhcp_client_id->has_operation())
	|| (dhcp_client_id_regex !=  nullptr && dhcp_client_id_regex->has_operation())
	|| (discard_class !=  nullptr && discard_class->has_operation())
	|| (dnis !=  nullptr && dnis->has_operation())
	|| (dnis_regex !=  nullptr && dnis_regex->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (domain_regex !=  nullptr && domain_regex->has_operation())
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (dst_addr_ipv4 !=  nullptr && dst_addr_ipv4->has_operation())
	|| (dst_addr_ipv6 !=  nullptr && dst_addr_ipv6->has_operation())
	|| (dst_mac !=  nullptr && dst_mac->has_operation())
	|| (dst_port !=  nullptr && dst_port->has_operation())
	|| (ether_service_acl !=  nullptr && ether_service_acl->has_operation())
	|| (ethertype !=  nullptr && ethertype->has_operation())
	|| (flow_key_data !=  nullptr && flow_key_data->has_operation())
	|| (flow_tag !=  nullptr && flow_tag->has_operation())
	|| (fr_de !=  nullptr && fr_de->has_operation())
	|| (fr_dlci !=  nullptr && fr_dlci->has_operation())
	|| (icmp_v4 !=  nullptr && icmp_v4->has_operation())
	|| (icmp_v6 !=  nullptr && icmp_v6->has_operation())
	|| (icmpv4_code !=  nullptr && icmpv4_code->has_operation())
	|| (icmpv4_type !=  nullptr && icmpv4_type->has_operation())
	|| (icmpv6_code !=  nullptr && icmpv6_code->has_operation())
	|| (icmpv6_type !=  nullptr && icmpv6_type->has_operation())
	|| (input_interface !=  nullptr && input_interface->has_operation())
	|| (input_intfhdl !=  nullptr && input_intfhdl->has_operation())
	|| (ipv4_acl !=  nullptr && ipv4_acl->has_operation())
	|| (ipv4_dscp !=  nullptr && ipv4_dscp->has_operation())
	|| (ipv4_packet_len !=  nullptr && ipv4_packet_len->has_operation())
	|| (ipv4_prec !=  nullptr && ipv4_prec->has_operation())
	|| (ipv6_acl !=  nullptr && ipv6_acl->has_operation())
	|| (ipv6_dscp !=  nullptr && ipv6_dscp->has_operation())
	|| (ipv6_packet_len !=  nullptr && ipv6_packet_len->has_operation())
	|| (ipv6_prec !=  nullptr && ipv6_prec->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (mpls_disp_ipv4_acl !=  nullptr && mpls_disp_ipv4_acl->has_operation())
	|| (mpls_disp_ipv6_acl !=  nullptr && mpls_disp_ipv6_acl->has_operation())
	|| (mpls_exp !=  nullptr && mpls_exp->has_operation())
	|| (mpls_exp_imp !=  nullptr && mpls_exp_imp->has_operation())
	|| (mpls_top_label !=  nullptr && mpls_top_label->has_operation())
	|| (nas_port !=  nullptr && nas_port->has_operation())
	|| (packet_len !=  nullptr && packet_len->has_operation())
	|| (prec !=  nullptr && prec->has_operation())
	|| (proto !=  nullptr && proto->has_operation())
	|| (qos_group !=  nullptr && qos_group->has_operation())
	|| (remote_id !=  nullptr && remote_id->has_operation())
	|| (remote_id_regex !=  nullptr && remote_id_regex->has_operation())
	|| (service_name !=  nullptr && service_name->has_operation())
	|| (service_name_regex !=  nullptr && service_name_regex->has_operation())
	|| (src_addr_ipv4 !=  nullptr && src_addr_ipv4->has_operation())
	|| (src_addr_ipv6 !=  nullptr && src_addr_ipv6->has_operation())
	|| (src_addr_mac !=  nullptr && src_addr_mac->has_operation())
	|| (src_mac !=  nullptr && src_mac->has_operation())
	|| (src_port !=  nullptr && src_port->has_operation())
	|| (subs_protocol !=  nullptr && subs_protocol->has_operation())
	|| (tcp_flag !=  nullptr && tcp_flag->has_operation())
	|| (timer !=  nullptr && timer->has_operation())
	|| (timer_regexp !=  nullptr && timer_regexp->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation())
	|| (tunnel_name !=  nullptr && tunnel_name->has_operation())
	|| (tunnel_name_regex !=  nullptr && tunnel_name_regex->has_operation())
	|| (unauth_domain !=  nullptr && unauth_domain->has_operation())
	|| (unauth_domain_regex !=  nullptr && unauth_domain_regex->has_operation())
	|| (unauth_username !=  nullptr && unauth_username->has_operation())
	|| (unauth_username_regex !=  nullptr && unauth_username_regex->has_operation())
	|| (user_name !=  nullptr && user_name->has_operation())
	|| (user_name_regex !=  nullptr && user_name_regex->has_operation())
	|| (vendor_id !=  nullptr && vendor_id->has_operation())
	|| (vendor_id_regex !=  nullptr && vendor_id_regex->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (vlan_inr !=  nullptr && vlan_inr->has_operation());
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-data";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchData' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_status.is_set || is_set(authen_status.operation)) leaf_name_data.push_back(authen_status.get_name_leafdata());
    if (fragment_type.is_set || is_set(fragment_type.operation)) leaf_name_data.push_back(fragment_type.get_name_leafdata());
    if (mlp_negotiated.is_set || is_set(mlp_negotiated.operation)) leaf_name_data.push_back(mlp_negotiated.get_name_leafdata());
    if (mpls_top_eos.is_set || is_set(mpls_top_eos.operation)) leaf_name_data.push_back(mpls_top_eos.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-interface")
    {
        if(access_interface != nullptr)
        {
            children["access-interface"] = access_interface;
        }
        else
        {
            access_interface = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface>();
            access_interface->parent = this;
            children["access-interface"] = access_interface;
        }
        return children.at("access-interface");
    }

    if(child_yang_name == "atm-clp")
    {
        if(atm_clp != nullptr)
        {
            children["atm-clp"] = atm_clp;
        }
        else
        {
            atm_clp = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp>();
            atm_clp->parent = this;
            children["atm-clp"] = atm_clp;
        }
        return children.at("atm-clp");
    }

    if(child_yang_name == "auth-domain")
    {
        if(auth_domain != nullptr)
        {
            children["auth-domain"] = auth_domain;
        }
        else
        {
            auth_domain = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain>();
            auth_domain->parent = this;
            children["auth-domain"] = auth_domain;
        }
        return children.at("auth-domain");
    }

    if(child_yang_name == "auth-domain-regex")
    {
        if(auth_domain_regex != nullptr)
        {
            children["auth-domain-regex"] = auth_domain_regex;
        }
        else
        {
            auth_domain_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex>();
            auth_domain_regex->parent = this;
            children["auth-domain-regex"] = auth_domain_regex;
        }
        return children.at("auth-domain-regex");
    }

    if(child_yang_name == "auth-username")
    {
        if(auth_username != nullptr)
        {
            children["auth-username"] = auth_username;
        }
        else
        {
            auth_username = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername>();
            auth_username->parent = this;
            children["auth-username"] = auth_username;
        }
        return children.at("auth-username");
    }

    if(child_yang_name == "auth-username-regex")
    {
        if(auth_username_regex != nullptr)
        {
            children["auth-username-regex"] = auth_username_regex;
        }
        else
        {
            auth_username_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex>();
            auth_username_regex->parent = this;
            children["auth-username-regex"] = auth_username_regex;
        }
        return children.at("auth-username-regex");
    }

    if(child_yang_name == "avail-id")
    {
        if(avail_id != nullptr)
        {
            children["avail-id"] = avail_id;
        }
        else
        {
            avail_id = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId>();
            avail_id->parent = this;
            children["avail-id"] = avail_id;
        }
        return children.at("avail-id");
    }

    if(child_yang_name == "circuit-id")
    {
        if(circuit_id != nullptr)
        {
            children["circuit-id"] = circuit_id;
        }
        else
        {
            circuit_id = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId>();
            circuit_id->parent = this;
            children["circuit-id"] = circuit_id;
        }
        return children.at("circuit-id");
    }

    if(child_yang_name == "circuit-id-regex")
    {
        if(circuit_id_regex != nullptr)
        {
            children["circuit-id-regex"] = circuit_id_regex;
        }
        else
        {
            circuit_id_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex>();
            circuit_id_regex->parent = this;
            children["circuit-id-regex"] = circuit_id_regex;
        }
        return children.at("circuit-id-regex");
    }

    if(child_yang_name == "cos")
    {
        if(cos != nullptr)
        {
            children["cos"] = cos;
        }
        else
        {
            cos = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos>();
            cos->parent = this;
            children["cos"] = cos;
        }
        return children.at("cos");
    }

    if(child_yang_name == "cos-inr")
    {
        if(cos_inr != nullptr)
        {
            children["cos-inr"] = cos_inr;
        }
        else
        {
            cos_inr = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr>();
            cos_inr->parent = this;
            children["cos-inr"] = cos_inr;
        }
        return children.at("cos-inr");
    }

    if(child_yang_name == "dei")
    {
        if(dei != nullptr)
        {
            children["dei"] = dei;
        }
        else
        {
            dei = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei>();
            dei->parent = this;
            children["dei"] = dei;
        }
        return children.at("dei");
    }

    if(child_yang_name == "dei-inr")
    {
        if(dei_inr != nullptr)
        {
            children["dei-inr"] = dei_inr;
        }
        else
        {
            dei_inr = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr>();
            dei_inr->parent = this;
            children["dei-inr"] = dei_inr;
        }
        return children.at("dei-inr");
    }

    if(child_yang_name == "dhcp-client-id")
    {
        if(dhcp_client_id != nullptr)
        {
            children["dhcp-client-id"] = dhcp_client_id;
        }
        else
        {
            dhcp_client_id = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId>();
            dhcp_client_id->parent = this;
            children["dhcp-client-id"] = dhcp_client_id;
        }
        return children.at("dhcp-client-id");
    }

    if(child_yang_name == "dhcp-client-id-regex")
    {
        if(dhcp_client_id_regex != nullptr)
        {
            children["dhcp-client-id-regex"] = dhcp_client_id_regex;
        }
        else
        {
            dhcp_client_id_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex>();
            dhcp_client_id_regex->parent = this;
            children["dhcp-client-id-regex"] = dhcp_client_id_regex;
        }
        return children.at("dhcp-client-id-regex");
    }

    if(child_yang_name == "discard-class")
    {
        if(discard_class != nullptr)
        {
            children["discard-class"] = discard_class;
        }
        else
        {
            discard_class = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass>();
            discard_class->parent = this;
            children["discard-class"] = discard_class;
        }
        return children.at("discard-class");
    }

    if(child_yang_name == "dnis")
    {
        if(dnis != nullptr)
        {
            children["dnis"] = dnis;
        }
        else
        {
            dnis = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis>();
            dnis->parent = this;
            children["dnis"] = dnis;
        }
        return children.at("dnis");
    }

    if(child_yang_name == "dnis-regex")
    {
        if(dnis_regex != nullptr)
        {
            children["dnis-regex"] = dnis_regex;
        }
        else
        {
            dnis_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex>();
            dnis_regex->parent = this;
            children["dnis-regex"] = dnis_regex;
        }
        return children.at("dnis-regex");
    }

    if(child_yang_name == "domain")
    {
        if(domain != nullptr)
        {
            children["domain"] = domain;
        }
        else
        {
            domain = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain>();
            domain->parent = this;
            children["domain"] = domain;
        }
        return children.at("domain");
    }

    if(child_yang_name == "domain-regex")
    {
        if(domain_regex != nullptr)
        {
            children["domain-regex"] = domain_regex;
        }
        else
        {
            domain_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex>();
            domain_regex->parent = this;
            children["domain-regex"] = domain_regex;
        }
        return children.at("domain-regex");
    }

    if(child_yang_name == "dscp")
    {
        if(dscp != nullptr)
        {
            children["dscp"] = dscp;
        }
        else
        {
            dscp = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp>();
            dscp->parent = this;
            children["dscp"] = dscp;
        }
        return children.at("dscp");
    }

    if(child_yang_name == "dst-addr-ipv4")
    {
        if(dst_addr_ipv4 != nullptr)
        {
            children["dst-addr-ipv4"] = dst_addr_ipv4;
        }
        else
        {
            dst_addr_ipv4 = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4>();
            dst_addr_ipv4->parent = this;
            children["dst-addr-ipv4"] = dst_addr_ipv4;
        }
        return children.at("dst-addr-ipv4");
    }

    if(child_yang_name == "dst-addr-ipv6")
    {
        if(dst_addr_ipv6 != nullptr)
        {
            children["dst-addr-ipv6"] = dst_addr_ipv6;
        }
        else
        {
            dst_addr_ipv6 = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6>();
            dst_addr_ipv6->parent = this;
            children["dst-addr-ipv6"] = dst_addr_ipv6;
        }
        return children.at("dst-addr-ipv6");
    }

    if(child_yang_name == "dst-mac")
    {
        if(dst_mac != nullptr)
        {
            children["dst-mac"] = dst_mac;
        }
        else
        {
            dst_mac = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac>();
            dst_mac->parent = this;
            children["dst-mac"] = dst_mac;
        }
        return children.at("dst-mac");
    }

    if(child_yang_name == "dst-port")
    {
        if(dst_port != nullptr)
        {
            children["dst-port"] = dst_port;
        }
        else
        {
            dst_port = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort>();
            dst_port->parent = this;
            children["dst-port"] = dst_port;
        }
        return children.at("dst-port");
    }

    if(child_yang_name == "ether-service-acl")
    {
        if(ether_service_acl != nullptr)
        {
            children["ether-service-acl"] = ether_service_acl;
        }
        else
        {
            ether_service_acl = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl>();
            ether_service_acl->parent = this;
            children["ether-service-acl"] = ether_service_acl;
        }
        return children.at("ether-service-acl");
    }

    if(child_yang_name == "ethertype")
    {
        if(ethertype != nullptr)
        {
            children["ethertype"] = ethertype;
        }
        else
        {
            ethertype = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype>();
            ethertype->parent = this;
            children["ethertype"] = ethertype;
        }
        return children.at("ethertype");
    }

    if(child_yang_name == "flow-key-data")
    {
        if(flow_key_data != nullptr)
        {
            children["flow-key-data"] = flow_key_data;
        }
        else
        {
            flow_key_data = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData>();
            flow_key_data->parent = this;
            children["flow-key-data"] = flow_key_data;
        }
        return children.at("flow-key-data");
    }

    if(child_yang_name == "flow-tag")
    {
        if(flow_tag != nullptr)
        {
            children["flow-tag"] = flow_tag;
        }
        else
        {
            flow_tag = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag>();
            flow_tag->parent = this;
            children["flow-tag"] = flow_tag;
        }
        return children.at("flow-tag");
    }

    if(child_yang_name == "fr-de")
    {
        if(fr_de != nullptr)
        {
            children["fr-de"] = fr_de;
        }
        else
        {
            fr_de = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe>();
            fr_de->parent = this;
            children["fr-de"] = fr_de;
        }
        return children.at("fr-de");
    }

    if(child_yang_name == "fr-dlci")
    {
        if(fr_dlci != nullptr)
        {
            children["fr-dlci"] = fr_dlci;
        }
        else
        {
            fr_dlci = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci>();
            fr_dlci->parent = this;
            children["fr-dlci"] = fr_dlci;
        }
        return children.at("fr-dlci");
    }

    if(child_yang_name == "icmp-v4")
    {
        if(icmp_v4 != nullptr)
        {
            children["icmp-v4"] = icmp_v4;
        }
        else
        {
            icmp_v4 = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4>();
            icmp_v4->parent = this;
            children["icmp-v4"] = icmp_v4;
        }
        return children.at("icmp-v4");
    }

    if(child_yang_name == "icmp-v6")
    {
        if(icmp_v6 != nullptr)
        {
            children["icmp-v6"] = icmp_v6;
        }
        else
        {
            icmp_v6 = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6>();
            icmp_v6->parent = this;
            children["icmp-v6"] = icmp_v6;
        }
        return children.at("icmp-v6");
    }

    if(child_yang_name == "icmpv4-code")
    {
        if(icmpv4_code != nullptr)
        {
            children["icmpv4-code"] = icmpv4_code;
        }
        else
        {
            icmpv4_code = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code>();
            icmpv4_code->parent = this;
            children["icmpv4-code"] = icmpv4_code;
        }
        return children.at("icmpv4-code");
    }

    if(child_yang_name == "icmpv4-type")
    {
        if(icmpv4_type != nullptr)
        {
            children["icmpv4-type"] = icmpv4_type;
        }
        else
        {
            icmpv4_type = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type>();
            icmpv4_type->parent = this;
            children["icmpv4-type"] = icmpv4_type;
        }
        return children.at("icmpv4-type");
    }

    if(child_yang_name == "icmpv6-code")
    {
        if(icmpv6_code != nullptr)
        {
            children["icmpv6-code"] = icmpv6_code;
        }
        else
        {
            icmpv6_code = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code>();
            icmpv6_code->parent = this;
            children["icmpv6-code"] = icmpv6_code;
        }
        return children.at("icmpv6-code");
    }

    if(child_yang_name == "icmpv6-type")
    {
        if(icmpv6_type != nullptr)
        {
            children["icmpv6-type"] = icmpv6_type;
        }
        else
        {
            icmpv6_type = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type>();
            icmpv6_type->parent = this;
            children["icmpv6-type"] = icmpv6_type;
        }
        return children.at("icmpv6-type");
    }

    if(child_yang_name == "input-interface")
    {
        if(input_interface != nullptr)
        {
            children["input-interface"] = input_interface;
        }
        else
        {
            input_interface = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface>();
            input_interface->parent = this;
            children["input-interface"] = input_interface;
        }
        return children.at("input-interface");
    }

    if(child_yang_name == "input-intfhdl")
    {
        if(input_intfhdl != nullptr)
        {
            children["input-intfhdl"] = input_intfhdl;
        }
        else
        {
            input_intfhdl = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl>();
            input_intfhdl->parent = this;
            children["input-intfhdl"] = input_intfhdl;
        }
        return children.at("input-intfhdl");
    }

    if(child_yang_name == "ipv4-acl")
    {
        if(ipv4_acl != nullptr)
        {
            children["ipv4-acl"] = ipv4_acl;
        }
        else
        {
            ipv4_acl = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl>();
            ipv4_acl->parent = this;
            children["ipv4-acl"] = ipv4_acl;
        }
        return children.at("ipv4-acl");
    }

    if(child_yang_name == "ipv4-dscp")
    {
        if(ipv4_dscp != nullptr)
        {
            children["ipv4-dscp"] = ipv4_dscp;
        }
        else
        {
            ipv4_dscp = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp>();
            ipv4_dscp->parent = this;
            children["ipv4-dscp"] = ipv4_dscp;
        }
        return children.at("ipv4-dscp");
    }

    if(child_yang_name == "ipv4-packet-len")
    {
        if(ipv4_packet_len != nullptr)
        {
            children["ipv4-packet-len"] = ipv4_packet_len;
        }
        else
        {
            ipv4_packet_len = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen>();
            ipv4_packet_len->parent = this;
            children["ipv4-packet-len"] = ipv4_packet_len;
        }
        return children.at("ipv4-packet-len");
    }

    if(child_yang_name == "ipv4-prec")
    {
        if(ipv4_prec != nullptr)
        {
            children["ipv4-prec"] = ipv4_prec;
        }
        else
        {
            ipv4_prec = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec>();
            ipv4_prec->parent = this;
            children["ipv4-prec"] = ipv4_prec;
        }
        return children.at("ipv4-prec");
    }

    if(child_yang_name == "ipv6-acl")
    {
        if(ipv6_acl != nullptr)
        {
            children["ipv6-acl"] = ipv6_acl;
        }
        else
        {
            ipv6_acl = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl>();
            ipv6_acl->parent = this;
            children["ipv6-acl"] = ipv6_acl;
        }
        return children.at("ipv6-acl");
    }

    if(child_yang_name == "ipv6-dscp")
    {
        if(ipv6_dscp != nullptr)
        {
            children["ipv6-dscp"] = ipv6_dscp;
        }
        else
        {
            ipv6_dscp = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp>();
            ipv6_dscp->parent = this;
            children["ipv6-dscp"] = ipv6_dscp;
        }
        return children.at("ipv6-dscp");
    }

    if(child_yang_name == "ipv6-packet-len")
    {
        if(ipv6_packet_len != nullptr)
        {
            children["ipv6-packet-len"] = ipv6_packet_len;
        }
        else
        {
            ipv6_packet_len = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen>();
            ipv6_packet_len->parent = this;
            children["ipv6-packet-len"] = ipv6_packet_len;
        }
        return children.at("ipv6-packet-len");
    }

    if(child_yang_name == "ipv6-prec")
    {
        if(ipv6_prec != nullptr)
        {
            children["ipv6-prec"] = ipv6_prec;
        }
        else
        {
            ipv6_prec = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec>();
            ipv6_prec->parent = this;
            children["ipv6-prec"] = ipv6_prec;
        }
        return children.at("ipv6-prec");
    }

    if(child_yang_name == "media-type")
    {
        if(media_type != nullptr)
        {
            children["media-type"] = media_type;
        }
        else
        {
            media_type = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType>();
            media_type->parent = this;
            children["media-type"] = media_type;
        }
        return children.at("media-type");
    }

    if(child_yang_name == "mpls-disp-ipv4-acl")
    {
        if(mpls_disp_ipv4_acl != nullptr)
        {
            children["mpls-disp-ipv4-acl"] = mpls_disp_ipv4_acl;
        }
        else
        {
            mpls_disp_ipv4_acl = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl>();
            mpls_disp_ipv4_acl->parent = this;
            children["mpls-disp-ipv4-acl"] = mpls_disp_ipv4_acl;
        }
        return children.at("mpls-disp-ipv4-acl");
    }

    if(child_yang_name == "mpls-disp-ipv6-acl")
    {
        if(mpls_disp_ipv6_acl != nullptr)
        {
            children["mpls-disp-ipv6-acl"] = mpls_disp_ipv6_acl;
        }
        else
        {
            mpls_disp_ipv6_acl = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl>();
            mpls_disp_ipv6_acl->parent = this;
            children["mpls-disp-ipv6-acl"] = mpls_disp_ipv6_acl;
        }
        return children.at("mpls-disp-ipv6-acl");
    }

    if(child_yang_name == "mpls-exp")
    {
        if(mpls_exp != nullptr)
        {
            children["mpls-exp"] = mpls_exp;
        }
        else
        {
            mpls_exp = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp>();
            mpls_exp->parent = this;
            children["mpls-exp"] = mpls_exp;
        }
        return children.at("mpls-exp");
    }

    if(child_yang_name == "mpls-exp-imp")
    {
        if(mpls_exp_imp != nullptr)
        {
            children["mpls-exp-imp"] = mpls_exp_imp;
        }
        else
        {
            mpls_exp_imp = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp>();
            mpls_exp_imp->parent = this;
            children["mpls-exp-imp"] = mpls_exp_imp;
        }
        return children.at("mpls-exp-imp");
    }

    if(child_yang_name == "mpls-top-label")
    {
        if(mpls_top_label != nullptr)
        {
            children["mpls-top-label"] = mpls_top_label;
        }
        else
        {
            mpls_top_label = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel>();
            mpls_top_label->parent = this;
            children["mpls-top-label"] = mpls_top_label;
        }
        return children.at("mpls-top-label");
    }

    if(child_yang_name == "nas-port")
    {
        if(nas_port != nullptr)
        {
            children["nas-port"] = nas_port;
        }
        else
        {
            nas_port = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort>();
            nas_port->parent = this;
            children["nas-port"] = nas_port;
        }
        return children.at("nas-port");
    }

    if(child_yang_name == "packet-len")
    {
        if(packet_len != nullptr)
        {
            children["packet-len"] = packet_len;
        }
        else
        {
            packet_len = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen>();
            packet_len->parent = this;
            children["packet-len"] = packet_len;
        }
        return children.at("packet-len");
    }

    if(child_yang_name == "prec")
    {
        if(prec != nullptr)
        {
            children["prec"] = prec;
        }
        else
        {
            prec = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec>();
            prec->parent = this;
            children["prec"] = prec;
        }
        return children.at("prec");
    }

    if(child_yang_name == "proto")
    {
        if(proto != nullptr)
        {
            children["proto"] = proto;
        }
        else
        {
            proto = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto>();
            proto->parent = this;
            children["proto"] = proto;
        }
        return children.at("proto");
    }

    if(child_yang_name == "qos-group")
    {
        if(qos_group != nullptr)
        {
            children["qos-group"] = qos_group;
        }
        else
        {
            qos_group = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup>();
            qos_group->parent = this;
            children["qos-group"] = qos_group;
        }
        return children.at("qos-group");
    }

    if(child_yang_name == "remote-id")
    {
        if(remote_id != nullptr)
        {
            children["remote-id"] = remote_id;
        }
        else
        {
            remote_id = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId>();
            remote_id->parent = this;
            children["remote-id"] = remote_id;
        }
        return children.at("remote-id");
    }

    if(child_yang_name == "remote-id-regex")
    {
        if(remote_id_regex != nullptr)
        {
            children["remote-id-regex"] = remote_id_regex;
        }
        else
        {
            remote_id_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex>();
            remote_id_regex->parent = this;
            children["remote-id-regex"] = remote_id_regex;
        }
        return children.at("remote-id-regex");
    }

    if(child_yang_name == "service-name")
    {
        if(service_name != nullptr)
        {
            children["service-name"] = service_name;
        }
        else
        {
            service_name = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName>();
            service_name->parent = this;
            children["service-name"] = service_name;
        }
        return children.at("service-name");
    }

    if(child_yang_name == "service-name-regex")
    {
        if(service_name_regex != nullptr)
        {
            children["service-name-regex"] = service_name_regex;
        }
        else
        {
            service_name_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex>();
            service_name_regex->parent = this;
            children["service-name-regex"] = service_name_regex;
        }
        return children.at("service-name-regex");
    }

    if(child_yang_name == "src-addr-ipv4")
    {
        if(src_addr_ipv4 != nullptr)
        {
            children["src-addr-ipv4"] = src_addr_ipv4;
        }
        else
        {
            src_addr_ipv4 = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4>();
            src_addr_ipv4->parent = this;
            children["src-addr-ipv4"] = src_addr_ipv4;
        }
        return children.at("src-addr-ipv4");
    }

    if(child_yang_name == "src-addr-ipv6")
    {
        if(src_addr_ipv6 != nullptr)
        {
            children["src-addr-ipv6"] = src_addr_ipv6;
        }
        else
        {
            src_addr_ipv6 = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6>();
            src_addr_ipv6->parent = this;
            children["src-addr-ipv6"] = src_addr_ipv6;
        }
        return children.at("src-addr-ipv6");
    }

    if(child_yang_name == "src-addr-mac")
    {
        if(src_addr_mac != nullptr)
        {
            children["src-addr-mac"] = src_addr_mac;
        }
        else
        {
            src_addr_mac = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac>();
            src_addr_mac->parent = this;
            children["src-addr-mac"] = src_addr_mac;
        }
        return children.at("src-addr-mac");
    }

    if(child_yang_name == "src-mac")
    {
        if(src_mac != nullptr)
        {
            children["src-mac"] = src_mac;
        }
        else
        {
            src_mac = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac>();
            src_mac->parent = this;
            children["src-mac"] = src_mac;
        }
        return children.at("src-mac");
    }

    if(child_yang_name == "src-port")
    {
        if(src_port != nullptr)
        {
            children["src-port"] = src_port;
        }
        else
        {
            src_port = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort>();
            src_port->parent = this;
            children["src-port"] = src_port;
        }
        return children.at("src-port");
    }

    if(child_yang_name == "subs-protocol")
    {
        if(subs_protocol != nullptr)
        {
            children["subs-protocol"] = subs_protocol;
        }
        else
        {
            subs_protocol = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol>();
            subs_protocol->parent = this;
            children["subs-protocol"] = subs_protocol;
        }
        return children.at("subs-protocol");
    }

    if(child_yang_name == "tcp-flag")
    {
        if(tcp_flag != nullptr)
        {
            children["tcp-flag"] = tcp_flag;
        }
        else
        {
            tcp_flag = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag>();
            tcp_flag->parent = this;
            children["tcp-flag"] = tcp_flag;
        }
        return children.at("tcp-flag");
    }

    if(child_yang_name == "timer")
    {
        if(timer != nullptr)
        {
            children["timer"] = timer;
        }
        else
        {
            timer = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer>();
            timer->parent = this;
            children["timer"] = timer;
        }
        return children.at("timer");
    }

    if(child_yang_name == "timer-regexp")
    {
        if(timer_regexp != nullptr)
        {
            children["timer-regexp"] = timer_regexp;
        }
        else
        {
            timer_regexp = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp>();
            timer_regexp->parent = this;
            children["timer-regexp"] = timer_regexp;
        }
        return children.at("timer-regexp");
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class != nullptr)
        {
            children["traffic-class"] = traffic_class;
        }
        else
        {
            traffic_class = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass>();
            traffic_class->parent = this;
            children["traffic-class"] = traffic_class;
        }
        return children.at("traffic-class");
    }

    if(child_yang_name == "tunnel-name")
    {
        if(tunnel_name != nullptr)
        {
            children["tunnel-name"] = tunnel_name;
        }
        else
        {
            tunnel_name = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName>();
            tunnel_name->parent = this;
            children["tunnel-name"] = tunnel_name;
        }
        return children.at("tunnel-name");
    }

    if(child_yang_name == "tunnel-name-regex")
    {
        if(tunnel_name_regex != nullptr)
        {
            children["tunnel-name-regex"] = tunnel_name_regex;
        }
        else
        {
            tunnel_name_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex>();
            tunnel_name_regex->parent = this;
            children["tunnel-name-regex"] = tunnel_name_regex;
        }
        return children.at("tunnel-name-regex");
    }

    if(child_yang_name == "unauth-domain")
    {
        if(unauth_domain != nullptr)
        {
            children["unauth-domain"] = unauth_domain;
        }
        else
        {
            unauth_domain = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain>();
            unauth_domain->parent = this;
            children["unauth-domain"] = unauth_domain;
        }
        return children.at("unauth-domain");
    }

    if(child_yang_name == "unauth-domain-regex")
    {
        if(unauth_domain_regex != nullptr)
        {
            children["unauth-domain-regex"] = unauth_domain_regex;
        }
        else
        {
            unauth_domain_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex>();
            unauth_domain_regex->parent = this;
            children["unauth-domain-regex"] = unauth_domain_regex;
        }
        return children.at("unauth-domain-regex");
    }

    if(child_yang_name == "unauth-username")
    {
        if(unauth_username != nullptr)
        {
            children["unauth-username"] = unauth_username;
        }
        else
        {
            unauth_username = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername>();
            unauth_username->parent = this;
            children["unauth-username"] = unauth_username;
        }
        return children.at("unauth-username");
    }

    if(child_yang_name == "unauth-username-regex")
    {
        if(unauth_username_regex != nullptr)
        {
            children["unauth-username-regex"] = unauth_username_regex;
        }
        else
        {
            unauth_username_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex>();
            unauth_username_regex->parent = this;
            children["unauth-username-regex"] = unauth_username_regex;
        }
        return children.at("unauth-username-regex");
    }

    if(child_yang_name == "user-name")
    {
        if(user_name != nullptr)
        {
            children["user-name"] = user_name;
        }
        else
        {
            user_name = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName>();
            user_name->parent = this;
            children["user-name"] = user_name;
        }
        return children.at("user-name");
    }

    if(child_yang_name == "user-name-regex")
    {
        if(user_name_regex != nullptr)
        {
            children["user-name-regex"] = user_name_regex;
        }
        else
        {
            user_name_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex>();
            user_name_regex->parent = this;
            children["user-name-regex"] = user_name_regex;
        }
        return children.at("user-name-regex");
    }

    if(child_yang_name == "vendor-id")
    {
        if(vendor_id != nullptr)
        {
            children["vendor-id"] = vendor_id;
        }
        else
        {
            vendor_id = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId>();
            vendor_id->parent = this;
            children["vendor-id"] = vendor_id;
        }
        return children.at("vendor-id");
    }

    if(child_yang_name == "vendor-id-regex")
    {
        if(vendor_id_regex != nullptr)
        {
            children["vendor-id-regex"] = vendor_id_regex;
        }
        else
        {
            vendor_id_regex = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex>();
            vendor_id_regex->parent = this;
            children["vendor-id-regex"] = vendor_id_regex;
        }
        return children.at("vendor-id-regex");
    }

    if(child_yang_name == "vlan")
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
        else
        {
            vlan = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan>();
            vlan->parent = this;
            children["vlan"] = vlan;
        }
        return children.at("vlan");
    }

    if(child_yang_name == "vlan-inr")
    {
        if(vlan_inr != nullptr)
        {
            children["vlan-inr"] = vlan_inr;
        }
        else
        {
            vlan_inr = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr>();
            vlan_inr->parent = this;
            children["vlan-inr"] = vlan_inr;
        }
        return children.at("vlan-inr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::get_children()
{
    if(children.find("access-interface") == children.end())
    {
        if(access_interface != nullptr)
        {
            children["access-interface"] = access_interface;
        }
    }

    if(children.find("atm-clp") == children.end())
    {
        if(atm_clp != nullptr)
        {
            children["atm-clp"] = atm_clp;
        }
    }

    if(children.find("auth-domain") == children.end())
    {
        if(auth_domain != nullptr)
        {
            children["auth-domain"] = auth_domain;
        }
    }

    if(children.find("auth-domain-regex") == children.end())
    {
        if(auth_domain_regex != nullptr)
        {
            children["auth-domain-regex"] = auth_domain_regex;
        }
    }

    if(children.find("auth-username") == children.end())
    {
        if(auth_username != nullptr)
        {
            children["auth-username"] = auth_username;
        }
    }

    if(children.find("auth-username-regex") == children.end())
    {
        if(auth_username_regex != nullptr)
        {
            children["auth-username-regex"] = auth_username_regex;
        }
    }

    if(children.find("avail-id") == children.end())
    {
        if(avail_id != nullptr)
        {
            children["avail-id"] = avail_id;
        }
    }

    if(children.find("circuit-id") == children.end())
    {
        if(circuit_id != nullptr)
        {
            children["circuit-id"] = circuit_id;
        }
    }

    if(children.find("circuit-id-regex") == children.end())
    {
        if(circuit_id_regex != nullptr)
        {
            children["circuit-id-regex"] = circuit_id_regex;
        }
    }

    if(children.find("cos") == children.end())
    {
        if(cos != nullptr)
        {
            children["cos"] = cos;
        }
    }

    if(children.find("cos-inr") == children.end())
    {
        if(cos_inr != nullptr)
        {
            children["cos-inr"] = cos_inr;
        }
    }

    if(children.find("dei") == children.end())
    {
        if(dei != nullptr)
        {
            children["dei"] = dei;
        }
    }

    if(children.find("dei-inr") == children.end())
    {
        if(dei_inr != nullptr)
        {
            children["dei-inr"] = dei_inr;
        }
    }

    if(children.find("dhcp-client-id") == children.end())
    {
        if(dhcp_client_id != nullptr)
        {
            children["dhcp-client-id"] = dhcp_client_id;
        }
    }

    if(children.find("dhcp-client-id-regex") == children.end())
    {
        if(dhcp_client_id_regex != nullptr)
        {
            children["dhcp-client-id-regex"] = dhcp_client_id_regex;
        }
    }

    if(children.find("discard-class") == children.end())
    {
        if(discard_class != nullptr)
        {
            children["discard-class"] = discard_class;
        }
    }

    if(children.find("dnis") == children.end())
    {
        if(dnis != nullptr)
        {
            children["dnis"] = dnis;
        }
    }

    if(children.find("dnis-regex") == children.end())
    {
        if(dnis_regex != nullptr)
        {
            children["dnis-regex"] = dnis_regex;
        }
    }

    if(children.find("domain") == children.end())
    {
        if(domain != nullptr)
        {
            children["domain"] = domain;
        }
    }

    if(children.find("domain-regex") == children.end())
    {
        if(domain_regex != nullptr)
        {
            children["domain-regex"] = domain_regex;
        }
    }

    if(children.find("dscp") == children.end())
    {
        if(dscp != nullptr)
        {
            children["dscp"] = dscp;
        }
    }

    if(children.find("dst-addr-ipv4") == children.end())
    {
        if(dst_addr_ipv4 != nullptr)
        {
            children["dst-addr-ipv4"] = dst_addr_ipv4;
        }
    }

    if(children.find("dst-addr-ipv6") == children.end())
    {
        if(dst_addr_ipv6 != nullptr)
        {
            children["dst-addr-ipv6"] = dst_addr_ipv6;
        }
    }

    if(children.find("dst-mac") == children.end())
    {
        if(dst_mac != nullptr)
        {
            children["dst-mac"] = dst_mac;
        }
    }

    if(children.find("dst-port") == children.end())
    {
        if(dst_port != nullptr)
        {
            children["dst-port"] = dst_port;
        }
    }

    if(children.find("ether-service-acl") == children.end())
    {
        if(ether_service_acl != nullptr)
        {
            children["ether-service-acl"] = ether_service_acl;
        }
    }

    if(children.find("ethertype") == children.end())
    {
        if(ethertype != nullptr)
        {
            children["ethertype"] = ethertype;
        }
    }

    if(children.find("flow-key-data") == children.end())
    {
        if(flow_key_data != nullptr)
        {
            children["flow-key-data"] = flow_key_data;
        }
    }

    if(children.find("flow-tag") == children.end())
    {
        if(flow_tag != nullptr)
        {
            children["flow-tag"] = flow_tag;
        }
    }

    if(children.find("fr-de") == children.end())
    {
        if(fr_de != nullptr)
        {
            children["fr-de"] = fr_de;
        }
    }

    if(children.find("fr-dlci") == children.end())
    {
        if(fr_dlci != nullptr)
        {
            children["fr-dlci"] = fr_dlci;
        }
    }

    if(children.find("icmp-v4") == children.end())
    {
        if(icmp_v4 != nullptr)
        {
            children["icmp-v4"] = icmp_v4;
        }
    }

    if(children.find("icmp-v6") == children.end())
    {
        if(icmp_v6 != nullptr)
        {
            children["icmp-v6"] = icmp_v6;
        }
    }

    if(children.find("icmpv4-code") == children.end())
    {
        if(icmpv4_code != nullptr)
        {
            children["icmpv4-code"] = icmpv4_code;
        }
    }

    if(children.find("icmpv4-type") == children.end())
    {
        if(icmpv4_type != nullptr)
        {
            children["icmpv4-type"] = icmpv4_type;
        }
    }

    if(children.find("icmpv6-code") == children.end())
    {
        if(icmpv6_code != nullptr)
        {
            children["icmpv6-code"] = icmpv6_code;
        }
    }

    if(children.find("icmpv6-type") == children.end())
    {
        if(icmpv6_type != nullptr)
        {
            children["icmpv6-type"] = icmpv6_type;
        }
    }

    if(children.find("input-interface") == children.end())
    {
        if(input_interface != nullptr)
        {
            children["input-interface"] = input_interface;
        }
    }

    if(children.find("input-intfhdl") == children.end())
    {
        if(input_intfhdl != nullptr)
        {
            children["input-intfhdl"] = input_intfhdl;
        }
    }

    if(children.find("ipv4-acl") == children.end())
    {
        if(ipv4_acl != nullptr)
        {
            children["ipv4-acl"] = ipv4_acl;
        }
    }

    if(children.find("ipv4-dscp") == children.end())
    {
        if(ipv4_dscp != nullptr)
        {
            children["ipv4-dscp"] = ipv4_dscp;
        }
    }

    if(children.find("ipv4-packet-len") == children.end())
    {
        if(ipv4_packet_len != nullptr)
        {
            children["ipv4-packet-len"] = ipv4_packet_len;
        }
    }

    if(children.find("ipv4-prec") == children.end())
    {
        if(ipv4_prec != nullptr)
        {
            children["ipv4-prec"] = ipv4_prec;
        }
    }

    if(children.find("ipv6-acl") == children.end())
    {
        if(ipv6_acl != nullptr)
        {
            children["ipv6-acl"] = ipv6_acl;
        }
    }

    if(children.find("ipv6-dscp") == children.end())
    {
        if(ipv6_dscp != nullptr)
        {
            children["ipv6-dscp"] = ipv6_dscp;
        }
    }

    if(children.find("ipv6-packet-len") == children.end())
    {
        if(ipv6_packet_len != nullptr)
        {
            children["ipv6-packet-len"] = ipv6_packet_len;
        }
    }

    if(children.find("ipv6-prec") == children.end())
    {
        if(ipv6_prec != nullptr)
        {
            children["ipv6-prec"] = ipv6_prec;
        }
    }

    if(children.find("media-type") == children.end())
    {
        if(media_type != nullptr)
        {
            children["media-type"] = media_type;
        }
    }

    if(children.find("mpls-disp-ipv4-acl") == children.end())
    {
        if(mpls_disp_ipv4_acl != nullptr)
        {
            children["mpls-disp-ipv4-acl"] = mpls_disp_ipv4_acl;
        }
    }

    if(children.find("mpls-disp-ipv6-acl") == children.end())
    {
        if(mpls_disp_ipv6_acl != nullptr)
        {
            children["mpls-disp-ipv6-acl"] = mpls_disp_ipv6_acl;
        }
    }

    if(children.find("mpls-exp") == children.end())
    {
        if(mpls_exp != nullptr)
        {
            children["mpls-exp"] = mpls_exp;
        }
    }

    if(children.find("mpls-exp-imp") == children.end())
    {
        if(mpls_exp_imp != nullptr)
        {
            children["mpls-exp-imp"] = mpls_exp_imp;
        }
    }

    if(children.find("mpls-top-label") == children.end())
    {
        if(mpls_top_label != nullptr)
        {
            children["mpls-top-label"] = mpls_top_label;
        }
    }

    if(children.find("nas-port") == children.end())
    {
        if(nas_port != nullptr)
        {
            children["nas-port"] = nas_port;
        }
    }

    if(children.find("packet-len") == children.end())
    {
        if(packet_len != nullptr)
        {
            children["packet-len"] = packet_len;
        }
    }

    if(children.find("prec") == children.end())
    {
        if(prec != nullptr)
        {
            children["prec"] = prec;
        }
    }

    if(children.find("proto") == children.end())
    {
        if(proto != nullptr)
        {
            children["proto"] = proto;
        }
    }

    if(children.find("qos-group") == children.end())
    {
        if(qos_group != nullptr)
        {
            children["qos-group"] = qos_group;
        }
    }

    if(children.find("remote-id") == children.end())
    {
        if(remote_id != nullptr)
        {
            children["remote-id"] = remote_id;
        }
    }

    if(children.find("remote-id-regex") == children.end())
    {
        if(remote_id_regex != nullptr)
        {
            children["remote-id-regex"] = remote_id_regex;
        }
    }

    if(children.find("service-name") == children.end())
    {
        if(service_name != nullptr)
        {
            children["service-name"] = service_name;
        }
    }

    if(children.find("service-name-regex") == children.end())
    {
        if(service_name_regex != nullptr)
        {
            children["service-name-regex"] = service_name_regex;
        }
    }

    if(children.find("src-addr-ipv4") == children.end())
    {
        if(src_addr_ipv4 != nullptr)
        {
            children["src-addr-ipv4"] = src_addr_ipv4;
        }
    }

    if(children.find("src-addr-ipv6") == children.end())
    {
        if(src_addr_ipv6 != nullptr)
        {
            children["src-addr-ipv6"] = src_addr_ipv6;
        }
    }

    if(children.find("src-addr-mac") == children.end())
    {
        if(src_addr_mac != nullptr)
        {
            children["src-addr-mac"] = src_addr_mac;
        }
    }

    if(children.find("src-mac") == children.end())
    {
        if(src_mac != nullptr)
        {
            children["src-mac"] = src_mac;
        }
    }

    if(children.find("src-port") == children.end())
    {
        if(src_port != nullptr)
        {
            children["src-port"] = src_port;
        }
    }

    if(children.find("subs-protocol") == children.end())
    {
        if(subs_protocol != nullptr)
        {
            children["subs-protocol"] = subs_protocol;
        }
    }

    if(children.find("tcp-flag") == children.end())
    {
        if(tcp_flag != nullptr)
        {
            children["tcp-flag"] = tcp_flag;
        }
    }

    if(children.find("timer") == children.end())
    {
        if(timer != nullptr)
        {
            children["timer"] = timer;
        }
    }

    if(children.find("timer-regexp") == children.end())
    {
        if(timer_regexp != nullptr)
        {
            children["timer-regexp"] = timer_regexp;
        }
    }

    if(children.find("traffic-class") == children.end())
    {
        if(traffic_class != nullptr)
        {
            children["traffic-class"] = traffic_class;
        }
    }

    if(children.find("tunnel-name") == children.end())
    {
        if(tunnel_name != nullptr)
        {
            children["tunnel-name"] = tunnel_name;
        }
    }

    if(children.find("tunnel-name-regex") == children.end())
    {
        if(tunnel_name_regex != nullptr)
        {
            children["tunnel-name-regex"] = tunnel_name_regex;
        }
    }

    if(children.find("unauth-domain") == children.end())
    {
        if(unauth_domain != nullptr)
        {
            children["unauth-domain"] = unauth_domain;
        }
    }

    if(children.find("unauth-domain-regex") == children.end())
    {
        if(unauth_domain_regex != nullptr)
        {
            children["unauth-domain-regex"] = unauth_domain_regex;
        }
    }

    if(children.find("unauth-username") == children.end())
    {
        if(unauth_username != nullptr)
        {
            children["unauth-username"] = unauth_username;
        }
    }

    if(children.find("unauth-username-regex") == children.end())
    {
        if(unauth_username_regex != nullptr)
        {
            children["unauth-username-regex"] = unauth_username_regex;
        }
    }

    if(children.find("user-name") == children.end())
    {
        if(user_name != nullptr)
        {
            children["user-name"] = user_name;
        }
    }

    if(children.find("user-name-regex") == children.end())
    {
        if(user_name_regex != nullptr)
        {
            children["user-name-regex"] = user_name_regex;
        }
    }

    if(children.find("vendor-id") == children.end())
    {
        if(vendor_id != nullptr)
        {
            children["vendor-id"] = vendor_id;
        }
    }

    if(children.find("vendor-id-regex") == children.end())
    {
        if(vendor_id_regex != nullptr)
        {
            children["vendor-id-regex"] = vendor_id_regex;
        }
    }

    if(children.find("vlan") == children.end())
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
    }

    if(children.find("vlan-inr") == children.end())
    {
        if(vlan_inr != nullptr)
        {
            children["vlan-inr"] = vlan_inr;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authen-status")
    {
        authen_status = value;
    }
    if(value_path == "fragment-type")
    {
        fragment_type = value;
    }
    if(value_path == "mlp-negotiated")
    {
        mlp_negotiated = value;
    }
    if(value_path == "mpls-top-eos")
    {
        mpls_top_eos = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Ipv4Dscp()
{
    yang_name = "ipv4-dscp"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-dscp";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Dscp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "ipv4-dscp";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Ipv6Dscp()
{
    yang_name = "ipv6-dscp"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-dscp";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Dscp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "ipv6-dscp";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Dscp()
{
    yang_name = "dscp"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dscp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "dscp";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::Ipv4Prec()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "ipv4-prec"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-prec";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Prec' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::Ipv6Prec()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "ipv6-prec"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prec";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Prec' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::Prec()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "prec"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prec";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prec' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::DiscardClass()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "discard-class"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard-class";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiscardClass' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::QosGroup()
{
    yang_name = "qos-group"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-group";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QosGroup' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "qos-group";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::TrafficClass()
{
    yang_name = "traffic-class"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficClass' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "traffic-class";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Proto()
{
    yang_name = "proto"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proto";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Proto' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "proto";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::IcmpV4()
    :
    code{YType::uint8, "code"},
    type{YType::uint8, "type"}
{
    yang_name = "icmp-v4"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::~IcmpV4()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_operation() const
{
    return is_set(operation)
	|| is_set(code.operation)
	|| is_set(type.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-v4";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IcmpV4' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "code")
    {
        code = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::IcmpV6()
    :
    code{YType::uint8, "code"},
    type{YType::uint8, "type"}
{
    yang_name = "icmp-v6"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::~IcmpV6()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_operation() const
{
    return is_set(operation)
	|| is_set(code.operation)
	|| is_set(type.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-v6";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IcmpV6' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "code")
    {
        code = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Ipv4PacketLen()
{
    yang_name = "ipv4-packet-len"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-packet-len";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4PacketLen' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "ipv4-packet-len";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Ipv6PacketLen()
{
    yang_name = "ipv6-packet-len"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-packet-len";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6PacketLen' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "ipv6-packet-len";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::PacketLen()
{
    yang_name = "packet-len"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-len";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PacketLen' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "packet-len";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::FlowTag()
{
    yang_name = "flow-tag"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-tag";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowTag' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "flow-tag";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::TcpFlag()
    :
    match_any{YType::boolean, "match-any"},
    value_{YType::uint16, "value"}
{
    yang_name = "tcp-flag"; yang_parent_name = "match-data";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::~TcpFlag()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::has_data() const
{
    return match_any.is_set
	|| value_.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::has_operation() const
{
    return is_set(operation)
	|| is_set(match_any.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flag";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpFlag' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_any.is_set || is_set(match_any.operation)) leaf_name_data.push_back(match_any.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-any")
    {
        match_any = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Icmpv4Type()
{
    yang_name = "icmpv4-type"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv4-type";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Icmpv4Type' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv4-type";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Icmpv4Code()
{
    yang_name = "icmpv4-code"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv4-code";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Icmpv4Code' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv4-code";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Icmpv6Type()
{
    yang_name = "icmpv6-type"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv6-type";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Icmpv6Type' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv6-type";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Icmpv6Code()
{
    yang_name = "icmpv6-code"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv6-code";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Icmpv6Code' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array>();
        c->parent = this;
        uint8_rng_array.push_back(std::move(c));
        children[segment_path] = uint8_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_children()
{
    for (auto const & c : uint8_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::Uint8_Rng_Array()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{
    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv6-code";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::~Uint8_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint8_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::MplsExp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "mpls-exp"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsExp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::MplsExpImp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "mpls-exp-imp"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp-imp";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsExpImp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::MplsDispIpv4Acl()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "mpls-disp-ipv4-acl"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-disp-ipv4-acl";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsDispIpv4Acl' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::MplsDispIpv6Acl()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "mpls-disp-ipv6-acl"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-disp-ipv6-acl";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsDispIpv6Acl' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::MplsTopLabel()
{
    yang_name = "mpls-top-label"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-top-label";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTopLabel' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint32_rng_array")
    {
        for(auto const & c : uint32_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array>();
        c->parent = this;
        uint32_rng_array.push_back(std::move(c));
        children[segment_path] = uint32_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_children()
{
    for (auto const & c : uint32_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::Uint32_Rng_Array()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "uint32_rng_array"; yang_parent_name = "mpls-top-label";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::~Uint32_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint32_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::Cos()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "cos"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cos' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::CosInr()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "cos-inr"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-inr";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosInr' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::Dei()
    :
    bit_value{YType::uint32, "bit-value"}
{
    yang_name = "dei"; yang_parent_name = "match-data";
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
    return is_set(operation)
	|| is_set(bit_value.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dei";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dei' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_value.is_set || is_set(bit_value.operation)) leaf_name_data.push_back(bit_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-value")
    {
        bit_value = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::DeiInr()
    :
    bit_value{YType::uint32, "bit-value"}
{
    yang_name = "dei-inr"; yang_parent_name = "match-data";
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
    return is_set(operation)
	|| is_set(bit_value.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dei-inr";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeiInr' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_value.is_set || is_set(bit_value.operation)) leaf_name_data.push_back(bit_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-value")
    {
        bit_value = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::Vlan()
{
    yang_name = "vlan"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-id-array")
    {
        for(auto const & c : vlan_id_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray>();
        c->parent = this;
        vlan_id_array.push_back(std::move(c));
        children[segment_path] = vlan_id_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_children()
{
    for (auto const & c : vlan_id_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::VlanIdArray()
    :
    mask{YType::uint16, "mask"},
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "vlan-id-array"; yang_parent_name = "vlan";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::~VlanIdArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::has_data() const
{
    return mask.is_set
	|| max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::has_operation() const
{
    return is_set(operation)
	|| is_set(mask.operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanIdArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::VlanInr()
{
    yang_name = "vlan-inr"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-inr";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanInr' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "vlan-inr";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::FrDlci()
{
    yang_name = "fr-dlci"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-dlci";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrDlci' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array>();
        c->parent = this;
        uint16_rng_array.push_back(std::move(c));
        children[segment_path] = uint16_rng_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_children()
{
    for (auto const & c : uint16_rng_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::Uint16_Rng_Array()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "uint16_rng_array"; yang_parent_name = "fr-dlci";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::~Uint16_Rng_Array()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uint16_Rng_Array' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::SrcMac()
    :
    mac_addr{YType::uint16, "mac-addr"},
    mask{YType::uint16, "mask"}
{
    yang_name = "src-mac"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mac_addr.operation)
	|| is_set(mask.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-mac";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcMac' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_addr_name_datas = mac_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_addr_name_datas.begin(), mac_addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::DstMac()
    :
    mac_addr{YType::uint16, "mac-addr"},
    mask{YType::uint16, "mask"}
{
    yang_name = "dst-mac"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mac_addr.operation)
	|| is_set(mask.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-mac";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DstMac' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_addr_name_datas = mac_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_addr_name_datas.begin(), mac_addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::set_value(const std::string & value_path, std::string value)
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

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::AtmClp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "atm-clp"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm-clp";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmClp' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::FrDe()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "fr-de"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-de";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrDe' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::Ipv4Acl()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "ipv4-acl"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-acl";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Acl' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::Ipv6Acl()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "ipv6-acl"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-acl";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Acl' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::EtherServiceAcl()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "ether-service-acl"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-service-acl";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtherServiceAcl' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::AvailId()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "avail-id"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avail-id";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AvailId' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::MediaType()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "media-type"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MediaType' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::SubsProtocol()
    :
    uint8_array{YType::uint8, "uint8_array"}
{
    yang_name = "subs-protocol"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(uint8_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subs-protocol";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubsProtocol' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::Dnis()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "dnis"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnis";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dnis' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::DnisRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "dnis-regex"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnis-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DnisRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::Domain()
{
    yang_name = "domain"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Domain' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "domain-array")
    {
        for(auto const & c : domain_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray>();
        c->parent = this;
        domain_array.push_back(std::move(c));
        children[segment_path] = domain_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::get_children()
{
    for (auto const & c : domain_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::DomainArray()
    :
    domain_name{YType::str, "domain-name"},
    format_name{YType::str, "format-name"}
{
    yang_name = "domain-array"; yang_parent_name = "domain";
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
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| is_set(format_name.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.operation)) leaf_name_data.push_back(format_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "format-name")
    {
        format_name = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainRegex()
{
    yang_name = "domain-regex"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "domain-array")
    {
        for(auto const & c : domain_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray>();
        c->parent = this;
        domain_array.push_back(std::move(c));
        children[segment_path] = domain_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::get_children()
{
    for (auto const & c : domain_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::DomainArray()
    :
    domain_name{YType::str, "domain-name"},
    format_name{YType::str, "format-name"}
{
    yang_name = "domain-array"; yang_parent_name = "domain-regex";
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
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| is_set(format_name.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.operation)) leaf_name_data.push_back(format_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "format-name")
    {
        format_name = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPort()
{
    yang_name = "nas-port"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-port";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NasPort' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nas-port-array")
    {
        for(auto const & c : nas_port_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray>();
        c->parent = this;
        nas_port_array.push_back(std::move(c));
        children[segment_path] = nas_port_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_children()
{
    for (auto const & c : nas_port_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::NasPortArray()
    :
    operator_{YType::enumeration, "operator"},
    sub_id{YType::enumeration, "sub-id"},
    value_{YType::uint32, "value"}
{
    yang_name = "nas-port-array"; yang_parent_name = "nas-port";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::~NasPortArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::has_data() const
{
    return operator_.is_set
	|| sub_id.is_set
	|| value_.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::has_operation() const
{
    return is_set(operation)
	|| is_set(operator_.operation)
	|| is_set(sub_id.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-port-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NasPortArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (sub_id.is_set || is_set(sub_id.operation)) leaf_name_data.push_back(sub_id.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "sub-id")
    {
        sub_id = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::ServiceName()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "service-name"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceName' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::ServiceNameRegex()
    :
    string_array{YType::str, "string-array"}
{
    yang_name = "service-name-regex"; yang_parent_name = "match-data";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(string_array.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-regex";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceNameRegex' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::SrcAddrIpv4()
{
    yang_name = "src-addr-ipv4"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-addr-ipv4";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcAddrIpv4' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-addr-array")
    {
        for(auto const & c : ipv4_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray>();
        c->parent = this;
        ipv4_addr_array.push_back(std::move(c));
        children[segment_path] = ipv4_addr_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_children()
{
    for (auto const & c : ipv4_addr_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::Ipv4AddrArray()
    :
    mask{YType::str, "mask"},
    prefix{YType::str, "prefix"}
{
    yang_name = "ipv4-addr-array"; yang_parent_name = "src-addr-ipv4";
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::~Ipv4AddrArray()
{
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::has_data() const
{
    return mask.is_set
	|| prefix.is_set;
}

bool PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::has_operation() const
{
    return is_set(operation)
	|| is_set(mask.operation)
	|| is_set(prefix.operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addr-array";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4AddrArray' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_children()
{
    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::DstAddrIpv4()
{
    yang_name = "dst-addr-ipv4"; yang_parent_name = "match-data";
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
    return is_set(operation);
}

std::string PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-addr-ipv4";

    return path_buffer.str();

}

EntityPath PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DstAddrIpv4' in Cisco_IOS_XR_infra_policymgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-addr-array")
    {
        for(auto const & c : ipv4_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray>();
        c->parent = this;
        ipv4_addr_array.push_back(std::move(c));
        children[segment_path] = ipv4_addr_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::get_children()
{
    for (auto const & c : ipv4_addr_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PolicyManager::Nodes::Node::ClassMap::ClassMapTypes::ClassMapType::ClassMaps::ClassMap_::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::set_value(const std::string & value_path, std::string value)
{
}


}
}

